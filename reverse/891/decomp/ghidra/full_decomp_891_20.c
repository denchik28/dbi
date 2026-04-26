// ===== FUN_71007978b0 @ 71007978b0 (size=2004) =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_71007978b0(long param_1,long param_2,ulong *param_3,ulong *param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long local_68 [6];
  long *local_38;
  long alStack_30 [6];
  
  uVar7 = *param_3;
  *(ulong *)(param_2 + 0x128) = uVar7;
  *(undefined8 *)(param_2 + 0x130) = 0xffffffffffffffff;
  if (uVar7 == 0x40108) {
    if (param_4 == (ulong *)0x0) goto LAB_7100797d4c;
LAB_7100797b4c:
    uVar5 = *param_4;
    if (uVar5 == 0x3030103 || uVar5 == 0x303011b) {
      *(ulong *)(param_2 + 0x130) = uVar5;
      *(undefined4 *)(param_2 + 0x4e1c) = 0;
      if (uVar5 == 0x3030103) {
        *(undefined8 *)(param_2 + 0x4e30) = 0xffffffffffffffff;
        *(undefined8 *)(param_2 + 0x4e38) = 0x500000000;
      }
    }
    else if (uVar5 == 0x3030501) {
      *(undefined8 *)(param_2 + 0x130) = 0x3030501;
      *(undefined4 *)(param_2 + 0x4e1c) = 0;
      *(undefined4 *)(param_2 + 0x4e3c) = 8;
    }
    else {
      if (uVar5 != 10) {
        FUN_71007a0da0(param_1,0xffffffff,"Unsupported filter %lx for %lx");
        return 0xffffffe7;
      }
      *(undefined8 *)(param_2 + 0x130) = 10;
      *(undefined4 *)(param_2 + 0x4e1c) = 0;
    }
    if (uVar7 == 0x40108) {
LAB_7100797d4c:
      if (*(int *)(param_2 + 0x290) == 0) {
        iVar2 = FUN_7100701c80(param_2 + 0x220,0xfffffff1,"1.3.1",0x70);
      }
      else {
        iVar2 = FUN_7100701b80(param_2 + 0x220);
      }
      if (iVar2 != 0) {
        FUN_71007a0da0(param_1,0xffffffff,"Couldn\'t initialize zlib stream.");
        return 0xffffffe7;
      }
      *(undefined8 *)(param_2 + 0x230) = 0;
      *(undefined8 *)(param_2 + 0x248) = 0;
      *(undefined4 *)(param_2 + 0x290) = 1;
      return 0;
    }
    if (uVar7 < 0x40109) {
      if (0x21 < uVar7) {
        if (uVar7 == 0x30401) {
LAB_7100797bb4:
          if (*(int *)(param_2 + 0x4e18) != 0) {
            (*(code *)PTR_FUN_7100ae6e10)(param_2 + 0x2a8);
            *(undefined4 *)(param_2 + 0x4e18) = 0;
          }
          puVar1 = PTR_FUN_7100ae6e08;
          if (4 < param_3[3]) {
            iVar2 = *(int *)((byte *)param_3[4] + 1);
            uVar10 = (uint)*(byte *)param_3[4];
            if ((uVar10 - 2 < 0x3f) && (iVar2 - 0x800U < 0xfffff7dc)) {
              lVar9 = param_2 + 0x2a8;
              (*(code *)PTR_FUN_7100ae6e00)(lVar9);
              iVar2 = (*(code *)puVar1)(lVar9,iVar2);
              puVar1 = PTR_FUN_7100ae6e20;
              if (iVar2 != 0) {
                (*(code *)PTR_FUN_7100ae6e18)(lVar9,uVar10);
                (*(code *)puVar1)(param_2 + 0x4d98);
                *(undefined4 *)(param_2 + 0x4e18) = 1;
                *(undefined4 *)(param_2 + 0x2a4) = 0;
                *(undefined4 *)(param_2 + 0x4e10) = 0;
                *(undefined8 *)(param_2 + 0x4de8) = 0;
                *(undefined8 *)(param_2 + 0x4e08) = 0;
                return 0;
              }
              FUN_71007a0da0(param_1,0xc,"Coludn\'t allocate memory for PPMd");
              return 0xffffffe2;
            }
          }
          FUN_71007a0da0(param_1,0xffffffff,"Malformed PPMd parameter");
          return 0xffffffe7;
        }
        goto LAB_71007979c8;
      }
      if (uVar7 == 0) {
        return 0;
      }
LAB_7100797da0:
      if ((uVar7 == 3) || (uVar7 == 10)) goto LAB_7100797970;
      goto LAB_71007979c8;
    }
LAB_7100797c80:
    if (uVar7 == 0x4f71101) {
      if (*(int *)(param_2 + 0x2a0) != 0) {
        thunk_FUN_71007077d0(*(undefined8 *)(param_2 + 0x298));
        *(undefined4 *)(param_2 + 0x2a0) = 0;
      }
      uVar4 = FUN_7100709410();
      *(undefined8 *)(param_2 + 0x298) = uVar4;
      *(undefined4 *)(param_2 + 0x2a0) = 1;
      return 0;
    }
LAB_7100797908:
    if (0x4f71101 < uVar7) {
      if (((uVar7 == 0x6f10303) || (uVar7 == 0x6f10701)) || (uVar7 == 0x6f10101)) {
        if (*(long *)(param_1 + 0x90) != 0) {
          FUN_7100795020(*(long *)(param_1 + 0x90),1);
          FUN_7100795000(*(undefined8 *)(param_1 + 0x90),1);
          uVar7 = *(ulong *)(param_2 + 0x128);
          *(undefined4 *)(param_2 + 0x5110) = 1;
        }
        FUN_71007a0da0(param_1,0xffffffff,"Crypto codec not supported yet (ID: 0x%lX)",uVar7);
        return 0xffffffe7;
      }
LAB_71007979c8:
      FUN_71007a0da0(param_1,0xffffffff,"Unknown codec ID: %lX",uVar7);
      return 0xffffffe7;
    }
    if (uVar7 != 0x40202) {
      if (0x40201 < uVar7) {
        if (uVar7 == 0x3030401) {
LAB_7100797970:
          FUN_71007a0da0(param_1,0xffffffff,"Unexpected codec ID: %lX",uVar7);
          return 0xffffffe7;
        }
        if (uVar7 < 0x3030402) {
          if ((uVar7 == 0x303011b) || ((uVar7 == 0x3030205 || (uVar7 == 0x3030103))))
          goto LAB_7100797970;
        }
        else if (((uVar7 & 0xfffffffffffffdff) == 0x3030501) || (uVar7 == 0x3030805))
        goto LAB_7100797970;
      }
      goto LAB_71007979c8;
    }
  }
  else {
    if (0x40108 < uVar7) {
      if (uVar7 == 0x40202) goto LAB_7100797b48;
      if (uVar7 == 0x4f71101) {
        if (param_4 != (ulong *)0x0) goto LAB_7100797b4c;
        goto LAB_7100797c80;
      }
      goto LAB_7100797908;
    }
    if (uVar7 != 0) {
      if (uVar7 == 0x30401) {
        if (param_4 == (ulong *)0x0) goto LAB_7100797bb4;
        goto LAB_7100797b4c;
      }
      if (uVar7 != 0x21) {
        if (uVar7 < 0x22) goto LAB_7100797da0;
        if (uVar7 != 0x30101) goto LAB_71007979c8;
      }
      if (*(int *)(param_2 + 0x1c0) != 0) {
        FUN_71007a4440(param_2 + 0x138);
        *(undefined4 *)(param_2 + 0x1c0) = 0;
      }
      if (param_4 == (ulong *)0x0) {
LAB_7100797edc:
        plVar3 = local_68 + 5;
        lVar9 = 0;
      }
      else {
        uVar7 = *param_4;
        local_38 = (long *)0x0;
        *(ulong *)(param_2 + 0x130) = uVar7;
        if (uVar7 == 0x3030401) {
          local_68[5] = 6;
        }
        else if (uVar7 < 0x3030402) {
          if (uVar7 == 0x303011b) {
            *(undefined4 *)(param_2 + 0x4e1c) = 0;
            goto LAB_7100797edc;
          }
          if (uVar7 < 0x303011c) {
            if (uVar7 != 3) {
              if (uVar7 != 0x3030103) goto LAB_7100797eec;
              if (*(long *)(param_2 + 0x128) == 0x21) {
                plVar3 = alStack_30;
                lVar9 = 1;
                local_68[5] = 4;
                lVar8 = 0x21;
              }
              else {
                plVar3 = local_68 + 5;
                lVar9 = 0;
                *(undefined4 *)(param_2 + 0x4e1c) = 0;
                lVar8 = 0x4000000000000001;
                *(undefined8 *)(param_2 + 0x4e30) = 0xffffffffffffffff;
                *(undefined8 *)(param_2 + 0x4e38) = 0x500000000;
              }
              goto LAB_7100797ad8;
            }
            if (param_4[3] != 1) {
              FUN_71007a0da0(param_1,0xffffffff,"Invalid Delta parameter");
              return 0xffffffe7;
            }
            local_38 = local_68;
            local_68[1] = 0;
            local_68[2] = 0;
            local_68[3] = 0;
            local_68[4] = 0;
            local_68[0] = (ulong)(*(byte *)param_4[4] + 1) << 0x20;
            local_68[5] = 3;
          }
          else {
            if (uVar7 != 0x3030205) {
LAB_7100797eec:
              FUN_71007a0da0(param_1,0xffffffff,"Unexpected codec ID: %lX",uVar7);
              return 0xffffffe7;
            }
            local_68[5] = 5;
          }
        }
        else if (uVar7 == 0x3030701) {
          local_68[5] = 8;
        }
        else if (uVar7 == 0x3030805) {
          local_68[5] = 9;
        }
        else {
          if (uVar7 != 0x3030501) goto LAB_7100797eec;
          local_68[5] = 7;
        }
        plVar3 = alStack_30;
        lVar9 = 1;
      }
      lVar8 = *(long *)(param_2 + 0x128);
      if (lVar8 != 0x21) {
        lVar8 = 0x4000000000000001;
      }
LAB_7100797ad8:
      plVar11 = local_68 + 5;
      uVar7 = param_3[3];
      uVar5 = param_3[4];
      plVar11[lVar9 * 2] = lVar8;
      alStack_30[lVar9 * 2U + 0xffffffffffffffff] = 0;
      iVar2 = FUN_71007a45e0(plVar3,0,uVar5,uVar7);
      if (iVar2 == 0) {
        uVar7 = (ulong)((int)lVar9 + 1);
        alStack_30[uVar7 * 2 + 0xffffffffffffffff] = 0;
        plVar11[uVar7 * 2] = -1;
        iVar2 = FUN_71007a4550(param_2 + 0x138,plVar11);
        FUN_710081c200(alStack_30[lVar9 * 2U + 0xffffffffffffffff]);
        if (iVar2 == 0) {
          *(undefined8 *)(param_2 + 0x148) = 0;
          *(undefined8 *)(param_2 + 0x160) = 0;
          *(undefined4 *)(param_2 + 0x1c0) = 1;
          return 0;
        }
        FUN_71007977f0(param_1,iVar2);
      }
      else {
        FUN_71007977f0(param_1,iVar2);
      }
      return 0xffffffe7;
    }
LAB_7100797b48:
    if (param_4 != (ulong *)0x0) goto LAB_7100797b4c;
    if (uVar7 < 0x40109) {
      return 0;
    }
  }
  lVar9 = param_2 + 0x1c8;
  if (*(int *)(param_2 + 0x218) != 0) {
    FUN_71007aa9b0(lVar9);
    *(undefined4 *)(param_2 + 0x218) = 0;
  }
  iVar2 = FUN_71007a9a10(lVar9,0,0);
  if (iVar2 == -3) {
    iVar2 = FUN_71007a9a10(lVar9,0,1);
    if (iVar2 == 0) goto LAB_7100797a1c;
    if (iVar2 == -3) {
      pcVar6 = "out of memory";
      uVar4 = 0xc;
      goto LAB_7100797ea4;
    }
  }
  else if (iVar2 == 0) {
LAB_7100797a1c:
    *(undefined4 *)(param_2 + 0x218) = 1;
    *(undefined8 *)(param_2 + 0x1d4) = 0;
    *(undefined8 *)(param_2 + 0x1ec) = 0;
    return 0;
  }
  if (iVar2 == -2) {
    pcVar6 = "invalid setup parameter";
    uVar4 = 0xffffffff;
  }
  else if (iVar2 == -9) {
    pcVar6 = "mis-compiled library";
    uVar4 = 0xffffffff;
  }
  else {
    pcVar6 = "??";
    uVar4 = 0xffffffff;
  }
LAB_7100797ea4:
  FUN_71007a0da0(param_1,uVar4,"Internal error initializing decompressor: %s",pcVar6);
  *(undefined4 *)(param_2 + 0x218) = 0;
  return 0xffffffe7;
}



// ===== FUN_7100798090 @ 7100798090 (size=160) =====

undefined8 FUN_7100798090(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = **(long **)(param_1 + 0x818);
  iVar3 = *(int *)(lVar5 + 0x114);
  if (iVar3 == 0) {
    FUN_71007a0da0(param_1,0xffffffff,"Damaged 7-Zip archive");
LAB_7100798128:
    uVar1 = 0xffffffe2;
  }
  else {
    uVar4 = *(uint *)(lVar5 + 0x110);
    *(undefined8 *)(lVar5 + 0x118) = *(undefined8 *)(*(long *)(lVar5 + 0x10) + (ulong)uVar4 * 8);
    lVar6 = *(long *)(*(long *)(lVar5 + 0x28) + (ulong)uVar4 * 8);
    if (*(long *)(lVar5 + 0xf8) != lVar6) {
      lVar2 = FUN_7100796860(param_1,lVar6 + *(long *)(lVar5 + 0x88),0);
      if (lVar2 < 0) goto LAB_7100798128;
      uVar4 = *(uint *)(lVar5 + 0x110);
      *(long *)(lVar5 + 0xf8) = lVar6;
      iVar3 = *(int *)(lVar5 + 0x114);
    }
    uVar1 = 0;
    *(uint *)(lVar5 + 0x110) = uVar4 + 1;
    *(int *)(lVar5 + 0x114) = iVar3 + -1;
  }
  return uVar1;
}



// ===== FUN_7100798130 @ 7100798130 (size=196) =====

undefined1 FUN_7100798130(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_8;
  
  lVar7 = *param_1;
  lVar6 = **(long **)(lVar7 + 0x818);
  lVar5 = *(long *)(lVar6 + 0x4de0);
  lVar4 = *(long *)(lVar6 + 0x4df0);
  if (lVar5 < 1) {
    local_8 = 0;
    lVar3 = FUN_7100796460(lVar7,lVar4 + 1,&local_8);
    lVar4 = *(long *)(lVar6 + 0x4df0);
    if (local_8 <= lVar4) {
      FUN_71007a0da0(lVar7,0x4f,"Truncated 7z file data");
      *(undefined4 *)(lVar6 + 0x4e10) = 1;
      return 0;
    }
    lVar5 = *(long *)(lVar6 + 0x4de0);
    *(long *)(lVar6 + 0x4dd8) = *(long *)(lVar6 + 0x4dd8) + 1;
    uVar1 = *(undefined1 *)(lVar3 + lVar4);
  }
  else {
    puVar2 = *(undefined1 **)(lVar6 + 0x4dd8);
    *(undefined1 **)(lVar6 + 0x4dd8) = puVar2 + 1;
    uVar1 = *puVar2;
  }
  *(long *)(lVar6 + 0x4df0) = lVar4 + 1;
  *(long *)(lVar6 + 0x4de0) = lVar5 + -1;
  *(long *)(lVar6 + 0x4de8) = *(long *)(lVar6 + 0x4de8) + 1;
  return uVar1;
}



// ===== FUN_7100798200 @ 7100798200 (size=216) =====

undefined8 FUN_7100798200(int *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)param_1 + 5);
  if (bVar1 == 0x7a) {
    return 4;
  }
  if (bVar1 < 0x7b) {
    if (bVar1 == 0x27) {
      return 1;
    }
    if (bVar1 == 0x37) {
      return 5;
    }
    if ((((bVar1 == 0x1c) && (*param_1 == -0x504385c9)) && ((short)param_1[1] == 0x1c27)) &&
       (uVar2 = FUN_7100706cc0(0,param_1 + 3,0x14), uVar2 == (uint)param_1[2])) {
      return 0;
    }
  }
  else {
    if (bVar1 == 0xaf) {
      return 2;
    }
    if (bVar1 == 0xbc) {
      return 3;
    }
  }
  return 6;
}



// ===== FUN_7100798460 @ 7100798460 (size=264) =====

void FUN_7100798460(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_710081c200(*(undefined8 *)(param_1 + 0x10));
  FUN_710081c200(*(undefined8 *)(param_1 + 0x28));
  FUN_710081c200(*(undefined8 *)(param_1 + 0x18));
  FUN_710081c200(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = 0;
      do {
        puVar1 = (ulong *)(lVar3 + uVar4 * 0x68);
        uVar2 = puVar1[1];
        if (uVar2 != 0) {
          if (*(long *)(lVar3 + uVar4 * 0x68) != 0) {
            uVar5 = 0;
            do {
              FUN_710081c200(*(undefined8 *)(uVar2 + uVar5 * 0x28 + 0x20));
              uVar2 = puVar1[1];
              uVar5 = (ulong)((int)uVar5 + 1);
            } while (uVar5 < *puVar1);
          }
          FUN_710081c200();
        }
        FUN_710081c200(puVar1[3]);
        FUN_710081c200(puVar1[5]);
        FUN_710081c200(puVar1[8]);
        lVar3 = *(long *)(param_1 + 0x38);
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < *(ulong *)(param_1 + 0x30));
    }
    FUN_710081c200(lVar3);
  }
  FUN_710081c200(*(undefined8 *)(param_1 + 0x50));
  FUN_710081c200(*(undefined8 *)(param_1 + 0x58));
  FUN_710081c200(*(undefined8 *)(param_1 + 0x60));
  return;
}



// ===== FUN_7100798570 @ 7100798570 (size=292) =====

undefined8 FUN_7100798570(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 0x818);
  FUN_7100798460(lVar2);
  FUN_710081c200(*(undefined8 *)(lVar2 + 0xa0));
  FUN_710081c200(*(undefined8 *)(lVar2 + 0xb0));
  if (*(int *)(lVar2 + 0x1c0) == 0) {
    iVar1 = *(int *)(lVar2 + 0x218);
  }
  else {
    FUN_71007a4440(lVar2 + 0x138);
    iVar1 = *(int *)(lVar2 + 0x218);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x290);
  }
  else {
    iVar1 = FUN_71007aa9b0(lVar2 + 0x1c8);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar2 + 0x218) = 0;
    }
    else {
      FUN_71007a0da0(param_1,0xffffffff,"Failed to clean up bzip2 decompressor");
      *(undefined4 *)(lVar2 + 0x218) = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x290);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_7100703750(lVar2 + 0x220);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar2 + 0x290) = 0;
    }
    else {
      FUN_71007a0da0(param_1,0xffffffff,"Failed to clean up zlib decompressor");
      *(undefined4 *)(lVar2 + 0x290) = 0;
    }
  }
  if (*(int *)(lVar2 + 0x4e18) != 0) {
    (*(code *)PTR_FUN_7100ae6e10)(lVar2 + 0x2a8);
  }
  FUN_710081c200(*(undefined8 *)(lVar2 + 0xd8));
  FUN_710081c200(*(undefined8 *)(lVar2 + 0x4e48));
  FUN_710081c200(*(undefined8 *)(lVar2 + 0x4e50));
  FUN_710081c200(*(undefined8 *)(lVar2 + 0x4e58));
  FUN_710081c200(*(undefined8 *)(lVar2 + 0x4e90));
  FUN_710081c200(lVar2);
  **(undefined8 **)(param_1 + 0x818) = 0;
  return 0;
}



// ===== FUN_71007986a0 @ 71007986a0 (size=3420) =====

undefined8 FUN_71007986a0(long param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long local_58;
  byte *local_50;
  ulong local_38;
  undefined8 local_30;
  ulong uStack_28;
  ulong local_20;
  byte *local_18;
  ulong uStack_10;
  long local_8;
  
  lVar26 = **(long **)(param_1 + 0x818);
  if ((*(long *)(lVar26 + 0x128) == 0) && (*(long *)(lVar26 + 0x130) == -1)) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    lVar7 = FUN_7100796460(param_1,param_2,&local_38);
    if ((lVar7 != 0) && (0 < (long)local_38)) {
      uVar24 = *(ulong *)(lVar26 + 0x118);
      lVar7 = 0;
      if (local_38 <= uVar24) {
        lVar7 = uVar24 - local_38;
        uVar24 = local_38;
      }
      uVar15 = *(ulong *)(lVar26 + 0x108);
      *(long *)(lVar26 + 0x118) = lVar7;
      lVar7 = 0;
      if (uVar24 <= uVar15) {
        lVar7 = uVar15 - uVar24;
        uVar15 = uVar24;
      }
      *(ulong *)(lVar26 + 0xf0) = uVar15;
      *(long *)(lVar26 + 0x108) = lVar7;
      return 0;
    }
    goto LAB_71007992fc;
  }
  lVar7 = *(long *)(lVar26 + 0xd8);
  if (lVar7 == 0) {
    if (param_2 < 0x10001) {
      uVar24 = 0x10000;
    }
    else {
      uVar24 = param_2 + 0x3ff & 0xfffffffffffffc00;
    }
    *(ulong *)(lVar26 + 0xe8) = uVar24;
    lVar7 = FUN_710081c1c0(uVar24);
    *(long *)(lVar26 + 0xd8) = lVar7;
    if (lVar7 == 0) {
LAB_71007993e4:
      FUN_71007a0da0(param_1,0xc,"No memory for 7-Zip decompression");
      return 0xffffffffffffffe2;
    }
    *(undefined8 *)(lVar26 + 0xf0) = 0;
  }
  else if (*(ulong *)(lVar26 + 0xe8) < param_2) {
    uVar24 = param_2 + 0x3ff & 0xfffffffffffffc00;
    lVar22 = *(long *)(lVar26 + 0xe0) - lVar7;
    if (*(long *)(lVar26 + 0xe0) == 0) {
      lVar22 = 0;
    }
    lVar7 = FUN_71008141e0(lVar7,uVar24);
    if (lVar7 == 0) goto LAB_71007993e4;
    *(long *)(lVar26 + 0xd8) = lVar7;
    *(ulong *)(lVar26 + 0xe8) = uVar24;
LAB_7100798724:
    if (lVar22 != 0) {
      FUN_710080f900(*(long *)(lVar26 + 0xd8),*(long *)(lVar26 + 0xd8) + lVar22,
                     *(undefined8 *)(lVar26 + 0xf0));
    }
  }
  else if (*(ulong *)(lVar26 + 0xf0) < param_2) {
    lVar22 = *(long *)(lVar26 + 0xe0) - lVar7;
    if (*(long *)(lVar26 + 0xe0) != 0) goto LAB_7100798724;
  }
  else {
    *(undefined8 *)(lVar26 + 0xf0) = 0;
  }
  *(undefined8 *)(lVar26 + 0xe0) = 0;
  while (uVar8 = FUN_7100796460(param_1,1,&local_38), 0 < (long)local_38) {
    uVar18 = *(ulong *)(lVar26 + 0x118);
    uVar15 = *(ulong *)(lVar26 + 0x128);
    lVar7 = *(long *)(lVar26 + 0x130);
    uVar16 = *(ulong *)(lVar26 + 0xe8);
    lVar22 = *(long *)(lVar26 + 0xf0);
    uVar24 = local_38;
    if (uVar18 < local_38) {
      uVar24 = uVar18;
    }
    uVar25 = uVar16 - lVar22;
    pbVar23 = (byte *)(*(long *)(lVar26 + 0xd8) + lVar22);
    uVar17 = uVar25;
    pbVar14 = pbVar23;
    uVar9 = uVar25;
    local_50 = pbVar23;
    if (uVar15 == 0x21) {
      if (lVar7 == 0x303011b) {
        lVar7 = *(long *)(lVar26 + 0x4ea8);
joined_r0x007100798938:
        uVar9 = uVar17;
        if (lVar7 != 0) {
          lVar22 = FUN_71007973a0(lVar26,local_50,uVar17);
          if (lVar22 < 0) goto LAB_7100799354;
          uVar9 = uVar17 - lVar22;
          *(long *)(lVar26 + 0x4e40) =
               (*(long *)(lVar26 + 0x4ea8) + *(long *)(lVar26 + 0x4e40)) - lVar7;
          if (uVar9 == 0 || uVar24 == 0) {
            uVar18 = *(ulong *)(lVar26 + 0x118);
            uVar17 = (uVar25 - uVar17) + lVar22;
            uVar16 = *(ulong *)(lVar26 + 0xe8);
            lVar22 = *(long *)(lVar26 + 0xf0);
            uVar15 = 0;
            uVar6 = (uint)(*(long *)(lVar26 + 0x4ea8) != 0 && uVar24 == 0);
            goto LAB_7100798874;
          }
          local_50 = local_50 + lVar22;
        }
        uVar15 = *(ulong *)(lVar26 + 0x128);
        pbVar14 = *(byte **)(lVar26 + 0x4e90);
        uVar17 = *(ulong *)(lVar26 + 0x4e98);
        goto joined_r0x007100798954;
      }
LAB_7100798be8:
      *(undefined8 *)(lVar26 + 0x138) = uVar8;
      *(ulong *)(lVar26 + 0x140) = uVar24;
      *(byte **)(lVar26 + 0x150) = pbVar14;
      *(ulong *)(lVar26 + 0x158) = uVar17;
      iVar5 = FUN_71007a41c0(lVar26 + 0x138,0);
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        if (iVar5 != 1) {
          FUN_71007a0da0(param_1,0xffffffff,"Decompression failed(%d)",iVar5);
          return 0xffffffffffffffe2;
        }
        FUN_71007a4440(lVar26 + 0x138);
        *(undefined4 *)(lVar26 + 0x1c0) = 0;
        uVar6 = 1;
      }
      uVar18 = *(ulong *)(lVar26 + 0x158);
      uVar16 = uVar25 - uVar18;
      uVar15 = uVar24 - *(long *)(lVar26 + 0x140);
LAB_7100798828:
      lVar7 = *(long *)(lVar26 + 0x130);
      uVar17 = uVar16;
      if (*(long *)(lVar26 + 0x128) == 0x21) {
LAB_7100798858:
        if (lVar7 == 0x303011b) {
          uVar18 = *(long *)(lVar26 + 0x4e98) - uVar18;
          if (*(ulong *)(lVar26 + 0x4e40) < uVar18) {
            uVar18 = *(ulong *)(lVar26 + 0x4e40);
          }
          *(ulong *)(lVar26 + 0x4ea0) = uVar18;
          *(ulong *)(lVar26 + 0x4ea8) = uVar18;
          lVar7 = FUN_71007973a0(lVar26,local_50,uVar9);
          if (lVar7 < 0) {
LAB_7100799354:
            FUN_71007a0da0(param_1,0xffffffff,"BCJ2 conversion Failed");
            return 0xffffffffffffffe2;
          }
          uVar17 = (uVar25 - uVar9) + lVar7;
          *(long *)(lVar26 + 0x4e40) =
               (*(long *)(lVar26 + 0x4e40) + *(long *)(lVar26 + 0x4ea8)) -
               *(long *)(lVar26 + 0x4ea0);
        }
      }
      else {
        if (lVar7 == 0x3030103) {
          if (uVar16 < 5) {
            uVar17 = 0;
            uVar13 = uVar16;
          }
          else {
            uVar20 = *(uint *)(lVar26 + 0x4e38);
            pbVar14 = pbVar23 + (uVar16 - 4);
            lVar7 = 0;
            iVar5 = *(int *)(lVar26 + 0x4e3c);
            lVar22 = *(long *)(lVar26 + 0x4e30);
            while (pbVar10 = pbVar23 + lVar7, pbVar12 = pbVar10, pbVar10 < pbVar14) {
              while ((*pbVar12 & 0xfe) != 0xe8) {
                pbVar12 = pbVar12 + 1;
                pbVar10 = pbVar14;
                if (pbVar12 == pbVar14) goto LAB_7100798f98;
              }
              lVar21 = (long)pbVar12 - (long)pbVar23;
              if ((ulong)(lVar21 - lVar22) < 4) {
                uVar20 = uVar20 << (ulong)((int)(lVar21 - lVar22) - 1U & 0x1f) & 7;
                if (uVar20 == 0) {
                  if (0xfd < (byte)(pbVar12[4] - 1)) goto LAB_7100798ffc;
                }
                else if ((((&DAT_71009c62b8)[uVar20] != '\0') &&
                         (bVar2 = (&DAT_71009c62c0)[uVar20],
                         (byte)(pbVar12[(int)(4 - (uint)bVar2)] - 1) < 0xfe)) &&
                        (0xfd < (byte)(pbVar12[4] - 1))) {
                  iVar1 = iVar5 + (int)lVar21;
                  uVar3 = (uint)bVar2 * -8 + 0x18;
                  uVar19 = *(int *)(pbVar12 + 1) - iVar1;
                  if (0xfd < ((uVar19 >> (ulong)(uVar3 & 0x1f)) - 1 & 0xff)) {
                    do {
                      uVar19 = ((1 << (ulong)((uint)bVar2 * -8 & 0x1f)) - 1U ^ uVar19) - iVar1;
                    } while (0xfd < ((uVar19 >> (ulong)(uVar3 & 0x1f)) - 1 & 0xff));
                  }
                  goto LAB_7100799008;
                }
LAB_7100798f80:
                lVar7 = lVar21 + 1;
                uVar20 = (uVar20 & 3) << 1 | 1;
                lVar22 = lVar21;
              }
              else {
                uVar20 = 0;
                if ((byte)(pbVar12[4] - 1) < 0xfe) goto LAB_7100798f80;
LAB_7100798ffc:
                uVar19 = *(int *)(pbVar12 + 1) - (iVar5 + (int)lVar21);
LAB_7100799008:
                *(short *)(pbVar12 + 1) = (short)uVar19;
                lVar7 = lVar21 + 5;
                pbVar12[3] = (byte)(uVar19 >> 0x10);
                pbVar12[4] = -((byte)(uVar19 >> 0x18) & 1);
                lVar22 = lVar21;
              }
            }
LAB_7100798f98:
            uVar17 = (long)pbVar10 - (long)pbVar23;
            *(long *)(lVar26 + 0x4e30) = lVar22;
            *(uint *)(lVar26 + 0x4e38) = uVar20;
            *(int *)(lVar26 + 0x4e3c) = *(int *)(lVar26 + 0x4e3c) + (int)uVar17;
            uVar13 = uVar16 - uVar17;
          }
          *(ulong *)(lVar26 + 20000) = uVar13;
          if ((uVar13 - 1 < 4) && (((uVar6 ^ 1) & (uint)(uVar24 != 0)) != 0)) {
            FUN_710080f900(lVar26 + 0x4e28,pbVar23 + uVar17);
            lVar7 = *(long *)(lVar26 + 0x130);
          }
          else {
            lVar7 = *(long *)(lVar26 + 0x130);
            *(undefined8 *)(lVar26 + 20000) = 0;
            uVar17 = uVar16;
          }
          goto LAB_7100798858;
        }
        if (lVar7 == 0x3030501) {
          if (3 < uVar16) {
            uVar24 = 4;
            do {
              uVar17 = uVar24;
              if (pbVar23[3] == 0xeb) {
                uVar20 = ((uint)pbVar23[2] << 0x10 | (uint)pbVar23[1] << 8 | (uint)*pbVar23) * 4 -
                         ((int)uVar17 + -4 + *(int *)(lVar26 + 0x4e3c));
                *pbVar23 = (byte)(uVar20 >> 2);
                pbVar23[1] = (byte)(uVar20 >> 10);
                pbVar23[2] = (byte)(uVar20 >> 0x12);
              }
              pbVar23 = pbVar23 + 4;
              uVar24 = uVar17 + 4;
            } while (uVar17 + 4 <= uVar16);
LAB_71007990b8:
            lVar7 = *(long *)(lVar26 + 0x130);
            *(int *)(lVar26 + 0x4e3c) = *(int *)(lVar26 + 0x4e3c) + (int)uVar17;
            goto LAB_7100798858;
          }
        }
        else {
          if (lVar7 != 10) goto LAB_7100798858;
          if (3 < uVar16) {
            iVar5 = 0;
            uVar24 = 4;
            do {
              uVar17 = uVar24;
              uVar20 = (uint)pbVar23[3] << 0x18;
              uVar19 = *pbVar23 | uVar20;
              uVar3 = (uint)pbVar23[2] << 0x10 | (uint)pbVar23[1] << 8;
              if (uVar20 >> 0x1a == 0x25) {
                uVar20 = (uVar3 | uVar19) - ((uint)(*(int *)(lVar26 + 0x4e3c) + iVar5) >> 2) &
                         0x3ffffff | 0x94000000;
LAB_7100799158:
                *pbVar23 = (byte)uVar20;
                pbVar23[1] = (byte)(uVar20 >> 8);
                pbVar23[2] = (byte)(uVar20 >> 0x10);
                pbVar23[3] = (byte)(uVar20 >> 0x18);
              }
              else if ((uVar20 & 0x9f000000) == 0x90000000) {
                uVar20 = uVar20 >> 0x1d & 3 | (uVar3 | *pbVar23 & 0xffffe0) >> 3;
                uVar3 = uVar20 - ((uint)(*(int *)(lVar26 + 0x4e3c) + iVar5) >> 0xc);
                if ((uVar20 + 0x20000 & 0x1c0000) == 0) {
                  uVar20 = (uVar3 & 3) << 0x1d | uVar3 * 8 & 0x1fffe0 |
                           (uint)((long)((ulong)uVar3 << 0x2e) >> 0x2e) & 0xe00000 |
                           uVar19 & 0x9000001f;
                  goto LAB_7100799158;
                }
              }
              iVar5 = iVar5 + 4;
              pbVar23 = pbVar23 + 4;
              uVar24 = uVar17 + 4;
            } while (uVar17 + 4 <= uVar16);
            goto LAB_71007990b8;
          }
        }
        uVar17 = 0;
      }
      uVar16 = *(ulong *)(lVar26 + 0xe8);
      lVar22 = *(long *)(lVar26 + 0xf0);
      uVar18 = *(long *)(lVar26 + 0x118) - uVar15;
    }
    else {
      if (lVar7 != 0x3030103) {
joined_r0x007100798b4c:
        if (lVar7 == 0x303011b) {
          lVar7 = *(long *)(lVar26 + 0x4ea8);
          goto joined_r0x007100798938;
        }
        uVar15 = *(ulong *)(lVar26 + 0x128);
        pbVar14 = local_50;
        uVar9 = uVar17;
joined_r0x007100798954:
        if (uVar15 == 0x40108) {
          *(undefined8 *)(lVar26 + 0x220) = uVar8;
          *(int *)(lVar26 + 0x228) = (int)uVar24;
          *(byte **)(lVar26 + 0x238) = pbVar14;
          *(int *)(lVar26 + 0x240) = (int)uVar17;
          uVar6 = FUN_7100701e60(lVar26 + 0x220,0);
          if ((uVar6 != 0) && (uVar6 != 1)) {
            FUN_71007a0da0(param_1,0xffffffff,"File decompression failed (%d)");
            return 0xffffffffffffffe2;
          }
          uVar18 = (ulong)*(uint *)(lVar26 + 0x240);
          uVar15 = uVar24 - *(uint *)(lVar26 + 0x228);
          uVar16 = uVar25 - uVar18;
        }
        else if (uVar15 < 0x40109) {
          if (uVar15 == 0x30401) {
            if ((*(int *)(lVar26 + 0x4e18) == 0) || (*(int *)(lVar26 + 0x2a4) < 0 || uVar17 == 0))
            goto LAB_7100798bc8;
            *(undefined8 *)(lVar26 + 0x4dd8) = uVar8;
            *(ulong *)(lVar26 + 0x4de0) = uVar24;
            *(undefined8 *)(lVar26 + 0x4df0) = 0;
            *(byte **)(lVar26 + 0x4df8) = pbVar14;
            *(ulong *)(lVar26 + 0x4e00) = uVar17;
            if (*(int *)(lVar26 + 0x2a4) == 0) {
              *(long *)(lVar26 + 0x4dc8) = param_1;
              *(long *)(lVar26 + 0x4dc0) = lVar26 + 0x4dc8;
              *(code **)(lVar26 + 0x4dd0) = FUN_7100798130;
              iVar5 = (*(code *)PTR_FUN_7100ae6e30)();
              if (iVar5 == 0) {
                *(undefined4 *)(lVar26 + 0x2a4) = 0xffffffff;
                FUN_71007a0da0(param_1,0xffffffff,"Failed to initialize PPMd range decoder");
                return 0xffffffffffffffe2;
              }
              if (*(int *)(lVar26 + 0x4e10) != 0) {
LAB_7100799290:
                *(undefined4 *)(lVar26 + 0x2a4) = 0xffffffff;
                return 0xffffffffffffffe2;
              }
              *(undefined4 *)(lVar26 + 0x2a4) = 1;
            }
            puVar4 = PTR_FUN_7100ae6e40;
            local_58 = lVar26 + 0x4d98;
            uVar15 = 0;
            if (uVar24 == 0) {
              uVar15 = *(ulong *)(lVar26 + 0x108);
            }
            do {
              iVar5 = (*(code *)puVar4)(lVar26 + 0x2a8,local_58);
              if (iVar5 < 0) {
                *(undefined4 *)(lVar26 + 0x2a4) = 0xffffffff;
                FUN_71007a0da0(param_1,0x4f,"Failed to decode PPMd");
                return 0xffffffffffffffe2;
              }
              if (*(int *)(lVar26 + 0x4e10) != 0) goto LAB_7100799290;
              puVar11 = *(undefined1 **)(lVar26 + 0x4df8);
              *(undefined1 **)(lVar26 + 0x4df8) = puVar11 + 1;
              *puVar11 = (char)iVar5;
              uVar17 = *(ulong *)(lVar26 + 0x4de0);
              uVar18 = *(long *)(lVar26 + 0x4e00) - 1;
              *(ulong *)(lVar26 + 0x4e00) = uVar18;
              *(long *)(lVar26 + 0x4e08) = *(long *)(lVar26 + 0x4e08) + 1;
              uVar6 = 0;
              if (uVar15 == 0) {
                if (uVar18 == 0) goto LAB_7100798eb4;
              }
              else {
                uVar15 = uVar15 - 1;
                if (uVar18 == 0) {
LAB_7100798eb4:
                  uVar18 = 0;
                  uVar16 = uVar25;
                  uVar15 = uVar24 - uVar17;
                  goto LAB_7100798828;
                }
                uVar17 = uVar17 | uVar15;
              }
            } while (uVar17 != 0);
            uVar16 = uVar25 - uVar18;
            uVar15 = uVar24;
          }
          else {
            if (0x30401 < uVar15) {
LAB_7100798bc8:
              FUN_71007a0da0(param_1,0xffffffff,"Decompression internal error");
              return 0xffffffffffffffe2;
            }
            if (uVar15 != 0) {
              if ((uVar15 != 0x21) && (uVar15 != 0x30101)) goto LAB_7100798bc8;
              goto LAB_7100798be8;
            }
            uVar15 = uVar17;
            if (uVar24 < uVar17) {
              uVar15 = uVar24;
            }
            FUN_710080f900(pbVar14,uVar8,uVar15);
            uVar6 = (uint)(uVar24 == 0);
            lVar7 = uVar15 - uVar17;
            uVar18 = uVar17 - uVar15;
            if (uVar24 == 0) {
              uVar15 = 0;
            }
            uVar16 = lVar7 + uVar25;
          }
        }
        else if (uVar15 == 0x40202) {
          *(undefined8 *)(lVar26 + 0x1c8) = uVar8;
          *(int *)(lVar26 + 0x1d0) = (int)uVar24;
          *(byte **)(lVar26 + 0x1e0) = pbVar14;
          *(int *)(lVar26 + 0x1e8) = (int)uVar17;
          uVar6 = FUN_71007a9b40(lVar26 + 0x1c8);
          if (uVar6 != 0) {
            if (uVar6 != 4) {
              FUN_71007a0da0(param_1,0xffffffff,"bzip decompression failed");
              return 0xffffffffffffffe2;
            }
            iVar5 = FUN_71007aa9b0(lVar26 + 0x1c8);
            if (iVar5 != 0) {
              FUN_71007a0da0(param_1,0xffffffff,"Failed to clean up decompressor");
              return 0xffffffffffffffe2;
            }
            uVar6 = 1;
            *(undefined4 *)(lVar26 + 0x218) = 0;
          }
          uVar18 = (ulong)*(uint *)(lVar26 + 0x1e8);
          uVar15 = uVar24 - *(uint *)(lVar26 + 0x1d0);
          uVar16 = uVar25 - uVar18;
        }
        else {
          if (uVar15 != 0x4f71101) goto LAB_7100798bc8;
          local_20 = 0;
          local_8 = 0;
          local_30 = uVar8;
          uStack_28 = uVar24;
          local_18 = pbVar14;
          uStack_10 = uVar17;
          uVar8 = FUN_7100709820(*(undefined8 *)(lVar26 + 0x298),&local_18,&local_30);
          iVar5 = FUN_71007073a0();
          if (iVar5 != 0) {
            uVar8 = FUN_71007073b0(uVar8);
            FUN_71007a0da0(param_1,0xffffffff,"Zstd decompression failed: %s",uVar8);
            return 0xffffffffffffffe2;
          }
          uVar6 = 0;
          uVar18 = uVar17 - local_8;
          uVar16 = (local_8 - uVar17) + uVar25;
          uVar15 = local_20;
        }
        goto LAB_7100798828;
      }
      if (uVar24 == 0 || 4 < uVar25) {
        if (*(long *)(lVar26 + 20000) == 0) goto LAB_7100798a3c;
        pbVar14 = (byte *)(lVar26 + 0x4e28);
        pbVar12 = pbVar23;
        do {
          if (uVar17 == 0) {
            uVar17 = 0;
            goto LAB_7100798d8c;
          }
          uVar17 = uVar17 - 1;
          local_50 = pbVar12 + 1;
          *pbVar12 = *pbVar14;
          lVar7 = *(long *)(lVar26 + 20000) + -1;
          *(long *)(lVar26 + 20000) = lVar7;
          pbVar14 = pbVar14 + 1;
          pbVar12 = local_50;
        } while (lVar7 != 0);
        if (uVar17 != 0 && uVar24 != 0) {
          lVar7 = *(long *)(lVar26 + 0x130);
          goto joined_r0x007100798b4c;
        }
LAB_7100798d8c:
        uVar6 = (uint)(uVar24 == 0);
        uVar18 = *(ulong *)(lVar26 + 0x118);
        uVar17 = uVar25 - uVar17;
        uVar15 = 0;
        uVar16 = *(ulong *)(lVar26 + 0xe8);
        lVar22 = *(long *)(lVar26 + 0xf0);
      }
      else if (*(long *)(lVar26 + 20000) == 0) {
LAB_7100798a3c:
        uVar6 = (uint)(uVar24 == 0);
        if (uVar25 != 0 && uVar24 != 0) goto joined_r0x007100798954;
        uVar17 = 0;
        uVar15 = 0;
      }
      else {
        uVar17 = 0;
        uVar15 = 0;
        uVar6 = 0;
      }
    }
LAB_7100798874:
    uVar9 = *(ulong *)(lVar26 + 0x108);
    *(ulong *)(lVar26 + 0x118) = uVar18;
    *(ulong *)(lVar26 + 0x120) = uVar15;
    uVar24 = uVar9;
    if (uVar17 < uVar9) {
      uVar24 = uVar17;
    }
    uVar17 = uVar24 + lVar22;
    *(ulong *)(lVar26 + 0xf0) = uVar17;
    *(ulong *)(lVar26 + 0x108) = uVar9 - uVar24;
    if ((uVar17 == uVar16) ||
       ((((*(long *)(lVar26 + 0x130) == 0x3030103 && (*(long *)(lVar26 + 20000) != 0)) &&
         (uVar16 < uVar17 + 5)) || (uVar9 - uVar24 == 0 && uVar18 == 0)))) {
      if (param_2 <= uVar17) {
        *(undefined8 *)(lVar26 + 0xe0) = *(undefined8 *)(lVar26 + 0xd8);
        return 0;
      }
LAB_71007992d4:
      FUN_71007a0da0(param_1,0xffffffff,"Damaged 7-Zip archive");
      return 0xffffffffffffffe2;
    }
    if ((uVar6 != 0) || (uVar24 == 0 && uVar15 == 0)) goto LAB_71007992d4;
    lVar7 = **(long **)(param_1 + 0x818);
    if (*(long *)(lVar7 + 0x120) != 0) {
      FUN_7100796470(param_1);
      lVar22 = *(long *)(lVar7 + 0x120);
      *(undefined8 *)(lVar7 + 0x120) = 0;
      *(long *)(lVar7 + 0xf8) = *(long *)(lVar7 + 0xf8) + lVar22;
    }
  }
LAB_71007992fc:
  FUN_71007a0da0(param_1,0x4f,"Truncated 7-Zip file body");
  return 0xffffffffffffffe2;
}



// ===== FUN_7100799400 @ 7100799400 (size=268) =====

ulong FUN_7100799400(long param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong local_8;
  
  lVar3 = **(long **)(param_1 + 0x818);
  if ((*(long *)(lVar3 + 0x128) == 0) && (*(long *)(lVar3 + 0x130) == -1)) {
    lVar1 = FUN_7100796460(param_1,param_4,&local_8);
    *param_2 = lVar1;
    if ((long)local_8 < 1) {
      FUN_71007a0da0(param_1,0x4f,"Truncated 7-Zip file data");
      return 0xffffffffffffffe2;
    }
    uVar2 = *(ulong *)(lVar3 + 0xf0);
    if (uVar2 < local_8) {
      local_8 = uVar2;
    }
    if (param_3 < local_8) {
      local_8 = param_3;
    }
    *(ulong *)(lVar3 + 0x120) = local_8;
  }
  else {
    lVar1 = *(long *)(lVar3 + 0xe0);
    if (lVar1 == 0) {
      FUN_71007a0da0(param_1,0xffffffff,"Damaged 7-Zip archive");
      return 0xffffffffffffffe2;
    }
    uVar2 = *(ulong *)(lVar3 + 0xf0);
    if (uVar2 < param_4) {
      lVar1 = FUN_71007986a0(param_1);
      if (lVar1 != 0) {
        return 0xffffffffffffffe2;
      }
      lVar1 = *(long *)(lVar3 + 0xe0);
      uVar2 = *(ulong *)(lVar3 + 0xf0);
    }
    local_8 = uVar2;
    if (param_3 < uVar2) {
      local_8 = param_3;
    }
    *param_2 = lVar1;
    *(ulong *)(lVar3 + 0xe0) = lVar1 + local_8;
  }
  *(ulong *)(lVar3 + 0xf0) = uVar2 - local_8;
  return local_8;
}



// ===== FUN_7100799510 @ 7100799510 (size=1672) =====

ulong FUN_7100799510(long param_1,ulong *param_2,int param_3)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long *plVar8;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  int *piVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int extraout_w11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined **local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_98;
  int local_90 [4];
  undefined *local_80;
  long *local_78;
  long *local_70;
  undefined *puStack_68;
  long local_60 [4];
  long local_40;
  undefined1 local_38 [16];
  long local_20 [4];
  
  pcVar2 = "file content";
  if (param_3 != 0) {
    pcVar2 = "archive header";
  }
  lVar17 = **(long **)(param_1 + 0x818);
  FUN_710081c200(*(undefined8 *)(lVar17 + 0x4e48));
  *(undefined8 *)(lVar17 + 0x4e48) = 0;
  FUN_710081c200(*(undefined8 *)(lVar17 + 0x4e50));
  *(undefined8 *)(lVar17 + 0x4e50) = 0;
  FUN_710081c200(*(undefined8 *)(lVar17 + 0x4e58));
  uVar12 = param_2[4];
  uVar5 = param_2[0xb];
  *(undefined8 *)(lVar17 + 0x4e58) = 0;
  *(int *)(lVar17 + 0x114) = (int)uVar12;
  *(int *)(lVar17 + 0x110) = (int)uVar5;
  uVar4 = FUN_7100797330(param_2);
  uVar5 = *param_2;
  plVar18 = (long *)param_2[1];
  *(undefined8 *)(lVar17 + 0xf0) = 0;
  *(undefined8 *)(lVar17 + 0x108) = uVar4;
  if (uVar5 == 0) {
    if (*(int *)(lVar17 + 0x5110) == -1) {
      *(undefined4 *)(lVar17 + 0x5110) = 0;
    }
LAB_7100799720:
    plVar14 = (long *)0x0;
LAB_7100799724:
    uVar5 = FUN_71007978b0(param_1,lVar17,plVar18,plVar14);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  else {
    iVar3 = 0;
    uVar12 = 0;
    do {
      uVar11 = plVar18[uVar12 * 5];
      if (uVar11 == 0x6f10101) {
LAB_71007996c8:
        lVar15 = *(long *)(param_1 + 0x90);
        *(undefined4 *)(lVar17 + 0x5110) = 1;
        if (lVar15 != 0) {
          FUN_7100795000(lVar15,1);
          FUN_7100795020(*(undefined8 *)(param_1 + 0x90),1);
        }
        FUN_71007a0da0(param_1,0xffffffff,"The %s is encrypted, but currently not supported",pcVar2)
        ;
        return 0xffffffe2;
      }
      if (uVar11 < 0x6f10102) {
        if (uVar11 == 0x303011b) {
          iVar3 = iVar3 + 1;
        }
      }
      else if ((uVar11 == 0x6f10303) || (uVar11 == 0x6f10701)) goto LAB_71007996c8;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < uVar5);
    if (*(int *)(lVar17 + 0x5110) == -1) {
      *(undefined4 *)(lVar17 + 0x5110) = 0;
    }
    if (uVar5 < 3) {
      if (iVar3 < 2) {
        if (uVar5 != 2) {
          if (iVar3 != 0) {
LAB_7100799680:
            FUN_71007a0da0(param_1,0xffffffff,"Unsupported form of BCJ2 streams");
            return 0xffffffe2;
          }
          goto LAB_7100799720;
        }
        plVar14 = plVar18 + 5;
        if (iVar3 != 0) {
          local_80 = PTR_DAT_7100af3b50;
          local_78 = (long *)PTR_DAT_7100af3b58;
          local_40 = -1;
          local_90[0] = 0;
          local_90[1] = 1;
          local_90[2] = 2;
          local_70 = (long *)PTR_DAT_7100af3b60;
          local_60[0] = 0;
          local_60[1] = 0;
          local_60[2] = 0;
          local_38._8_8_ = 0xffffffffffffffff;
          local_38._0_8_ = 0xffffffffffffffff;
          local_20[0] = 0;
          local_20[1] = 0;
          local_20[2] = 0;
          if (((plVar18[5] != 0x303011b || extraout_w11 != 4) || (param_2[6] != 5)) ||
             (param_2[7] != 2)) goto LAB_7100799680;
          uVar4 = *(undefined8 *)param_2[8];
          goto LAB_71007997a4;
        }
        goto LAB_7100799724;
      }
    }
    else if (iVar3 == 1) {
      local_60[2] = 0;
      local_90[0] = 0;
      local_90[1] = 1;
      local_90[2] = 2;
      local_80 = PTR_DAT_7100af3b50;
      local_78 = (long *)PTR_DAT_7100af3b58;
      local_70 = (long *)PTR_DAT_7100af3b60;
      local_60[0] = 0;
      local_60[1] = 0;
      local_40 = -1;
      local_38._8_8_ = 0xffffffffffffffff;
      local_38._0_8_ = 0xffffffffffffffff;
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      if (((uVar5 != 4) || (plVar18[0xf] != 0x303011b)) ||
         ((param_2[6] != 7 || ((param_2[7] != 4 || (extraout_w11 != 4)))))) goto LAB_7100799680;
      if (*(long *)param_2[3] == 5) {
        local_78 = plVar18 + 5;
        plVar8 = plVar18 + 10;
        pauVar6 = (undefined1 (*) [16])param_2[8];
        local_90[0] = 1;
        local_90[1] = 2;
        local_90[2] = 0;
        local_38 = NEON_ext(*pauVar6,*pauVar6,8,1);
        local_70 = plVar18;
      }
      else if (*plVar18 == 0) {
        if (plVar18[5] == 0) {
          plVar8 = plVar18 + 10;
          pauVar6 = (undefined1 (*) [16])param_2[8];
        }
        else {
          if (plVar18[10] != 0) goto LAB_7100799680;
          plVar8 = plVar18 + 5;
          pauVar6 = (undefined1 (*) [16])param_2[8];
        }
      }
      else {
        if ((plVar18[5] != 0) || (plVar18[10] != 0)) goto LAB_7100799680;
        pauVar6 = (undefined1 (*) [16])param_2[8];
        plVar8 = plVar18;
      }
      plVar14 = plVar18 + 0xf;
      uVar4 = *(undefined8 *)pauVar6[1];
      plVar18 = plVar8;
LAB_71007997a4:
      local_40 = -1;
      local_80 = PTR_DAT_7100af3b50;
      local_20[2] = 0;
      local_20[1] = 0;
      local_20[0] = 0;
      local_60[2] = 0;
      local_60[1] = 0;
      local_60[0] = 0;
      local_c0 = &local_40;
      local_d0 = &local_80;
      *(undefined8 *)(lVar17 + 0x4e40) = uVar4;
      iVar3 = FUN_7100798090(param_1);
      if (iVar3 != 0) {
        return 0xffffffe2;
      }
      lVar15 = **(long **)(param_1 + 0x818);
      *(undefined8 *)(lVar17 + 0x120) = *(undefined8 *)(lVar17 + 0x118);
      if (*(long *)(lVar15 + 0x120) != 0) {
        FUN_7100796470(param_1);
        lVar7 = *(long *)(lVar15 + 0x120);
        *(undefined8 *)(lVar15 + 0x120) = 0;
        *(long *)(lVar15 + 0xf8) = *(long *)(lVar15 + 0xf8) + lVar7;
      }
      plVar8 = local_20;
      local_c8 = local_60;
      do {
        puVar16 = *local_d0;
        iVar3 = FUN_7100798090(param_1);
        puVar10 = extraout_x1;
        if (iVar3 != 0) {
LAB_7100799a4c:
          FUN_710081c200(local_60[0],puVar10);
          FUN_710081c200(local_60[1]);
          FUN_710081c200(local_60[2]);
          return 0xffffffe2;
        }
        lVar15 = *local_c0;
        if (lVar15 == -1) {
          lVar15 = *(long *)(lVar17 + 0x118);
        }
        *(long *)(lVar17 + 0x108) = lVar15;
        iVar3 = FUN_71007978b0(param_1,lVar17,puVar16,0);
        puVar10 = extraout_x1_00;
        if (iVar3 != 0) goto LAB_7100799a4c;
        lVar15 = FUN_710081c1c0(*(undefined8 *)(lVar17 + 0x108));
        *local_c8 = lVar15;
        if (lVar15 == 0) {
          FUN_710081c200(local_60[0]);
          FUN_710081c200(local_60[1]);
          FUN_710081c200(local_60[2]);
          goto LAB_7100799b10;
        }
        puVar10 = &local_98;
        while (*(long *)(lVar17 + 0x118) != 0) {
          lVar7 = FUN_71007986a0(param_1,0);
          if (lVar7 != 0) goto LAB_7100799a4c;
          auVar19 = FUN_7100799400(param_1,puVar10,*(undefined8 *)(lVar17 + 0xf0),0);
          uVar5 = auVar19._0_8_;
          if ((long)uVar5 < 0) {
            FUN_710081c200(local_60[0],auVar19._8_8_,uVar5);
            FUN_710081c200(local_60[1]);
            FUN_710081c200(local_60[2]);
            return uVar5 & 0xffffffff;
          }
          lVar13 = *plVar8;
          FUN_710080f900(lVar15 + lVar13,local_98);
          lVar7 = *(long *)(lVar17 + 0x120);
          *plVar8 = lVar13 + uVar5;
          if ((lVar7 != 0) && (lVar7 = **(long **)(param_1 + 0x818), *(long *)(lVar7 + 0x120) != 0))
          {
            FUN_7100796470(param_1);
            lVar13 = *(long *)(lVar7 + 0x120);
            *(undefined8 *)(lVar7 + 0x120) = 0;
            *(long *)(lVar7 + 0xf8) = *(long *)(lVar7 + 0xf8) + lVar13;
          }
        }
        plVar8 = plVar8 + 1;
        local_d0 = local_d0 + 1;
        local_c8 = local_c8 + 1;
        local_c0 = local_c0 + 1;
      } while (local_d0 != &puStack_68);
      plVar8 = (long *)(lVar17 + 0x4e48);
      piVar9 = local_90;
      do {
        plVar1 = plVar8 + 1;
        iVar3 = *piVar9;
        *plVar8 = local_60[iVar3];
        lVar15 = local_20[iVar3];
        plVar8[3] = lVar15;
        plVar8[6] = lVar15;
        plVar8 = plVar1;
        piVar9 = piVar9 + 1;
      } while (plVar1 != (long *)(lVar17 + 0x4e60));
      if (*(long *)(lVar17 + 0x4e90) == 0) {
        *(undefined8 *)(lVar17 + 0x4e98) = 0x8000;
        lVar15 = FUN_710081c1c0();
        *(long *)(lVar17 + 0x4e90) = lVar15;
        if (lVar15 == 0) {
LAB_7100799b10:
          FUN_71007a0da0(param_1,0xc,"No memory for 7-Zip decompression");
          return 0xffffffe2;
        }
      }
      uVar5 = param_2[0xb];
      *(undefined8 *)(lVar17 + 20000) = 0;
      *(undefined4 *)(lVar17 + 0x114) = 1;
      *(undefined8 *)(lVar17 + 0x4ea0) = 0;
      *(undefined8 *)(lVar17 + 0x4ea8) = 0;
      *(int *)(lVar17 + 0x110) = (int)uVar5;
      *(undefined8 *)(lVar17 + 0x50c0) = 0;
      uVar4 = FUN_7100797330(param_2);
      *(undefined8 *)(lVar17 + 0xf0) = 0;
      *(undefined8 *)(lVar17 + 0x108) = uVar4;
      goto LAB_7100799724;
    }
    FUN_71007a0da0(param_1,0xffffffff,
                   "The %s is encoded with many filters, but currently not supported",pcVar2);
  }
  return 0xffffffe2;
}



// ===== FUN_7100799ba0 @ 7100799ba0 (size=544) =====

long FUN_7100799ba0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = **(long **)(param_1 + 0x818);
  if (*(long *)(lVar6 + 0xf0) == 0) {
    if ((*(long *)(lVar6 + 0x118) == 0) && (*(long *)(lVar6 + 0x108) == 0)) {
      lVar7 = 0;
      if (*(int *)(lVar6 + 0x114) == 0) {
        if (*(int *)(lVar6 + 0x68) != 0) {
          FUN_71007a0da0(param_1,0xffffffff,"Malformed 7-Zip archive");
          return -0x1e;
        }
        if (*(uint *)(lVar6 + 0x100) == 0) {
          uVar1 = *(uint *)(*(long *)(lVar6 + 0xa8) + 0x10);
          uVar5 = (ulong)uVar1;
          lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + (ulong)uVar1 * 0x68 + 0x60);
          if (uVar1 == 0 && lVar3 == 0) {
            uVar5 = 0;
          }
          else {
            *(uint *)(lVar6 + 0x100) = uVar1;
            lVar7 = lVar3;
          }
        }
        else {
          uVar5 = (ulong)*(uint *)(lVar6 + 0x100);
        }
        if (*(ulong *)(lVar6 + 0x30) <= uVar5) {
          *param_2 = 0;
          return 0;
        }
        iVar2 = FUN_7100799510(param_1,*(long *)(lVar6 + 0x38) + uVar5 * 0x68,0);
        if (iVar2 != 0) {
          return -0x1e;
        }
        *(int *)(lVar6 + 0x100) = *(int *)(lVar6 + 0x100) + 1;
      }
      iVar2 = FUN_7100798090(param_1);
      if ((iVar2 != 0) || (lVar3 = FUN_71007986a0(param_1,0), lVar3 != 0)) {
        return -0x1e;
      }
      while (lVar7 != 0) {
        while( true ) {
          if (*(long *)(lVar6 + 0xf0) == 0) {
            if ((*(long *)(lVar6 + 0x118) == 0) && (*(long *)(lVar6 + 0x108) == 0)) {
              FUN_71007a0da0(param_1,0x4f,"Truncated 7-Zip file body");
              return -0x1e;
            }
            lVar3 = FUN_71007986a0(param_1,0);
            if (lVar3 != 0) {
              return -0x1e;
            }
          }
          lVar3 = FUN_7100799400(param_1,param_2,lVar7,0);
          if (lVar3 < 0) {
            return lVar3;
          }
          lVar7 = lVar7 - lVar3;
          if ((*(long *)(lVar6 + 0x120) == 0) ||
             (lVar3 = **(long **)(param_1 + 0x818), *(long *)(lVar3 + 0x120) == 0)) break;
          FUN_7100796470(param_1);
          lVar4 = *(long *)(lVar3 + 0x120);
          *(undefined8 *)(lVar3 + 0x120) = 0;
          *(long *)(lVar3 + 0xf8) = *(long *)(lVar3 + 0xf8) + lVar4;
          if (lVar7 == 0) goto LAB_7100799c4c;
        }
      }
    }
    else {
      lVar6 = FUN_71007986a0(param_1,0);
      if (lVar6 != 0) {
        return -0x1e;
      }
    }
  }
LAB_7100799c4c:
  lVar6 = FUN_7100799400(param_1,param_2,param_3,param_4);
  return lVar6;
}



// ===== FUN_7100799dc0 @ 7100799dc0 (size=364) =====

undefined8 FUN_7100799dc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_8 [8];
  
  lVar4 = **(long **)(param_1 + 0x818);
  if (*(long *)(lVar4 + 0x120) != 0) {
    FUN_7100796470();
    lVar5 = *(long *)(lVar4 + 0x120);
    *(undefined8 *)(lVar4 + 0x120) = 0;
    *(long *)(lVar4 + 0xf8) = *(long *)(lVar4 + 0xf8) + lVar5;
  }
  if (*(char *)(lVar4 + 0xd0) != '\0') {
    return 0;
  }
  lVar5 = **(long **)(param_1 + 0x818);
  lVar6 = *(long *)(lVar4 + 0xc0);
  if (*(int *)(lVar5 + 0x100) == 0) {
    lVar5 = *(long *)(lVar5 + 0x38) + (ulong)*(uint *)(*(long *)(lVar5 + 0xa8) + 0x10) * 0x68;
    *(long *)(lVar5 + 0x60) = *(long *)(lVar5 + 0x60) + lVar6;
  }
  else {
    lVar3 = lVar6;
    if (lVar6 == 0) goto LAB_7100799e60;
    do {
      while( true ) {
        lVar1 = FUN_7100799ba0(param_1,auStack_8,lVar3,0);
        lVar3 = lVar3 - lVar1;
        if (lVar1 < 0) {
          return 0xffffffe2;
        }
        if (lVar1 == 0) {
          FUN_71007a0da0(param_1,0x4f,"Truncated 7-Zip file body");
          return 0xffffffe2;
        }
        if ((*(long *)(lVar5 + 0x120) != 0) &&
           (lVar1 = **(long **)(param_1 + 0x818), *(long *)(lVar1 + 0x120) != 0)) break;
        if (lVar3 == 0) goto LAB_7100799e5c;
      }
      FUN_7100796470(param_1);
      lVar2 = *(long *)(lVar1 + 0x120);
      *(undefined8 *)(lVar1 + 0x120) = 0;
      *(long *)(lVar1 + 0xf8) = *(long *)(lVar1 + 0xf8) + lVar2;
    } while (lVar3 != 0);
  }
LAB_7100799e5c:
  if (lVar6 < 0) {
    return 0xffffffe2;
  }
LAB_7100799e60:
  *(undefined1 *)(lVar4 + 0xd0) = 1;
  *(undefined8 *)(lVar4 + 0xc0) = 0;
  return 0;
}



// ===== FUN_7100799f30 @ 7100799f30 (size=448) =====

ulong FUN_7100799f30(long param_1,undefined8 *param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = **(long **)(param_1 + 0x818);
  if (*(int *)(lVar3 + 0x5110) == -1) {
    *(undefined4 *)(lVar3 + 0x5110) = 0;
  }
  if (*(long *)(lVar3 + 0x120) != 0) {
    FUN_7100796470(param_1);
    lVar1 = *(long *)(lVar3 + 0x120);
    *(undefined8 *)(lVar3 + 0x120) = 0;
    *(long *)(lVar3 + 0xf8) = *(long *)(lVar3 + 0xf8) + lVar1;
  }
  *param_4 = *(long *)(lVar3 + 0xb8);
  *param_3 = 0;
  *param_2 = 0;
  if (*(char *)(lVar3 + 0xd0) != '\0') {
    return 1;
  }
  uVar2 = *(ulong *)(lVar3 + 0xc0);
  if (0x1000000 < uVar2) {
    uVar2 = 0x1000000;
  }
  uVar2 = FUN_7100799ba0(param_1,param_2,uVar2,0);
  if ((long)uVar2 < 0) {
    return uVar2 & 0xffffffff;
  }
  if (uVar2 == 0) {
    FUN_71007a0da0(param_1,0x4f,"Truncated 7-Zip file body");
    return 0xffffffe2;
  }
  lVar1 = *(long *)(lVar3 + 0xc0) - uVar2;
  *(long *)(lVar3 + 0xc0) = lVar1;
  if (lVar1 == 0) {
    *(undefined1 *)(lVar3 + 0xd0) = 1;
  }
  if ((*(uint *)(*(long *)(lVar3 + 0xa8) + 0x18) >> 3 & 1) != 0) {
    uVar4 = FUN_7100706cc0(*(undefined8 *)(lVar3 + 200),*param_2,uVar2 & 0xffffffff);
    *(ulong *)(lVar3 + 200) = uVar4;
    if (((*(char *)(lVar3 + 0xd0) != '\0') &&
        ((*(uint *)(*(long *)(lVar3 + 0xa8) + 0x18) >> 3 & 1) != 0)) &&
       (uVar4 != *(uint *)(*(long *)(lVar3 + 0x60) +
                          (ulong)*(uint *)(*(long *)(lVar3 + 0xa8) + 0x14) * 4))) {
      uVar4 = 0xffffffec;
      FUN_71007a0da0(param_1,0xffffffff,"7-Zip bad CRC: 0x%lx should be 0x%lx");
      goto LAB_710079a008;
    }
  }
  uVar4 = 0;
LAB_710079a008:
  *param_3 = uVar2;
  lVar1 = *(long *)(lVar3 + 0xb8);
  *param_4 = lVar1;
  *(ulong *)(lVar3 + 0xb8) = lVar1 + uVar2;
  return uVar4;
}



// ===== FUN_710079a0f0 @ 710079a0f0 (size=240) =====

long FUN_710079a0f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_8;
  
  lVar3 = **(long **)(param_1 + 0x818);
  if (*(ulong *)(lVar3 + 0x70) < param_2) {
    return 0;
  }
  if (*(long *)(lVar3 + 0x120) != 0) {
    FUN_7100796470();
    lVar1 = *(long *)(lVar3 + 0x120);
    *(undefined8 *)(lVar3 + 0x120) = 0;
    *(long *)(lVar3 + 0xf8) = *(long *)(lVar3 + 0xf8) + lVar1;
  }
  if (*(int *)(lVar3 + 0x6c) == 0) {
    lVar1 = FUN_7100796460(param_1,param_2,0);
    if (lVar1 == 0) {
      return 0;
    }
    *(ulong *)(lVar3 + 0x120) = param_2;
    *(ulong *)(lVar3 + 0x70) = *(long *)(lVar3 + 0x70) - param_2;
  }
  else {
    lVar1 = FUN_7100799ba0(param_1,&local_8,param_2,param_2);
    if (lVar1 < 1) {
      return 0;
    }
    *(long *)(lVar3 + 0x70) = *(long *)(lVar3 + 0x70) - lVar1;
    lVar1 = local_8;
  }
  uVar2 = FUN_7100706cc0(*(undefined8 *)(lVar3 + 0x78),lVar1,param_2 & 0xffffffff);
  *(undefined8 *)(lVar3 + 0x78) = uVar2;
  return lVar1;
}



// ===== FUN_710079a1e0 @ 710079a1e0 (size=192) =====

undefined8 FUN_710079a1e0(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  pbVar3 = (byte *)FUN_710079a0f0(param_1,1);
  if (pbVar3 == (byte *)0x0) {
LAB_710079a298:
    uVar4 = 0xffffffff;
  }
  else {
    iVar5 = 0;
    uVar6 = 0x80;
    bVar1 = *pbVar3;
    *param_2 = 0;
    do {
      if ((bVar1 & uVar6) == 0) {
        *param_2 = *param_2 +
                   ((long)(int)(uVar6 - 1 & (uint)bVar1) << ((ulong)(uint)(iVar5 << 3) & 0x3f));
        break;
      }
      pbVar3 = (byte *)FUN_710079a0f0(param_1,1);
      uVar2 = iVar5 << 3;
      iVar5 = iVar5 + 1;
      if (pbVar3 == (byte *)0x0) goto LAB_710079a298;
      uVar6 = uVar6 >> 1;
      *param_2 = *param_2 | (ulong)*pbVar3 << ((ulong)uVar2 & 0x3f);
    } while (iVar5 != 8);
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_710079a2a0 @ 710079a2a0 (size=368) =====

undefined8 FUN_710079a2a0(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    return 0xffffffff;
  }
  param_2[1] = 0;
  lVar1 = FUN_710081c1c0(param_3);
  *param_2 = lVar1;
  if ((lVar1 != 0) && (pcVar2 = (char *)FUN_710079a0f0(param_1,1), pcVar2 != (char *)0x0)) {
    lVar1 = *param_2;
    if (*pcVar2 == '\0') {
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar5 = 0;
      do {
        if (uVar5 == 0) {
          pbVar4 = (byte *)FUN_710079a0f0(param_1,1);
          uVar7 = uVar7 + 1;
          uVar5 = 0x40;
          if (pbVar4 == (byte *)0x0) {
            return 0xffffffff;
          }
          uVar6 = (uint)*pbVar4;
          *(byte *)(lVar1 + uVar8) = *pbVar4 >> 7;
          uVar8 = (ulong)uVar7;
          if (param_3 <= uVar8) break;
        }
        uVar7 = uVar7 + 1;
        *(bool *)(lVar1 + uVar8) = (uVar6 & uVar5) != 0;
        uVar8 = (ulong)uVar7;
        uVar5 = uVar5 >> 1;
      } while (uVar8 < param_3);
    }
    else {
      FUN_7100808340(lVar1,1,param_3);
    }
    lVar1 = FUN_710080e9e0(param_3,4);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      uVar8 = 0;
      do {
        while (*(char *)(*param_2 + uVar8) == '\0') {
          uVar8 = (ulong)((int)uVar8 + 1);
          if (param_3 <= uVar8) {
            return 0;
          }
        }
        puVar3 = (undefined4 *)FUN_710079a0f0(param_1,4);
        if (puVar3 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *(undefined4 *)(param_2[1] + uVar8 * 4) = *puVar3;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < param_3);
      return 0;
    }
  }
  return 0xffffffff;
}



// ===== FUN_710079a410 @ 710079a410 (size=3472) =====

int FUN_710079a410(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  uint local_34;
  long local_20;
  long lStack_18;
  long local_10;
  long lStack_8;
  byte *pbVar9;
  
  lVar15 = **(long **)(param_1 + 0x818);
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
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  pcVar6 = (char *)FUN_710079a0f0(param_1,1);
  if (pcVar6 == (char *)0x0) {
    return -1;
  }
  cVar4 = *pcVar6;
  if (cVar4 == '\x06') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    iVar5 = FUN_710079a1e0(param_1,param_2);
    if (iVar5 == -1) {
      return -1;
    }
    iVar5 = FUN_710079a1e0(param_1,param_2 + 1);
    if (iVar5 == -1) {
      return -1;
    }
    if (99999999 < param_2[1] - 1) {
      return -1;
    }
    pcVar6 = (char *)FUN_710079a0f0(param_1,1);
    if (pcVar6 == (char *)0x0) {
      return -1;
    }
    if (*pcVar6 != '\0') {
      if (*pcVar6 != '\t') {
        return -1;
      }
      uVar13 = param_2[1];
      uVar24 = FUN_710080e9e0(uVar13,8);
      param_2[2] = uVar24;
      uVar17 = FUN_710080e9e0(uVar13,8);
      param_2[5] = uVar17;
      if (uVar24 == 0 || uVar17 == 0) {
        return -1;
      }
      if (uVar13 != 0) {
        uVar17 = 0;
        while( true ) {
          iVar5 = FUN_710079a1e0(param_1,uVar24 + uVar17 * 8);
          uVar17 = (ulong)((int)uVar17 + 1);
          if (iVar5 == -1) {
            return -1;
          }
          if (param_2[1] <= uVar17) break;
          uVar24 = param_2[2];
        }
      }
      pcVar6 = (char *)FUN_710079a0f0(param_1,1);
      if (pcVar6 == (char *)0x0) {
        return -1;
      }
      if (*pcVar6 == '\0') {
        uVar17 = param_2[1];
        uVar24 = FUN_710080e9e0(uVar17,1);
        param_2[3] = uVar24;
        uVar17 = FUN_710080e9e0(uVar17,4);
        param_2[4] = uVar17;
        if (uVar24 == 0 || uVar17 == 0) {
          return -1;
        }
      }
      else {
        if (*pcVar6 != '\n') {
          return -1;
        }
        iVar5 = FUN_710079a2a0(param_1,param_2 + 3,param_2[1]);
        if (iVar5 == -1) {
          return -1;
        }
        pcVar6 = (char *)FUN_710079a0f0(param_1,1);
        if (pcVar6 == (char *)0x0) {
          return -1;
        }
        if (*pcVar6 != '\0') {
          return -1;
        }
      }
    }
    uVar24 = param_2[5];
    if (uVar24 == 0) {
      return -1;
    }
    uVar17 = param_2[2];
    if (uVar17 == 0) {
      return -1;
    }
    uVar13 = *param_2;
    uVar21 = 0;
    if (param_2[1] != 0) {
      do {
        uVar25 = (ulong)((int)uVar21 + 1);
        *(ulong *)(uVar24 + uVar21 * 8) = uVar13;
        uVar13 = uVar13 + *(long *)(uVar17 + uVar21 * 8);
        if (*(ulong *)(lVar15 + 0x80) < uVar13) {
          return -1;
        }
        uVar21 = uVar25;
      } while (uVar25 < param_2[1]);
    }
    pcVar6 = (char *)FUN_710079a0f0(param_1,1);
    if (pcVar6 == (char *)0x0) {
      return -1;
    }
    cVar4 = *pcVar6;
  }
  if (cVar4 == '\a') {
    puVar1 = param_2 + 6;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    local_20 = 0;
    lStack_18 = 0;
    pcVar6 = (char *)FUN_710079a0f0(param_1,1);
    if (((pcVar6 != (char *)0x0) && (*pcVar6 == '\v')) &&
       (iVar5 = FUN_710079a1e0(param_1,puVar1), iVar5 != -1)) {
      if (100000000 < param_2[6]) {
        return -1;
      }
      pcVar6 = (char *)FUN_710079a0f0(param_1,1);
      if (pcVar6 != (char *)0x0) {
        if (*pcVar6 == '\0') {
          uVar17 = param_2[6];
          uVar24 = FUN_710080e9e0(uVar17,0x68);
          param_2[7] = uVar24;
          if (uVar24 == 0) {
            return -1;
          }
          if (uVar17 == 0) {
LAB_710079a904:
            pcVar6 = (char *)FUN_710079a0f0(param_1,1);
            if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\f')) {
              uVar24 = 0;
              if (param_2[6] != 0) {
                do {
                  lVar15 = param_2[7] + uVar24 * 0x68;
                  lVar16 = *(long *)(lVar15 + 0x38);
                  lVar28 = FUN_710080e9e0(lVar16,8);
                  *(long *)(lVar15 + 0x40) = lVar28;
                  if (lVar28 == 0) goto LAB_710079a510;
                  if (lVar16 != 0) {
                    uVar17 = 0;
                    while( true ) {
                      iVar5 = FUN_710079a1e0(param_1,lVar28 + uVar17 * 8);
                      uVar17 = (ulong)((int)uVar17 + 1);
                      if (iVar5 == -1) goto LAB_710079a510;
                      if (*(ulong *)(lVar15 + 0x38) <= uVar17) break;
                      lVar28 = *(long *)(lVar15 + 0x40);
                    }
                  }
                  uVar24 = (ulong)((int)uVar24 + 1);
                } while (uVar24 < *puVar1);
              }
              pcVar6 = (char *)FUN_710079a0f0(param_1,1);
              if (pcVar6 != (char *)0x0) {
                if (*pcVar6 != '\0') {
                  if (*pcVar6 != '\n') goto LAB_710079a510;
                  iVar5 = FUN_710079a2a0(param_1,&local_20,param_2[6]);
                  lVar28 = lStack_18;
                  lVar15 = local_20;
                  if (iVar5 == -1) goto LAB_710079a518;
                  uVar24 = param_2[6];
                  if (uVar24 != 0) {
                    uVar12 = 0;
                    uVar13 = param_2[7];
                    uVar17 = 0;
                    do {
                      uVar12 = uVar12 + 1;
                      lVar18 = uVar13 + uVar17 * 0x68;
                      *(undefined1 *)(lVar18 + 0x48) = *(undefined1 *)(local_20 + uVar17);
                      lVar16 = uVar17 * 4;
                      uVar17 = (ulong)uVar12;
                      *(undefined4 *)(lVar18 + 0x4c) = *(undefined4 *)(lStack_18 + lVar16);
                    } while (uVar17 < uVar24);
                  }
                  pcVar6 = (char *)FUN_710079a0f0(param_1,1);
                  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) goto LAB_710079a518;
                  FUN_710081c200(lVar15);
                  FUN_710081c200(lVar28);
                }
                uVar24 = param_2[6];
                uVar17 = param_2[7];
                if (uVar24 != 0) {
                  uVar12 = 0;
                  uVar13 = 0;
                  uVar21 = param_2[1];
                  do {
                    lVar15 = uVar13 * 0x68;
                    uVar13 = (ulong)((int)uVar13 + 1);
                    lVar15 = uVar17 + lVar15;
                    *(uint *)(lVar15 + 0x58) = uVar12;
                    uVar12 = uVar12 + (int)*(undefined8 *)(lVar15 + 0x20);
                    if (uVar21 < uVar12) {
                      return -1;
                    }
                  } while (uVar13 < uVar24);
                }
                pcVar6 = (char *)FUN_710079a0f0(param_1,1);
                if (pcVar6 == (char *)0x0) {
                  return -1;
                }
                cVar4 = *pcVar6;
                goto LAB_710079a464;
              }
            }
          }
          else {
            uVar17 = 0;
            local_34 = 0;
            while( true ) {
              lVar28 = uVar17 * 0x68;
              lVar15 = **(long **)(param_1 + 0x818);
              puVar2 = (ulong *)(uVar24 + lVar28);
              *(undefined8 *)(uVar24 + lVar28) = 0;
              ((undefined8 *)(uVar24 + lVar28))[1] = 0;
              puVar2[10] = 0;
              puVar2[0xb] = 0;
              puVar2[0xc] = 0;
              puVar2[2] = 0;
              puVar2[3] = 0;
              puVar2[4] = 0;
              puVar2[5] = 0;
              puVar2[6] = 0;
              puVar2[7] = 0;
              puVar2[8] = 0;
              puVar2[9] = 0;
              iVar5 = FUN_710079a1e0(param_1,puVar2);
              if ((iVar5 == -1) || (uVar24 = *(ulong *)(uVar24 + lVar28), 4 < uVar24)) break;
              uVar17 = FUN_710080e9e0(uVar24,0x28);
              puVar2[1] = uVar17;
              if ((uVar17 == 0) || (uVar24 == 0)) break;
              uVar17 = 0;
              uVar13 = 0;
              uVar24 = 0;
              do {
                pbVar7 = (byte *)FUN_710079a0f0(param_1,1);
                if (pbVar7 == (byte *)0x0) goto LAB_710079a510;
                bVar3 = *pbVar7;
                if (((char)bVar3 < '\0') ||
                   (pbVar7 = (byte *)FUN_710079a0f0(param_1,(ulong)bVar3 & 0xf),
                   pbVar7 == (byte *)0x0)) goto LAB_710079a510;
                lVar28 = 0;
                lVar18 = uVar17 * 0x28;
                lVar16 = puVar2[1] + lVar18;
                if ((bVar3 & 0xf) != 0) {
                  pbVar9 = pbVar7;
                  do {
                    pbVar8 = pbVar9 + 1;
                    lVar28 = (ulong)*pbVar9 + lVar28 * 0x100;
                    pbVar9 = pbVar8;
                  } while (pbVar7 + ((ulong)bVar3 & 0xf) != pbVar8);
                }
                *(long *)(puVar2[1] + lVar18) = lVar28;
                if ((bVar3 & 0x10) == 0) {
                  *(undefined8 *)(lVar16 + 8) = 1;
                  *(undefined8 *)(lVar16 + 0x10) = 1;
                }
                else {
                  iVar5 = FUN_710079a1e0(param_1,lVar16 + 8);
                  if ((((iVar5 == -1) || (100000000 < *(ulong *)(puVar2[1] + lVar18 + 8))) ||
                      (iVar5 = FUN_710079a1e0(param_1,puVar2[1] + lVar18 + 0x10), iVar5 == -1)) ||
                     (lVar16 = puVar2[1] + lVar18, 100000000 < *(ulong *)(lVar16 + 0x10)))
                  goto LAB_710079a510;
                }
                if ((bVar3 & 0x20) != 0) {
                  iVar5 = FUN_710079a1e0(param_1,lVar16 + 0x18);
                  if ((iVar5 == -1) ||
                     (lVar28 = FUN_710079a0f0(param_1,*(undefined8 *)(puVar2[1] + lVar18 + 0x18)),
                     lVar28 == 0)) goto LAB_710079a510;
                  uVar21 = puVar2[1];
                  uVar14 = *(undefined8 *)(uVar21 + lVar18 + 0x18);
                  lVar16 = FUN_710081c1c0(uVar14);
                  *(long *)(uVar21 + lVar18 + 0x20) = lVar16;
                  if (lVar16 == 0) goto LAB_710079a510;
                  FUN_710080f900(lVar16,lVar28,uVar14);
                  lVar16 = puVar2[1] + lVar18;
                }
                uVar17 = (ulong)((int)uVar17 + 1);
                uVar24 = uVar24 + *(long *)(lVar16 + 8);
                uVar13 = uVar13 + *(long *)(lVar16 + 0x10);
              } while (uVar17 < *puVar2);
              if (((uVar13 == 0) || (uVar17 = uVar13 - 1, uVar24 < uVar17)) ||
                 (uVar21 = *(ulong *)(lVar15 + 0x70), puVar2[2] = uVar17, uVar21 < uVar17)) break;
              if (uVar17 == 0) {
                puVar2[3] = 0;
                uVar25 = 0;
              }
              else {
                uVar17 = FUN_710080e9e0(uVar17,0x10);
                puVar2[3] = uVar17;
                if (uVar17 == 0) break;
                uVar21 = 0;
                do {
                  lVar15 = uVar21 * 0x10;
                  iVar5 = FUN_710079a1e0(param_1,uVar17 + lVar15);
                  if ((iVar5 == -1) || (100000000 < *(ulong *)(puVar2[3] + lVar15)))
                  goto LAB_710079a510;
                  iVar5 = FUN_710079a1e0(param_1,puVar2[3] + lVar15 + 8);
                  uVar21 = (ulong)((int)uVar21 + 1);
                  if ((iVar5 == -1) ||
                     (uVar17 = puVar2[3], 100000000 < *(ulong *)(uVar17 + lVar15 + 8)))
                  goto LAB_710079a510;
                  uVar25 = puVar2[2];
                } while (uVar21 < uVar25);
              }
              uVar17 = uVar24 - uVar25;
              puVar2[4] = uVar17;
              puVar10 = (ulong *)FUN_710080e9e0(uVar17,8);
              puVar2[5] = (ulong)puVar10;
              if (puVar10 == (ulong *)0x0) break;
              if (uVar17 == 1) {
                if (uVar25 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  do {
                    uVar21 = 0;
                    do {
                      uVar11 = (ulong)((int)uVar21 + 1);
                      if (*(ulong *)(puVar2[3] + uVar21 * 0x10) == uVar17) break;
                      uVar21 = uVar11;
                    } while (uVar11 < uVar25);
                  } while ((uVar25 != uVar21) &&
                          (uVar17 = (ulong)((int)uVar17 + 1), uVar17 < uVar24));
                }
                if (uVar24 == uVar17) break;
                *puVar10 = uVar17;
              }
              else {
                uVar21 = 0;
                if (uVar17 != 0) {
                  do {
                    iVar5 = FUN_710079a1e0(param_1,puVar10 + uVar21);
                    uVar17 = (ulong)((int)uVar21 + 1);
                    if ((iVar5 == -1) || (puVar10 = (ulong *)puVar2[5], 100000000 < puVar10[uVar21])
                       ) goto LAB_710079a510;
                    uVar21 = uVar17;
                  } while (uVar17 < puVar2[4]);
                }
              }
              uVar21 = *puVar1;
              local_34 = local_34 + 1;
              uVar17 = (ulong)local_34;
              puVar2[6] = uVar24;
              puVar2[7] = uVar13;
              if (uVar21 <= uVar17) goto LAB_710079a904;
              uVar24 = param_2[7];
            }
          }
        }
        else {
          if (*pcVar6 == '\x01') {
            iVar5 = FUN_710079a1e0(param_1,param_2 + 8);
            if (iVar5 == -1) {
              return -1;
            }
            if (100000000 < param_2[8]) {
              return -1;
            }
            if (param_2[6] == 0) goto LAB_710079a904;
          }
          FUN_71007a0da0(param_1,0xffffffff,"Malformed 7-Zip archive");
        }
      }
    }
LAB_710079a510:
    lVar28 = 0;
    lVar15 = 0;
LAB_710079a518:
    FUN_710081c200(lVar15);
    FUN_710081c200(lVar28);
    return -1;
  }
LAB_710079a464:
  if (cVar4 != '\b') goto LAB_710079a46c;
  uVar13 = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  uVar24 = param_2[6];
  uVar17 = param_2[7];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if (uVar24 != 0) {
    do {
      lVar15 = uVar13 * 0x68;
      uVar13 = (ulong)((int)uVar13 + 1);
      *(undefined8 *)(uVar17 + lVar15 + 0x50) = 1;
    } while (uVar13 < uVar24);
  }
  pcVar6 = (char *)FUN_710079a0f0(param_1,1);
  if (pcVar6 == (char *)0x0) {
    return -1;
  }
  cVar4 = *pcVar6;
  uVar13 = uVar24;
  if (cVar4 == '\r') {
    if (uVar24 != 0) {
      uVar25 = 0;
      uVar21 = 0;
      do {
        lVar15 = uVar17 + uVar25 * 0x68;
        iVar5 = FUN_710079a1e0(param_1,lVar15 + 0x50);
        uVar25 = (ulong)((int)uVar25 + 1);
        if (iVar5 == -1) {
          return -1;
        }
        uVar11 = *(ulong *)(lVar15 + 0x50);
        uVar13 = uVar21 + uVar11;
        if (100000000 < uVar11 || 0xfffffffffa0a1eff < uVar21) {
          return -1;
        }
        uVar21 = uVar13;
      } while (uVar25 < uVar24);
    }
    pcVar6 = (char *)FUN_710079a0f0(param_1,1);
    if (pcVar6 == (char *)0x0) {
      return -1;
    }
    cVar4 = *pcVar6;
  }
  param_2[9] = uVar13;
  if (uVar13 != 0) {
    plVar26 = (long *)FUN_710080e9e0(uVar13,8);
    param_2[10] = (ulong)plVar26;
    uVar21 = FUN_710080e9e0(uVar13,1);
    param_2[0xb] = uVar21;
    uVar25 = FUN_710080e9e0(uVar13,4);
    param_2[0xc] = uVar25;
    if ((plVar26 == (long *)0x0 || uVar21 == 0) || uVar25 == 0) {
      return -1;
    }
    if (uVar24 != 0) goto LAB_710079a75c;
    if (cVar4 == '\t') {
      pcVar6 = (char *)FUN_710079a0f0(param_1,1);
      if (pcVar6 == (char *)0x0) {
        return -1;
      }
      cVar4 = *pcVar6;
    }
    goto LAB_710079a82c;
  }
  plVar26 = (long *)param_2[10];
  if (uVar24 == 0) {
    iVar5 = 0;
    if (cVar4 == '\t') {
      pcVar6 = (char *)FUN_710079a0f0(param_1,1,0);
      if (pcVar6 == (char *)0x0) {
        return -1;
      }
      cVar4 = *pcVar6;
LAB_710079b104:
      iVar5 = 0;
    }
  }
  else {
LAB_710079a75c:
    uVar21 = 0;
    do {
      lVar15 = uVar17 + uVar21 * 0x68;
      plVar27 = plVar26;
      if (*(long *)(lVar15 + 0x50) != 0) {
        lVar28 = 0;
        if ((cVar4 == '\t') && (*(long *)(lVar15 + 0x50) != 1)) {
          uVar25 = 1;
          do {
            iVar5 = FUN_710079a1e0(param_1,plVar27);
            uVar25 = (ulong)((int)uVar25 + 1);
            if (iVar5 == -1) {
              return -1;
            }
            plVar26 = plVar27 + 1;
            lVar28 = lVar28 + *plVar27;
            plVar27 = plVar26;
          } while (uVar25 < *(ulong *)(lVar15 + 0x50));
        }
        lVar15 = FUN_7100797330(lVar15);
        plVar27 = plVar26 + 1;
        *plVar26 = lVar15 - lVar28;
      }
      uVar21 = (ulong)((int)uVar21 + 1);
      plVar26 = plVar27;
    } while (uVar21 < uVar24);
    if (cVar4 == '\t') {
      pcVar6 = (char *)FUN_710079a0f0(param_1,1);
      if (pcVar6 == (char *)0x0) {
        return -1;
      }
      cVar4 = *pcVar6;
      if (uVar13 != 0) goto LAB_710079a82c;
LAB_710079a858:
      if (uVar24 == 0) goto LAB_710079b104;
    }
    else if (uVar13 != 0) {
LAB_710079a82c:
      uVar12 = 0;
      uVar21 = 0;
      do {
        uVar12 = uVar12 + 1;
        *(undefined1 *)(param_2[0xb] + uVar21) = 0;
        *(undefined4 *)(param_2[0xc] + uVar21 * 4) = 0;
        uVar21 = (ulong)uVar12;
      } while (uVar21 < uVar13);
      goto LAB_710079a858;
    }
    uVar13 = 0;
    iVar5 = 0;
    do {
      lVar15 = uVar13 * 0x68;
      uVar13 = (ulong)((int)uVar13 + 1);
      lVar15 = uVar17 + lVar15;
      lVar28 = *(long *)(lVar15 + 0x50);
      if ((lVar28 != 1) || (*(char *)(lVar15 + 0x48) == '\0')) {
        iVar5 = iVar5 + (int)lVar28;
      }
    } while (uVar13 < uVar24);
  }
  if (cVar4 == '\n') {
    local_10 = 0;
    lStack_8 = 0;
    puVar19 = (undefined1 *)param_2[0xb];
    puVar23 = (undefined4 *)param_2[0xc];
    iVar5 = FUN_710079a2a0(param_1,&local_10,iVar5);
    lVar15 = lStack_8;
    if (iVar5 == -1) {
      FUN_710081c200();
      FUN_710081c200(lVar15);
      return -1;
    }
    lVar28 = 0;
    uVar13 = 0;
    if (uVar24 != 0) {
      do {
        lVar16 = uVar17 + uVar13 * 0x68;
        if (*(long *)(lVar16 + 0x50) == 1) {
          if (*(char *)(lVar16 + 0x48) == '\0') goto LAB_710079b05c;
          puVar20 = puVar19 + 1;
          *puVar19 = 1;
          puVar22 = puVar23 + 1;
          *puVar23 = *(undefined4 *)(lVar16 + 0x4c);
        }
        else {
          puVar20 = puVar19;
          puVar22 = puVar23;
          if (*(long *)(lVar16 + 0x50) != 0) {
LAB_710079b05c:
            iVar5 = (int)lVar28;
            lVar18 = (long)(iVar5 + 1);
            do {
              lVar28 = lVar18;
              puVar20 = puVar19 + 1;
              *puVar19 = *(undefined1 *)(local_10 + -1 + lVar28);
              uVar21 = *(ulong *)(lVar16 + 0x50);
              puVar22 = puVar23 + 1;
              *puVar23 = *(undefined4 *)(lStack_8 + -4 + lVar28 * 4);
              lVar18 = lVar28 + 1;
              puVar19 = puVar20;
              puVar23 = puVar22;
            } while (((lVar28 + 1) - (long)iVar5) - 1U < uVar21);
          }
        }
        uVar13 = (ulong)((int)uVar13 + 1);
        puVar19 = puVar20;
        puVar23 = puVar22;
      } while (uVar13 < uVar24);
    }
    FUN_710081c200();
    FUN_710081c200(lVar15);
    pcVar6 = (char *)FUN_710079a0f0(param_1,1);
    if (pcVar6 == (char *)0x0) {
      return -1;
    }
    cVar4 = *pcVar6;
  }
  if (cVar4 != '\0') {
    return -1;
  }
  pcVar6 = (char *)FUN_710079a0f0(param_1,1);
  if (pcVar6 == (char *)0x0) {
    return -1;
  }
  cVar4 = *pcVar6;
LAB_710079a46c:
  return -(uint)(cVar4 != '\0');
}



// ===== FUN_710079b1a0 @ 710079b1a0 (size=5976) =====

int FUN_710079b1a0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  char *pcVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  undefined4 uVar31;
  undefined8 *puVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  byte *pbVar36;
  byte *pbVar37;
  ulong *puVar38;
  undefined1 auVar39 [16];
  int local_4c;
  long local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  byte *local_18;
  byte *local_10;
  long local_8;
  
  puVar38 = (ulong *)**(undefined8 **)(param_1 + 0x818);
  if ((int)puVar38[0xa22] == -1) {
    *(undefined4 *)(puVar38 + 0xa22) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xe0000;
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined4 **)(param_1 + 0x18) = &DAT_71008554b8;
    uVar9 = puVar38[0x14];
  }
  else {
    uVar9 = puVar38[0x14];
  }
  if (uVar9 == 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = (byte *)0x0;
    local_10 = (byte *)0x0;
    local_8 = 0;
    piVar11 = (int *)FUN_7100796460(param_1,0x20,&local_38);
    if (piVar11 != (int *)0x0) {
      if ((((char)*piVar11 == 'M') && (*(char *)((long)piVar11 + 1) == 'Z')) ||
         (*piVar11 == 0x464c457f)) {
        if (local_38 < 0x27001) {
          lVar10 = FUN_7100796860(param_1,0x27000,0);
          if (lVar10 < 0) goto LAB_710079b520;
        }
        else {
          FUN_7100796470(param_1,0x27000);
        }
        uVar9 = 1;
        lVar10 = 0;
        do {
          lVar14 = FUN_7100796460(param_1,uVar9,&local_30);
          if (lVar14 == 0) {
            uVar9 = (long)uVar9 >> 1;
            if (uVar9 < 0x40) break;
          }
          else if ((long)local_30 < 6) {
            uVar9 = 0x1000;
          }
          else {
            uVar35 = lVar14 + local_30;
            lVar18 = lVar14;
            if (lVar14 + 0x20U < uVar35) {
              do {
                iVar6 = FUN_7100798200(lVar18);
                if (iVar6 == 0) {
                  lVar33 = **(long **)(param_1 + 0x818);
                  FUN_7100796470(param_1,lVar18 - lVar14);
                  *(long *)(lVar33 + 0x88) = lVar10 + 0x27000 + (lVar18 - lVar14);
                  piVar11 = (int *)FUN_7100796460(param_1,0x20,&local_38);
                  if (piVar11 == (int *)0x0) goto LAB_710079b520;
                  goto LAB_710079b4ec;
                }
                lVar18 = lVar18 + iVar6;
              } while (lVar18 + 0x20U < uVar35);
              lVar18 = lVar18 - lVar14;
              lVar10 = lVar10 + lVar18;
            }
            else {
              lVar18 = 0;
            }
            FUN_7100796470(param_1,lVar18);
            if (uVar9 == 1) {
              uVar9 = 0x1000;
            }
          }
        } while (lVar10 + uVar9 < 0x39001);
        FUN_71007a0da0(param_1,0x4f,"Couldn\'t find out 7-Zip header");
      }
      else {
LAB_710079b4ec:
        puVar38[0x11] = puVar38[0x11] + 0x20;
        if ((*piVar11 == -0x504385c9) && ((short)piVar11[1] == 0x1c27)) {
          FUN_7100706cc0(0,piVar11 + 3,0x14);
          uVar9 = *(ulong *)(piVar11 + 5);
          if (uVar9 == 0) {
            iVar6 = 1;
            goto LAB_710079b524;
          }
          uVar35 = *(ulong *)(piVar11 + 3);
          if ((long)uVar35 < 0) goto LAB_710079c7d4;
          uVar7 = piVar11[7];
          FUN_7100796470(param_1,0x20);
          if (uVar35 != 0) {
            if (local_38 < (long)uVar35) {
              lVar10 = FUN_7100796860(param_1,uVar35 + puVar38[0x11],0);
              if (lVar10 < 0) goto LAB_710079b520;
            }
            else {
              FUN_7100796470(param_1,uVar35);
            }
          }
          bVar3 = true;
          puVar38[0xf] = 0;
          puVar38[0x10] = uVar35;
          puVar38[0xd] = 1;
          puVar38[0xe] = uVar9;
          puVar38[0x1f] = uVar35;
          *(undefined4 *)(puVar38 + 0xa22) = 0;
          pcVar15 = (char *)FUN_710079a0f0(param_1,1);
          if (pcVar15 == (char *)0x0) {
            FUN_71007a0da0(param_1,0x4f,"Truncated 7-Zip file body");
          }
          else if (*pcVar15 == '\x01') {
LAB_710079ba08:
            puVar16 = (undefined4 *)FUN_710080e8e0();
            lVar10 = **(long **)(param_1 + 0x818);
            *puVar16 = 0;
            if (((*(int *)((long)puVar38 + 0x6c) == 0) ||
                ((pcVar15 = (char *)FUN_710079a0f0(param_1,1), pcVar15 != (char *)0x0 &&
                 (*pcVar15 == '\x01')))) &&
               (pcVar15 = (char *)FUN_710079a0f0(param_1,1), pcVar15 != (char *)0x0)) {
              cVar4 = *pcVar15;
              if (cVar4 == '\x02') {
                do {
                  pcVar15 = (char *)FUN_710079a0f0(param_1,1);
                  if (pcVar15 == (char *)0x0) break;
                  if (*pcVar15 == '\0') {
                    pcVar15 = (char *)FUN_710079a0f0(param_1,1);
                    if (pcVar15 != (char *)0x0) {
                      cVar4 = *pcVar15;
                      goto LAB_710079ba70;
                    }
                    break;
                  }
                  iVar6 = FUN_710079a1e0(param_1,&local_30);
                } while (iVar6 != -1);
              }
              else {
LAB_710079ba70:
                if (cVar4 == '\x04') {
                  iVar6 = FUN_710079a410(param_1,lVar10);
                  if ((iVar6 == -1) ||
                     (pcVar15 = (char *)FUN_710079a0f0(param_1,1), pcVar15 == (char *)0x0))
                  goto LAB_710079bf78;
                  cVar4 = *pcVar15;
                }
                if (cVar4 == '\0') goto LAB_710079bc48;
                if (((cVar4 == '\x05') &&
                    (iVar6 = FUN_710079a1e0(param_1,lVar10 + 0x98), iVar6 != -1)) &&
                   (*(ulong *)(lVar10 + 0x98) < 0x5f5e101)) {
                  lVar14 = FUN_710080e9e0(*(ulong *)(lVar10 + 0x98),0x58);
                  *(long *)(lVar10 + 0xa0) = lVar14;
                  if (lVar14 != 0) {
                    iVar6 = 0;
                    local_4c = 0;
LAB_710079bae4:
                    do {
                      pbVar17 = (byte *)FUN_710079a0f0(param_1,1);
                      if (pbVar17 == (byte *)0x0) break;
                      bVar5 = *pbVar17;
                      if (bVar5 == 0) {
                        uVar9 = *(ulong *)(lVar10 + 0x98);
                        lVar18 = *(long *)(lVar10 + 0x38);
                        if (uVar9 == 0) goto LAB_710079bc48;
                        iVar6 = 0;
                        uVar35 = 0;
                        uVar24 = 0;
                        uVar34 = 0;
                        goto LAB_710079c5f8;
                      }
                      iVar8 = FUN_710079a1e0(param_1,&local_30);
                      uVar9 = local_30;
                      if ((iVar8 == -1) || (*(ulong *)(lVar10 + 0x70) < local_30)) break;
                      if (bVar5 == 0x11) {
                        lVar18 = FUN_710079a0f0(param_1,1);
                        if ((((lVar18 == 0) || (uVar35 = uVar9 - 1, (uVar9 & 1) == 0)) ||
                            (uVar35 < (ulong)(*(long *)(lVar10 + 0x98) << 2))) ||
                           (*(long *)(lVar10 + 0xb0) != 0)) break;
                        lVar18 = FUN_710081c1c0(uVar35);
                        *(long *)(lVar10 + 0xb0) = lVar18;
                        if (lVar18 == 0) break;
                        uVar9 = uVar35;
                        if (uVar35 == 0) {
                          if (*(long *)(lVar10 + 0x98) != 0) {
                            *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(lVar10 + 0xb0);
                            break;
                          }
                        }
                        else {
                          do {
                            uVar24 = uVar9;
                            if (0x10000 < uVar9) {
                              uVar24 = 0x10000;
                            }
                            lVar33 = FUN_710079a0f0(param_1,uVar24);
                            if (lVar33 == 0) goto LAB_710079bf78;
                            FUN_710080f900(lVar18,lVar33,uVar24);
                            uVar9 = uVar9 - uVar24;
                            lVar18 = lVar18 + uVar24;
                          } while (uVar9 != 0);
                          uVar24 = *(ulong *)(lVar10 + 0x98);
                          pcVar15 = *(char **)(lVar10 + 0xb0);
                          uVar9 = 0;
                          if (uVar24 != 0) {
                            do {
                              lVar18 = uVar9 * 0x58;
                              *(char **)(lVar14 + lVar18 + 8) = pcVar15;
                              pcVar1 = pcVar15;
                              while( true ) {
                                if (uVar35 < 2) goto LAB_710079bf78;
                                if ((*pcVar1 == '\0') && (pcVar1[1] == '\0')) break;
                                uVar35 = uVar35 - 2;
                                pcVar1 = pcVar1 + 2;
                              }
                              uVar9 = (ulong)((int)uVar9 + 1);
                              *(long *)(lVar14 + lVar18) = (long)pcVar1 - (long)pcVar15;
                              pcVar15 = pcVar1 + 2;
                              uVar35 = uVar35 - 2;
                            } while (uVar9 < uVar24);
                          }
                        }
                        goto LAB_710079bae4;
                      }
                      if (bVar5 < 0x12) {
                        if (bVar5 == 0xf) {
                          if (iVar6 != 0) {
                            if (local_18 != (byte *)0x0) break;
                            local_18 = (byte *)FUN_710080e9e0((long)iVar6,1);
                            if (local_18 == (byte *)0x0) break;
                            uVar26 = 0;
                            uVar34 = 0;
                            pbVar17 = local_18 + iVar6;
                            pbVar36 = local_18;
                            do {
                              if (uVar34 == 0) {
                                pbVar37 = (byte *)FUN_710079a0f0(param_1,1);
                                uVar34 = 0x20;
                                if (pbVar37 == (byte *)0x0) goto LAB_710079bf78;
                                bVar5 = *pbVar37;
                                uVar26 = (uint)bVar5;
                                *pbVar36 = bVar5 >> 7;
                                if (pbVar17 == pbVar36 + 1) break;
                                pbVar37 = pbVar36 + 2;
                                pbVar36[1] = bVar5 >> 6 & 1;
                                pbVar36 = pbVar37;
                                if (pbVar17 == pbVar37) break;
                              }
                              pbVar37 = pbVar36 + 1;
                              *pbVar36 = (uVar26 & uVar34) != 0;
                              uVar34 = uVar34 >> 1;
                              pbVar36 = pbVar37;
                            } while (pbVar37 != pbVar17);
                            goto LAB_710079bae4;
                          }
LAB_710079c3a8:
                          lVar18 = FUN_710079a0f0(param_1,local_30);
                          if (lVar18 == 0) break;
                        }
                        else {
                          if (bVar5 == 0x10) {
                            if (iVar6 == 0) goto LAB_710079c3a8;
                            if (local_10 != (byte *)0x0) break;
                            local_10 = (byte *)FUN_710080e9e0((long)iVar6,1);
                            if (local_10 == (byte *)0x0) break;
                            uVar26 = 0;
                            uVar34 = 0;
                            pbVar17 = local_10 + iVar6;
                            pbVar36 = local_10;
                            do {
                              if (uVar34 == 0) {
                                pbVar37 = (byte *)FUN_710079a0f0(param_1,1);
                                uVar34 = 0x20;
                                if (pbVar37 == (byte *)0x0) goto LAB_710079bf78;
                                bVar5 = *pbVar37;
                                uVar26 = (uint)bVar5;
                                *pbVar36 = bVar5 >> 7;
                                if (pbVar17 == pbVar36 + 1) break;
                                pbVar37 = pbVar36 + 2;
                                pbVar36[1] = bVar5 >> 6 & 1;
                                pbVar36 = pbVar37;
                                if (pbVar37 == pbVar17) break;
                              }
                              pbVar37 = pbVar36 + 1;
                              *pbVar36 = (uVar34 & uVar26) != 0;
                              uVar34 = uVar34 >> 1;
                              pbVar36 = pbVar37;
                            } while (pbVar37 != pbVar17);
                            goto LAB_710079bae4;
                          }
                          if (bVar5 != 0xe) goto LAB_710079bf68;
                          if (local_20 != 0) break;
                          uVar9 = *(ulong *)(lVar10 + 0x98);
                          lVar18 = FUN_710080e9e0(uVar9,1);
                          local_20 = lVar18;
                          if (lVar18 == 0) break;
                          if (uVar9 != 0) {
                            uVar25 = 0;
                            uVar34 = 0;
                            uVar35 = 0;
                            uVar26 = 0;
                            do {
                              if (uVar26 == 0) {
                                pbVar17 = (byte *)FUN_710079a0f0(param_1,1);
                                uVar34 = uVar34 + 1;
                                uVar26 = 0x40;
                                if (pbVar17 == (byte *)0x0) goto LAB_710079bf78;
                                uVar25 = (uint)*pbVar17;
                                *(byte *)(lVar18 + uVar35) = *pbVar17 >> 7;
                                uVar35 = (ulong)uVar34;
                                if (uVar9 <= uVar35) break;
                              }
                              uVar34 = uVar34 + 1;
                              *(bool *)(lVar18 + uVar35) = (uVar25 & uVar26) != 0;
                              uVar35 = (ulong)uVar34;
                              uVar26 = uVar26 >> 1;
                            } while (uVar35 < uVar9);
                            if (*(ulong *)(lVar10 + 0x98) != 0) {
                              iVar6 = 0;
                              uVar9 = 0;
                              do {
                                pcVar15 = (char *)(local_20 + uVar9);
                                uVar9 = (ulong)((int)uVar9 + 1);
                                if (*pcVar15 != '\0') {
                                  iVar6 = iVar6 + 1;
                                }
                              } while (uVar9 < *(ulong *)(lVar10 + 0x98));
                              goto LAB_710079bae4;
                            }
                          }
                        }
                        iVar6 = 0;
                        goto LAB_710079bae4;
                      }
                      if (bVar5 == 0x15) {
                        pcVar15 = (char *)FUN_710079a0f0(param_1,2);
                        if ((pcVar15 == (char *)0x0) || (cVar4 = *pcVar15, local_8 != 0)) break;
                        uVar9 = *(ulong *)(lVar10 + 0x98);
                        lVar18 = FUN_710080e9e0(uVar9,1);
                        local_8 = lVar18;
                        if (lVar18 == 0) break;
                        if (cVar4 == '\0') {
                          if (uVar9 == 0) goto LAB_710079bae4;
                          uVar25 = 0;
                          uVar34 = 0;
                          uVar35 = 0;
                          uVar26 = 0;
                          do {
                            if (uVar26 == 0) {
                              uVar34 = uVar34 + 1;
                              pbVar17 = (byte *)FUN_710079a0f0(param_1,1);
                              uVar26 = 0x40;
                              if (pbVar17 == (byte *)0x0) goto LAB_710079bf78;
                              uVar25 = (uint)*pbVar17;
                              *(byte *)(lVar18 + uVar35) = *pbVar17 >> 7;
                              uVar35 = (ulong)uVar34;
                              if (uVar9 <= uVar35) break;
                            }
                            uVar34 = uVar34 + 1;
                            *(bool *)(lVar18 + uVar35) = (uVar25 & uVar26) != 0;
                            uVar35 = (ulong)uVar34;
                            uVar26 = uVar26 >> 1;
                          } while (uVar35 < uVar9);
                        }
                        else {
                          FUN_7100808340(lVar18,1);
                        }
                        uVar9 = *(ulong *)(lVar10 + 0x98);
                        uVar35 = 0;
                        if (uVar9 != 0) {
                          do {
                            if (*(char *)(local_8 + uVar35) != '\0') {
                              puVar16 = (undefined4 *)FUN_710079a0f0(param_1,4);
                              if (puVar16 == (undefined4 *)0x0) goto LAB_710079bf78;
                              uVar9 = *(ulong *)(lVar10 + 0x98);
                              *(undefined4 *)(lVar14 + uVar35 * 0x58 + 0x54) = *puVar16;
                            }
                            uVar35 = (ulong)((int)uVar35 + 1);
                          } while (uVar35 < uVar9);
                        }
                        goto LAB_710079bae4;
                      }
                      if (bVar5 < 0x16) {
                        lVar33 = **(long **)(param_1 + 0x818);
                        lVar18 = *(long *)(lVar33 + 0xa0);
                        lVar19 = FUN_710080e9e0(*(undefined8 *)(lVar33 + 0x98),1);
                        if (lVar19 == 0) break;
                        pcVar15 = (char *)FUN_710079a0f0(param_1,1);
                        if (pcVar15 != (char *)0x0) {
                          uVar9 = *(ulong *)(lVar33 + 0x98);
                          if (*pcVar15 == '\0') {
                            if (uVar9 != 0) {
                              uVar25 = 0;
                              uVar34 = 0;
                              uVar35 = 0;
                              uVar26 = 0;
                              do {
                                if (uVar26 == 0) {
                                  uVar34 = uVar34 + 1;
                                  pbVar17 = (byte *)FUN_710079a0f0(param_1,1);
                                  uVar26 = 0x40;
                                  if (pbVar17 == (byte *)0x0) goto LAB_710079c4b0;
                                  uVar25 = (uint)*pbVar17;
                                  *(byte *)(lVar19 + uVar35) = *pbVar17 >> 7;
                                  uVar35 = (ulong)uVar34;
                                  if (uVar9 <= uVar35) break;
                                }
                                uVar34 = uVar34 + 1;
                                *(bool *)(lVar19 + uVar35) = (uVar25 & uVar26) != 0;
                                uVar35 = (ulong)uVar34;
                                uVar26 = uVar26 >> 1;
                              } while (uVar35 < uVar9);
                            }
                          }
                          else {
                            FUN_7100808340(lVar19,1);
                          }
                          pcVar15 = (char *)FUN_710079a0f0(param_1,1);
                          if ((pcVar15 != (char *)0x0) &&
                             ((*pcVar15 == '\0' ||
                              ((iVar8 = FUN_710079a1e0(param_1,&local_28), iVar8 != -1 &&
                               (local_28 < 0x5f5e101)))))) {
                            uVar35 = 0;
                            uVar9 = *(ulong *)(lVar33 + 0x98);
                            if (uVar9 != 0) {
                              do {
                                if (*(char *)(lVar19 + uVar35) != '\0') {
                                  puVar20 = (ulong *)FUN_710079a0f0(param_1,8);
                                  if (puVar20 == (ulong *)0x0) goto LAB_710079c4b0;
                                  uVar9 = *puVar20;
                                  lVar2 = lVar18 + uVar35 * 0x58;
                                  if (bVar5 == 0x13) {
                                    if (uVar9 < 0x19db1ded53e8000) {
                                      lVar28 = 0;
                                      uVar24 = 0;
                                    }
                                    else {
                                      uVar24 = (uVar9 + 0xfe624e212ac18000) / 10000000;
                                      lVar28 = (long)((int)(uVar9 + 0xfe624e212ac18000) +
                                                     (int)uVar24 * -10000000) * 100;
                                    }
                                    *(ulong *)(lVar2 + 0x28) = uVar24;
                                    *(long *)(lVar2 + 0x40) = lVar28;
                                    uVar9 = *(ulong *)(lVar33 + 0x98);
                                    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 2;
                                  }
                                  else if (bVar5 == 0x14) {
                                    if (uVar9 < 0x19db1ded53e8000) {
                                      lVar28 = 0;
                                      uVar24 = 0;
                                    }
                                    else {
                                      uVar24 = (uVar9 + 0xfe624e212ac18000) / 10000000;
                                      lVar28 = (long)((int)(uVar9 + 0xfe624e212ac18000) +
                                                     (int)uVar24 * -10000000) * 100;
                                    }
                                    *(ulong *)(lVar2 + 0x20) = uVar24;
                                    *(long *)(lVar2 + 0x38) = lVar28;
                                    uVar9 = *(ulong *)(lVar33 + 0x98);
                                    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 1;
                                  }
                                  else {
                                    if (uVar9 < 0x19db1ded53e8000) {
                                      lVar28 = 0;
                                      uVar24 = 0;
                                    }
                                    else {
                                      uVar24 = (uVar9 + 0xfe624e212ac18000) / 10000000;
                                      lVar28 = (long)((int)(uVar9 + 0xfe624e212ac18000) +
                                                     (int)uVar24 * -10000000) * 100;
                                    }
                                    *(ulong *)(lVar2 + 0x30) = uVar24;
                                    *(long *)(lVar2 + 0x48) = lVar28;
                                    uVar9 = *(ulong *)(lVar33 + 0x98);
                                    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 4;
                                  }
                                }
                                uVar35 = (ulong)((int)uVar35 + 1);
                              } while (uVar35 < uVar9);
                            }
                            FUN_710081c200(lVar19);
                            goto LAB_710079bae4;
                          }
                        }
LAB_710079c4b0:
                        FUN_710081c200(lVar19);
                        break;
                      }
                      if ((bVar5 == 0x19) && (local_30 == 0)) goto LAB_710079bae4;
LAB_710079bf68:
                      lVar18 = FUN_710079a0f0(param_1,local_30);
                    } while (lVar18 != 0);
                  }
                }
              }
            }
LAB_710079bf78:
            piVar11 = (int *)FUN_710080e8e0();
            if (*piVar11 == 0xc) {
              FUN_71007a0da0(param_1,0xffffffff,"Couldn\'t allocate memory");
            }
            else {
              FUN_71007a0da0(param_1,0xffffffff,"Damaged 7-Zip archive");
            }
          }
          else if (*pcVar15 == '\x17') {
            lVar10 = **(long **)(param_1 + 0x818);
            puVar16 = (undefined4 *)FUN_710080e8e0();
            *puVar16 = 0;
            iVar6 = FUN_710079a410(param_1,puVar38);
            if (iVar6 == -1) {
              piVar11 = (int *)FUN_710080e8e0();
              if (*piVar11 != 0xc) goto LAB_710079c884;
              FUN_71007a0da0(param_1,0xffffffff,"Couldn\'t allocate memory");
            }
            else if ((puVar38[1] == 0) || (puVar38[6] == 0)) {
LAB_710079c884:
              FUN_71007a0da0(param_1,0xffffffff,"Malformed 7-Zip archive");
            }
            else {
              uVar9 = *puVar38 + *(long *)puVar38[2];
              if ((*(ulong *)(lVar10 + 0x80) < uVar9) ||
                 ((long)(*puVar38 | uVar9) < 0 || *(long *)puVar38[2] == 0)) {
                pcVar15 = "Malformed Header offset";
              }
              else {
                if (puVar38[0xf] == (ulong)uVar7) {
                  uVar9 = puVar38[7];
                  bVar3 = *(char *)(uVar9 + 0x48) != '\0';
                  if (bVar3) {
                    uVar7 = *(uint *)(uVar9 + 0x4c);
                  }
                  if (puVar38[0x24] != 0) {
                    lVar10 = **(long **)(param_1 + 0x818);
                    if (*(long *)(lVar10 + 0x120) != 0) {
                      FUN_7100796470(param_1,*(long *)(lVar10 + 0x120));
                      lVar14 = *(long *)(lVar10 + 0x120);
                      uVar9 = puVar38[7];
                      *(undefined8 *)(lVar10 + 0x120) = 0;
                      *(long *)(lVar10 + 0xf8) = *(long *)(lVar10 + 0xf8) + lVar14;
                    }
                  }
                  iVar6 = FUN_7100799510(param_1,uVar9,1);
                  if (iVar6 == 0) {
                    puVar38[0xe] = puVar38[0x21];
                    iVar6 = FUN_7100798090(param_1);
                  }
                  FUN_7100798460(puVar38);
                  puVar38[0xc] = 0;
                  *puVar38 = 0;
                  puVar38[1] = 0;
                  puVar38[2] = 0;
                  puVar38[3] = 0;
                  puVar38[4] = 0;
                  puVar38[5] = 0;
                  puVar38[6] = 0;
                  puVar38[7] = 0;
                  puVar38[8] = 0;
                  puVar38[9] = 0;
                  puVar38[10] = 0;
                  puVar38[0xb] = 0;
                  if (-1 < iVar6) {
                    puVar38[0xf] = 0;
                    *(undefined4 *)((long)puVar38 + 0x6c) = 1;
                    goto LAB_710079ba08;
                  }
                  goto LAB_710079b520;
                }
                pcVar15 = "Damaged 7-Zip archive";
              }
              FUN_71007a0da0(param_1,0xffffffff,pcVar15);
            }
            FUN_7100798460(puVar38);
            puVar38[0xc] = 0;
            *puVar38 = 0;
            puVar38[1] = 0;
            puVar38[2] = 0;
            puVar38[3] = 0;
            puVar38[4] = 0;
            puVar38[5] = 0;
            puVar38[6] = 0;
            puVar38[7] = 0;
            puVar38[8] = 0;
            puVar38[9] = 0;
            puVar38[10] = 0;
            puVar38[0xb] = 0;
          }
          else {
            FUN_71007a0da0(param_1,0xffffffff,"Unexpected Property ID = %X");
          }
        }
        else {
          FUN_71007a0da0(param_1,0xffffffff,"Not 7-Zip archive file");
        }
      }
    }
LAB_710079b520:
    iVar6 = -0x1e;
LAB_710079b524:
    FUN_710081c200(local_20);
    FUN_710081c200(local_18);
    FUN_710081c200(local_10);
    FUN_710081c200(local_8);
    return iVar6;
  }
  uVar9 = puVar38[0x12];
  puVar32 = (undefined8 *)(puVar38[0x15] + 0x58);
  puVar38[0x15] = (ulong)puVar32;
  goto LAB_710079b200;
LAB_710079c5f8:
  do {
    lVar19 = uVar24 * 0x58;
    lVar33 = lVar14 + lVar19;
    uVar26 = *(uint *)(lVar33 + 0x18);
    uVar21 = (undefined4)uVar35;
    uVar31 = 0x8124;
    if ((local_20 == 0) || (*(char *)(local_20 + uVar24) == '\0')) {
      uVar26 = uVar26 | 0x10;
      uVar25 = *(uint *)(lVar33 + 0x54);
      *(uint *)(lVar33 + 0x18) = uVar26;
      if ((uVar25 >> 0xf & 1) == 0) {
        if ((uVar25 >> 4 & 1) == 0) {
          if ((uVar25 & 1) == 0) {
            uVar31 = 0x81a4;
          }
          *(undefined4 *)(lVar33 + 0x50) = uVar31;
        }
        else {
          uVar31 = 0x416d;
          if ((uVar25 & 1) == 0) {
            uVar31 = 0x41ed;
          }
          *(undefined4 *)(lVar33 + 0x50) = uVar31;
        }
      }
      else {
        *(uint *)(lVar33 + 0x50) = uVar25 >> 0x10;
      }
LAB_710079c62c:
      if (*(ulong *)(lVar10 + 0x48) <= (ulong)(long)local_4c) goto LAB_710079bf78;
      iVar8 = *(int *)(lVar33 + 0x50);
      if (iVar8 == 0) {
        iVar8 = 0x81b6;
      }
      *(int *)(lVar33 + 0x50) = iVar8;
      if (*(char *)(*(long *)(lVar10 + 0x58) + (long)local_4c) == '\0') {
        uVar26 = *(uint *)(lVar33 + 0x18);
        iVar8 = local_4c + 1;
        iVar30 = local_4c;
LAB_710079c664:
        uVar26 = uVar26 & 0x10;
        *(int *)(lVar33 + 0x14) = iVar30;
        local_4c = iVar8;
        if ((uVar25 & 1) != 0) {
LAB_710079c66c:
          *(uint *)(lVar33 + 0x50) = *(uint *)(lVar33 + 0x50) & 0xffffff6d;
          local_4c = iVar8;
        }
        iVar8 = local_4c;
        if (uVar26 == 0) {
          uVar9 = *(ulong *)(lVar10 + 0x98);
          goto LAB_710079c5dc;
        }
      }
      else {
        *(int *)(lVar33 + 0x14) = local_4c;
        *(uint *)(lVar33 + 0x18) = uVar26 | 8;
        iVar8 = local_4c + 1;
        if ((uVar25 & 1) != 0) {
          uVar26 = 0x10;
          goto LAB_710079c66c;
        }
      }
      if (uVar34 == 0) {
        while( true ) {
          if (*(ulong *)(lVar10 + 0x30) <= uVar35) goto LAB_710079bf78;
          if (*(long *)(lVar18 + uVar35 * 0x68 + 0x50) != 0) break;
          uVar35 = (ulong)((int)uVar35 + 1);
        }
      }
      uVar9 = *(ulong *)(lVar10 + 0x98);
      uVar34 = uVar34 + 1;
      *(int *)(lVar33 + 0x10) = (int)uVar35;
      local_4c = iVar8;
      if (*(ulong *)(lVar18 + uVar35 * 0x68 + 0x50) <= (ulong)uVar34) {
        uVar34 = 0;
        uVar35 = (ulong)((int)uVar35 + 1);
      }
    }
    else {
      uVar25 = *(uint *)(lVar33 + 0x54);
      if ((uVar25 >> 0xf & 1) == 0) {
        if ((uVar25 >> 4 & 1) == 0) {
          uVar29 = 0x81a4;
          if ((uVar25 & 1) != 0) {
            uVar29 = 0x8124;
          }
        }
        else {
          uVar29 = 0x41ed;
          if ((uVar25 & 1) != 0) {
            uVar29 = 0x416d;
          }
        }
      }
      else {
        uVar29 = uVar25 >> 0x10;
      }
      *(uint *)(lVar33 + 0x50) = uVar29;
      if ((uVar26 & 0x10) != 0) goto LAB_710079c62c;
      if ((local_18 == (byte *)0x0) ||
         (lVar2 = (long)iVar6, iVar6 = iVar6 + 1, local_18[lVar2] == 0)) {
        if (uVar29 == 0) {
          *(undefined4 *)(lVar33 + 0x50) = 0x41ff;
        }
        else if ((uVar29 & 0xf000) != 0x4000) {
          *(uint *)(lVar33 + 0x50) = uVar29 & 0xffff0fff | 0x4000;
        }
LAB_710079c6b8:
        uVar27 = *(ulong *)(lVar14 + lVar19);
        if (uVar27 < 2) {
LAB_710079c7f8:
          *(undefined4 *)(lVar33 + 0x14) = 0xffffffff;
          if ((uVar25 & 1) != 0) {
            *(uint *)(lVar33 + 0x50) = *(uint *)(lVar33 + 0x50) & 0xffffff6d;
          }
          goto LAB_710079c5dc;
        }
        lVar2 = *(long *)(lVar33 + 8) + uVar27;
        if ((*(char *)(lVar2 + -2) == '/') && (*(char *)(lVar2 + -1) == '\0')) goto LAB_710079c7f8;
        *(undefined1 *)(*(long *)(lVar33 + 8) + uVar27) = 0x2f;
        iVar30 = -1;
        *(undefined1 *)(*(long *)(lVar33 + 8) + *(long *)(lVar14 + lVar19) + 1) = 0;
        uVar26 = *(uint *)(lVar33 + 0x18);
        uVar25 = *(uint *)(lVar33 + 0x54);
        *(long *)(lVar14 + lVar19) = *(long *)(lVar14 + lVar19) + 2;
        iVar8 = local_4c;
        goto LAB_710079c664;
      }
      if (uVar29 == 0) {
        if ((uVar25 & 1) == 0) {
          uVar31 = 0x81b6;
        }
        *(undefined4 *)(lVar33 + 0x14) = 0xffffffff;
        *(undefined4 *)(lVar33 + 0x50) = uVar31;
      }
      else {
        if ((uVar29 & 0xf000) == 0x4000) goto LAB_710079c6b8;
        *(undefined4 *)(lVar33 + 0x14) = 0xffffffff;
        if ((uVar25 & 1) != 0) {
          *(uint *)(lVar33 + 0x50) = uVar29 & 0xffffff6d;
        }
      }
LAB_710079c5dc:
      if (uVar34 == 0) {
        uVar21 = 0xffffffff;
      }
      *(undefined4 *)(lVar33 + 0x10) = uVar21;
    }
    uVar24 = (ulong)((int)uVar24 + 1);
  } while (uVar24 < uVar9);
LAB_710079bc48:
  pcVar15 = (char *)FUN_710079a0f0(param_1,1);
  if (((pcVar15 == (char *)0x0) || (*pcVar15 != '\0')) ||
     ((bVar3 && (puVar38[0xf] != (ulong)uVar7)))) {
LAB_710079c7d4:
    FUN_71007a0da0(param_1,0xffffffff,"Malformed 7-Zip archive");
    goto LAB_710079b520;
  }
  *(undefined4 *)(puVar38 + 0xd) = 0;
  puVar38[0x1e] = 0;
  puVar38[0x21] = 0;
  puVar38[0x22] = 0;
  puVar38[0x24] = 0;
  FUN_710081c200(local_20);
  FUN_710081c200(local_18);
  FUN_710081c200(local_10);
  FUN_710081c200(local_8);
  uVar9 = puVar38[0x13];
  puVar32 = (undefined8 *)puVar38[0x14];
  puVar38[0x12] = uVar9;
  puVar38[0x15] = (ulong)puVar32;
LAB_710079b200:
  if (uVar9 == 0 || puVar32 == (undefined8 *)0x0) {
    return 1;
  }
  puVar38[0x17] = 0;
  *(undefined1 *)(puVar38 + 0x1a) = 0;
  puVar38[0x12] = uVar9 - 1;
  uVar9 = FUN_7100706cc0(0,0,0);
  puVar38[0x19] = uVar9;
  if (puVar38[0xa19] == 0) {
    uVar9 = FUN_71007a0690(param_1,"UTF-16LE",1);
    puVar38[0xa19] = uVar9;
    if (uVar9 == 0) {
      return -0x1e;
    }
  }
  if ((ulong)*(uint *)(puVar32 + 2) < puVar38[6]) {
    lVar10 = (ulong)*(uint *)(puVar32 + 2) * 0x68;
    puVar20 = (ulong *)(puVar38[7] + lVar10);
    if ((puVar20 != (ulong *)0x0) && (*(long *)(puVar38[7] + lVar10) != 0)) {
      uVar9 = 0;
      lVar10 = 0;
      do {
        lVar14 = *(long *)(puVar20[1] + lVar10);
        if (((lVar14 == 0x6f10303) || (lVar14 == 0x6f10701)) || (lVar14 == 0x6f10101)) {
          FUN_7100795000(param_2,1);
          *(undefined4 *)(puVar38 + 0xa22) = 1;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x28;
      } while (uVar9 < *puVar20);
    }
  }
  if ((int)puVar38[0xa22] == -1) {
    *(undefined4 *)(puVar38 + 0xa22) = 0;
  }
  iVar6 = FUN_7100794f90(param_2,puVar32[1],*puVar32,puVar38[0xa19]);
  if (iVar6 != 0) {
    piVar11 = (int *)FUN_710080e8e0();
    if (*piVar11 == 0xc) {
      FUN_71007a0da0(param_1,0xc,"Can\'t allocate memory for Pathname");
      return -0x1e;
    }
    iVar6 = -0x14;
    uVar12 = FUN_71007a0780(puVar38[0xa19]);
    FUN_71007a0da0(param_1,0x4f,"Pathname cannot be converted from %s to current locale.",uVar12);
  }
  FUN_7100794f20(param_2,*(undefined4 *)(puVar32 + 10));
  uVar7 = *(uint *)(puVar32 + 3);
  if ((uVar7 & 1) == 0) {
    if ((uVar7 >> 2 & 1) != 0) goto LAB_710079b604;
LAB_710079b2f8:
    if ((uVar7 >> 1 & 1) != 0) goto LAB_710079b61c;
LAB_710079b2fc:
    uVar7 = *(uint *)((long)puVar32 + 0x14);
    if (uVar7 == 0xffffffff) goto LAB_710079b638;
LAB_710079b308:
    puVar38[0x18] = *(ulong *)(puVar38[10] + (ulong)uVar7 * 8);
    FUN_7100794fa0(param_2);
    uVar7 = *(uint *)((long)puVar32 + 0x54);
  }
  else {
    FUN_7100794f30(param_2,puVar32[4],puVar32[7]);
    uVar7 = *(uint *)(puVar32 + 3);
    if ((uVar7 >> 2 & 1) == 0) goto LAB_710079b2f8;
LAB_710079b604:
    FUN_7100794ec0(param_2,puVar32[6],puVar32[9]);
    if ((*(uint *)(puVar32 + 3) >> 1 & 1) == 0) goto LAB_710079b2fc;
LAB_710079b61c:
    FUN_7100794e60(param_2,puVar32[5],puVar32[8]);
    uVar7 = *(uint *)((long)puVar32 + 0x14);
    if (uVar7 != 0xffffffff) goto LAB_710079b308;
LAB_710079b638:
    puVar38[0x18] = 0;
    FUN_7100794fa0(param_2,0);
    uVar7 = *(uint *)((long)puVar32 + 0x54);
  }
  if (((uVar7 & 7) != 0) &&
     (puVar13 = (undefined8 *)FUN_710081c1c0(0x16), puVar13 != (undefined8 *)0x0)) {
    if ((uVar7 & 1) == 0) {
      puVar22 = puVar13;
      if ((uVar7 >> 1 & 1) != 0) {
LAB_710079bef8:
        puVar23 = (undefined8 *)((long)puVar22 + 7);
        *puVar22 = 0x2c6e6564646968;
        uVar7 = *(uint *)((long)puVar32 + 0x54);
        goto joined_r0x00710079beec;
      }
      if ((uVar7 >> 2 & 1) != 0) goto LAB_710079b938;
    }
    else {
      puVar23 = (undefined8 *)((long)puVar13 + 7);
      *puVar13 = 0x2c796c6e6f6472;
      uVar7 = *(uint *)((long)puVar32 + 0x54);
      puVar22 = puVar23;
      if ((uVar7 >> 1 & 1) != 0) goto LAB_710079bef8;
joined_r0x00710079beec:
      puVar22 = puVar23;
      if ((uVar7 >> 2 & 1) != 0) {
LAB_710079b938:
        puVar23 = (undefined8 *)((long)puVar22 + 7);
        *puVar22 = 0x2c6d6574737973;
      }
      if (puVar13 < puVar23) {
        *(undefined1 *)((long)puVar23 + -1) = 0;
        FUN_7100794d60(param_2,puVar13);
      }
    }
    FUN_710081c200(puVar13);
  }
  uVar7 = *(uint *)(puVar32 + 10);
  if (puVar38[0x18] == 0) {
    *(undefined1 *)(puVar38 + 0x1a) = 1;
    if ((uVar7 & 0xf000) != 0xa000) goto LAB_710079b348;
    lVar33 = 0;
LAB_710079beb4:
    *(uint *)(puVar32 + 10) = uVar7 & 0xffff0fff | 0x8000;
    FUN_7100794f20(param_2);
  }
  else {
    if ((uVar7 & 0xf000) != 0xa000) goto LAB_710079b348;
    lVar10 = 0;
    lVar14 = 0;
    do {
      iVar8 = FUN_7100799f30(param_1,&local_38,&local_30,&local_28);
      uVar9 = local_30;
      if (iVar8 + 0x14 < 0 != SCARRY4(iVar8,0x14)) {
        FUN_710081c200();
        return iVar8;
      }
      lVar18 = local_30 + lVar10;
      auVar39 = FUN_71008141e0(lVar14,lVar18 + 1);
      lVar33 = auVar39._0_8_;
      if (lVar33 == 0) {
        FUN_710081c200(lVar14,auVar39._8_8_,uVar9);
        FUN_71007a0da0(param_1,0xc,"Can\'t allocate memory for Symname");
        return -0x1e;
      }
      FUN_710080f900(lVar33 + lVar10,local_38);
      lVar10 = lVar18;
      lVar14 = lVar33;
    } while (puVar38[0x18] != 0);
    if (lVar18 == 0) {
      uVar7 = *(uint *)(puVar32 + 10);
      goto LAB_710079beb4;
    }
    *(undefined1 *)(lVar33 + lVar18) = 0;
    FUN_7100794fc0(param_2,lVar33);
  }
  FUN_710081c200(lVar33);
  FUN_7100794fa0(param_2,0);
LAB_710079b348:
  *(undefined4 *)(puVar38 + 0xa1a) = 0x695a2d37;
  *(undefined2 *)((long)puVar38 + 0x50d4) = 0x70;
  *(ulong **)(param_1 + 0x18) = puVar38 + 0xa1a;
  return iVar6;
}



// ===== FUN_710079c900 @ 710079c900 (size=240) =====

undefined8 FUN_710079c900(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_support_format_7zip");
  if (iVar1 != -0x1e) {
    lVar2 = FUN_710080e9e0(1,0x5118);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x5110) = 0xffffffff;
      iVar1 = FUN_7100796090(param_1,lVar2,&DAT_7100839c80,&LAB_71007982e0,0,FUN_710079b1a0,
                             FUN_7100799f30,FUN_7100799dc0,0,FUN_7100798570,&LAB_71007972f0,
                             &LAB_7100797300);
      if (iVar1 != 0) {
        FUN_710081c200(lVar2);
      }
      return 0;
    }
    FUN_71007a0da0(param_1,0xc,"Can\'t allocate 7zip data");
  }
  return 0xffffffe2;
}



// ===== FUN_710079c9f0 @ 710079c9f0 (size=236) =====

undefined8 FUN_710079c9f0(byte *param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  if (uVar2 < 0x110000) {
    bVar1 = (byte)param_3;
    if (uVar2 < 0x80) {
      if (param_2 == 0) {
        return 0;
      }
      *param_1 = bVar1;
      return 1;
    }
    if (uVar2 < 0x800) {
      if (param_2 < 2) {
        return 0;
      }
      *param_1 = (byte)(uVar2 >> 6) | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
      return 2;
    }
    if (0xffff < uVar2) {
      if (param_2 < 4) {
        return 0;
      }
      *param_1 = (byte)(uVar2 >> 0x12) | 0xf0;
      param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
      param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
      return 4;
    }
  }
  else {
    param_3 = 0xfffd;
  }
  if (param_2 < 3) {
    return 0;
  }
  *param_1 = (byte)(param_3 >> 0xc) | 0xe0;
  param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
  param_1[2] = (byte)param_3 & 0x3f | 0x80;
  return 3;
}



// ===== FUN_710079cae0 @ 710079cae0 (size=160) =====

undefined4 FUN_710079cae0(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0x3a2;
  bVar3 = 0x1a0 < param_1;
  iVar7 = 0;
  uVar5 = 0x1d1;
  if (0x1a1 < param_1) goto LAB_710079cb5c;
  do {
    lVar1 = ((-(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1) + (long)(int)uVar5) * 4;
    if (bVar3) {
      if (*(uint *)(&UNK_71009c9d5c + lVar1) < param_2) goto LAB_710079cb5c;
      if (*(uint *)(&UNK_71009c9d5c + lVar1) <= param_2) {
        return *(undefined4 *)(&UNK_71009c9d60 + lVar1);
      }
    }
    iVar8 = (int)uVar5 + -1;
    iVar4 = iVar8 + iVar7;
    iVar6 = iVar4 - (iVar4 >> 0x1f);
    if (iVar8 < iVar7) {
      return 0;
    }
    while( true ) {
      uVar2 = iVar6 >> 1;
      uVar5 = (ulong)(uint)(iVar4 / 2);
      bVar3 = *(uint *)(&UNK_71009c9d58 +
                       ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) +
                       (long)(int)uVar2) * 4) <= param_1;
      if (!bVar3 || param_1 ==
                    *(uint *)(&UNK_71009c9d58 +
                             ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) +
                             (long)(int)uVar2) * 4)) break;
LAB_710079cb5c:
      iVar7 = (int)uVar5 + 1;
      iVar4 = iVar8 + iVar7;
      iVar6 = iVar4 - (iVar4 >> 0x1f);
      if (iVar8 < iVar7) {
        return 0;
      }
    }
  } while( true );
}



// ===== FUN_710079cb80 @ 710079cb80 (size=108) =====

long FUN_710079cb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x58);
    while ((plVar2 != (long *)0x0 &&
           ((iVar1 = FUN_710080aec0(plVar2[1],param_2), iVar1 != 0 ||
            (iVar1 = FUN_710080aec0(plVar2[2],param_3), iVar1 != 0))))) {
      plVar2 = (long *)*plVar2;
    }
  }
  return (long)plVar2;
}



// ===== FUN_710079cbf0 @ 710079cbf0 (size=364) =====

char * FUN_710079cbf0(char *param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 local_10;
  char cStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  char local_8;
  
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    if ((cVar2 != '\0') && (uVar3 = FUN_710081ce00(), uVar3 < 0x10)) {
      pcVar4 = (char *)&local_10;
      pcVar6 = param_1;
      do {
        cVar1 = cVar2 + -0x20;
        if (0x19 < (byte)(cVar2 + 0x9fU)) {
          cVar1 = cVar2;
        }
        pcVar5 = pcVar4 + 1;
        *pcVar4 = cVar1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar4 = pcVar5;
      } while (cVar2 != '\0');
      *pcVar5 = '\0';
      if (((local_10 == 0x2d465455) && (CONCAT11(uStack_b,cStack_c) == 0x38)) ||
         ((local_10 == 0x38465455 && (cStack_c == '\0')))) {
        param_1 = "UTF-8";
      }
      else {
        uVar7 = (undefined1)uStack_a;
        uVar8 = (undefined1)((ushort)uStack_a >> 8);
        if (((CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uStack_b,CONCAT14(cStack_c,local_10)))) ==
              0x454236312d465455) && (local_8 == '\0')) ||
           (CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uStack_b,CONCAT14(cStack_c,local_10)))) ==
            0x45423631465455)) {
          param_1 = "UTF-16BE";
        }
        else if (((CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uStack_b,CONCAT14(cStack_c,local_10)))) ==
                   0x454c36312d465455) && (local_8 == '\0')) ||
                (CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uStack_b,CONCAT14(cStack_c,local_10)))) ==
                 0x454c3631465455)) {
          param_1 = "UTF-16LE";
        }
        else if ((local_10 == 0x33395043) && (CONCAT11(uStack_b,cStack_c) == 0x32)) {
          param_1 = "CP932";
        }
      }
    }
    return param_1;
  }
  return (char *)0x0;
}



// ===== FUN_710079cd60 @ 710079cd60 (size=504) =====

uint FUN_710079cd60(uint *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  bVar1 = *param_2;
  if (bVar1 == 0) {
    return (uint)bVar1;
  }
  bVar2 = (&DAT_71009c6350)[(int)(uint)bVar1];
  if ((int)param_3 < (int)(uint)bVar2) {
    if (1 < (int)param_3) {
      uVar4 = 1;
      do {
        if ((param_2[uVar4] & 0xc0) != 0x80) goto LAB_710079cdec;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)param_3);
    }
    param_3 = -param_3;
    goto LAB_710079cdf0;
  }
  uVar3 = (uint)bVar1;
  uVar5 = (uint)bVar2;
  if (bVar2 == 3) {
    if ((param_2[1] & 0xc0) != 0x80) {
LAB_710079cdac:
      *param_1 = 0xfffd;
      return 0xffffffff;
    }
    if ((param_2[2] & 0xc0) != 0x80) {
LAB_710079cf50:
      param_3 = 0xfffffffe;
      goto LAB_710079cdf0;
    }
    uVar3 = (uVar3 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6 | param_2[2] & 0x3f;
    if (0x7ff < uVar3) {
LAB_710079ce78:
      *param_1 = uVar3;
      return uVar5;
    }
LAB_710079cec8:
    param_3 = 0xfffffffd;
  }
  else {
    if (bVar2 < 4) {
      if (bVar2 == 1) {
        *param_1 = uVar3 & 0x7f;
        return uVar5;
      }
      if (uVar5 == 2) {
        if ((param_2[1] & 0xc0) == 0x80) {
          *param_1 = (uVar3 & 0x1f) << 6 | param_2[1] & 0x3f;
          return 2;
        }
        goto LAB_710079cdac;
      }
    }
    else if (bVar2 == 4) {
      if ((param_2[1] & 0xc0) != 0x80) goto LAB_710079cdac;
      if ((param_2[2] & 0xc0) != 0x80) goto LAB_710079cf50;
      if ((param_2[3] & 0xc0) == 0x80) {
        uVar3 = (uVar3 & 7) << 0x12 | (param_2[1] & 0x3f) << 0xc |
                (param_2[2] & 0x3f) << 6 | param_2[3] & 0x3f;
        param_3 = 0xfffffffc;
        if (uVar3 - 0x10000 < 0x100000) goto LAB_710079ce78;
        goto LAB_710079cdf0;
      }
      goto LAB_710079cec8;
    }
    uVar3 = uVar3 + 0x40 & 0xff;
    if (uVar3 < 0x3e) {
      lVar6 = 1;
      uVar5 = (int)(char)(&DAT_71009c6308)[uVar3];
      if ((int)param_3 < (int)(char)(&DAT_71009c6308)[uVar3]) {
        uVar5 = param_3;
      }
      uVar4 = (ulong)uVar5;
      if (1 < (int)uVar5) {
        do {
          if ((param_2[lVar6] & 0xc0) != 0x80) {
            param_3 = -(int)lVar6;
            goto LAB_710079cdf0;
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar5);
      }
LAB_710079cdec:
      param_3 = -(int)uVar4;
    }
    else {
      if (0 < (int)param_3) {
        param_3 = 1;
      }
      param_3 = -param_3;
    }
  }
LAB_710079cdf0:
  *param_1 = 0xfffd;
  return param_3;
}



// ===== FUN_710079cf60 @ 710079cf60 (size=220) =====

ulong FUN_710079cf60(int *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int *extraout_x8;
  int *extraout_x8_00;
  int *piVar4;
  long extraout_x9;
  int extraout_w10;
  int local_8;
  int local_4;
  
  local_8 = 0;
  if (param_3 == 0) {
    local_8 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_710079cd60(&local_8);
    param_1 = extraout_x8;
    if ((int)uVar3 == 3) {
      piVar4 = extraout_x8;
      if (local_8 - 0xd800U < 0x400) {
        local_4 = 0;
        if (2 < param_3 - 3U) {
          uVar2 = FUN_710079cd60(&local_4,extraout_x9 + 3);
          if (uVar2 != 3) {
            uVar1 = -uVar2;
            if ((int)uVar2 < 0) {
              uVar1 = uVar2;
            }
            *extraout_x8_00 = 0xfffd;
            return (ulong)uVar1;
          }
          piVar4 = extraout_x8_00;
          if (local_4 - 0xdc00U < 0x400) {
            uVar3 = 6;
            local_8 = local_4 + 0x2400 + extraout_w10 * 0x400;
            param_1 = extraout_x8_00;
            goto LAB_710079cf90;
          }
        }
      }
      else if (0x3ff < local_8 - 0xdc00U) goto LAB_710079cf90;
      *piVar4 = 0xfffd;
      return 0xfffffffd;
    }
  }
LAB_710079cf90:
  *param_1 = local_8;
  return uVar3;
}



// ===== FUN_710079d040 @ 710079d040 (size=108) =====

undefined8 FUN_710079d040(ushort *param_1,ulong param_2,uint param_3)

{
  if (param_3 < 0x10000) {
    if (1 < param_2) {
      *param_1 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
      return 2;
    }
  }
  else if (3 < param_2) {
    param_3 = param_3 - 0x10000;
    *(char *)((long)param_1 + 3) = (char)param_3;
    *(byte *)param_1 = ((byte)(param_3 >> 0x12) & 3) - 0x28;
    *(char *)((long)param_1 + 1) = (char)(param_3 >> 10);
    *(byte *)(param_1 + 1) = ((byte)(param_3 >> 8) & 3) - 0x24;
    return 4;
  }
  return 0;
}



// ===== FUN_710079d0b0 @ 710079d0b0 (size=104) =====

undefined8 FUN_710079d0b0(undefined2 *param_1,ulong param_2,uint param_3)

{
  if (param_3 < 0x10000) {
    if (1 < param_2) {
      *param_1 = (short)param_3;
      return 2;
    }
  }
  else if (3 < param_2) {
    param_3 = param_3 - 0x10000;
    *(char *)(param_1 + 1) = (char)param_3;
    *(byte *)((long)param_1 + 1) = ((byte)(param_3 >> 0x12) & 3) - 0x28;
    *(char *)param_1 = (char)(param_3 >> 10);
    *(byte *)((long)param_1 + 3) = ((byte)(param_3 >> 8) & 3) - 0x24;
    return 4;
  }
  return 0;
}



// ===== FUN_710079d120 @ 710079d120 (size=28) =====

void FUN_710079d120(void)

{
  code *pcVar1;
  
  FUN_71007a0e30(1,"Programming error");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710079d138);
  (*pcVar1)();
}



// ===== FUN_710079d140 @ 710079d140 (size=184) =====

char * FUN_710079d140(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = (char *)FUN_710080e4e0(0);
    return pcVar2;
  }
  pcVar2 = *(char **)(param_1 + 0x48);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar2 = (char *)FUN_710080e4e0(0);
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar1 = FUN_7100290a20();
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
      return pcVar2;
    }
  }
  return pcVar2;
}



// ===== FUN_710079d1b0 @ 710079d1b0 (size=28) =====

void FUN_710079d1b0(void)

{
  code *pcVar1;
  
  FUN_71007a0e30(1,"Out of memory");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710079d1c8);
  (*pcVar1)();
}



// ===== FUN_710079d1d0 @ 710079d1d0 (size=160) =====

undefined8 FUN_710079d1d0(uint *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = 0xfffd;
      return 0xffffffff;
    }
    uVar2 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    uVar1 = uVar2 - 0xd800;
    if (uVar1 < 0x400) {
      if ((param_3 < 4) ||
         (uVar2 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8, 0x3ff < uVar2 - 0xdc00)) {
LAB_710079d244:
        *param_1 = 0xfffd;
        return 0xfffffffe;
      }
      uVar3 = 4;
      *param_1 = uVar2 + 0x2400 + uVar1 * 0x400;
    }
    else {
      if (uVar1 < 0x800) goto LAB_710079d244;
      uVar3 = 2;
      *param_1 = uVar2;
    }
  }
  return uVar3;
}



// ===== FUN_710079d300 @ 710079d300 (size=472) =====

void FUN_710079d300(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((uVar2 >> 4 & 1) != 0) {
    *(code **)(param_1 + 0x40) = FUN_710079fe70;
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
  if ((uVar2 & 0x1400) == 0) {
    if ((uVar2 & 0x2800) == 0) {
      if ((uVar2 >> 9 & 1) != 0) {
        uVar1 = uVar2 & 0x100;
        if ((uVar2 >> 7 & 1) == 0) {
          if ((uVar2 >> 6 & 1) == 0) {
            if (uVar1 != 0) {
              *(code **)(param_1 + 0x40) = FUN_710079d8e0;
              *(undefined4 *)(param_1 + 0x50) = 1;
              return;
            }
          }
          else {
            *(code **)(param_1 + 0x40) = FUN_710079db20;
            *(undefined4 *)(param_1 + 0x50) = 1;
            if (uVar1 != 0) {
              return;
            }
          }
        }
        else {
          *(code **)(param_1 + 0x40) = FUN_710079eea0;
          *(undefined4 *)(param_1 + 0x50) = 1;
          if (uVar1 != 0) {
            return;
          }
        }
      }
      if ((*(ulong *)(param_1 + 0x20) & 0x4ffffffff) != 0) {
        iVar3 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar3 + 1;
        *(code **)(param_1 + (long)iVar3 * 8 + 0x40) = FUN_71007a0280;
        return;
      }
    }
    else {
      uVar1 = uVar2 & 0x100;
      if ((uVar2 >> 7 & 1) == 0) {
        if ((uVar2 >> 6 & 1) == 0) {
          if (uVar1 != 0) goto LAB_710079d3dc;
        }
        else {
          *(code **)(param_1 + 0x40) = FUN_710079db20;
          *(undefined4 *)(param_1 + 0x50) = 1;
          if (uVar1 != 0) {
            return;
          }
        }
      }
      else {
        *(code **)(param_1 + 0x40) = FUN_710079eea0;
        *(undefined4 *)(param_1 + 0x50) = 1;
        if (uVar1 != 0) {
          return;
        }
      }
      if ((uVar2 & 0x804) == 0x804) {
        iVar3 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar3 + 1;
        *(undefined1 **)(param_1 + (long)iVar3 * 8 + 0x40) = &LAB_71007a0260;
        return;
      }
      if (((uVar2 ^ 0xffffffff) & 0x2004) == 0) {
        iVar3 = *(int *)(param_1 + 0x50);
        if (1 < iVar3) {
          FUN_710079d120();
                    /* WARNING: Does not return */
          pcVar4 = (code *)UndefinedInstructionException(0,0x710079d4e4);
          (*pcVar4)();
        }
        *(int *)(param_1 + 0x50) = iVar3 + 1;
        *(undefined1 **)(param_1 + (long)iVar3 * 8 + 0x40) = &LAB_71007a0270;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  if ((uVar2 >> 9 & 1) == 0) {
    if ((uVar2 >> 2 & 1) == 0) {
      return;
    }
    if ((uVar2 >> 10 & 1) == 0) {
      *(undefined1 **)(param_1 + 0x40) = &LAB_71007a00c0;
      *(undefined4 *)(param_1 + 0x50) = 1;
      return;
    }
    *(undefined1 **)(param_1 + 0x40) = &LAB_71007a00b0;
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
LAB_710079d3dc:
  *(code **)(param_1 + 0x40) = FUN_710079fc20;
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}



// ===== FUN_710079d4d8 @ 710079d4d8 (size=16) =====

void FUN_710079d4d8(void)

{
  code *pcVar1;
  
  FUN_710079d120();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710079d4e4);
  (*pcVar1)();
}



// ===== FUN_710079d4f0 @ 710079d4f0 (size=660) =====

/* WARNING: Type propagation algorithm not settling */

long FUN_710079d4f0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar11;
  
  if (param_1 == 0) {
    uVar4 = FUN_710079cbf0(param_2);
    uVar5 = FUN_710079cbf0(param_3);
    lVar6 = FUN_710080e9e0(1,0x58);
    if (lVar6 == 0) {
      return 0;
    }
    uVar11 = 0xffffffff;
  }
  else {
    uVar4 = FUN_710079cbf0(param_2);
    uVar5 = FUN_710079cbf0(param_3);
    uVar11 = *(undefined4 *)(param_1 + 0x50);
    lVar6 = FUN_710080e9e0(1,0x58);
    if (lVar6 == 0) goto LAB_710079d768;
  }
  lVar7 = FUN_7100290a20(uVar4);
  *(long *)(lVar6 + 8) = lVar7;
  if (lVar7 != 0) {
    lVar8 = FUN_7100290a20(uVar5);
    *(long *)(lVar6 + 0x10) = lVar8;
    if (lVar8 != 0) {
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      if ((param_4 & 1) == 0) {
        if ((param_4 >> 1 & 1) != 0) {
          *(undefined4 *)(lVar6 + 0x18) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x1c) = uVar11;
        }
      }
      else {
        *(undefined4 *)(lVar6 + 0x18) = uVar11;
        *(undefined4 *)(lVar6 + 0x1c) = 0xffffffff;
      }
      iVar3 = FUN_710080aec0(uVar4,uVar5);
      uVar10 = 1;
      if (iVar3 != 0) {
        uVar10 = 0;
        if (*(int *)(lVar6 + 0x18) != -1) {
          uVar10 = (uint)(*(int *)(lVar6 + 0x1c) == *(int *)(lVar6 + 0x18));
        }
      }
      *(uint *)(lVar6 + 0x20) = uVar10;
      iVar3 = FUN_710080aec0(uVar5,"UTF-8");
      if (iVar3 == 0) {
        uVar10 = param_4 | 0x100;
      }
      else {
        iVar3 = FUN_710080aec0(uVar5,"UTF-16BE");
        if (iVar3 == 0) {
          uVar10 = param_4 | 0x400;
        }
        else {
          iVar3 = FUN_710080aec0(uVar5,"UTF-16LE");
          uVar10 = param_4 | 0x1000;
          if (iVar3 != 0) {
            uVar10 = param_4;
          }
        }
      }
      iVar3 = FUN_710080aec0(uVar4,"UTF-8");
      if (iVar3 == 0) {
        uVar1 = uVar10 | 0x200;
joined_r0x00710079d658:
        uVar11 = uVar10 >> 1;
        uVar10 = uVar1;
        if ((uVar11 & 1) != 0) {
          *(uint *)(lVar6 + 0x24) = uVar1 | 0x40;
          FUN_710079d300(lVar6);
          iVar3 = *(int *)(lVar6 + 0x50);
          goto joined_r0x00710079d670;
        }
      }
      else {
        iVar3 = FUN_710080aec0(uVar4,"UTF-16BE");
        if (iVar3 == 0) {
          uVar1 = uVar10 | 0x800;
          goto joined_r0x00710079d658;
        }
        iVar3 = FUN_710080aec0(uVar4,"UTF-16LE");
        if (iVar3 == 0) {
          uVar1 = uVar10 | 0x2000;
          goto joined_r0x00710079d658;
        }
      }
      *(uint *)(lVar6 + 0x24) = uVar10;
      FUN_710079d300(lVar6);
      iVar3 = *(int *)(lVar6 + 0x50);
joined_r0x00710079d670:
      if (iVar3 == 0) {
        if (param_1 != 0) {
          FUN_71007a0da0(param_1,0xffffffff,
                         "A character-set conversion not fully supported on this platform");
          lVar7 = *(long *)(lVar6 + 8);
        }
        FUN_710081c200(lVar7);
        FUN_710081c200(*(undefined8 *)(lVar6 + 0x10));
        FUN_710081c200(*(undefined8 *)(lVar6 + 0x28));
        FUN_710081c200(lVar6);
        return 0;
      }
      if (param_1 == 0) {
        return lVar6;
      }
      plVar2 = *(long **)(param_1 + 0x58);
      if (*(long **)(param_1 + 0x58) == (long *)0x0) {
        plVar9 = (long *)(param_1 + 0x58);
      }
      else {
        do {
          plVar9 = plVar2;
          plVar2 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      *plVar9 = lVar6;
      return lVar6;
    }
    FUN_710081c200(lVar7);
  }
  FUN_710081c200(lVar6);
  if (param_1 == 0) {
    return 0;
  }
LAB_710079d768:
  FUN_71007a0da0(param_1,0xc,"Could not allocate memory for a string conversion object");
  return 0;
}



// ===== FUN_710079d790 @ 710079d790 (size=44) =====

void FUN_710079d790(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_710081c200(*param_1);
  *param_1 = 0;
  return;
}



// ===== FUN_710079d7c0 @ 710079d7c0 (size=168) =====

long * FUN_710079d7c0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *param_1;
  uVar4 = param_1[2];
  if ((lVar1 != 0) && (param_2 <= uVar4)) {
    return param_1;
  }
  if (uVar4 < 0x20) {
    uVar3 = 0x20;
  }
  else if (uVar4 < 0x2000) {
    uVar3 = uVar4 << 1;
  }
  else {
    uVar3 = (uVar4 >> 2) + uVar4;
    if (CARRY8(uVar4 >> 2,uVar4)) goto LAB_710079d848;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  lVar1 = FUN_71008141e0(lVar1,uVar3);
  if (lVar1 != 0) {
    *param_1 = lVar1;
    param_1[2] = uVar3;
    return param_1;
  }
  lVar1 = *param_1;
LAB_710079d848:
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_710081c200(lVar1);
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_710080e8e0();
  *puVar2 = 0xc;
  return (long *)0x0;
}



// ===== FUN_710079d870 @ 710079d870 (size=112) =====

long * FUN_710079d870(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_710079d7c0(param_1,param_3 + 1 + param_1[1]);
  if (plVar2 != (long *)0x0) {
    if (param_3 != 0) {
      FUN_710080f900(*param_1 + param_1[1],param_2,param_3);
    }
    lVar1 = param_1[1];
    param_1[1] = param_3 + lVar1;
    *(undefined1 *)(*param_1 + param_3 + lVar1) = 0;
    plVar2 = param_1;
  }
  return plVar2;
}



// ===== FUN_710079d8e0 @ 710079d8e0 (size=576) =====

undefined8 FUN_710079d8e0(long *param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  int local_4;
  
  lVar2 = FUN_710079d7c0(param_1,param_3 + 1 + param_1[1]);
  if (lVar2 == 0) {
LAB_710079db00:
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    puVar3 = (undefined1 *)(*param_1 + param_1[1]);
    puVar5 = (undefined1 *)(*param_1 + param_1[2] + -1);
    do {
      uVar6 = param_2;
      if (param_3 == 0) break;
      do {
        iVar1 = FUN_710079cd60(&local_4,uVar6,param_3);
        lVar2 = (long)iVar1;
        if (iVar1 == 3) {
          lVar2 = 3;
          if (local_4 - 0xd800U < 0x800) {
            if (uVar6 <= param_2) goto LAB_710079daa0;
            iVar1 = -3;
            goto LAB_710079d988;
          }
        }
        else if (iVar1 < 1) {
          if (uVar6 <= param_2) goto LAB_710079d9e8;
          goto LAB_710079d988;
        }
        param_3 = param_3 - lVar2;
        uVar6 = uVar6 + lVar2;
      } while (param_3 != 0);
      if (uVar6 <= param_2) break;
      iVar1 = 0;
LAB_710079d988:
      puVar4 = puVar3 + (uVar6 - param_2);
      if (puVar5 < puVar4) {
        param_1[1] = (long)puVar3 - *param_1;
        lVar2 = FUN_710079d7c0(param_1,param_1[2] + 1 + param_3);
        if (lVar2 == 0) goto LAB_710079db00;
        puVar3 = (undefined1 *)(*param_1 + param_1[1]);
        puVar5 = (undefined1 *)(*param_1 + param_1[2] + -1);
        puVar4 = puVar3 + (uVar6 - param_2);
      }
      FUN_710080f900(puVar3,param_2);
      puVar3 = puVar4;
LAB_710079d9e8:
      if (iVar1 == 0) break;
      if (iVar1 == -3) {
LAB_710079daa0:
        iVar1 = 3;
        if (0x7ff < local_4 - 0xd800U) goto LAB_710079d9fc;
        iVar1 = FUN_710079cf60(&local_4,uVar6,param_3);
        iVar7 = local_4;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
          goto LAB_710079d9fc;
        }
      }
      else {
        iVar1 = -iVar1;
LAB_710079d9fc:
        uVar8 = 0xffffffff;
        iVar7 = local_4;
      }
      while (lVar2 = FUN_710079c9f0(puVar3,(long)puVar5 - (long)puVar3,iVar7), lVar2 == 0) {
        param_1[1] = (long)puVar3 - *param_1;
        lVar2 = FUN_710079d7c0(param_1,param_1[2] + 1 + param_3);
        if (lVar2 == 0) goto LAB_710079db00;
        puVar5 = (undefined1 *)(*param_1 + param_1[2] + -1);
        puVar3 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar3 = puVar3 + lVar2;
      param_2 = uVar6 + (long)iVar1;
      param_3 = param_3 - iVar1;
    } while (iVar1 != 0);
    param_1[1] = (long)puVar3 - *param_1;
    *puVar3 = 0;
  }
  return uVar8;
}



// ===== FUN_710079db20 @ 710079db20 (size=4980) =====

undefined4 FUN_710079db20(long *param_1,undefined1 *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong extraout_x1;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong extraout_x8;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar24;
  ulong extraout_x11;
  undefined1 *extraout_x11_00;
  undefined1 *extraout_x11_01;
  ulong extraout_x12;
  undefined1 *extraout_x12_00;
  undefined1 *extraout_x12_01;
  undefined8 extraout_x13;
  undefined8 uVar25;
  undefined8 extraout_x13_00;
  long extraout_x14;
  long extraout_x14_00;
  long *extraout_x18;
  long *extraout_x18_00;
  int iVar26;
  long lVar27;
  code *pcVar28;
  ulong uVar29;
  uint uVar30;
  uint *puVar31;
  uint local_e0;
  long local_d8;
  code *local_c0;
  int local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_58;
  uint local_54;
  uint local_50 [10];
  uint local_28;
  uint local_24 [9];
  
  uVar19 = *(uint *)(param_4 + 0x24);
  local_a0 = 0;
  uVar9 = uVar19 & 0x800;
  lVar11 = param_3;
  if ((uVar19 >> 10 & 1) == 0) {
    if ((uVar19 >> 0xc & 1) == 0) {
      local_a0 = 0;
      if ((uVar19 >> 8 & 1) != 0) {
        lVar27 = 1;
        local_a0 = uVar19 >> 9 & 1 ^ 1;
        if (uVar9 == 0) {
          iVar26 = 1;
          local_c0 = FUN_710079c9f0;
          goto joined_r0x00710079e99c;
        }
        iVar26 = 1;
        local_c0 = FUN_710079c9f0;
        goto LAB_710079de78;
      }
      if (uVar9 == 0) {
        local_a0 = 0;
        if ((uVar19 >> 0xd & 1) == 0) {
          lVar27 = 1;
          pcVar28 = FUN_710079cf60;
          local_d8 = 1;
          iVar26 = 1;
          local_c0 = FUN_710079c9f0;
          local_a8 = 6;
          goto LAB_710079db8c;
        }
        local_a0 = 0;
        lVar27 = 2;
        iVar26 = 2;
        local_c0 = FUN_710079d0b0;
        goto LAB_710079de38;
      }
      lVar27 = 2;
      pcVar28 = FUN_710079d1d0;
      iVar26 = 2;
      local_c0 = FUN_710079d040;
    }
    else {
      if ((uVar19 >> 0xd & 1) == 0) {
        if (uVar9 == 0) {
          lVar27 = 2;
          local_a0 = 1;
          pcVar28 = FUN_710079cf60;
          iVar26 = 2;
          local_d8 = 2;
          local_c0 = FUN_710079d0b0;
          local_a8 = 6;
          lVar11 = param_3 << 1;
          goto LAB_710079db8c;
        }
        lVar27 = 2;
        iVar26 = 2;
        local_a0 = 1;
        local_c0 = FUN_710079d0b0;
LAB_710079de78:
        local_d8 = 1;
        pcVar28 = FUN_710079d1d0;
        local_a8 = 4;
        goto LAB_710079db8c;
      }
      lVar27 = 2;
      if (uVar9 == 0) {
        iVar26 = 2;
        local_c0 = FUN_710079d0b0;
        goto LAB_710079de38;
      }
      pcVar28 = FUN_710079d1d0;
      iVar26 = 2;
      local_c0 = FUN_710079d0b0;
    }
  }
  else {
    lVar27 = 2;
    if (uVar9 == 0) {
      iVar26 = 2;
      local_c0 = FUN_710079d040;
      local_a0 = 1;
joined_r0x00710079e99c:
      if ((uVar19 >> 0xd & 1) == 0) {
        pcVar28 = FUN_710079cf60;
        local_a8 = 6;
        lVar11 = param_3 * lVar27;
        local_d8 = lVar27;
        goto LAB_710079db8c;
      }
LAB_710079de38:
      pcVar28 = (code *)&LAB_710079d270;
    }
    else {
      local_a0 = 0;
      pcVar28 = FUN_710079d1d0;
      iVar26 = 2;
      local_c0 = FUN_710079d040;
    }
  }
  local_d8 = 1;
  local_a8 = 4;
LAB_710079db8c:
  lVar11 = FUN_710079d7c0(param_1,lVar27 + lVar11 + param_1[1]);
  if (lVar11 == 0) {
    return 0xffffffff;
  }
  local_a4 = 0;
  puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
  puVar12 = (undefined1 *)(*param_1 + param_1[1]);
LAB_710079dbec:
  do {
    iVar7 = (*pcVar28)(&local_58,param_2,param_3);
    if (iVar7 == 0) {
LAB_710079e8d0:
      lVar16 = *param_1;
LAB_710079e8d4:
      param_1[1] = (long)puVar12 - lVar16;
      *puVar12 = 0;
      if (iVar26 == 2) {
        *(undefined1 *)(*param_1 + param_1[1] + 1) = 0;
      }
      return local_a4;
    }
    if (iVar7 < 0) {
      while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58), lVar11 == 0) {
        param_1[1] = (long)puVar12 - *param_1;
        lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
        if (lVar11 == 0) {
          return 0xffffffff;
        }
        puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
        puVar12 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar12 = puVar12 + lVar11;
      param_2 = param_2 + -iVar7;
      param_3 = param_3 - -iVar7;
      local_a4 = 0xffffffff;
      goto LAB_710079dbec;
    }
    puVar23 = param_2;
    if (local_a0 != 0 || local_a8 == iVar7) {
      puVar23 = (undefined1 *)0x0;
    }
    param_3 = param_3 - iVar7;
    param_2 = param_2 + iVar7;
    iVar8 = (*pcVar28)(&local_54,param_2,param_3);
    while (0 < iVar8) {
      param_3 = param_3 - iVar8;
      puVar20 = param_2;
      if (local_a0 != 0 || local_a8 == iVar8) {
        puVar20 = (undefined1 *)0x0;
      }
      param_2 = param_2 + iVar8;
      if ((local_54 >> 8 < 0x1d3) && ((&DAT_71009c9b80)[local_54 >> 8] != '\0')) {
        iVar1 = local_58 - 0x1100;
        if (iVar1 < 0) {
LAB_710079df88:
          uVar9 = FUN_710079cae0(local_58);
          if (uVar9 == 0) {
            uVar9 = (uint)extraout_x1;
            if (uVar9 < 0x1d245) {
              uVar19 = (uint)(byte)(&DAT_71009c9450)
                                   [(ulong)(uVar9 & 0xf) +
                                    (ulong)(byte)(&DAT_71009c91e0)
                                                 [(extraout_x1 >> 4 & 0xf) +
                                                  (ulong)(byte)(&DAT_71009c9000)
                                                               [extraout_x11 & 0xffffffff] * 0x10] *
                                    0x10];
              if (uVar19 != 0) {
                puVar14 = &local_28;
                uVar29 = 1;
                local_28 = (uint)(byte)(&DAT_71009c9450)
                                       [(ulong)(uVar9 & 0xf) +
                                        (ulong)(byte)(&DAT_71009c91e0)
                                                     [(extraout_x1 >> 4 & 0xf) +
                                                      (ulong)(byte)(&DAT_71009c9000)
                                                                   [extraout_x11 & 0xffffffff] *
                                                      0x10] * 0x10];
                puVar31 = local_50 + 1;
                local_e0 = 0;
                local_50[0] = uVar9;
                goto LAB_710079e404;
              }
            }
            if (puVar23 == (undefined1 *)0x0) {
              lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,extraout_x12 & 0xffffffff);
              if (lVar11 == 0) {
                do {
                  param_1[1] = (long)puVar12 - *param_1;
                  lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
                  if (lVar11 == 0) {
                    return 0xffffffff;
                  }
                  puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
                  puVar12 = (undefined1 *)(*param_1 + param_1[1]);
                  lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58);
                } while (lVar11 == 0);
                puVar12 = puVar12 + lVar11;
                goto LAB_710079dd74;
              }
              goto LAB_710079df44;
            }
LAB_710079dcf0:
            if (puVar18 < puVar12 + iVar7) {
              param_1[1] = (long)puVar12 - *param_1;
              lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
              if (lVar11 == 0) {
                return 0xffffffff;
              }
              puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
              puVar12 = (undefined1 *)(*param_1 + param_1[1]);
            }
            puVar22 = puVar12;
            puVar15 = puVar23;
            if (iVar7 == 3) {
LAB_710079df6c:
              puVar23 = puVar15 + 1;
              puVar13 = puVar22 + 1;
              *puVar22 = *puVar15;
LAB_710079dd5c:
              puVar12 = puVar13 + 1;
              *puVar13 = *puVar23;
              puVar23 = puVar23 + 1;
            }
            else {
              if (3 < iVar7) {
                if (iVar7 != 4) goto LAB_710079dd74;
                puVar15 = puVar23 + 1;
                puVar22 = puVar12 + 1;
                *puVar12 = *puVar23;
                goto LAB_710079df6c;
              }
              if (iVar7 != 1) {
                puVar13 = puVar12;
                if (iVar7 != 2) goto LAB_710079dd74;
                goto LAB_710079dd5c;
              }
            }
            *puVar12 = *puVar23;
            puVar12 = puVar12 + 1;
            goto LAB_710079dd74;
          }
          puVar20 = (undefined1 *)0x0;
          local_58 = uVar9;
        }
        else if (iVar1 < 0x13) {
          if (0x14 < local_54 - 0x1161) {
            if (puVar23 != (undefined1 *)0x0) goto LAB_710079dcf0;
            lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58);
            if (lVar11 != 0) goto LAB_710079df44;
            do {
              param_1[1] = (long)puVar12 - *param_1;
              lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
              if (lVar11 == 0) {
                return 0xffffffff;
              }
              puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
              puVar12 = (undefined1 *)(*param_1 + param_1[1]);
              lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58);
            } while (lVar11 == 0);
            puVar12 = puVar12 + lVar11;
            goto LAB_710079dd74;
          }
          puVar20 = (undefined1 *)0x0;
          local_58 = ((local_54 - 0x1161) + iVar1 * 0x15) * 0x1c + 0xac00;
        }
        else {
          if ((0x2ba3 < local_58 - 0xac00) ||
             (0x9249248 <
              ((local_58 - 0xac00) * -0x49249249 + 0x12492490 >> 2 | local_58 * -0x40000000)))
          goto LAB_710079df88;
          if (0x1a < local_54 - 0x11a8) {
            if (puVar23 == (undefined1 *)0x0) {
              while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58),
                    lVar11 == 0) {
                param_1[1] = (long)puVar12 - *param_1;
                lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
                if (lVar11 == 0) {
                  return 0xffffffff;
                }
                puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
                puVar12 = (undefined1 *)(*param_1 + param_1[1]);
              }
              goto LAB_710079df44;
            }
            goto LAB_710079dcf0;
          }
          puVar20 = (undefined1 *)0x0;
          local_58 = (local_54 + local_58) - 0x11a7;
        }
      }
      else {
        if (puVar23 != (undefined1 *)0x0) goto LAB_710079dcf0;
        lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58);
        while (lVar11 == 0) {
          param_1[1] = (long)puVar12 - *param_1;
          lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
          if (lVar11 == 0) {
            return 0xffffffff;
          }
          puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
          puVar12 = (undefined1 *)(*param_1 + param_1[1]);
          lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58);
        }
LAB_710079df44:
        puVar12 = puVar12 + lVar11;
LAB_710079dd74:
        local_58 = local_54;
        iVar7 = iVar8;
      }
      iVar8 = (*pcVar28)(&local_54,param_2,param_3);
      puVar23 = puVar20;
    }
    if (iVar8 == 0) {
      if (puVar23 == (undefined1 *)0x0) {
        while( true ) {
          lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58);
          lVar16 = *param_1;
          if (lVar11 != 0) break;
          param_1[1] = (long)puVar12 - lVar16;
          lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
          if (lVar11 == 0) {
            return 0xffffffff;
          }
          puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
          puVar12 = (undefined1 *)(*param_1 + param_1[1]);
        }
        puVar12 = puVar12 + lVar11;
        goto LAB_710079e8d4;
      }
      if (puVar18 < puVar12 + iVar7) {
        param_1[1] = (long)puVar12 - *param_1;
        lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
        if (lVar11 == 0) {
          return 0xffffffff;
        }
        puVar12 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar18 = puVar12;
      puVar20 = puVar23;
      if (iVar7 == 3) {
LAB_710079ee0c:
        puVar23 = puVar20 + 1;
        puVar12 = puVar18 + 1;
        *puVar18 = *puVar20;
LAB_710079ddf8:
        puVar20 = puVar23 + 1;
        puVar18 = puVar12 + 1;
        *puVar12 = *puVar23;
      }
      else {
        if (3 < iVar7) {
          if (iVar7 == 4) {
            puVar20 = puVar23 + 1;
            puVar18 = puVar12 + 1;
            *puVar12 = *puVar23;
            goto LAB_710079ee0c;
          }
          goto LAB_710079e8d0;
        }
        if (iVar7 != 1) {
          if (iVar7 == 2) goto LAB_710079ddf8;
          goto LAB_710079e8d0;
        }
      }
      puVar12 = puVar18 + 1;
      *puVar18 = *puVar20;
      lVar16 = *param_1;
      goto LAB_710079e8d4;
    }
    if (puVar23 == (undefined1 *)0x0) {
      while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58), lVar11 == 0) {
        param_1[1] = (long)puVar12 - *param_1;
        lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
        if (lVar11 == 0) {
          return 0xffffffff;
        }
        puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
        puVar12 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar12 = puVar12 + lVar11;
    }
    else {
      if (puVar18 < puVar12 + iVar7) {
        param_1[1] = (long)puVar12 - *param_1;
        lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
        if (lVar11 == 0) {
          return 0xffffffff;
        }
        puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
        puVar12 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar20 = puVar12;
      puVar22 = puVar23;
      if (iVar7 == 3) {
LAB_710079e858:
        puVar23 = puVar22 + 1;
        puVar15 = puVar20 + 1;
        *puVar20 = *puVar22;
LAB_710079e23c:
        puVar12 = puVar15 + 1;
        *puVar15 = *puVar23;
        puVar23 = puVar23 + 1;
      }
      else {
        if (3 < iVar7) {
          if (iVar7 != 4) goto LAB_710079e260;
          puVar22 = puVar23 + 1;
          puVar20 = puVar12 + 1;
          *puVar12 = *puVar23;
          goto LAB_710079e858;
        }
        if (iVar7 != 1) {
          puVar15 = puVar12;
          if (iVar7 != 2) goto LAB_710079e260;
          goto LAB_710079e23c;
        }
      }
      *puVar12 = *puVar23;
      puVar12 = puVar12 + 1;
    }
LAB_710079e260:
    while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_54), lVar11 == 0) {
      param_1[1] = (long)puVar12 - *param_1;
      lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
      if (lVar11 == 0) {
        return 0xffffffff;
      }
      puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
      puVar12 = (undefined1 *)(*param_1 + param_1[1]);
    }
    puVar12 = puVar12 + lVar11;
    param_2 = param_2 + -iVar8;
    param_3 = param_3 - -iVar8;
    local_a4 = 0xffffffff;
  } while( true );
  while( true ) {
    uVar30 = *puVar31;
    if (uVar30 < 0x1d245) {
      bVar3 = (&DAT_71009c9450)
              [(ulong)(uVar30 & 0xf) +
               (ulong)(byte)(&DAT_71009c91e0)
                            [((ulong)(uVar30 >> 4) & 0xf) +
                             (ulong)(byte)(&DAT_71009c9000)[uVar30 >> 8] * 0x10] * 0x10];
      local_e0 = (uint)bVar3;
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      if (uVar19 != 0xe4) {
        uVar30 = (uint)bVar3;
        bVar6 = SBORROW4(uVar30,uVar19);
        bVar4 = (int)(uVar30 - uVar19) < 0;
        bVar5 = uVar30 == uVar19;
      }
      if ((bVar5 || bVar4 != bVar6) && (bVar3 != 0xe4)) goto LAB_710079e46c;
    }
    else {
      local_e0 = 0;
      if (uVar19 != 0xe4) {
        local_e0 = 0;
        goto LAB_710079e46c;
      }
    }
    uVar19 = local_e0;
    uVar29 = (ulong)(uVar10 + 1);
    puVar14 = puVar14 + 1;
    *puVar14 = uVar19;
    puVar31 = puVar31 + 1;
    param_2 = param_2 + (int)uVar9;
    param_3 = param_3 - (int)uVar9;
    local_e0 = uVar19;
    if (uVar10 + 1 == 10) break;
LAB_710079e404:
    uVar9 = (*pcVar28)(puVar31,param_2,param_3);
    uVar10 = (uint)uVar29;
    if ((int)uVar9 < 1) {
LAB_710079e46c:
      if (uVar10 != 1) goto LAB_710079e474;
      goto LAB_710079e57c;
    }
  }
  uVar29 = 10;
  local_a4 = 0xffffffff;
LAB_710079e474:
  lVar16 = 1;
  iVar8 = (int)uVar29;
  uVar10 = FUN_710079cae0(local_58,local_50[1]);
  uVar21 = (ulong)uVar9;
  iVar7 = (int)extraout_x10 + 1;
  lVar11 = extraout_x9;
  uVar24 = extraout_x10;
  puVar12 = extraout_x11_00;
  puVar18 = extraout_x12_00;
  uVar25 = extraout_x13;
  lVar27 = extraout_x14;
  param_1 = extraout_x18;
  if (uVar10 != 0) goto LAB_710079e4e4;
LAB_710079e4c0:
  uVar10 = (uint)uVar29;
  if (iVar7 < (int)uVar10) {
    while( true ) {
      iVar8 = (int)uVar29;
      lVar16 = (long)iVar7;
      uVar10 = FUN_710079cae0(local_58,local_50[lVar16]);
      iVar7 = (int)extraout_x10_00 + 1;
      uVar21 = extraout_x8;
      lVar11 = extraout_x9_00;
      uVar24 = extraout_x10_00;
      puVar12 = extraout_x11_01;
      puVar18 = extraout_x12_01;
      uVar25 = extraout_x13_00;
      lVar27 = extraout_x14_00;
      param_1 = extraout_x18_00;
      if (uVar10 == 0) break;
LAB_710079e4e4:
      uVar9 = (uint)uVar24;
      local_58 = uVar10;
      if (iVar7 < iVar8) {
        puVar14 = local_50 + (uVar24 & 0xffffffff);
        puVar17 = (undefined4 *)(lVar11 + (uVar24 & 0xffffffff) * 4);
        do {
          uVar2 = puVar17[1];
          puVar31 = puVar14 + 1;
          *puVar14 = puVar14[1];
          *puVar17 = uVar2;
          puVar14 = puVar31;
          puVar17 = puVar17 + 1;
        } while (puVar31 != local_50 + 1 + (ulong)((iVar8 + -2) - uVar9) + lVar16);
        uVar29 = (ulong)(iVar8 - 1U);
        if (uVar9 == iVar8 - 1U) goto LAB_710079e534;
LAB_710079e544:
        puVar23 = (undefined1 *)0x0;
        iVar7 = 0;
      }
      else {
        uVar10 = iVar8 - 1;
        uVar29 = (ulong)uVar10;
        if (uVar10 == 0 || uVar10 != uVar9) {
          uVar29 = (ulong)uVar10;
          iVar7 = 0;
          puVar23 = (undefined1 *)0x0;
          break;
        }
LAB_710079e534:
        if ((int)uVar21 < 1 || local_e0 != uVar19) goto LAB_710079e544;
        uVar19 = *(uint *)(lVar11 + (long)(iVar8 + -2) * 4);
        if ((int)uVar29 < 10) {
          puVar14 = local_50 + uVar29;
          lVar11 = lVar11 + uVar29 * 4 + 4;
          do {
            iVar7 = (*pcVar28)(puVar14,param_2,param_3);
            if (iVar7 < 1) goto LAB_710079e544;
            uVar9 = *puVar14;
            if (uVar9 < 0x1d245) {
              bVar3 = (&DAT_71009c9450)
                      [(ulong)(uVar9 & 0xf) +
                       (ulong)(byte)(&DAT_71009c91e0)
                                    [((ulong)(uVar9 >> 4) & 0xf) +
                                     (ulong)(byte)(&DAT_71009c9000)[uVar9 >> 8] * 0x10] * 0x10];
              local_e0 = (uint)bVar3;
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              if (uVar19 != 0xe4) {
                uVar9 = (uint)bVar3;
                bVar6 = SBORROW4(uVar9,uVar19);
                bVar4 = (int)(uVar9 - uVar19) < 0;
                bVar5 = uVar9 == uVar19;
              }
              if ((bVar5 || bVar4 != bVar6) && (bVar3 != 0xe4)) goto LAB_710079e544;
            }
            else {
              local_e0 = 0;
              if (-1 < (int)uVar19 && uVar19 != 0xe4) {
                local_e0 = 0;
                goto LAB_710079e544;
              }
            }
            uVar9 = (int)uVar29 + 1;
            uVar29 = (ulong)uVar9;
            *(uint *)(lVar11 + -4) = local_e0;
            puVar14 = puVar14 + 1;
            param_2 = param_2 + iVar7;
            param_3 = param_3 - iVar7;
            lVar11 = lVar11 + 4;
            uVar19 = local_e0;
          } while (uVar9 != 10);
          uVar29 = 10;
          puVar23 = (undefined1 *)0x0;
          iVar7 = 0;
          local_a4 = 0xffffffff;
        }
        else {
          puVar23 = (undefined1 *)0x0;
          uVar29 = 10;
          iVar7 = 0;
          local_a4 = 0xffffffff;
        }
      }
    }
    goto LAB_710079e4c0;
  }
  uVar9 = (uint)uVar21;
  iVar7 = (int)uVar25;
LAB_710079e57c:
  if (puVar23 == (undefined1 *)0x0) {
    while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,local_58), lVar11 == 0) {
      param_1[1] = (long)puVar12 - *param_1;
      lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + local_d8 * param_3);
      if (lVar11 == 0) {
        return 0xffffffff;
      }
      puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
      puVar12 = (undefined1 *)(*param_1 + param_1[1]);
    }
    puVar12 = puVar12 + lVar11;
    goto LAB_710079e5c0;
  }
  if (puVar18 < puVar12 + iVar7) {
    param_1[1] = (long)puVar12 - *param_1;
    lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + local_d8 * param_3);
    if (lVar11 == 0) {
      return 0xffffffff;
    }
    puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
    puVar12 = (undefined1 *)(*param_1 + param_1[1]);
  }
  puVar20 = puVar12;
  puVar22 = puVar23;
  if (iVar7 == 3) {
LAB_710079eb50:
    puVar23 = puVar22 + 1;
    puVar12 = puVar20 + 1;
    *puVar20 = *puVar22;
LAB_710079e5ac:
    puVar22 = puVar23 + 1;
    puVar20 = puVar12 + 1;
    *puVar12 = *puVar23;
  }
  else {
    if (3 < iVar7) {
      if (iVar7 != 4) goto LAB_710079e5c0;
      puVar22 = puVar23 + 1;
      puVar20 = puVar12 + 1;
      *puVar12 = *puVar23;
      goto LAB_710079eb50;
    }
    if (iVar7 != 1) {
      if (iVar7 != 2) goto LAB_710079e5c0;
      goto LAB_710079e5ac;
    }
  }
  puVar12 = puVar20 + 1;
  *puVar20 = *puVar22;
LAB_710079e5c0:
  if (uVar10 != 0) {
    puVar31 = local_50;
    puVar14 = puVar31 + uVar10;
    do {
      while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,*puVar31), lVar11 == 0) {
        param_1[1] = (long)puVar12 - *param_1;
        lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + local_d8 * param_3);
        if (lVar11 == 0) {
          return 0xffffffff;
        }
        puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
        puVar12 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar31 = puVar31 + 1;
      puVar12 = puVar12 + lVar11;
    } while (puVar31 != puVar14);
  }
  if ((0 < (int)uVar9 && local_e0 == uVar19) && (param_3 != 0)) {
    while( true ) {
      iVar7 = (*pcVar28)(local_50,param_2,param_3);
      if (iVar7 < 1) break;
      uVar29 = (ulong)local_50[0];
      uVar9 = 0;
      if (local_50[0] < 0x1d245) {
        uVar9 = (uint)(byte)(&DAT_71009c9450)
                            [(uVar29 & 0xf) +
                             (ulong)(byte)(&DAT_71009c91e0)
                                          [((ulong)(local_50[0] >> 4) & 0xf) +
                                           (ulong)(byte)(&DAT_71009c9000)[local_50[0] >> 8] * 0x10]
                             * 0x10];
      }
      if ((int)uVar9 < (int)uVar19) break;
      param_3 = param_3 - iVar7;
      while (lVar11 = (*local_c0)(puVar12,(long)puVar18 - (long)puVar12,uVar29), lVar11 == 0) {
        param_1[1] = (long)puVar12 - *param_1;
        lVar11 = FUN_710079d7c0(param_1,lVar27 + param_1[2] + param_3 * local_d8);
        if (lVar11 == 0) {
          return 0xffffffff;
        }
        uVar29 = (ulong)local_50[0];
        puVar18 = (undefined1 *)(*param_1 + (param_1[2] - lVar27));
        puVar12 = (undefined1 *)(*param_1 + param_1[1]);
      }
      param_2 = param_2 + iVar7;
      puVar12 = puVar12 + lVar11;
      uVar19 = uVar9;
    }
  }
  goto LAB_710079dbec;
}



// ===== FUN_710079eea0 @ 710079eea0 (size=3444) =====

undefined4 FUN_710079eea0(long *param_1,undefined1 *param_2,long param_3,long param_4)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  uint *puVar25;
  code *local_c0;
  undefined1 *local_a8;
  int local_a0;
  uint local_9c;
  code *local_98;
  long local_90;
  int local_78;
  uint local_58;
  uint local_54;
  uint local_50 [20];
  
  uVar10 = *(uint *)(param_4 + 0x24);
  local_9c = 0;
  uVar11 = uVar10 & 0x800;
  lVar6 = param_3;
  if ((uVar10 >> 10 & 1) == 0) {
    if ((uVar10 >> 0xc & 1) == 0) {
      local_9c = 0;
      if ((uVar10 >> 8 & 1) != 0) {
        lVar21 = 1;
        local_9c = uVar10 >> 9 & 1 ^ 1;
        if (uVar11 == 0) {
          iVar22 = 1;
          local_98 = FUN_710079c9f0;
          goto joined_r0x00710079f760;
        }
        iVar22 = 1;
        local_98 = FUN_710079c9f0;
        goto LAB_710079f360;
      }
      if (uVar11 == 0) {
        local_9c = 0;
        if ((uVar10 >> 0xd & 1) == 0) {
          lVar21 = 1;
          iVar22 = 1;
          local_98 = FUN_710079c9f0;
          local_90 = 1;
          local_c0 = FUN_710079cf60;
          local_78 = 6;
          goto LAB_710079ef14;
        }
        local_9c = 0;
        lVar21 = 2;
        iVar22 = 2;
        local_98 = FUN_710079d0b0;
        goto LAB_710079f324;
      }
      lVar21 = 2;
      iVar22 = 2;
      local_98 = FUN_710079d040;
      local_c0 = FUN_710079d1d0;
    }
    else {
      if ((uVar10 >> 0xd & 1) == 0) {
        if (uVar11 == 0) {
          lVar21 = 2;
          local_9c = 1;
          iVar22 = 2;
          local_98 = FUN_710079d0b0;
          local_90 = 2;
          local_c0 = FUN_710079cf60;
          local_78 = 6;
          lVar6 = param_3 << 1;
          goto LAB_710079ef14;
        }
        lVar21 = 2;
        iVar22 = 2;
        local_9c = 1;
        local_98 = FUN_710079d0b0;
LAB_710079f360:
        local_90 = 1;
        local_c0 = FUN_710079d1d0;
        local_78 = 4;
        goto LAB_710079ef14;
      }
      lVar21 = 2;
      if (uVar11 == 0) {
        iVar22 = 2;
        local_98 = FUN_710079d0b0;
        goto LAB_710079f324;
      }
      iVar22 = 2;
      local_98 = FUN_710079d0b0;
      local_c0 = FUN_710079d1d0;
    }
  }
  else {
    lVar21 = 2;
    if (uVar11 == 0) {
      iVar22 = 2;
      local_98 = FUN_710079d040;
      local_9c = 1;
joined_r0x00710079f760:
      if ((uVar10 >> 0xd & 1) == 0) {
        local_c0 = FUN_710079cf60;
        local_78 = 6;
        lVar6 = param_3 * lVar21;
        local_90 = lVar21;
        goto LAB_710079ef14;
      }
LAB_710079f324:
      local_c0 = (code *)&LAB_710079d270;
    }
    else {
      iVar22 = 2;
      local_9c = 0;
      local_98 = FUN_710079d040;
      local_c0 = FUN_710079d1d0;
    }
  }
  local_90 = 1;
  local_78 = 4;
LAB_710079ef14:
  lVar6 = FUN_710079d7c0(param_1,lVar6 + lVar21 + param_1[1]);
  if (lVar6 == 0) {
    return 0xffffffff;
  }
  uVar24 = 0;
  puVar14 = (undefined1 *)(*param_1 + param_1[1]);
  local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
LAB_710079ef6c:
  do {
    iVar4 = (*local_c0)(&local_58,param_2,param_3);
    if (iVar4 == 0) {
LAB_710079f83c:
      param_1[1] = (long)puVar14 - *param_1;
      *puVar14 = 0;
      if (iVar22 == 2) {
        *(undefined1 *)(*param_1 + param_1[1] + 1) = 0;
        return uVar24;
      }
      return uVar24;
    }
    uVar12 = (ulong)local_58;
    local_a0 = iVar4;
    if (-1 < iVar4) {
      while( true ) {
        lVar6 = (long)local_a0;
        puVar19 = param_2;
        if (local_9c != 0 || local_78 == local_a0) {
          puVar19 = (undefined1 *)0x0;
        }
        uVar11 = (uint)uVar12;
        iVar4 = uVar11 - 0xac00;
        param_3 = param_3 - lVar6;
        param_2 = param_2 + lVar6;
        if (-1 < iVar4) break;
        uVar7 = (ulong)(uVar11 >> 8);
        if ((uVar11 >> 8 < 0x1d3) && ((&DAT_71009c9b80)[uVar7] != '\0')) {
LAB_710079f558:
          if ((&DAT_71009c9450)
              [(ulong)(uVar11 & 0xf) +
               (ulong)(byte)(&DAT_71009c91e0)
                            [(uVar12 >> 4 & 0xf) + (ulong)(byte)(&DAT_71009c9000)[uVar7] * 0x10] *
               0x10] != '\0') {
            if (puVar19 == (undefined1 *)0x0) goto LAB_710079fbb8;
            if (local_a8 < puVar14 + lVar6) {
              param_1[1] = (long)puVar14 - *param_1;
              lVar6 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + param_3 * local_90);
              if (lVar6 == 0) {
                return 0xffffffff;
              }
              puVar14 = (undefined1 *)(*param_1 + param_1[1]);
              local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
            }
            puVar18 = puVar19;
            puVar15 = puVar14;
            if (local_a0 == 3) {
LAB_710079fba4:
              puVar19 = puVar18 + 1;
              puVar14 = puVar15 + 1;
              *puVar15 = *puVar18;
LAB_710079fb68:
              puVar18 = puVar19 + 1;
              puVar15 = puVar14 + 1;
              *puVar14 = *puVar19;
            }
            else {
              if (3 < local_a0) {
                if (local_a0 == 4) {
                  puVar18 = puVar19 + 1;
                  puVar15 = puVar14 + 1;
                  *puVar14 = *puVar19;
                  goto LAB_710079fba4;
                }
                goto LAB_710079ef6c;
              }
              if (local_a0 != 1) goto LAB_710079fb68;
            }
            puVar14 = puVar15 + 1;
            *puVar15 = *puVar18;
            goto LAB_710079ef6c;
          }
        }
LAB_710079f590:
        bVar1 = false;
LAB_710079f038:
        uVar7 = 0;
        puVar25 = local_50;
        uVar17 = 0;
        uVar20 = 0;
        if (0x110ab < uVar11) goto LAB_710079f4d4;
LAB_710079f060:
        uVar11 = (uint)uVar12;
        if (uVar11 < 0x1109a) {
          if (uVar11 < 0x3000) {
            if (uVar11 < 0x2000) {
LAB_710079f3d8:
              iVar13 = 0x3a2;
              iVar4 = 0;
              uVar10 = 0x1e5d;
              uVar11 = (uint)uVar12;
              iVar5 = 0x3a2;
              do {
                uVar23 = iVar5 / 2;
                if (uVar10 < uVar11) {
                  iVar4 = uVar23 + 1;
                }
                else {
                  if (uVar10 <= uVar11) goto LAB_710079f420;
                  iVar13 = uVar23 - 1;
                }
                iVar5 = iVar4 + iVar13;
                if (iVar13 < iVar4) break;
                uVar10 = iVar5 / 2;
                uVar10 = *(uint *)(&UNK_71009c6450 +
                                  ((-(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 |
                                   (ulong)uVar10 << 1) + (long)(int)uVar10) * 4);
              } while( true );
            }
          }
          else if (0x1ff < uVar11 - 0xf900) goto LAB_710079f3d8;
        }
        else if ((0x20005UL >> ((ulong)(uVar11 - 0x1109a) & 0x3f) & 1) == 0) goto LAB_710079f3d8;
LAB_710079f088:
        if (bVar1) {
          local_58 = uVar11;
        }
LAB_710079f090:
        puVar3 = puVar25 + uVar20 * 2;
        iVar4 = (*local_c0)(&local_54,param_2,param_3);
        uVar11 = local_54;
        for (uVar12 = (ulong)(int)uVar20;
            (((uVar10 = (uint)uVar12, local_54 = uVar11, 0 < iVar4 && (uVar11 < 0x1d245)) &&
             ((&DAT_71009c9450)
              [(ulong)(uVar11 & 0xf) +
               (ulong)(byte)(&DAT_71009c91e0)
                            [((ulong)(uVar11 >> 4) & 0xf) +
                             (ulong)(byte)(&DAT_71009c9000)[uVar11 >> 8] * 0x10] * 0x10] != 0)) &&
            (uVar10 != 10)); uVar12 = uVar12 + 1) {
          param_2 = param_2 + iVar4;
          param_3 = param_3 - iVar4;
          uVar23 = (uint)(byte)(&DAT_71009c9450)
                               [(ulong)(uVar11 & 0xf) +
                                (ulong)(byte)(&DAT_71009c91e0)
                                             [((ulong)(uVar11 >> 4) & 0xf) +
                                              (ulong)(byte)(&DAT_71009c9000)[uVar11 >> 8] * 0x10] *
                                0x10];
          if (uVar10 != 0) {
            uVar7 = 0;
            puVar8 = puVar25;
            do {
              puVar2 = puVar8 + 1;
              puVar8 = puVar8 + 2;
              iVar4 = (int)uVar7;
              if ((int)uVar23 < (int)*puVar2) {
                if (iVar4 < (int)uVar10) {
                  uVar17 = (ulong)((uVar10 - iVar4) - 1);
                  FUN_710080f900(puVar25 + uVar12 * 2 + uVar17 * -2,
                                 puVar25 + uVar17 * -2 + uVar12 * 2 + -2,(uVar17 + 1) * 8);
                  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
                  *(uint *)((long)local_50 + uVar7 + 4) = uVar23;
                  *(uint *)((long)puVar25 + uVar7) = uVar11;
                  goto LAB_710079f1b0;
                }
                break;
              }
              uVar7 = (ulong)(iVar4 + 1U);
            } while (iVar4 + 1U != uVar10);
          }
          *puVar3 = uVar11;
          puVar3[1] = uVar23;
LAB_710079f1b0:
          puVar3 = puVar3 + 2;
          iVar4 = (*local_c0)(&local_54,param_2,param_3);
          uVar11 = local_54;
        }
        if (puVar19 == (undefined1 *)0x0) {
          while (lVar6 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,local_58), lVar6 == 0) {
            param_1[1] = (long)puVar14 - *param_1;
            lVar6 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + param_3 * local_90);
            if (lVar6 == 0) {
              return 0xffffffff;
            }
            local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
            puVar14 = (undefined1 *)(*param_1 + param_1[1]);
          }
          puVar14 = puVar14 + lVar6;
        }
        else {
          if (local_a8 < puVar14 + lVar6) {
            param_1[1] = (long)puVar14 - *param_1;
            lVar6 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + param_3 * local_90);
            if (lVar6 == 0) {
              return 0xffffffff;
            }
            local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
            puVar14 = (undefined1 *)(*param_1 + param_1[1]);
          }
          puVar18 = puVar19;
          puVar15 = puVar14;
          if (local_a0 == 3) {
LAB_710079f5c8:
            puVar19 = puVar18 + 1;
            puVar16 = puVar15 + 1;
            *puVar15 = *puVar18;
LAB_710079f214:
            puVar14 = puVar16 + 1;
            *puVar16 = *puVar19;
            puVar19 = puVar19 + 1;
          }
          else {
            if (3 < local_a0) {
              if (local_a0 != 4) goto LAB_710079f22c;
              puVar18 = puVar19 + 1;
              puVar15 = puVar14 + 1;
              *puVar14 = *puVar19;
              goto LAB_710079f5c8;
            }
            puVar16 = puVar14;
            if (local_a0 != 1) goto LAB_710079f214;
          }
          *puVar14 = *puVar19;
          puVar14 = puVar14 + 1;
        }
LAB_710079f22c:
        if (uVar10 != 0) {
          puVar3 = puVar25 + (uVar12 & 0xffffffff) * 2;
          do {
            local_58 = *puVar25;
            while (lVar6 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,local_58), lVar6 == 0)
            {
              param_1[1] = (long)puVar14 - *param_1;
              lVar6 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + param_3 * local_90);
              if (lVar6 == 0) {
                return 0xffffffff;
              }
              puVar14 = (undefined1 *)(*param_1 + param_1[1]);
              local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
            }
            puVar25 = puVar25 + 2;
            puVar14 = puVar14 + lVar6;
          } while (puVar3 != puVar25);
        }
        if (iVar4 == 0) goto LAB_710079f83c;
        local_58 = local_54;
        uVar12 = (ulong)local_54;
        local_a0 = iVar4;
        if (iVar4 < 0) goto LAB_710079f7f4;
      }
      if (0x2ba3 < iVar4) {
        uVar7 = (ulong)(uVar11 >> 8);
        if (0x1d2 < uVar11 >> 8) goto LAB_710079f590;
        bVar1 = (&DAT_71009c9b80)[uVar7] != '\0' && uVar11 < 0x1d245;
        if ((&DAT_71009c9b80)[uVar7] != '\0' && uVar11 < 0x1d245) goto LAB_710079f558;
        goto LAB_710079f038;
      }
      lVar6 = param_3 * local_90;
      local_58 = iVar4 / 0x24c + 0x1100;
      while (lVar9 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,local_58), lVar9 == 0) {
        param_1[1] = (long)puVar14 - *param_1;
        lVar9 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + lVar6);
        if (lVar9 == 0) {
          return 0xffffffff;
        }
        local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
        puVar14 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar14 = puVar14 + lVar9;
      local_58 = (uint)(iVar4 % 0x24c) / 0x1c + 0x1161;
      while (lVar9 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,local_58), lVar9 == 0) {
        param_1[1] = (long)puVar14 - *param_1;
        lVar9 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + lVar6);
        if (lVar9 == 0) {
          return 0xffffffff;
        }
        local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
        puVar14 = (undefined1 *)(*param_1 + param_1[1]);
      }
      puVar14 = puVar14 + lVar9;
      if (iVar4 % 0x1c != 0) {
        local_58 = iVar4 % 0x1c + 0x11a7;
        lVar9 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14);
        while (lVar9 == 0) {
          param_1[1] = (long)puVar14 - *param_1;
          lVar9 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + lVar6);
          if (lVar9 == 0) {
            return 0xffffffff;
          }
          local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
          puVar14 = (undefined1 *)(*param_1 + param_1[1]);
          lVar9 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,local_58);
        }
        goto LAB_710079fa78;
      }
      goto LAB_710079ef6c;
    }
LAB_710079f7f4:
    while (lVar6 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,uVar12), lVar6 == 0) {
      param_1[1] = (long)puVar14 - *param_1;
      lVar6 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + param_3 * local_90);
      if (lVar6 == 0) {
        return 0xffffffff;
      }
      uVar12 = (ulong)local_58;
      local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
      puVar14 = (undefined1 *)(*param_1 + param_1[1]);
    }
    puVar14 = puVar14 + lVar6;
    uVar24 = 0xffffffff;
    param_2 = param_2 + -iVar4;
    param_3 = param_3 - -iVar4;
  } while( true );
LAB_710079fbb8:
  while (lVar9 = (*local_98)(puVar14,(long)local_a8 - (long)puVar14,local_58), lVar9 == 0) {
    param_1[1] = (long)puVar14 - *param_1;
    lVar6 = FUN_710079d7c0(param_1,lVar21 + param_1[2] + param_3 * local_90);
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    local_a8 = (undefined1 *)(*param_1 + (param_1[2] - lVar21));
    puVar14 = (undefined1 *)(*param_1 + param_1[1]);
  }
LAB_710079fa78:
  puVar14 = puVar14 + lVar9;
  goto LAB_710079ef6c;
LAB_710079f420:
  lVar9 = ((-(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1) + (long)(int)uVar23)
          * 4;
  uVar10 = *(uint *)(&UNK_71009c6454 + lVar9);
  uVar23 = *(uint *)(&UNK_71009c6458 + lVar9);
  if (uVar7 == 10) {
    if (bVar1) {
      local_58 = uVar11;
    }
    uVar20 = 10;
    goto LAB_710079f090;
  }
  if (uVar7 != 0) {
    uVar12 = (ulong)((int)uVar17 - 1);
    FUN_710080f900(puVar25 + (uVar7 & 0xffffffff) * 2 + uVar12 * -2,
                   puVar25 + uVar12 * -2 + (uVar7 & 0xffffffff) * 2 + -2);
  }
  local_50[1] = 0;
  if (uVar23 < 0x1d245) {
    local_50[1] = (uint)(byte)(&DAT_71009c9450)
                              [(ulong)(uVar23 & 0xf) +
                               (ulong)(byte)(&DAT_71009c91e0)
                                            [((ulong)(uVar23 >> 4) & 0xf) +
                                             (ulong)(byte)(&DAT_71009c9000)[uVar23 >> 8] * 0x10] *
                               0x10];
  }
  uVar12 = (ulong)uVar10;
  uVar7 = uVar7 + 1;
  puVar19 = (undefined1 *)0x0;
  bVar1 = true;
  uVar17 = uVar7 & 0xffffffff;
  uVar20 = uVar7 & 0xffffffff;
  local_50[0] = uVar23;
  if (uVar10 < 0x110ac) goto LAB_710079f060;
LAB_710079f4d4:
  uVar11 = (uint)uVar12;
  if (uVar11 - 0x2f800 < 0x300) goto LAB_710079f088;
  goto LAB_710079f3d8;
}



// ===== FUN_710079fc20 @ 710079fc20 (size=588) =====

undefined8 FUN_710079fc20(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long local_30;
  code *local_20;
  int local_14;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_4 + 0x24);
  lVar3 = param_3;
  if ((uVar1 >> 10 & 1) == 0) {
    if ((uVar1 >> 0xc & 1) != 0) {
      pcVar6 = FUN_710079d0b0;
      goto joined_r0x00710079fda4;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      lVar5 = 1;
      pcVar6 = FUN_710079c9f0;
      local_14 = 1;
      goto joined_r0x00710079fe48;
    }
    if ((uVar1 & 0x800) != 0) {
      lVar5 = 2;
      pcVar6 = FUN_710079d040;
      local_14 = 2;
      goto LAB_710079fdc0;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar5 = 2;
      pcVar6 = FUN_710079d0b0;
      local_14 = 2;
      goto LAB_710079fdf8;
    }
    pcVar6 = FUN_710079c9f0;
    local_30 = 1;
    local_14 = 1;
  }
  else {
    pcVar6 = FUN_710079d040;
joined_r0x00710079fda4:
    local_14 = 2;
    lVar5 = 2;
joined_r0x00710079fe48:
    if ((uVar1 & 0x800) != 0) {
LAB_710079fdc0:
      local_20 = FUN_710079d1d0;
      local_30 = 1;
      goto LAB_710079fc88;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
LAB_710079fdf8:
      local_20 = (code *)&LAB_710079d270;
      local_30 = 1;
      goto LAB_710079fc88;
    }
    lVar3 = param_3 * lVar5;
    local_30 = lVar5;
  }
  local_20 = FUN_710079cf60;
  lVar5 = local_30;
LAB_710079fc88:
  lVar3 = FUN_710079d7c0(param_1,lVar3 + lVar5 + param_1[1]);
  if (lVar3 == 0) {
LAB_710079fe14:
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    lVar3 = *param_1 + (param_1[2] - lVar5);
    puVar7 = (undefined1 *)(*param_1 + param_1[1]);
    iVar2 = (*local_20)(&local_4,param_2,param_3);
    while (iVar2 != 0) {
      if (iVar2 < 0) {
        iVar2 = -iVar2;
        uVar8 = 0xffffffff;
      }
      param_3 = param_3 - iVar2;
      while (lVar4 = (*pcVar6)(puVar7,lVar3 - (long)puVar7,local_4), lVar4 == 0) {
        param_1[1] = (long)puVar7 - *param_1;
        lVar3 = FUN_710079d7c0(param_1,lVar5 + param_1[2] + param_3 * local_30);
        if (lVar3 == 0) goto LAB_710079fe14;
        puVar7 = (undefined1 *)(*param_1 + param_1[1]);
        lVar3 = *param_1 + (param_1[2] - lVar5);
      }
      param_2 = param_2 + iVar2;
      puVar7 = puVar7 + lVar4;
      iVar2 = (*local_20)(&local_4,param_2,param_3);
    }
    param_1[1] = (long)puVar7 - *param_1;
    *puVar7 = 0;
    if (local_14 == 2) {
      *(undefined1 *)(*param_1 + param_1[1] + 1) = 0;
    }
  }
  return uVar8;
}



// ===== FUN_710079fe70 @ 710079fe70 (size=352) =====

undefined8 FUN_710079fe70(long *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_c;
  undefined8 local_8;
  
  local_8 = 0;
  lVar3 = FUN_710079d7c0(param_1,param_3 + 1 + param_1[1]);
  if (lVar3 == 0) {
LAB_710079ffc8:
    uVar4 = 0xffffffff;
  }
  else {
    lVar3 = *param_1;
    lVar6 = param_1[2];
    puVar7 = (undefined1 *)(lVar3 + param_1[1]);
    iVar1 = FUN_7100809520();
    if (param_3 != 0) {
      puVar8 = (undefined1 *)(lVar3 + ((lVar6 + -1) - (long)iVar1));
      do {
        iVar1 = FUN_710079cd60(&local_c,param_2,param_3);
        if (iVar1 == 0) break;
        if (puVar8 <= puVar7) {
          lVar3 = *param_1;
          uVar9 = param_3 * 2;
          param_1[1] = (long)puVar7 - lVar3;
          iVar2 = FUN_7100809520();
          if (uVar9 < (ulong)(long)iVar2 || uVar9 - (long)iVar2 == 0) {
            iVar2 = FUN_7100809520();
            uVar9 = (ulong)iVar2;
          }
          lVar3 = FUN_710079d7c0(param_1,((long)puVar7 - lVar3) + 1 + uVar9);
          if (lVar3 == 0) goto LAB_710079ffc8;
          lVar10 = param_1[2];
          lVar3 = *param_1;
          lVar6 = param_1[1];
          iVar2 = FUN_7100809520();
          puVar7 = (undefined1 *)(lVar3 + lVar6);
          puVar8 = (undefined1 *)(lVar3 + ((lVar10 + -1) - (long)iVar2));
        }
        uVar5 = local_c;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
          uVar5 = 0x3f;
        }
        iVar2 = FUN_7100816b20(puVar7,uVar5,&local_8);
        param_2 = param_2 + iVar1;
        param_3 = param_3 - iVar1;
        if (iVar2 == -1) goto LAB_710079ffc8;
        puVar7 = puVar7 + iVar2;
      } while (param_3 != 0);
    }
    uVar4 = 0;
    param_1[1] = (long)puVar7 - *param_1;
    *puVar7 = 0;
  }
  return uVar4;
}



// ===== FUN_71007a0280 @ 71007a0280 (size=436) =====

undefined4 FUN_71007a0280(long *param_1,char *param_2,undefined2 *param_3,long param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_c [4];
  undefined8 local_8;
  
  if (*(int *)(param_4 + 0x20) == 0) {
    bVar3 = param_3 != (undefined2 *)0x0;
    param_3 = &DAT_7100840048;
    cVar2 = *param_2;
    uVar6 = 0;
    if (bVar3 && cVar2 != '\0') {
      do {
        lVar5 = param_1[1];
        if (cVar2 < '\0') {
          if ((*(uint *)(param_4 + 0x24) >> 8 & 1) == 0) {
            lVar5 = FUN_710079d7c0(param_1,lVar5 + 2);
            if (lVar5 == 0) goto LAB_71007a0398;
            *(undefined1 *)(*param_1 + param_1[1]) = 0x3f;
            lVar5 = param_1[1];
            param_1[1] = lVar5 + 1;
            *(undefined1 *)(*param_1 + lVar5 + 1) = 0;
          }
          else {
            lVar5 = FUN_710079d7c0(param_1,lVar5 + 4);
            if (lVar5 == 0) {
LAB_71007a0398:
              FUN_71007a0e30(1,"Out of memory");
              goto LAB_71007a03a8;
            }
            lVar5 = *param_1;
            lVar1 = param_1[1];
            *(undefined2 *)(lVar5 + lVar1) = 0xbfef;
            *(undefined1 *)(lVar5 + lVar1 + 2) = 0xbd;
            lVar5 = param_1[1];
            param_1[1] = lVar5 + 3;
            *(undefined1 *)(*param_1 + lVar5 + 3) = 0;
          }
          uVar6 = 0xffffffff;
        }
        else {
          lVar5 = FUN_710079d7c0(param_1,lVar5 + 2);
          if (lVar5 == 0) goto LAB_71007a0398;
          *(char *)(*param_1 + param_1[1]) = cVar2;
          lVar5 = param_1[1];
          param_1[1] = lVar5 + 1;
          *(undefined1 *)(*param_1 + lVar5 + 1) = 0;
        }
        param_2 = param_2 + 1;
        cVar2 = *param_2;
      } while (cVar2 != '\0');
    }
  }
  else {
LAB_71007a03a8:
    lVar5 = FUN_710079d870();
    if (lVar5 != 0) {
      local_8 = 0;
      while( true ) {
        if (param_3 == (undefined2 *)0x0) {
          return 0;
        }
        uVar4 = FUN_7100823240(auStack_c,param_2,param_3,&local_8);
        if (0xfffffffffffffffd < uVar4) break;
        if (uVar4 == 0) {
          return 0;
        }
        param_3 = (undefined2 *)((long)param_3 - uVar4);
        param_2 = param_2 + uVar4;
      }
      return 0xffffffff;
    }
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// ===== FUN_71007a0440 @ 71007a0440 (size=60) =====

void FUN_71007a0440(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (*(char *)(param_2 + lVar2) == '\0') break;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1000000);
  lVar2 = FUN_710079d870();
  if (lVar2 != 0) {
    return;
  }
  FUN_710079d1b0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007a0478);
  (*pcVar1)();
}



// ===== FUN_71007a0480 @ 71007a0480 (size=80) =====

long * FUN_71007a0480(long *param_1,undefined1 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_28;
  
  lVar3 = FUN_710079d7c0(param_1,param_1[1] + 2);
  if (lVar3 != 0) {
    *(undefined1 *)(*param_1 + param_1[1]) = param_2;
    lVar3 = param_1[1];
    param_1[1] = lVar3 + 1;
    *(undefined1 *)(*param_1 + lVar3 + 1) = 0;
    return param_1;
  }
  auVar14 = FUN_710079d1b0();
  plVar4 = auVar14._0_8_;
  uStack_28 = 0;
  lVar3 = FUN_710079d7c0(plVar4,param_3 + 1 + plVar4[1]);
  if (lVar3 == 0) {
    return (long *)0xffffffff;
  }
  lVar8 = plVar4[2];
  lVar3 = *plVar4;
  lVar1 = plVar4[1];
  iVar2 = FUN_7100809520();
  puVar6 = (undefined1 *)(lVar3 + lVar1);
  puVar12 = (undefined1 *)(lVar3 + ((lVar8 + -1) - (long)iVar2));
  if (*auVar14._8_8_ == 0 || param_3 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)0x0;
    piVar10 = auVar14._8_8_;
    do {
      while( true ) {
        uVar9 = param_3 * 2;
        puVar7 = puVar6;
        if (puVar12 <= puVar6) {
          plVar4[1] = (long)puVar6 - *plVar4;
          *puVar6 = 0;
          lVar3 = plVar4[1];
          iVar2 = FUN_7100809520();
          if (uVar9 < (ulong)(long)iVar2 || uVar9 - (long)iVar2 == 0) {
            iVar2 = FUN_7100809520();
            lVar3 = FUN_710079d7c0(plVar4,lVar3 + 1 + (long)iVar2);
          }
          else {
            lVar3 = FUN_710079d7c0(plVar4,lVar3 + 1 + uVar9);
          }
          if (lVar3 == 0) {
            return (long *)0xffffffff;
          }
          lVar8 = plVar4[2];
          lVar3 = *plVar4;
          lVar1 = plVar4[1];
          iVar2 = FUN_7100809520();
          puVar7 = (undefined1 *)(lVar3 + lVar1);
          puVar12 = (undefined1 *)(lVar3 + ((lVar8 + -1) - (long)iVar2));
        }
        piVar11 = piVar10 + 1;
        iVar2 = FUN_7100816b20(puVar7,*piVar10,&uStack_28);
        piVar10 = piVar11;
        if (iVar2 == -1) break;
        puVar6 = puVar7 + iVar2;
        param_3 = param_3 + -1;
        if (*piVar11 == 0 || param_3 == 0) goto LAB_71007a0614;
      }
      piVar5 = (int *)FUN_710080e8e0();
      plVar13 = (long *)0xffffffff;
      puVar6 = puVar7;
      if (*piVar5 != 0x8a) break;
      puVar6 = puVar7 + 1;
      *puVar7 = 0x3f;
      param_3 = param_3 + -1;
    } while (*piVar11 != 0 && param_3 != 0);
  }
LAB_71007a0614:
  plVar4[1] = (long)puVar6 - *plVar4;
  *puVar6 = 0;
  return plVar13;
}



// ===== FUN_71007a04d0 @ 71007a04d0 (size=440) =====

undefined4 FUN_71007a04d0(long *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined8 local_8;
  
  local_8 = 0;
  lVar3 = FUN_710079d7c0(param_1,param_3 + 1 + param_1[1]);
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  lVar7 = param_1[2];
  lVar3 = *param_1;
  lVar1 = param_1[1];
  iVar2 = FUN_7100809520();
  puVar5 = (undefined1 *)(lVar3 + lVar1);
  puVar10 = (undefined1 *)(lVar3 + ((lVar7 + -1) - (long)iVar2));
  if (*param_2 == 0 || param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      while( true ) {
        uVar8 = param_3 * 2;
        puVar6 = puVar5;
        if (puVar10 <= puVar5) {
          param_1[1] = (long)puVar5 - *param_1;
          *puVar5 = 0;
          lVar3 = param_1[1];
          iVar2 = FUN_7100809520();
          if (uVar8 < (ulong)(long)iVar2 || uVar8 - (long)iVar2 == 0) {
            iVar2 = FUN_7100809520();
            lVar3 = FUN_710079d7c0(param_1,lVar3 + 1 + (long)iVar2);
          }
          else {
            lVar3 = FUN_710079d7c0(param_1,lVar3 + 1 + uVar8);
          }
          if (lVar3 == 0) {
            return 0xffffffff;
          }
          lVar7 = param_1[2];
          lVar3 = *param_1;
          lVar1 = param_1[1];
          iVar2 = FUN_7100809520();
          puVar6 = (undefined1 *)(lVar3 + lVar1);
          puVar10 = (undefined1 *)(lVar3 + ((lVar7 + -1) - (long)iVar2));
        }
        piVar9 = param_2 + 1;
        iVar2 = FUN_7100816b20(puVar6,*param_2,&local_8);
        param_2 = piVar9;
        if (iVar2 == -1) break;
        puVar5 = puVar6 + iVar2;
        param_3 = param_3 + -1;
        if (*piVar9 == 0 || param_3 == 0) goto LAB_71007a0614;
      }
      piVar4 = (int *)FUN_710080e8e0();
      uVar11 = 0xffffffff;
      puVar5 = puVar6;
      if (*piVar4 != 0x8a) break;
      puVar5 = puVar6 + 1;
      *puVar6 = 0x3f;
      param_3 = param_3 + -1;
    } while (*piVar9 != 0 && param_3 != 0);
  }
LAB_71007a0614:
  param_1[1] = (long)puVar5 - *param_1;
  *puVar5 = 0;
  return uVar11;
}



// ===== FUN_71007a0690 @ 71007a0690 (size=116) =====

void FUN_71007a0690(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 6;
  if (param_3 == 0) {
    uVar3 = 2;
  }
  uVar1 = FUN_710079d140(param_1,6,2);
  lVar2 = FUN_710079cb80(param_1,param_2,uVar1);
  if (lVar2 != 0) {
    return;
  }
  FUN_710079d4f0(param_1,param_2,uVar1,uVar3);
  return;
}



// ===== FUN_71007a0710 @ 71007a0710 (size=108) =====

void FUN_71007a0710(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x58);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_710081c200(plVar1[1]);
    FUN_710081c200(plVar1[2]);
    FUN_710081c200(plVar1[5]);
    FUN_710081c200(plVar1);
    plVar1 = (long *)lVar2;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_710081c200(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// ===== FUN_71007a0780 @ 71007a0780 (size=20) =====

undefined8 FUN_71007a0780(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((*(uint *)(param_1 + 0x24) & 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
  }
  return *puVar1;
}



// ===== FUN_71007a07a0 @ 71007a07a0 (size=444) =====

uint FUN_71007a07a0(long *param_1,char *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  
  if (param_2 == (char *)0x0 || param_3 == 0) {
LAB_71007a081c:
    if (param_4 == 0) goto LAB_71007a0870;
    uVar1 = *(uint *)(param_4 + 0x24);
  }
  else {
    if ((param_4 == 0) || (uVar1 = *(uint *)(param_4 + 0x24), (uVar1 & 0x2800) == 0)) {
      uVar5 = 0;
      do {
        if (param_2[uVar5] == '\0') {
          if (uVar5 == 0) goto LAB_71007a081c;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
      if (param_4 == 0) {
        lVar4 = FUN_710079d870(param_1);
        return -(uint)(lVar4 == 0);
      }
LAB_71007a08b0:
      if (*(int *)(param_4 + 0x50) < 2) {
        uVar1 = 0;
        lVar4 = 0;
      }
      else {
        *(undefined8 *)(param_4 + 0x30) = 0;
        uVar1 = (**(code **)(param_4 + 0x40))(param_4 + 0x28,param_2,uVar5,param_4);
        if (uVar1 != 0) {
          piVar3 = (int *)FUN_710080e8e0();
          if (*piVar3 == 0xc) {
            return uVar1;
          }
          uVar1 = uVar1 & (int)uVar1 >> 0x1f;
        }
        param_2 = *(char **)(param_4 + 0x28);
        uVar5 = *(ulong *)(param_4 + 0x30);
        lVar4 = 1;
      }
      uVar2 = (**(code **)(param_4 + (lVar4 + 8) * 8))(param_1,param_2,uVar5,param_4);
      if ((int)uVar2 < (int)uVar1) {
        uVar1 = uVar2;
      }
      return uVar1;
    }
    if (param_3 >> 1 != 0) {
      lVar4 = 0;
      pcVar6 = param_2;
      do {
        if ((*pcVar6 == '\0') && (pcVar6[1] == '\0')) {
          uVar5 = lVar4 << 1;
          if (uVar5 == 0) goto LAB_71007a0824;
          goto LAB_71007a08b0;
        }
        pcVar6 = pcVar6 + 2;
        lVar4 = lVar4 + 1;
      } while (pcVar6 != param_2 + (param_3 >> 1) * 2);
      uVar5 = lVar4 * 2;
      goto LAB_71007a08b0;
    }
  }
LAB_71007a0824:
  if ((uVar1 & 0x1400) != 0) {
    lVar4 = FUN_710079d7c0(param_1,param_1[1] + 2);
    if (lVar4 != 0) {
      *(undefined1 *)(*param_1 + param_1[1]) = 0;
      *(undefined1 *)(*param_1 + param_1[1] + 1) = 0;
      return 0;
    }
    return 0xffffffff;
  }
LAB_71007a0870:
  lVar4 = FUN_710079d7c0(param_1,param_1[1] + 1);
  if (lVar4 != 0) {
    *(undefined1 *)(*param_1 + param_1[1]) = 0;
    return 0;
  }
  return 0xffffffff;
}



// ===== FUN_71007a0960 @ 71007a0960 (size=108) =====

void FUN_71007a0960(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_710081c200(param_1[6]);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  FUN_710081c200(*param_1);
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_710081c200(param_1[3]);
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_710081c200(param_1[9]);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ===== FUN_71007a09d0 @ 71007a09d0 (size=352) =====

uint FUN_71007a09d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 & 1) != 0) {
    *param_3 = *param_2;
    return 0;
  }
  uVar2 = uVar1 & 4;
  *param_3 = 0;
  if ((uVar1 >> 2 & 1) != 0) {
    param_2[1] = 0;
    iVar3 = FUN_71007a04d0(param_2,param_2[6],param_2[7]);
    uVar2 = 0xffffffff;
    uVar1 = *(uint *)(param_2 + 0xc);
    *param_3 = *param_2;
    if (iVar3 == 0) {
      *(uint *)(param_2 + 0xc) = uVar1 | 1;
      return 0;
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2[1] = 0;
    uVar4 = FUN_710079d140(param_1);
    lVar5 = FUN_710079cb80(param_1,"UTF-8",uVar4);
    if ((lVar5 != 0) || (lVar5 = FUN_710079d4f0(param_1,"UTF-8",uVar4,6), lVar5 != 0)) {
      param_2[1] = 0;
      iVar3 = FUN_71007a07a0(param_2,param_2[3],param_2[4],lVar5);
      if (param_1 == 0) {
        FUN_710081c200(*(undefined8 *)(lVar5 + 8));
        FUN_710081c200(*(undefined8 *)(lVar5 + 0x10));
        FUN_710081c200(*(undefined8 *)(lVar5 + 0x28));
        FUN_710081c200(lVar5);
      }
      *param_3 = *param_2;
      if (iVar3 == 0) {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1;
        return 0;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ===== FUN_71007a0b30 @ 71007a0b30 (size=284) =====

undefined8 FUN_71007a0b30(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 >> 1 & 1) == 0) {
    *param_3 = 0;
    if (((uVar1 & 1) != 0) ||
       (FUN_71007a09d0(param_1,param_2,auStack_8), (*(uint *)(param_2 + 0xc) & 1) != 0)) {
      uVar3 = FUN_710079d140(param_1);
      lVar4 = FUN_710079cb80(param_1,uVar3,"UTF-8");
      if ((lVar4 != 0) || (lVar4 = FUN_710079d4f0(param_1,uVar3,"UTF-8",5), lVar4 != 0)) {
        param_2[4] = 0;
        iVar2 = FUN_71007a07a0(param_2 + 3,*param_2,param_2[1],lVar4);
        if (param_1 == 0) {
          FUN_710081c200(*(undefined8 *)(lVar4 + 8));
          FUN_710081c200(*(undefined8 *)(lVar4 + 0x10));
          FUN_710081c200(*(undefined8 *)(lVar4 + 0x28));
          FUN_710081c200(lVar4);
        }
        if (iVar2 == 0) {
          *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 2;
          *param_3 = param_2[3];
          return 0;
        }
      }
      return 0xffffffff;
    }
  }
  else {
    *param_3 = param_2[3];
  }
  return 0;
}



// ===== FUN_71007a0c50 @ 71007a0c50 (size=152) =====

undefined8 FUN_71007a0c50(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 0;
  }
  lVar2 = FUN_710081ce00(param_2);
  *(undefined8 *)(param_1 + 8) = 0;
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  lVar3 = lVar2;
  if (lVar2 != 0) {
    do {
      lVar3 = lVar4;
      if (*(char *)(param_2 + lVar4) == '\0') break;
      lVar4 = lVar4 + 1;
      lVar3 = lVar2;
    } while (lVar2 != lVar4);
  }
  lVar4 = FUN_710079d870(param_1,param_2,lVar3);
  if (lVar4 == 0) {
    FUN_710079d1b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x71007a0ce4);
    (*pcVar1)();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}



// ===== FUN_71007a0cf0 @ 71007a0cf0 (size=84) =====

undefined8 FUN_71007a0cf0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar1 = FUN_71007a07a0();
    *(uint *)(param_1 + 0x60) = (uint)((int)uVar1 == 0);
    return uVar1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 0;
}



// ===== FUN_71007a0d50 @ 71007a0d50 (size=24) =====

undefined8 FUN_71007a0d50(void)

{
  FUN_71007a0710();
  return 0;
}



// ===== FUN_71007a0d70 @ 71007a0d70 (size=24) =====

char * FUN_71007a0d70(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x28);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '\0')) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// ===== FUN_71007a0d90 @ 71007a0d90 (size=16) =====

void FUN_71007a0d90(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ===== FUN_71007a0da0 @ 71007a0da0 (size=136) =====

void FUN_71007a0da0(long param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_71007a35c0(param_1 + 0x30,param_3);
    param_3 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x28) = param_3;
  return;
}



// ===== FUN_71007a0e30 @ 71007a0e30 (size=96) =====

void FUN_71007a0e30(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_7100823120(2,"Fatal Internal Error in libarchive: ",0x24);
  uVar2 = FUN_710081ce00(param_2);
  FUN_7100823120(2,param_2,uVar2);
  FUN_7100823120(2,&DAT_71008542a0,1);
  FUN_710000a120(param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007a0e8c);
  (*pcVar1)();
}



// ===== FUN_71007a0e90 @ 71007a0e90 (size=80) =====

void FUN_71007a0e90(ulong param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0) {
    return;
  }
  uVar1 = FUN_710076be70(param_1,1);
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) == 0)) {
    FUN_710076be70(param_1 & 0xffffffff,2,uVar1 | 1);
    return;
  }
  return;
}



// ===== FUN_71007a0ee0 @ 71007a0ee0 (size=28) =====

undefined8 FUN_71007a0ee0(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071007a0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(param_1 + 8) + 8))();
    return uVar1;
  }
  return 0;
}



// ===== FUN_71007a0f00 @ 71007a0f00 (size=16) =====

void FUN_71007a0f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0071007a0f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return;
}



// ===== thunk_FUN_71007a0ee0 @ 71007a0f10 (size=4) =====

undefined8 thunk_FUN_71007a0ee0(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071007a0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(param_1 + 8) + 8))();
    return uVar1;
  }
  return 0;
}



// ===== FUN_71007a0f20 @ 71007a0f20 (size=16) =====

void FUN_71007a0f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0071007a0f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x30))();
  return;
}



// ===== FUN_71007a0f30 @ 71007a0f30 (size=16) =====

void FUN_71007a0f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0071007a0f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x40))();
  return;
}



// ===== FUN_71007a0f40 @ 71007a0f40 (size=100) =====

void FUN_71007a0f40(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_71007a0960(lVar1);
    FUN_710081c200(*(undefined8 *)(param_1 + 8));
    *(long **)(param_1 + 8) = plVar2;
  }
  FUN_710081c200(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_710081c200(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// ===== FUN_71007a0fb0 @ 71007a0fb0 (size=268) =====

undefined1 * FUN_71007a0fb0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 *puVar3;
  char *pcVar4;
  
  *param_1 = 0;
  do {
    uVar1 = -param_2 & param_2;
    if (uVar1 == 0) {
      return param_1;
    }
    param_2 = param_2 & (uVar1 ^ 0xffffffff);
    if (uVar1 == 0x10) {
      pcVar4 = "eof";
LAB_71007a1028:
      lVar2 = FUN_710081ce00(param_1);
      puVar3 = (undefined2 *)FUN_71008066c0(param_1 + lVar2,pcVar4);
    }
    else {
      if (uVar1 < 0x11) {
        if (uVar1 == 2) {
          pcVar4 = "header";
        }
        else if (uVar1 == 4) {
          pcVar4 = "data";
        }
        else {
          pcVar4 = "??";
          if (uVar1 == 1) {
            pcVar4 = "new";
          }
        }
        goto LAB_71007a1028;
      }
      pcVar4 = "closed";
      if (uVar1 == 0x20) goto LAB_71007a1028;
      pcVar4 = "??";
      if (uVar1 == 0x8000) {
        pcVar4 = "fatal";
      }
      lVar2 = FUN_710081ce00(param_1);
      puVar3 = (undefined2 *)FUN_71008066c0(param_1 + lVar2,pcVar4);
    }
    if (param_2 == 0) {
      return param_1;
    }
    *puVar3 = 0x2f;
  } while( true );
}



// ===== FUN_71007a10c0 @ 71007a10c0 (size=360) =====

undefined8 FUN_71007a10c0(uint *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint extraout_w1;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  uVar1 = *param_1;
  if (uVar1 != 0xcad11c9) {
    if (uVar1 < 0xcad11ca) {
      if ((uVar1 == 0xdeb0c5) || (uVar1 == 0xbadb0c5)) goto LAB_71007a1110;
    }
    else if ((uVar1 == 0xb0c5c0de) || (uVar1 == 0xc001b0c5)) goto LAB_71007a1110;
    FUN_71000037ec("PROGRAMMER ERROR: Function ");
    FUN_71000037ec(param_4);
    FUN_71000037ec(" invoked with invalid archive handle.\n");
    uVar1 = FUN_710080f820();
    param_2 = extraout_w1;
  }
LAB_71007a1110:
  if (uVar1 == param_2) {
    uVar2 = 0;
    if ((param_1[1] & param_3) == 0) {
      if (param_1[1] != 0x8000) {
        uVar2 = FUN_71007a0fb0(auStack_80);
        uVar3 = FUN_71007a0fb0(auStack_40,param_3);
        FUN_71007a0da0(param_1,0xffffffff,
                       "INTERNAL ERROR: Function \'%s\' invoked with archive structure in state \'%s\', should be in state \'%s\'"
                       ,param_4,uVar2,uVar3);
      }
      param_1[1] = 0x8000;
      uVar2 = 0xffffffe2;
    }
  }
  else {
    FUN_71007a0da0(param_1,0xffffffff,
                   "PROGRAMMER ERROR: Function \'%s\' invoked on \'%s\' archive object, which is not supported."
                  );
    param_1[1] = 0x8000;
    uVar2 = 0xffffffe2;
  }
  return uVar2;
}



// ===== FUN_71007a1230 @ 71007a1230 (size=148) =====

void FUN_71007a1230(long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  bVar5 = *(byte *)(param_1 + (param_4 & 0xffffffff) + 0x6c);
  uVar6 = (uint)*(byte *)(param_1 + (param_3 & 0xffffffff) + 0x6c) - (uint)bVar5;
  uVar1 = (uint)bVar5 + (uint)bVar5 * 2;
  bVar5 = *(byte *)(param_1 + (ulong)(uVar6 - 1) + 0x92);
  uVar9 = (ulong)bVar5;
  lVar3 = param_2 + (ulong)uVar1 * 4;
  iVar7 = (int)*(undefined8 *)(param_1 + 0x40);
  iVar8 = (int)lVar3;
  if (*(byte *)(param_1 + uVar9 + 0x6c) != uVar6) {
    uVar9 = (ulong)(bVar5 - 1);
    bVar5 = *(byte *)(param_1 + uVar9 + 0x6c);
    iVar2 = (uint)bVar5 + (uint)bVar5 * 2;
    lVar4 = param_1 + (ulong)((uVar6 - 1) - (uint)bVar5) * 4;
    *(undefined4 *)(lVar3 + (ulong)(uint)(iVar2 * 4)) = *(undefined4 *)(lVar4 + 0x114);
    *(int *)(lVar4 + 0x114) = (iVar8 + iVar2 * 4) - iVar7;
  }
  param_1 = param_1 + uVar9 * 4;
  *(undefined4 *)(param_2 + (ulong)(uVar1 * 4)) = *(undefined4 *)(param_1 + 0x114);
  *(int *)(param_1 + 0x114) = iVar8 - iVar7;
  return;
}



// ===== FUN_71007a12d0 @ 71007a12d0 (size=748) =====

void FUN_71007a12d0(undefined8 *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  short sVar22;
  short extraout_w10;
  ushort *puVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  
  puVar23 = (ushort *)*param_1;
  puVar19 = (undefined4 *)param_1[2];
  lVar24 = param_1[8];
  uVar2 = *(uint *)(puVar23 + 2);
  puVar21 = (undefined4 *)(lVar24 + (ulong)uVar2);
  uVar5 = *(undefined1 *)puVar19;
  bVar6 = *(byte *)((long)puVar19 + 1);
  uVar4 = *(undefined4 *)((long)puVar19 + 2);
  if (puVar21 != puVar19) {
    uVar13 = ((ulong)((long)puVar19 + (-6 - (long)puVar21)) >> 1) * 0x2aaaaaaaaaaaaaab &
             0x7fffffffffffffff;
    lVar25 = uVar13 * -6;
    FUN_710080f900((long)puVar19 + lVar25,(long)puVar19 + (uVar13 + 1) * -6);
    puVar19 = (undefined4 *)((long)puVar19 + lVar25 + -6);
  }
  *(undefined1 *)puVar19 = uVar5;
  iVar3 = *(int *)(param_1 + 3);
  uVar12 = bVar6 + 4 & 0xff;
  *(undefined4 *)((long)puVar19 + 2) = uVar4;
  uVar8 = puVar23[1];
  if (iVar3 != 0) {
    uVar12 = uVar12 + 1;
  }
  uVar12 = uVar12 >> 1;
  *(char *)((long)puVar19 + 1) = (char)uVar12;
  uVar26 = (uint)uVar8 - (uint)bVar6;
  uVar8 = *puVar23;
  puVar20 = (undefined4 *)((long)puVar19 + ((ulong)(uVar8 - 2) + 1) * 6);
  do {
    while( true ) {
      puVar18 = puVar19;
      puVar19 = (undefined4 *)((long)puVar18 + 6);
      uVar14 = (uint)*(byte *)((long)puVar18 + 7) + (uint)(iVar3 != 0);
      uVar26 = uVar26 - *(byte *)((long)puVar18 + 7);
      uVar11 = uVar14 >> 1;
      uVar12 = uVar12 + (uVar14 >> 1);
      sVar22 = (short)uVar12;
      *(char *)((long)puVar18 + 7) = (char)uVar11;
      if (uVar11 <= *(byte *)((long)puVar18 + 1)) break;
      uVar5 = *(undefined1 *)puVar19;
      uVar9 = *(undefined2 *)(puVar18 + 2);
      uVar10 = *(undefined2 *)((long)puVar18 + 10);
      puVar16 = puVar19;
      puVar17 = puVar18;
      do {
        puVar15 = puVar16;
        puVar16 = (undefined4 *)((long)puVar15 + -6);
        uVar4 = *puVar17;
        *(undefined2 *)(puVar15 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar15 = uVar4;
        if (puVar21 == puVar16) break;
        puVar17 = (undefined4 *)((long)puVar17 + -6);
      } while (*(byte *)((long)puVar15 + -0xb) < uVar11);
      *(undefined1 *)puVar16 = uVar5;
      *(char *)((long)puVar15 + -5) = (char)uVar11;
      *(undefined2 *)(puVar15 + -1) = uVar9;
      *(undefined2 *)((long)puVar15 + -2) = uVar10;
      if (puVar19 == puVar20) goto LAB_71007a1430;
    }
  } while (puVar19 != puVar20);
LAB_71007a1430:
  uVar12 = (uint)*(byte *)((long)puVar18 + 7);
  if (*(byte *)((long)puVar18 + 7) == 0) {
    do {
      pcVar1 = (char *)((long)puVar19 + -5);
      puVar19 = (undefined4 *)((long)puVar19 + -6);
      uVar12 = uVar12 + 1;
    } while (*pcVar1 == '\0');
    uVar11 = uVar8 - uVar12;
    uVar14 = uVar11 & 0xffff;
    uVar26 = uVar26 + uVar12;
    uVar12 = uVar8 + 1 >> 1;
    *puVar23 = (ushort)uVar11;
    if (uVar14 == 1) {
      uVar5 = *(undefined1 *)(lVar24 + (ulong)uVar2);
      uVar14 = (uint)*(byte *)((long)puVar21 + 1);
      uVar4 = *(undefined4 *)((long)puVar21 + 2);
      do {
        uVar11 = uVar14 - (uVar14 >> 1);
        uVar26 = uVar26 >> 1;
        uVar14 = uVar11 & 0xff;
      } while (1 < uVar26);
      bVar6 = *(byte *)((long)param_1 + (ulong)(uVar12 - 1) + 0x92);
      *(undefined4 *)(lVar24 + (ulong)uVar2) =
           *(undefined4 *)((long)param_1 + (ulong)bVar6 * 4 + 0x114);
      *(uint *)((long)param_1 + (ulong)bVar6 * 4 + 0x114) = uVar2;
      param_1[2] = puVar23 + 1;
      *(undefined1 *)(puVar23 + 1) = uVar5;
      *(char *)((long)puVar23 + 3) = (char)uVar11;
      *(undefined4 *)(puVar23 + 2) = uVar4;
      return;
    }
    uVar14 = (int)(uVar14 + 1) >> 1;
    if (uVar14 != uVar12) {
      uVar13 = (ulong)(uVar14 - 1);
      bVar6 = *(byte *)((long)param_1 + (ulong)(uVar12 - 1) + 0x92);
      bVar7 = *(byte *)((long)param_1 + uVar13 + 0x92);
      if (bVar6 != bVar7) {
        uVar12 = *(uint *)((long)param_1 + (ulong)bVar7 * 4 + 0x114);
        if (uVar12 == 0) {
          FUN_71007a1230(param_1,puVar21);
          sVar22 = extraout_w10;
        }
        else {
          *(undefined4 *)((long)param_1 + (ulong)bVar7 * 4 + 0x114) =
               *(undefined4 *)(lVar24 + (ulong)uVar12);
          puVar19 = puVar21;
          puVar20 = (undefined4 *)(lVar24 + (ulong)uVar12);
          do {
            puVar18 = puVar19 + 3;
            *puVar20 = *puVar19;
            puVar20[1] = puVar19[1];
            puVar20[2] = puVar19[2];
            puVar19 = puVar18;
            puVar20 = puVar20 + 3;
          } while (puVar18 != puVar21 + (uVar13 + 1) * 3);
          *(undefined4 *)(lVar24 + (ulong)uVar2) =
               *(undefined4 *)((long)param_1 + (ulong)bVar6 * 4 + 0x114);
          *(uint *)((long)param_1 + (ulong)bVar6 * 4 + 0x114) = uVar2;
          puVar21 = (undefined4 *)(lVar24 + (ulong)uVar12);
        }
      }
      uVar13 = (long)puVar21 - lVar24;
      puVar21 = (undefined4 *)(lVar24 + (uVar13 & 0xffffffff));
      *(int *)(puVar23 + 2) = (int)uVar13;
    }
  }
  puVar23[1] = (sVar22 + (short)uVar26) - (short)(uVar26 >> 1);
  param_1[2] = puVar21;
  return;
}



// ===== FUN_71007a15c0 @ 71007a15c0 (size=172) =====

long FUN_71007a15c0(undefined8 *param_1,uint param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  ushort *puVar6;
  
  puVar6 = (ushort *)*param_1;
  uVar3 = *puVar6;
  if (uVar3 != 0x100) {
    uVar4 = uVar3 - param_2;
    lVar1 = (ulong)(uVar4 < param_2) * 4 + (ulong)((uint)puVar6[1] < (uint)uVar3 * 0xb) * 2 +
            (ulong)*(uint *)(param_1 + 5);
    if (uVar4 < (uint)*(ushort *)(param_1[8] + (ulong)*(uint *)(puVar6 + 4)) - (uint)uVar3) {
      lVar1 = lVar1 + 1;
    }
    lVar1 = (ulong)*(byte *)((long)param_1 + (ulong)(uVar4 - 1) + 0x1ac) * 0x40 + 0x4b0 + lVar1 * 4;
    iVar2 = (int)(uint)*(ushort *)((long)param_1 + lVar1) >>
            (*(byte *)((long)param_1 + lVar1 + 2) & 0x1f);
    sVar5 = (short)iVar2;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    *(ushort *)((long)param_1 + lVar1) = *(ushort *)((long)param_1 + lVar1) - sVar5;
    *param_3 = iVar2;
    return (long)param_1 + lVar1;
  }
  *param_3 = 1;
  return (long)param_1 + 0x4ac;
}



// ===== FUN_71007a1670 @ 71007a1670 (size=132) =====

bool FUN_71007a1670(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = (**(code **)(*(long *)(param_1 + 0x28) + 8))();
  if (cVar1 != '\0') {
    return false;
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  iVar4 = 4;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  do {
    uVar2 = (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    iVar4 = iVar4 + -1;
    uVar3 = uVar2 & 0xff | uVar3 << 8;
    *(uint *)(param_1 + 0x1c) = uVar3;
  } while (iVar4 != 0);
  return uVar3 != 0xffffffff;
}



// ===== FUN_71007a1720 @ 71007a1720 (size=148) =====

void FUN_71007a1720(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x20);
  do {
    if (0xffffff < (uVar4 + uVar1 ^ uVar4)) {
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        return;
      }
      *(uint *)(param_1 + 0x18) = -uVar4 & *(uint *)(param_1 + 0x24) - 1;
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar3 = (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    uVar1 = *(int *)(param_1 + 0x18) << 8;
    uVar4 = *(int *)(param_1 + 0x20) << 8;
    *(uint *)(param_1 + 0x18) = uVar1;
    *(uint *)(param_1 + 0x1c) = uVar3 & 0xff | iVar2 << 8;
    *(uint *)(param_1 + 0x20) = uVar4;
  } while( true );
}



// ===== FUN_71007a1800 @ 71007a1800 (size=76) =====

bool FUN_71007a1800(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = (*(uint *)(param_1 + 0x18) >> 0xe) * param_2;
  bVar4 = uVar2 <= uVar1;
  if (bVar4) {
    iVar3 = uVar1 - uVar2;
    uVar2 = *(uint *)(param_1 + 0x18) - uVar2;
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  *(uint *)(param_1 + 0x18) = uVar2;
  FUN_71007a1720();
  return bVar4;
}



// ===== FUN_71007a1850 @ 71007a1850 (size=36) =====

void FUN_71007a1850(undefined8 *param_1)

{
  *param_1 = &LAB_71007a1700;
  param_1[1] = &DAT_71007a17c0;
  param_1[2] = FUN_71007a1800;
  return;
}



// ===== FUN_71007a18d0 @ 71007a18d0 (size=168) =====

void FUN_71007a18d0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)*param_1;
  uVar4 = *param_1 >> 0x20;
  if ((0xfeffffff < uVar2) && (uVar4 == 0)) {
    *param_1 = (ulong)(uVar2 << 8);
    param_1[2] = param_1[2] + 1;
    return;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + 0xc);
  do {
    (**(code **)(param_1[3] + 8))(param_1[3],uVar2 + (int)uVar4);
    uVar1 = param_1[2];
    uVar2 = 0xff;
    uVar3 = *param_1;
    param_1[2] = uVar1 - 1;
    uVar4 = uVar3 >> 0x20;
  } while (uVar1 - 1 != 0);
  *(char *)((long)param_1 + 0xc) = (char)(uVar3 >> 0x18);
  *param_1 = (ulong)(uint)((int)uVar3 << 8);
  param_1[2] = 1;
  return;
}



// ===== FUN_71007a1980 @ 71007a1980 (size=48) =====

void FUN_71007a1980(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 5;
  do {
    FUN_71007a18d0(param_1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// ===== FUN_71007a19b0 @ 71007a19b0 (size=392) =====

void FUN_71007a19b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  short sVar7;
  int iVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar4 = param_1[8];
  *(undefined4 *)(param_1 + 7) = 0;
  uVar3 = *(uint *)((long)param_1 + 0x24);
  lVar2 = lVar4 + (ulong)*(uint *)(param_1 + 0xd);
  lVar11 = lVar2 + (ulong)*(uint *)((long)param_1 + 0x34);
  lVar12 = lVar11 + -0xc;
  puVar9 = (undefined1 *)(lVar11 - (ulong)((*(uint *)((long)param_1 + 0x34) / 0x60) * 0x54));
  param_1[0xc] = (long)puVar9;
  uVar13 = 0xfffffff3;
  if (uVar3 < 0xc) {
    uVar13 = ~uVar3;
  }
  *param_1 = lVar12;
  param_1[1] = lVar12;
  *(uint *)(param_1 + 3) = uVar3;
  *(uint *)((long)param_1 + 0x2c) = uVar13;
  *(uint *)(param_1 + 6) = uVar13;
  param_1[10] = lVar12;
  param_1[0xb] = lVar2;
  *(undefined4 *)(lVar11 + -4) = 0;
  *(undefined2 *)(lVar11 + -0xc) = 0x100;
  *(undefined2 *)(lVar11 + -10) = 0x101;
  param_1[2] = (long)puVar9;
  param_1[9] = (long)(puVar9 + 0x600);
  *(int *)(lVar11 + -8) = (int)puVar9 - (int)lVar4;
  do {
    *puVar9 = (char)iVar8;
    iVar8 = iVar8 + 1;
    puVar9[1] = 1;
    *(undefined2 *)(puVar9 + 2) = 0;
    *(undefined2 *)(puVar9 + 4) = 0;
    puVar9 = puVar9 + 6;
  } while (iVar8 != 0x100);
  plVar10 = param_1 + 0x15e;
  uVar13 = 2;
  do {
    plVar10 = plVar10 + 0x10;
    lVar11 = 0;
    plVar6 = plVar10;
    do {
      sVar7 = 0;
      if (uVar13 != 0) {
        sVar7 = (short)((ushort)(&DAT_71009cc940)[lVar11] / uVar13);
      }
      plVar1 = plVar6 + -0x10;
      do {
        plVar5 = plVar1;
        *(short *)plVar5 = 0x4000 - sVar7;
        plVar1 = plVar5 + 2;
      } while (plVar5 + 2 != plVar6);
      lVar11 = lVar11 + 1;
      plVar6 = (long *)((long)plVar5 + 0x12);
    } while (lVar11 != 8);
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x82);
  plVar10 = param_1 + 8;
  sVar7 = 0x50;
  do {
    plVar6 = plVar10 + -8;
    do {
      plVar1 = (long *)((long)plVar6 + 4);
      *(short *)(plVar6 + 0x96) = sVar7;
      *(undefined1 *)((long)plVar6 + 0x4b2) = 3;
      *(undefined1 *)((long)plVar6 + 0x4b3) = 4;
      plVar6 = plVar1;
    } while (plVar10 != plVar1);
    plVar10 = plVar10 + 8;
    sVar7 = sVar7 + 0x28;
  } while (param_1 + 0xd0 != plVar10);
  return;
}



// ===== FUN_71007a1b40 @ 71007a1b40 (size=36) =====

void FUN_71007a1b40(long param_1,undefined4 param_2)

{
  long extraout_x14;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  FUN_71007a19b0();
  *(undefined4 *)(extraout_x14 + 0x4ac) = 0x40070000;
  return;
}



// ===== FUN_71007a1b70 @ 71007a1b70 (size=332) =====

void FUN_71007a1b70(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = 0;
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  do {
    while( true ) {
      uVar6 = (undefined1)uVar7;
      lVar1 = param_1 + uVar8;
      if (0xb < uVar7) break;
      iVar5 = ((uint)uVar7 >> 2) + 1;
      lVar1 = uVar8 + 0x92;
      uVar2 = (int)uVar8 + iVar5;
      uVar8 = (ulong)uVar2;
      FUN_7100808340(param_1 + lVar1,uVar7 & 0xffffffff,iVar5);
      *(char *)(param_1 + 0x6c + uVar7) = (char)uVar2;
      uVar7 = uVar7 + 1;
    }
    uVar2 = (int)uVar8 + 4;
    uVar8 = (ulong)uVar2;
    *(uint *)(lVar1 + 0x92) = CONCAT13(uVar6,CONCAT12(uVar6,CONCAT11(uVar6,uVar6)));
    *(char *)(param_1 + 0x6c + uVar7) = (char)uVar2;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x26);
  *(undefined2 *)(param_1 + 0x2ac) = 0x200;
  puVar3 = (undefined1 *)(param_1 + 0x1af);
  *(undefined8 *)(param_1 + 0x2ae) = 0x404040404040404;
  iVar5 = 3;
  iVar4 = 1;
  *(undefined1 *)(param_1 + 0x2b6) = 4;
  *(undefined1 *)(param_1 + 0x397) = 6;
  *(undefined1 *)(param_1 + 0x398) = 6;
  *(undefined1 *)(param_1 + 0x399) = 6;
  *(undefined1 *)(param_1 + 0x39a) = 6;
  *(undefined1 *)(param_1 + 0x39b) = 6;
  *(undefined1 *)(param_1 + 0x39c) = 6;
  *(undefined1 *)(param_1 + 0x39d) = 6;
  *(undefined1 *)(param_1 + 0x39e) = 6;
  *(undefined1 *)(param_1 + 0x39f) = 6;
  *(undefined1 *)(param_1 + 0x3a0) = 6;
  *(undefined1 *)(param_1 + 0x3a1) = 6;
  *(undefined1 *)(param_1 + 0x3a2) = 6;
  *(undefined1 *)(param_1 + 0x3a3) = 6;
  *(undefined1 *)(param_1 + 0x3a4) = 6;
  *(undefined1 *)(param_1 + 0x3a5) = 6;
  *(undefined1 *)(param_1 + 0x3a6) = 6;
  *(undefined1 *)(param_1 + 0x2b7) = 6;
  *(undefined1 *)(param_1 + 0x2b8) = 6;
  *(undefined1 *)(param_1 + 0x2b9) = 6;
  *(undefined1 *)(param_1 + 0x2ba) = 6;
  *(undefined1 *)(param_1 + 699) = 6;
  *(undefined1 *)(param_1 + 700) = 6;
  *(undefined1 *)(param_1 + 0x2bd) = 6;
  *(undefined1 *)(param_1 + 0x2be) = 6;
  *(undefined1 *)(param_1 + 0x2bf) = 6;
  *(undefined1 *)(param_1 + 0x2c0) = 6;
  *(undefined1 *)(param_1 + 0x2c1) = 6;
  *(undefined1 *)(param_1 + 0x2c2) = 6;
  *(undefined1 *)(param_1 + 0x2c3) = 6;
  *(undefined1 *)(param_1 + 0x2c4) = 6;
  *(undefined1 *)(param_1 + 0x2c5) = 6;
  *(undefined1 *)(param_1 + 0x2c6) = 6;
  *(undefined1 *)(param_1 + 0x2c7) = 6;
  *(undefined1 *)(param_1 + 0x2c8) = 6;
  *(undefined1 *)(param_1 + 0x2c9) = 6;
  *(undefined1 *)(param_1 + 0x2ca) = 6;
  *(undefined1 *)(param_1 + 0x2cb) = 6;
  *(undefined1 *)(param_1 + 0x2cc) = 6;
  *(undefined1 *)(param_1 + 0x2cd) = 6;
  *(undefined1 *)(param_1 + 0x2ce) = 6;
  *(undefined1 *)(param_1 + 0x2cf) = 6;
  *(undefined1 *)(param_1 + 0x2d0) = 6;
  *(undefined1 *)(param_1 + 0x2d1) = 6;
  *(undefined1 *)(param_1 + 0x2d2) = 6;
  *(undefined1 *)(param_1 + 0x2d3) = 6;
  *(undefined1 *)(param_1 + 0x2d4) = 6;
  *(undefined1 *)(param_1 + 0x2d5) = 6;
  *(undefined1 *)(param_1 + 0x2d6) = 6;
  *(undefined1 *)(param_1 + 0x2d7) = 6;
  *(undefined1 *)(param_1 + 0x2d8) = 6;
  *(undefined1 *)(param_1 + 0x2d9) = 6;
  *(undefined1 *)(param_1 + 0x2da) = 6;
  *(undefined1 *)(param_1 + 0x2db) = 6;
  *(undefined1 *)(param_1 + 0x2dc) = 6;
  *(undefined1 *)(param_1 + 0x2dd) = 6;
  *(undefined1 *)(param_1 + 0x2de) = 6;
  *(undefined1 *)(param_1 + 0x2df) = 6;
  *(undefined1 *)(param_1 + 0x2e0) = 6;
  *(undefined1 *)(param_1 + 0x2e1) = 6;
  *(undefined1 *)(param_1 + 0x2e2) = 6;
  *(undefined1 *)(param_1 + 0x2e3) = 6;
  *(undefined1 *)(param_1 + 0x2e4) = 6;
  *(undefined1 *)(param_1 + 0x2e5) = 6;
  *(undefined1 *)(param_1 + 0x2e6) = 6;
  *(undefined1 *)(param_1 + 0x2e7) = 6;
  *(undefined1 *)(param_1 + 0x2e8) = 6;
  *(undefined1 *)(param_1 + 0x2e9) = 6;
  *(undefined1 *)(param_1 + 0x2ea) = 6;
  *(undefined1 *)(param_1 + 0x2eb) = 6;
  *(undefined1 *)(param_1 + 0x2ec) = 6;
  *(undefined1 *)(param_1 + 0x2ed) = 6;
  *(undefined1 *)(param_1 + 0x2ee) = 6;
  *(undefined1 *)(param_1 + 0x2ef) = 6;
  *(undefined1 *)(param_1 + 0x2f0) = 6;
  *(undefined1 *)(param_1 + 0x2f1) = 6;
  *(undefined1 *)(param_1 + 0x2f2) = 6;
  *(undefined1 *)(param_1 + 0x2f3) = 6;
  *(undefined1 *)(param_1 + 0x2f4) = 6;
  *(undefined1 *)(param_1 + 0x2f5) = 6;
  *(undefined1 *)(param_1 + 0x2f6) = 6;
  *(undefined1 *)(param_1 + 0x2f7) = 6;
  *(undefined1 *)(param_1 + 0x2f8) = 6;
  *(undefined1 *)(param_1 + 0x2f9) = 6;
  *(undefined1 *)(param_1 + 0x2fa) = 6;
  *(undefined1 *)(param_1 + 0x2fb) = 6;
  *(undefined1 *)(param_1 + 0x2fc) = 6;
  *(undefined1 *)(param_1 + 0x2fd) = 6;
  *(undefined1 *)(param_1 + 0x2fe) = 6;
  *(undefined1 *)(param_1 + 0x2ff) = 6;
  *(undefined1 *)(param_1 + 0x300) = 6;
  *(undefined1 *)(param_1 + 0x301) = 6;
  *(undefined1 *)(param_1 + 0x302) = 6;
  *(undefined1 *)(param_1 + 0x303) = 6;
  *(undefined1 *)(param_1 + 0x304) = 6;
  *(undefined1 *)(param_1 + 0x305) = 6;
  *(undefined1 *)(param_1 + 0x306) = 6;
  *(undefined1 *)(param_1 + 0x307) = 6;
  *(undefined1 *)(param_1 + 0x308) = 6;
  *(undefined1 *)(param_1 + 0x309) = 6;
  *(undefined1 *)(param_1 + 0x30a) = 6;
  *(undefined1 *)(param_1 + 0x30b) = 6;
  *(undefined1 *)(param_1 + 0x30c) = 6;
  *(undefined1 *)(param_1 + 0x30d) = 6;
  *(undefined1 *)(param_1 + 0x30e) = 6;
  *(undefined1 *)(param_1 + 0x30f) = 6;
  *(undefined1 *)(param_1 + 0x310) = 6;
  *(undefined1 *)(param_1 + 0x311) = 6;
  *(undefined1 *)(param_1 + 0x312) = 6;
  *(undefined1 *)(param_1 + 0x313) = 6;
  *(undefined1 *)(param_1 + 0x314) = 6;
  *(undefined1 *)(param_1 + 0x315) = 6;
  *(undefined1 *)(param_1 + 0x316) = 6;
  *(undefined1 *)(param_1 + 0x317) = 6;
  *(undefined1 *)(param_1 + 0x318) = 6;
  *(undefined1 *)(param_1 + 0x319) = 6;
  *(undefined1 *)(param_1 + 0x31a) = 6;
  *(undefined1 *)(param_1 + 0x31b) = 6;
  *(undefined1 *)(param_1 + 0x31c) = 6;
  *(undefined1 *)(param_1 + 0x31d) = 6;
  *(undefined1 *)(param_1 + 0x31e) = 6;
  *(undefined1 *)(param_1 + 799) = 6;
  *(undefined1 *)(param_1 + 800) = 6;
  *(undefined1 *)(param_1 + 0x321) = 6;
  *(undefined1 *)(param_1 + 0x322) = 6;
  *(undefined1 *)(param_1 + 0x323) = 6;
  *(undefined1 *)(param_1 + 0x324) = 6;
  *(undefined1 *)(param_1 + 0x325) = 6;
  *(undefined1 *)(param_1 + 0x326) = 6;
  *(undefined1 *)(param_1 + 0x327) = 6;
  *(undefined1 *)(param_1 + 0x328) = 6;
  *(undefined1 *)(param_1 + 0x329) = 6;
  *(undefined1 *)(param_1 + 0x32a) = 6;
  *(undefined1 *)(param_1 + 0x32b) = 6;
  *(undefined1 *)(param_1 + 0x32c) = 6;
  *(undefined1 *)(param_1 + 0x32d) = 6;
  *(undefined1 *)(param_1 + 0x32e) = 6;
  *(undefined1 *)(param_1 + 0x32f) = 6;
  *(undefined1 *)(param_1 + 0x330) = 6;
  *(undefined1 *)(param_1 + 0x331) = 6;
  *(undefined1 *)(param_1 + 0x332) = 6;
  *(undefined1 *)(param_1 + 0x333) = 6;
  *(undefined1 *)(param_1 + 0x334) = 6;
  *(undefined1 *)(param_1 + 0x335) = 6;
  *(undefined1 *)(param_1 + 0x336) = 6;
  *(undefined1 *)(param_1 + 0x337) = 6;
  *(undefined1 *)(param_1 + 0x338) = 6;
  *(undefined1 *)(param_1 + 0x339) = 6;
  *(undefined1 *)(param_1 + 0x33a) = 6;
  *(undefined1 *)(param_1 + 0x33b) = 6;
  *(undefined1 *)(param_1 + 0x33c) = 6;
  *(undefined1 *)(param_1 + 0x33d) = 6;
  *(undefined1 *)(param_1 + 0x33e) = 6;
  *(undefined1 *)(param_1 + 0x33f) = 6;
  *(undefined1 *)(param_1 + 0x340) = 6;
  *(undefined1 *)(param_1 + 0x341) = 6;
  *(undefined1 *)(param_1 + 0x342) = 6;
  *(undefined1 *)(param_1 + 0x343) = 6;
  *(undefined1 *)(param_1 + 0x344) = 6;
  *(undefined1 *)(param_1 + 0x345) = 6;
  *(undefined1 *)(param_1 + 0x346) = 6;
  *(undefined1 *)(param_1 + 0x347) = 6;
  *(undefined1 *)(param_1 + 0x348) = 6;
  *(undefined1 *)(param_1 + 0x349) = 6;
  *(undefined1 *)(param_1 + 0x34a) = 6;
  *(undefined1 *)(param_1 + 0x34b) = 6;
  *(undefined1 *)(param_1 + 0x34c) = 6;
  *(undefined1 *)(param_1 + 0x34d) = 6;
  *(undefined1 *)(param_1 + 0x34e) = 6;
  *(undefined1 *)(param_1 + 0x34f) = 6;
  *(undefined1 *)(param_1 + 0x350) = 6;
  *(undefined1 *)(param_1 + 0x351) = 6;
  *(undefined1 *)(param_1 + 0x352) = 6;
  *(undefined1 *)(param_1 + 0x353) = 6;
  *(undefined1 *)(param_1 + 0x354) = 6;
  *(undefined1 *)(param_1 + 0x355) = 6;
  *(undefined1 *)(param_1 + 0x356) = 6;
  *(undefined1 *)(param_1 + 0x357) = 6;
  *(undefined1 *)(param_1 + 0x358) = 6;
  *(undefined1 *)(param_1 + 0x359) = 6;
  *(undefined1 *)(param_1 + 0x35a) = 6;
  *(undefined1 *)(param_1 + 0x35b) = 6;
  *(undefined1 *)(param_1 + 0x35c) = 6;
  *(undefined1 *)(param_1 + 0x35d) = 6;
  *(undefined1 *)(param_1 + 0x35e) = 6;
  *(undefined1 *)(param_1 + 0x35f) = 6;
  *(undefined1 *)(param_1 + 0x360) = 6;
  *(undefined1 *)(param_1 + 0x361) = 6;
  *(undefined1 *)(param_1 + 0x362) = 6;
  *(undefined1 *)(param_1 + 0x363) = 6;
  *(undefined1 *)(param_1 + 0x364) = 6;
  *(undefined1 *)(param_1 + 0x365) = 6;
  *(undefined1 *)(param_1 + 0x366) = 6;
  *(undefined1 *)(param_1 + 0x367) = 6;
  *(undefined1 *)(param_1 + 0x368) = 6;
  *(undefined1 *)(param_1 + 0x369) = 6;
  *(undefined1 *)(param_1 + 0x36a) = 6;
  *(undefined1 *)(param_1 + 0x36b) = 6;
  *(undefined1 *)(param_1 + 0x36c) = 6;
  *(undefined1 *)(param_1 + 0x36d) = 6;
  *(undefined1 *)(param_1 + 0x36e) = 6;
  *(undefined1 *)(param_1 + 0x36f) = 6;
  *(undefined1 *)(param_1 + 0x370) = 6;
  *(undefined1 *)(param_1 + 0x371) = 6;
  *(undefined1 *)(param_1 + 0x372) = 6;
  *(undefined1 *)(param_1 + 0x373) = 6;
  *(undefined1 *)(param_1 + 0x374) = 6;
  *(undefined1 *)(param_1 + 0x375) = 6;
  *(undefined1 *)(param_1 + 0x376) = 6;
  *(undefined1 *)(param_1 + 0x377) = 6;
  *(undefined1 *)(param_1 + 0x378) = 6;
  *(undefined1 *)(param_1 + 0x379) = 6;
  *(undefined1 *)(param_1 + 0x37a) = 6;
  *(undefined1 *)(param_1 + 0x37b) = 6;
  *(undefined1 *)(param_1 + 0x37c) = 6;
  *(undefined1 *)(param_1 + 0x37d) = 6;
  *(undefined1 *)(param_1 + 0x37e) = 6;
  *(undefined1 *)(param_1 + 0x37f) = 6;
  *(undefined1 *)(param_1 + 0x380) = 6;
  *(undefined1 *)(param_1 + 0x381) = 6;
  *(undefined1 *)(param_1 + 0x382) = 6;
  *(undefined1 *)(param_1 + 899) = 6;
  *(undefined1 *)(param_1 + 900) = 6;
  *(undefined1 *)(param_1 + 0x385) = 6;
  *(undefined1 *)(param_1 + 0x386) = 6;
  *(undefined1 *)(param_1 + 0x387) = 6;
  *(undefined1 *)(param_1 + 0x388) = 6;
  *(undefined1 *)(param_1 + 0x389) = 6;
  *(undefined1 *)(param_1 + 0x38a) = 6;
  *(undefined1 *)(param_1 + 0x38b) = 6;
  *(undefined1 *)(param_1 + 0x38c) = 6;
  *(undefined1 *)(param_1 + 0x38d) = 6;
  *(undefined1 *)(param_1 + 0x38e) = 6;
  *(undefined1 *)(param_1 + 0x38f) = 6;
  *(undefined1 *)(param_1 + 0x390) = 6;
  *(undefined1 *)(param_1 + 0x391) = 6;
  *(undefined1 *)(param_1 + 0x392) = 6;
  *(undefined1 *)(param_1 + 0x393) = 6;
  *(undefined1 *)(param_1 + 0x394) = 6;
  *(undefined1 *)(param_1 + 0x395) = 6;
  *(undefined1 *)(param_1 + 0x396) = 6;
  *(undefined8 *)(param_1 + 0x3a4) = 0x606060606060606;
  *(undefined2 *)(param_1 + 0x1ac) = 0x100;
  *(undefined1 *)(param_1 + 0x1ae) = 2;
  do {
    iVar4 = iVar4 + -1;
    *puVar3 = (char)iVar5;
    puVar3 = puVar3 + 1;
    if (iVar4 == 0) {
      iVar4 = iVar5 + -1;
      iVar5 = iVar5 + 1;
    }
  } while ((undefined1 *)(param_1 + 0x2ac) != puVar3);
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = 0;
  *(undefined8 *)(param_1 + 0x3d4) = 0;
  *(undefined8 *)(param_1 + 0x3cc) = 0;
  *(undefined8 *)(param_1 + 0x3e4) = 0;
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  *(undefined1 *)(param_1 + 0x3ec) = 8;
  *(undefined1 *)(param_1 + 0x3ed) = 8;
  *(undefined1 *)(param_1 + 0x3ee) = 8;
  *(undefined1 *)(param_1 + 0x3ef) = 8;
  *(undefined1 *)(param_1 + 0x3f0) = 8;
  *(undefined1 *)(param_1 + 0x3f1) = 8;
  *(undefined1 *)(param_1 + 0x3f2) = 8;
  *(undefined1 *)(param_1 + 0x3f3) = 8;
  *(undefined1 *)(param_1 + 0x3f4) = 8;
  *(undefined1 *)(param_1 + 0x3f5) = 8;
  *(undefined1 *)(param_1 + 0x3f6) = 8;
  *(undefined1 *)(param_1 + 0x3f7) = 8;
  *(undefined1 *)(param_1 + 0x3f8) = 8;
  *(undefined1 *)(param_1 + 0x3f9) = 8;
  *(undefined1 *)(param_1 + 0x3fa) = 8;
  *(undefined1 *)(param_1 + 0x3fb) = 8;
  *(undefined1 *)(param_1 + 0x3fc) = 8;
  *(undefined1 *)(param_1 + 0x3fd) = 8;
  *(undefined1 *)(param_1 + 0x3fe) = 8;
  *(undefined1 *)(param_1 + 0x3ff) = 8;
  *(undefined1 *)(param_1 + 0x400) = 8;
  *(undefined1 *)(param_1 + 0x401) = 8;
  *(undefined1 *)(param_1 + 0x402) = 8;
  *(undefined1 *)(param_1 + 0x403) = 8;
  *(undefined1 *)(param_1 + 0x404) = 8;
  *(undefined1 *)(param_1 + 0x405) = 8;
  *(undefined1 *)(param_1 + 0x406) = 8;
  *(undefined1 *)(param_1 + 0x407) = 8;
  *(undefined1 *)(param_1 + 0x408) = 8;
  *(undefined1 *)(param_1 + 0x409) = 8;
  *(undefined1 *)(param_1 + 0x40a) = 8;
  *(undefined1 *)(param_1 + 0x40b) = 8;
  *(undefined1 *)(param_1 + 0x40c) = 8;
  *(undefined1 *)(param_1 + 0x40d) = 8;
  *(undefined1 *)(param_1 + 0x40e) = 8;
  *(undefined1 *)(param_1 + 0x40f) = 8;
  *(undefined1 *)(param_1 + 0x410) = 8;
  *(undefined1 *)(param_1 + 0x411) = 8;
  *(undefined1 *)(param_1 + 0x412) = 8;
  *(undefined1 *)(param_1 + 0x413) = 8;
  *(undefined1 *)(param_1 + 0x414) = 8;
  *(undefined1 *)(param_1 + 0x415) = 8;
  *(undefined1 *)(param_1 + 0x416) = 8;
  *(undefined1 *)(param_1 + 0x417) = 8;
  *(undefined1 *)(param_1 + 0x418) = 8;
  *(undefined1 *)(param_1 + 0x419) = 8;
  *(undefined1 *)(param_1 + 0x41a) = 8;
  *(undefined1 *)(param_1 + 0x41b) = 8;
  *(undefined1 *)(param_1 + 0x41c) = 8;
  *(undefined1 *)(param_1 + 0x41d) = 8;
  *(undefined1 *)(param_1 + 0x41e) = 8;
  *(undefined1 *)(param_1 + 0x41f) = 8;
  *(undefined1 *)(param_1 + 0x420) = 8;
  *(undefined1 *)(param_1 + 0x421) = 8;
  *(undefined1 *)(param_1 + 0x422) = 8;
  *(undefined1 *)(param_1 + 0x423) = 8;
  *(undefined1 *)(param_1 + 0x424) = 8;
  *(undefined1 *)(param_1 + 0x425) = 8;
  *(undefined1 *)(param_1 + 0x426) = 8;
  *(undefined1 *)(param_1 + 0x427) = 8;
  *(undefined1 *)(param_1 + 0x428) = 8;
  *(undefined1 *)(param_1 + 0x429) = 8;
  *(undefined1 *)(param_1 + 0x42a) = 8;
  *(undefined1 *)(param_1 + 0x42b) = 8;
  *(undefined1 *)(param_1 + 0x42c) = 8;
  *(undefined1 *)(param_1 + 0x42d) = 8;
  *(undefined1 *)(param_1 + 0x42e) = 8;
  *(undefined1 *)(param_1 + 0x42f) = 8;
  *(undefined1 *)(param_1 + 0x430) = 8;
  *(undefined1 *)(param_1 + 0x431) = 8;
  *(undefined1 *)(param_1 + 0x432) = 8;
  *(undefined1 *)(param_1 + 0x433) = 8;
  *(undefined1 *)(param_1 + 0x434) = 8;
  *(undefined1 *)(param_1 + 0x435) = 8;
  *(undefined1 *)(param_1 + 0x436) = 8;
  *(undefined1 *)(param_1 + 0x437) = 8;
  *(undefined1 *)(param_1 + 0x438) = 8;
  *(undefined1 *)(param_1 + 0x439) = 8;
  *(undefined1 *)(param_1 + 0x43a) = 8;
  *(undefined1 *)(param_1 + 0x43b) = 8;
  *(undefined1 *)(param_1 + 0x43c) = 8;
  *(undefined1 *)(param_1 + 0x43d) = 8;
  *(undefined1 *)(param_1 + 0x43e) = 8;
  *(undefined1 *)(param_1 + 0x43f) = 8;
  *(undefined1 *)(param_1 + 0x440) = 8;
  *(undefined1 *)(param_1 + 0x441) = 8;
  *(undefined1 *)(param_1 + 0x442) = 8;
  *(undefined1 *)(param_1 + 0x443) = 8;
  *(undefined1 *)(param_1 + 0x444) = 8;
  *(undefined1 *)(param_1 + 0x445) = 8;
  *(undefined1 *)(param_1 + 0x446) = 8;
  *(undefined1 *)(param_1 + 0x447) = 8;
  *(undefined1 *)(param_1 + 0x448) = 8;
  *(undefined1 *)(param_1 + 0x449) = 8;
  *(undefined1 *)(param_1 + 0x44a) = 8;
  *(undefined1 *)(param_1 + 1099) = 8;
  *(undefined1 *)(param_1 + 0x44c) = 8;
  *(undefined1 *)(param_1 + 0x44d) = 8;
  *(undefined1 *)(param_1 + 0x44e) = 8;
  *(undefined1 *)(param_1 + 0x44f) = 8;
  *(undefined1 *)(param_1 + 0x450) = 8;
  *(undefined1 *)(param_1 + 0x451) = 8;
  *(undefined1 *)(param_1 + 0x452) = 8;
  *(undefined1 *)(param_1 + 0x453) = 8;
  *(undefined1 *)(param_1 + 0x454) = 8;
  *(undefined1 *)(param_1 + 0x455) = 8;
  *(undefined1 *)(param_1 + 0x456) = 8;
  *(undefined1 *)(param_1 + 0x457) = 8;
  *(undefined1 *)(param_1 + 0x458) = 8;
  *(undefined1 *)(param_1 + 0x459) = 8;
  *(undefined1 *)(param_1 + 0x45a) = 8;
  *(undefined1 *)(param_1 + 0x45b) = 8;
  *(undefined1 *)(param_1 + 0x45c) = 8;
  *(undefined1 *)(param_1 + 0x45d) = 8;
  *(undefined1 *)(param_1 + 0x45e) = 8;
  *(undefined1 *)(param_1 + 0x45f) = 8;
  *(undefined1 *)(param_1 + 0x460) = 8;
  *(undefined1 *)(param_1 + 0x461) = 8;
  *(undefined1 *)(param_1 + 0x462) = 8;
  *(undefined1 *)(param_1 + 0x463) = 8;
  *(undefined1 *)(param_1 + 0x464) = 8;
  *(undefined1 *)(param_1 + 0x465) = 8;
  *(undefined1 *)(param_1 + 0x466) = 8;
  *(undefined1 *)(param_1 + 0x467) = 8;
  *(undefined1 *)(param_1 + 0x468) = 8;
  *(undefined1 *)(param_1 + 0x469) = 8;
  *(undefined1 *)(param_1 + 0x46a) = 8;
  *(undefined1 *)(param_1 + 0x46b) = 8;
  *(undefined1 *)(param_1 + 0x46c) = 8;
  *(undefined1 *)(param_1 + 0x46d) = 8;
  *(undefined1 *)(param_1 + 0x46e) = 8;
  *(undefined1 *)(param_1 + 0x46f) = 8;
  *(undefined1 *)(param_1 + 0x470) = 8;
  *(undefined1 *)(param_1 + 0x471) = 8;
  *(undefined1 *)(param_1 + 0x472) = 8;
  *(undefined1 *)(param_1 + 0x473) = 8;
  *(undefined1 *)(param_1 + 0x474) = 8;
  *(undefined1 *)(param_1 + 0x475) = 8;
  *(undefined1 *)(param_1 + 0x476) = 8;
  *(undefined1 *)(param_1 + 0x477) = 8;
  *(undefined1 *)(param_1 + 0x478) = 8;
  *(undefined1 *)(param_1 + 0x479) = 8;
  *(undefined1 *)(param_1 + 0x47a) = 8;
  *(undefined1 *)(param_1 + 0x47b) = 8;
  *(undefined1 *)(param_1 + 0x47c) = 8;
  *(undefined1 *)(param_1 + 0x47d) = 8;
  *(undefined1 *)(param_1 + 0x47e) = 8;
  *(undefined1 *)(param_1 + 0x47f) = 8;
  *(undefined1 *)(param_1 + 0x480) = 8;
  *(undefined1 *)(param_1 + 0x481) = 8;
  *(undefined1 *)(param_1 + 0x482) = 8;
  *(undefined1 *)(param_1 + 0x483) = 8;
  *(undefined1 *)(param_1 + 0x484) = 8;
  *(undefined1 *)(param_1 + 0x485) = 8;
  *(undefined1 *)(param_1 + 0x486) = 8;
  *(undefined1 *)(param_1 + 0x487) = 8;
  *(undefined1 *)(param_1 + 0x488) = 8;
  *(undefined1 *)(param_1 + 0x489) = 8;
  *(undefined1 *)(param_1 + 0x48a) = 8;
  *(undefined1 *)(param_1 + 0x48b) = 8;
  *(undefined1 *)(param_1 + 0x48c) = 8;
  *(undefined1 *)(param_1 + 0x48d) = 8;
  *(undefined1 *)(param_1 + 0x48e) = 8;
  *(undefined1 *)(param_1 + 0x48f) = 8;
  *(undefined1 *)(param_1 + 0x490) = 8;
  *(undefined1 *)(param_1 + 0x491) = 8;
  *(undefined1 *)(param_1 + 0x492) = 8;
  *(undefined1 *)(param_1 + 0x493) = 8;
  *(undefined1 *)(param_1 + 0x494) = 8;
  *(undefined1 *)(param_1 + 0x495) = 8;
  *(undefined1 *)(param_1 + 0x496) = 8;
  *(undefined1 *)(param_1 + 0x497) = 8;
  *(undefined1 *)(param_1 + 0x498) = 8;
  *(undefined1 *)(param_1 + 0x499) = 8;
  *(undefined1 *)(param_1 + 0x49a) = 8;
  *(undefined1 *)(param_1 + 0x49b) = 8;
  *(undefined1 *)(param_1 + 0x49c) = 8;
  *(undefined1 *)(param_1 + 0x49d) = 8;
  *(undefined1 *)(param_1 + 0x49e) = 8;
  *(undefined1 *)(param_1 + 0x49f) = 8;
  *(undefined1 *)(param_1 + 0x4a0) = 8;
  *(undefined1 *)(param_1 + 0x4a1) = 8;
  *(undefined1 *)(param_1 + 0x4a2) = 8;
  *(undefined1 *)(param_1 + 0x4a3) = 8;
  *(undefined1 *)(param_1 + 0x4a4) = 8;
  *(undefined1 *)(param_1 + 0x4a5) = 8;
  *(undefined1 *)(param_1 + 0x4a6) = 8;
  *(undefined1 *)(param_1 + 0x4a7) = 8;
  *(undefined1 *)(param_1 + 0x4a8) = 8;
  *(undefined1 *)(param_1 + 0x4a9) = 8;
  *(undefined1 *)(param_1 + 0x4aa) = 8;
  *(undefined1 *)(param_1 + 0x4ab) = 8;
  return;
}



// ===== FUN_71007a1cc0 @ 71007a1cc0 (size=44) =====

void FUN_71007a1cc0(long param_1)

{
  FUN_710081c200(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// ===== FUN_71007a1cf0 @ 71007a1cf0 (size=128) =====

undefined8 FUN_71007a1cf0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(uint *)(param_1 + 0x34) == param_2)) {
    return 1;
  }
  if (0xb < param_2) {
    FUN_710081c200();
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar1 = 4 - (param_2 & 3);
    *(int *)(param_1 + 0x68) = iVar1;
    lVar2 = FUN_710081c1c0(param_2 + 0xc + iVar1);
    *(long *)(param_1 + 0x40) = lVar2;
    if (lVar2 != 0) {
      *(uint *)(param_1 + 0x34) = param_2;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_71007a1d70 @ 71007a1d70 (size=736) =====

long FUN_71007a1d70(long param_1,uint param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long extraout_x1;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar13 = *(int *)(param_1 + 0x34);
    pbVar21 = (byte *)(param_1 + 0x6c);
    iVar16 = *(int *)(param_1 + 0x68);
    lVar22 = param_1 * -3 + -0x9c;
    *(undefined4 *)(param_1 + 0x38) = 0xff;
    lVar8 = *(long *)(param_1 + 0x40);
    uVar7 = iVar16 + iVar13;
    uVar14 = (ulong)uVar7;
    do {
      while( true ) {
        uVar9 = *(uint *)(lVar22 + (long)pbVar21 * 4);
        bVar4 = *pbVar21;
        *(undefined4 *)(lVar22 + (long)pbVar21 * 4) = 0;
        if (uVar9 != 0) break;
        pbVar21 = pbVar21 + 1;
        uVar10 = uVar14;
        if ((byte *)(param_1 + 0x92) == pbVar21) goto LAB_71007a1e8c;
      }
      do {
        uVar10 = (ulong)uVar9;
        lVar1 = lVar8 + uVar14;
        lVar18 = lVar8 + uVar10;
        *(int *)(lVar18 + 4) = (int)uVar14;
        uVar14 = (ulong)uVar9;
        *(uint *)(lVar1 + 8) = uVar9;
        uVar20 = *(uint *)(lVar8 + (ulong)uVar9);
        *(undefined2 *)(lVar8 + (ulong)uVar9) = 0;
        *(ushort *)(lVar18 + 2) = (ushort)bVar4;
        uVar9 = uVar20;
      } while (uVar20 != 0);
      pbVar21 = pbVar21 + 1;
    } while ((byte *)(param_1 + 0x92) != pbVar21);
LAB_71007a1e8c:
    puVar2 = *(undefined2 **)(param_1 + 0x48);
    puVar3 = *(undefined2 **)(param_1 + 0x50);
    lVar22 = lVar8 + (ulong)(uint)(iVar16 + iVar13);
    *(undefined2 *)(lVar8 + (ulong)uVar7) = 1;
    *(uint *)(lVar22 + 4) = (uint)uVar10;
    *(uint *)(lVar8 + uVar10 + 8) = uVar7;
    if (puVar2 != puVar3) {
      *puVar2 = 1;
    }
    if (uVar7 != (uint)uVar10) {
      do {
        lVar1 = lVar8 + uVar10;
        lVar11 = uVar10 + (ulong)*(ushort *)(lVar1 + 2) * 0xc;
        lVar18 = lVar8 + lVar11;
        uVar9 = (uint)*(ushort *)(lVar18 + 2) + (uint)*(ushort *)(lVar1 + 2);
        if (*(short *)(lVar8 + lVar11) == 0 && uVar9 < 0x10000) {
          do {
            uVar20 = *(uint *)(lVar18 + 4);
            uVar17 = *(uint *)(lVar18 + 8);
            lVar11 = uVar10 + (ulong)uVar9 * 0xc;
            lVar18 = lVar8 + lVar11;
            sVar6 = *(short *)(lVar8 + lVar11);
            *(uint *)(lVar8 + (ulong)uVar17 + 4) = uVar20;
            *(uint *)(lVar8 + (ulong)uVar20 + 8) = uVar17;
            *(short *)(lVar1 + 2) = (short)uVar9;
            uVar9 = uVar9 + *(ushort *)(lVar18 + 2);
          } while (sVar6 == 0 && uVar9 < 0x10000);
        }
        uVar10 = (ulong)*(uint *)(lVar1 + 4);
      } while (uVar7 != *(uint *)(lVar1 + 4));
      uVar9 = *(uint *)(lVar22 + 4);
      while (uVar7 != uVar9) {
        piVar19 = (int *)(lVar8 + (ulong)uVar9);
        uVar5 = *(ushort *)((long)piVar19 + 2);
        uVar20 = (uint)uVar5;
        uVar9 = piVar19[1];
        iVar13 = (int)lVar8;
        if (0x80 < uVar5) {
          uVar20 = uVar5 - 0x81;
          uVar17 = uVar20 >> 7;
          piVar12 = piVar19;
          iVar16 = *(int *)(param_1 + 0x1a8);
          do {
            iVar15 = (int)piVar12 - iVar13;
            *piVar12 = iVar16;
            piVar12 = piVar12 + 0x180;
            iVar16 = iVar15;
          } while (piVar19 + (ulong)((uVar20 >> 7) + 1) * 0x180 != piVar12);
          *(int *)(param_1 + 0x1a8) = iVar15;
          uVar20 = (uVar5 - 0x80) + uVar17 * -0x80;
          piVar19 = piVar19 + (ulong)uVar17 * 0x180 + 0x180;
        }
        bVar4 = *(byte *)(param_1 + (ulong)(uVar20 - 1) + 0x92);
        uVar14 = (ulong)bVar4;
        if (*(byte *)(param_1 + uVar14 + 0x6c) != uVar20) {
          uVar14 = (ulong)(bVar4 - 1);
          uVar17 = (uint)*(byte *)(param_1 + uVar14 + 0x6c);
          lVar22 = param_1 + (ulong)((uVar20 - 1) - uVar17) * 4;
          piVar19[(ulong)uVar17 * 3] = *(int *)(lVar22 + 0x114);
          *(uint *)(lVar22 + 0x114) = ((int)piVar19 + uVar17 * 0xc) - iVar13;
        }
        lVar22 = param_1 + uVar14 * 4;
        *piVar19 = *(int *)(lVar22 + 0x114);
        *(int *)(lVar22 + 0x114) = (int)piVar19 - iVar13;
      }
    }
    lVar22 = param_1 + (ulong)param_2 * 4;
    uVar7 = *(uint *)(lVar22 + 0x114);
    if (uVar7 != 0) {
      *(undefined4 *)(lVar22 + 0x114) = *(undefined4 *)(lVar8 + (ulong)uVar7);
      return lVar8 + (ulong)uVar7;
    }
  }
  uVar14 = (ulong)(param_2 + 1);
  do {
    iVar13 = (int)uVar14;
    uVar10 = uVar14 & 0xffffffff;
    uVar14 = uVar14 + 1;
    if (iVar13 == 0x26) {
      lVar8 = 0;
      uVar7 = (uint)*(byte *)(param_1 + (ulong)param_2 + 0x6c) * 0xc;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      if (uVar7 < (uint)((int)*(long *)(param_1 + 0x60) - (int)*(undefined8 *)(param_1 + 0x58))) {
        lVar8 = *(long *)(param_1 + 0x60) - (ulong)uVar7;
        *(long *)(param_1 + 0x60) = lVar8;
      }
      return lVar8;
    }
    uVar7 = *(uint *)(param_1 + 0x110 + uVar14 * 4);
  } while (uVar7 == 0);
  lVar8 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + uVar10 * 4 + 0x114) = *(undefined4 *)(lVar8 + (ulong)uVar7);
  FUN_71007a1230(param_1,lVar8 + (ulong)uVar7);
  return extraout_x1;
}



// ===== FUN_71007a2050 @ 71007a2050 (size=596) =====

ushort * FUN_71007a2050(undefined8 *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  long extraout_x18;
  ushort *puVar13;
  char **ppcVar14;
  char cVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  char *local_200 [64];
  
  pcVar11 = (char *)param_1[2];
  puVar13 = (ushort *)*param_1;
  uVar1 = *(uint *)(pcVar11 + 2);
  bVar4 = param_2 == 0;
  pcVar6 = pcVar11;
  if (!bVar4) {
    pcVar6 = local_200[0];
  }
  uVar10 = (ulong)bVar4;
  local_200[0] = pcVar6;
  uVar5 = *(uint *)(puVar13 + 4);
  lVar12 = param_1[8];
  if (uVar5 == 0) {
    uVar2 = *puVar13;
    uVar9 = (uint)bVar4;
LAB_71007a2228:
    uVar18 = uVar1 + 1 & 0xffff;
    cVar15 = *(char *)(lVar12 + (ulong)uVar1);
    uVar17 = uVar1 + 1 >> 0x10;
    if (uVar2 == 1) {
      cVar16 = *(char *)((long)puVar13 + 3);
    }
    else {
LAB_71007a2134:
      pcVar6 = (char *)(lVar12 + (ulong)*(uint *)(puVar13 + 2));
      cVar16 = *(char *)(lVar12 + (ulong)*(uint *)(puVar13 + 2));
      while (cVar16 != cVar15) {
        pcVar6 = pcVar6 + 6;
        cVar16 = *pcVar6;
      }
      iVar3 = (byte)pcVar6[1] - 1;
      uVar1 = ((uint)puVar13[1] - (uint)uVar2) - iVar3;
      if (uVar1 < (uint)(iVar3 * 2)) {
        cVar16 = '\0';
        if (uVar1 * 2 != 0) {
          cVar16 = (char)(((iVar3 * 2 - 1U) + uVar1 * 3) / (uVar1 * 2));
        }
        cVar16 = cVar16 + '\x01';
      }
      else {
        cVar16 = (uVar1 < (uint)(iVar3 * 5)) + '\x01';
      }
    }
    uVar5 = CONCAT22((short)uVar17,(short)uVar18);
    if (uVar9 != 0) {
LAB_71007a219c:
      puVar7 = puVar13;
      ppcVar14 = local_200 + (uVar9 - 1);
      do {
        puVar13 = (ushort *)(param_1[10] + -0xc);
        if (param_1[10] == param_1[9]) {
          uVar1 = *(uint *)((long)param_1 + 0x114);
          puVar13 = (ushort *)(lVar12 + (ulong)uVar1);
          if (uVar1 == 0) {
            puVar13 = (ushort *)FUN_71007a1d70(param_1,0);
            lVar12 = extraout_x18;
            if (puVar13 == (ushort *)0x0) {
              return (ushort *)0x0;
            }
          }
          else {
            *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)(lVar12 + (ulong)uVar1);
          }
        }
        else {
          param_1[10] = puVar13;
        }
        pcVar6 = *ppcVar14;
        *puVar13 = 1;
        bVar4 = ppcVar14 != local_200;
        *(char *)(puVar13 + 1) = cVar15;
        *(char *)((long)puVar13 + 3) = cVar16;
        *(uint *)(puVar13 + 2) = uVar5;
        *(int *)(puVar13 + 4) = (int)puVar7 - (int)lVar12;
        *(int *)(pcVar6 + 2) = (int)puVar13 - (int)lVar12;
        puVar7 = puVar13;
        ppcVar14 = ppcVar14 + -1;
      } while (bVar4);
    }
    return puVar13;
  }
  do {
    uVar2 = *(ushort *)(lVar12 + (ulong)uVar5);
    puVar13 = (ushort *)(lVar12 + (ulong)uVar5);
    puVar7 = puVar13 + 1;
    uVar9 = (uint)uVar10;
    if (uVar2 == 1) {
LAB_71007a20a0:
      uVar5 = *(uint *)(puVar7 + 1);
    }
    else {
      puVar7 = (ushort *)(lVar12 + (ulong)*(uint *)(puVar13 + 2));
      if (*(char *)(lVar12 + (ulong)*(uint *)(puVar13 + 2)) == *pcVar11) goto LAB_71007a20a0;
      do {
        puVar8 = puVar7;
        puVar7 = puVar8 + 3;
      } while ((char)*puVar7 != *pcVar11);
      uVar5 = *(uint *)(puVar8 + 4);
    }
    if (uVar1 != uVar5) {
      puVar13 = (ushort *)(lVar12 + (ulong)uVar5);
      if (uVar9 == 0) {
        return puVar13;
      }
      uVar2 = *(ushort *)(lVar12 + (ulong)uVar5);
      uVar5 = uVar1 + 1;
      uVar18 = uVar5 & 0xffff;
      uVar17 = uVar5 >> 0x10;
      cVar15 = *(char *)(lVar12 + (ulong)uVar1);
      if (uVar2 != 1) goto LAB_71007a2134;
      cVar16 = *(char *)((long)puVar13 + 3);
      goto LAB_71007a219c;
    }
    uVar5 = *(uint *)(puVar13 + 4);
    uVar9 = uVar9 + 1;
    local_200[uVar10] = (char *)puVar7;
    if (uVar5 == 0) goto LAB_71007a2228;
    uVar10 = (ulong)uVar9;
  } while( true );
}



// ===== FUN_71007a22b0 @ 71007a22b0 (size=112) =====

undefined8 FUN_71007a22b0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (*(code *)*param_1)(param_1,0x4000);
  if (uVar1 < param_2) {
    (*(code *)param_1[1])(param_1,0,param_2);
    return 0;
  }
  (*(code *)param_1[1])(param_1,param_2,0x4000 - param_2);
  return 1;
}



// ===== FUN_71007a2320 @ 71007a2320 (size=1220) =====

void FUN_71007a2320(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  short sVar12;
  ushort uVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  char *pcVar17;
  undefined4 *puVar18;
  long lVar19;
  byte bVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined4 *puVar24;
  ulong uVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint extraout_w18;
  uint extraout_w18_00;
  long lVar28;
  char *pcVar29;
  ushort *puVar30;
  long lVar31;
  undefined1 *puVar32;
  uint uVar33;
  ushort *puVar34;
  uint uVar35;
  uint uVar36;
  int iVar23;
  
  pcVar29 = (char *)param_1[2];
  uVar36 = *(uint *)(pcVar29 + 2);
  if (((byte)pcVar29[1] < 0x1f) && (uVar35 = *(uint *)(*param_1 + 8), uVar35 != 0)) {
    lVar19 = param_1[8];
    lVar31 = lVar19 + (ulong)uVar35;
    if (*(short *)(lVar19 + (ulong)uVar35) == 1) {
      if (*(byte *)(lVar31 + 3) < 0x20) {
        *(byte *)(lVar31 + 3) = *(byte *)(lVar31 + 3) + 1;
      }
    }
    else {
      cVar5 = *pcVar29;
      pcVar15 = (char *)(lVar19 + (ulong)*(uint *)(lVar31 + 4));
      if (*(char *)(lVar19 + (ulong)*(uint *)(lVar31 + 4)) == cVar5) {
        bVar20 = pcVar15[1];
      }
      else {
        do {
          pcVar17 = pcVar15;
          pcVar15 = pcVar17 + 6;
        } while (cVar5 != *pcVar15);
        bVar20 = pcVar17[7];
        if ((byte)pcVar17[1] <= bVar20) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar17;
          *(undefined2 *)(pcVar17 + 10) = *(undefined2 *)(pcVar17 + 4);
          *pcVar17 = cVar5;
          *(undefined4 *)(pcVar17 + 1) = *(undefined4 *)(pcVar17 + 7);
          pcVar17[5] = pcVar17[0xb];
          pcVar15 = pcVar17;
        }
      }
      if (bVar20 < 0x73) {
        pcVar15[1] = bVar20 + 2;
        *(short *)(lVar31 + 2) = *(short *)(lVar31 + 2) + 2;
      }
    }
  }
  if ((int)param_1[3] == 0) {
    lVar31 = FUN_71007a2050(param_1,1);
    *param_1 = lVar31;
    param_1[1] = lVar31;
    if (lVar31 != 0) {
      *(int *)(pcVar29 + 2) = (int)lVar31 - (int)param_1[8];
      return;
    }
  }
  else {
    pcVar15 = (char *)param_1[0xb];
    param_1[0xb] = (long)(pcVar15 + 1);
    *pcVar15 = *pcVar29;
    lVar31 = param_1[8];
    uVar25 = param_1[0xb];
    iVar9 = (int)lVar31;
    uVar35 = (int)uVar25 - iVar9;
    if (uVar25 < (ulong)param_1[0xc]) {
      if (uVar36 == 0) {
        puVar34 = (ushort *)*param_1;
        puVar30 = (ushort *)param_1[1];
        puVar32 = (undefined1 *)param_1[2];
        uVar36 = (int)puVar34 - iVar9;
        *(uint *)(puVar32 + 2) = uVar35;
      }
      else {
        if (uVar36 <= uVar35) {
          lVar19 = FUN_71007a2050(param_1,0);
          if (lVar19 == 0) goto LAB_71007a2790;
          uVar36 = (int)lVar19 - iVar9;
        }
        puVar34 = (ushort *)*param_1;
        puVar30 = (ushort *)param_1[1];
        iVar23 = (int)param_1[3] + -1;
        puVar32 = (undefined1 *)param_1[2];
        *(int *)(param_1 + 3) = iVar23;
        if (iVar23 == 0) {
          param_1[0xb] = uVar25 - (puVar30 != puVar34);
          uVar35 = uVar36;
        }
      }
      uVar6 = *puVar34;
      bVar20 = puVar32[1];
      uVar7 = puVar34[1];
      uVar33 = (uint)uVar6;
      do {
        if (puVar34 == puVar30) {
          *param_1 = lVar31 + (ulong)uVar36;
          param_1[1] = lVar31 + (ulong)uVar36;
          return;
        }
        uVar13 = *puVar30;
        uVar14 = (uint)uVar13;
        uVar27 = (uint)uVar13;
        if (uVar13 == 1) {
          uVar14 = *(uint *)((long)param_1 + 0x114);
          if (uVar14 == 0) {
            puVar18 = (undefined4 *)param_1[9];
            uVar27 = (uint)*(byte *)((long)param_1 + 0x6c) * 0xc;
            if ((uint)((int)param_1[10] - (int)puVar18) < uVar27) {
              puVar18 = (undefined4 *)FUN_71007a1d70(param_1,0);
              uVar27 = extraout_w18;
            }
            else {
              param_1[9] = (long)puVar18 + (ulong)uVar27;
              uVar27 = (uint)uVar13;
            }
            if (puVar18 == (undefined4 *)0x0) break;
          }
          else {
            puVar18 = (undefined4 *)(param_1[8] + (ulong)uVar14);
            *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)(param_1[8] + (ulong)uVar14);
          }
          uVar14 = (int)puVar18 - iVar9;
          uVar3 = *(undefined4 *)(puVar30 + 1);
          *(ushort *)(puVar18 + 1) = puVar30[3];
          *puVar18 = uVar3;
          *(uint *)(puVar30 + 2) = uVar14;
          if (*(byte *)((long)puVar18 + 1) < 0x1e) {
            iVar23 = (*(byte *)((long)puVar18 + 1) & 0x7f) << 1;
            uVar21 = (undefined1)iVar23;
          }
          else {
            iVar23 = 0x78;
            uVar21 = 0x78;
          }
          *(undefined1 *)((long)puVar18 + 1) = uVar21;
          uVar22 = iVar23 + (uint)(3 < uVar6) + *(int *)((long)param_1 + 0x1c);
        }
        else {
          uVar27 = (uint)uVar13;
          if ((uVar13 & 1) == 0) {
            uVar25 = (ulong)((uVar13 >> 1) - 1);
            bVar4 = *(byte *)((long)param_1 + uVar25 + 0x92);
            if ((uint)*(byte *)((long)param_1 + (ulong)(uVar13 >> 1) + 0x92) == (uint)bVar4)
            goto LAB_71007a2408;
            uVar16 = (ulong)(bVar4 + 1);
            uVar22 = *(uint *)((long)param_1 + uVar16 * 4 + 0x114);
            if (uVar22 == 0) {
              puVar18 = (undefined4 *)param_1[9];
              uVar27 = (uint)*(byte *)((long)param_1 + uVar16 + 0x6c) * 0xc;
              if ((uint)((int)param_1[10] - (int)puVar18) < uVar27) {
                puVar18 = (undefined4 *)FUN_71007a1d70(param_1,uVar16);
                uVar14 = extraout_w18_00;
              }
              else {
                param_1[9] = (long)puVar18 + (ulong)uVar27;
              }
              uVar27 = uVar14;
              if (puVar18 == (undefined4 *)0x0) break;
            }
            else {
              puVar18 = (undefined4 *)(param_1[8] + (ulong)uVar22);
              *(undefined4 *)((long)param_1 + uVar16 * 4 + 0x114) =
                   *(undefined4 *)(param_1[8] + (ulong)uVar22);
            }
            uVar22 = *(uint *)(puVar30 + 2);
            puVar24 = puVar18;
            puVar26 = (undefined4 *)(lVar31 + (ulong)uVar22);
            do {
              puVar1 = puVar24 + 3;
              *puVar24 = *puVar26;
              puVar24[1] = puVar26[1];
              puVar24[2] = puVar26[2];
              puVar24 = puVar1;
              puVar26 = puVar26 + 3;
            } while (puVar1 != puVar18 + (uVar25 + 1) * 3);
            uVar14 = (int)puVar18 - iVar9;
            *(undefined4 *)(lVar31 + (ulong)uVar22) =
                 *(undefined4 *)((long)param_1 + (ulong)bVar4 * 4 + 0x114);
            *(uint *)((long)param_1 + (ulong)bVar4 * 4 + 0x114) = uVar22;
            *(uint *)(puVar30 + 2) = uVar14;
          }
          else {
LAB_71007a2408:
            uVar14 = *(uint *)(puVar30 + 2);
          }
          uVar13 = puVar30[1];
          bVar10 = false;
          bVar11 = true;
          if (uVar27 << 2 <= uVar33) {
            bVar11 = uVar27 * 8 <= (uint)uVar13;
            bVar10 = (uint)uVar13 == uVar27 * 8;
          }
          uVar22 = (uint)uVar13;
          if (uVar27 * 2 < uVar33) {
            uVar22 = uVar22 + 1;
          }
          uVar22 = uVar22 + (uint)(!bVar11 || bVar10) * 2;
        }
        uVar2 = (uVar22 & 0xffff) + ((uVar7 + 1) - (bVar20 + uVar33));
        uVar8 = (uint)(byte)puVar32[1] * ((uVar22 & 0xffff) + 6) * 2;
        if (uVar8 < uVar2 * 6) {
          uVar13 = (short)uVar22 + 3;
          sVar12 = (uVar2 < uVar8) + 1;
          if (uVar2 * 4 <= uVar8) {
            sVar12 = (uVar2 < uVar8) + 2;
          }
        }
        else {
          uVar13 = (ushort)(uVar2 * 9 <= uVar8);
          sVar12 = uVar13 + 4;
          if (uVar2 * 0xc <= uVar8) {
            sVar12 = uVar13 + 5;
          }
          if (uVar2 * 0xf <= uVar8) {
            sVar12 = sVar12 + 1;
          }
          uVar13 = (short)uVar22 + sVar12;
        }
        puVar30[1] = uVar13;
        lVar28 = (ulong)uVar14 + (ulong)uVar27 * 6;
        lVar19 = lVar31 + lVar28;
        *(uint *)(lVar19 + 2) = uVar35;
        *(undefined1 *)(lVar31 + lVar28) = *puVar32;
        *(char *)(lVar19 + 1) = (char)sVar12;
        *puVar30 = (short)uVar27 + 1;
        puVar30 = (ushort *)(lVar31 + (ulong)*(uint *)(puVar30 + 4));
      } while( true );
    }
  }
LAB_71007a2790:
  FUN_71007a19b0(param_1);
  return;
}



// ===== FUN_71007a27f0 @ 71007a27f0 (size=112) =====

bool FUN_71007a27f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar3 = 4;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  do {
    uVar1 = (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    iVar3 = iVar3 + -1;
    uVar2 = uVar1 & 0xff | uVar2 << 8;
    *(uint *)(param_1 + 0x1c) = uVar2;
  } while (iVar3 != 0);
  if (uVar2 != 0xffffffff) {
    *(undefined4 *)(param_1 + 0x24) = 0x8000;
  }
  return uVar2 != 0xffffffff;
}



// ===== FUN_71007a2860 @ 71007a2860 (size=160) =====

void FUN_71007a2860(ulong *param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_1[2];
  uVar1 = *(ushort *)(*param_1 + 2);
  uVar2 = (uint)*(byte *)(uVar3 + 1);
  uVar4 = (uint)((int)((uint)uVar1 + uVar2 * -2) < 0 != SBORROW4((uint)uVar1,uVar2 * 2));
  *(uint *)(param_1 + 4) = uVar4;
  *(uint *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + uVar4;
  *(ushort *)(*param_1 + 2) = uVar1 + 4;
  *(char *)(uVar3 + 1) = (char)(uVar2 + 4);
  if (0x7c < (uVar2 + 4 & 0xff)) {
    FUN_71007a12d0();
    uVar3 = param_1[2];
  }
  if ((int)param_1[3] == 0) {
    uVar3 = param_1[8] + (ulong)*(uint *)(uVar3 + 2);
    if (param_1[0xb] < uVar3) {
      *param_1 = uVar3;
      param_1[1] = uVar3;
      return;
    }
  }
  FUN_71007a2320(param_1);
  return;
}



// ===== FUN_71007a2900 @ 71007a2900 (size=204) =====

void FUN_71007a2900(ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = (undefined4 *)param_1[2];
  bVar1 = *(char *)((long)puVar7 + 1) + 4;
  *(byte *)((long)puVar7 + 1) = bVar1;
  *(short *)(*param_1 + 2) = *(short *)(*param_1 + 2) + 4;
  puVar8 = puVar7;
  if (*(byte *)((long)puVar7 - 5) < bVar1) {
    puVar8 = (undefined4 *)((long)puVar7 - 6);
    uVar3 = *(undefined1 *)puVar7;
    uVar6 = *(undefined2 *)((long)puVar7 - 2);
    uVar4 = *(undefined2 *)((long)puVar7 + 2);
    *puVar7 = *(undefined4 *)((long)puVar7 - 6);
    uVar5 = *(undefined2 *)(puVar7 + 1);
    *(undefined1 *)((long)puVar7 - 6) = uVar3;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    *(byte *)((long)puVar7 - 5) = bVar1;
    *(undefined2 *)(puVar7 + -1) = uVar4;
    *(undefined2 *)((long)puVar7 - 2) = uVar5;
    param_1[2] = (ulong)puVar8;
    if (0x7c < bVar1) {
      FUN_71007a12d0();
      puVar8 = (undefined4 *)param_1[2];
    }
  }
  if ((int)param_1[3] == 0) {
    uVar2 = param_1[8] + (ulong)*(uint *)((long)puVar8 + 2);
    if (param_1[0xb] < uVar2) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      return;
    }
  }
  FUN_71007a2320(param_1);
  return;
}



// ===== FUN_71007a29d0 @ 71007a29d0 (size=1556) =====

void FUN_71007a29d0(ulong *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  char cVar7;
  char *pcVar8;
  ushort *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  long extraout_x11;
  ushort *extraout_x12;
  int iVar17;
  ulong extraout_x13;
  uint extraout_w14;
  byte *pbVar18;
  long lVar19;
  ushort *puVar20;
  int local_104;
  char local_100 [256];
  
  puVar20 = (ushort *)*param_1;
  uVar12 = *(uint *)(param_2 + 1);
  uVar14 = param_1[8];
  uVar3 = *puVar20;
  uVar10 = (uint)uVar3;
  if (uVar3 == 1) {
    uVar10 = *(uint *)((long)param_1 + 0x2c);
    bVar2 = *(byte *)((long)puVar20 + 3);
    bVar6 = *(byte *)((long)param_1 +
                     (long)(int)(*(ushort *)(uVar14 + *(uint *)(puVar20 + 4)) - 1) + 0x2ac);
    uVar16 = (uint)*(byte *)((long)param_1 + (ulong)*(byte *)param_1[2] + 0x3ac);
    *(uint *)(param_1 + 5) = uVar16;
    lVar19 = (ulong)((int)param_1[4] + ((uVar10 & 0x80000000) >> 0x1a) + (uint)bVar6 +
                    uVar16 + (uint)*(byte *)((long)param_1 + (ulong)(byte)puVar20[1] + 0x3ac) * 2) +
             (long)(int)(bVar2 - 1) * 0x40;
    uVar3 = *(ushort *)((long)param_1 + lVar19 * 2 + 0xaf0);
    uVar13 = (uint)uVar3;
    uVar16 = (uVar12 >> 0xe) * (uint)uVar3;
    if ((byte)puVar20[1] == param_3) {
      *(uint *)(param_2 + 1) = uVar16;
      if (uVar16 < 0x1000000) {
        do {
          *(uint *)(param_2 + 1) = uVar16 << 8;
          FUN_71007a18d0(param_2);
          uVar16 = *(uint *)(param_2 + 1);
        } while (uVar16 < 0x1000000);
        uVar14 = param_1[8];
        uVar13 = (uint)*(ushort *)((long)param_1 + lVar19 * 2 + 0xaf0);
        uVar10 = *(uint *)((long)param_1 + 0x2c);
      }
      *(short *)((long)param_1 + lVar19 * 2 + 0xaf0) =
           ((short)uVar13 + 0x80) - (short)(uVar13 + 0x20 >> 7);
      param_1[2] = (ulong)(puVar20 + 1);
      *(byte *)((long)puVar20 + 3) =
           *(byte *)((long)puVar20 + 3) + ((byte)(~(uint)*(byte *)((long)puVar20 + 3) >> 7) & 1);
      *(undefined4 *)(param_1 + 4) = 1;
      *(uint *)((long)param_1 + 0x2c) = uVar10 + 1;
      if (((int)param_1[3] == 0) &&
         (uVar14 = uVar14 + *(uint *)(puVar20 + 2), param_1[0xb] < uVar14)) {
        *param_1 = uVar14;
        param_1[1] = uVar14;
        return;
      }
LAB_71007a2d7c:
      FUN_71007a2320(param_1);
      return;
    }
    uVar12 = uVar12 - uVar16;
    *param_2 = *param_2 + (ulong)uVar16;
    *(uint *)(param_2 + 1) = uVar12;
    puVar9 = puVar20;
    if (uVar12 < 0x1000000) {
      do {
        *(uint *)(param_2 + 1) = uVar12 << 8;
        FUN_71007a18d0(param_2);
        uVar12 = *(uint *)(param_2 + 1);
      } while (uVar12 < 0x1000000);
      uVar13 = (uint)*(ushort *)((long)param_1 + lVar19 * 2 + 0xaf0);
      puVar9 = (ushort *)*param_1;
    }
    uVar13 = uVar13 - (uVar13 + 0x20 >> 7);
    bVar2 = (&DAT_71009cc930)[(int)((uVar13 & 0xffff) >> 10)];
    *(short *)((long)param_1 + lVar19 * 2 + 0xaf0) = (short)uVar13;
    *(uint *)((long)param_1 + 0x1c) = (uint)bVar2;
    pcVar8 = local_100;
    do {
      pcVar1 = pcVar8 + 0x40;
      pcVar8[0] = -1;
      pcVar8[1] = -1;
      pcVar8[2] = -1;
      pcVar8[3] = -1;
      pcVar8[4] = -1;
      pcVar8[5] = -1;
      pcVar8[6] = -1;
      pcVar8[7] = -1;
      pcVar8[8] = -1;
      pcVar8[9] = -1;
      pcVar8[10] = -1;
      pcVar8[0xb] = -1;
      pcVar8[0xc] = -1;
      pcVar8[0xd] = -1;
      pcVar8[0xe] = -1;
      pcVar8[0xf] = -1;
      pcVar8[0x10] = -1;
      pcVar8[0x11] = -1;
      pcVar8[0x12] = -1;
      pcVar8[0x13] = -1;
      pcVar8[0x14] = -1;
      pcVar8[0x15] = -1;
      pcVar8[0x16] = -1;
      pcVar8[0x17] = -1;
      pcVar8[0x18] = -1;
      pcVar8[0x19] = -1;
      pcVar8[0x1a] = -1;
      pcVar8[0x1b] = -1;
      pcVar8[0x1c] = -1;
      pcVar8[0x1d] = -1;
      pcVar8[0x1e] = -1;
      pcVar8[0x1f] = -1;
      pcVar8[0x20] = -1;
      pcVar8[0x21] = -1;
      pcVar8[0x22] = -1;
      pcVar8[0x23] = -1;
      pcVar8[0x24] = -1;
      pcVar8[0x25] = -1;
      pcVar8[0x26] = -1;
      pcVar8[0x27] = -1;
      pcVar8[0x28] = -1;
      pcVar8[0x29] = -1;
      pcVar8[0x2a] = -1;
      pcVar8[0x2b] = -1;
      pcVar8[0x2c] = -1;
      pcVar8[0x2d] = -1;
      pcVar8[0x2e] = -1;
      pcVar8[0x2f] = -1;
      pcVar8[0x30] = -1;
      pcVar8[0x31] = -1;
      pcVar8[0x32] = -1;
      pcVar8[0x33] = -1;
      pcVar8[0x34] = -1;
      pcVar8[0x35] = -1;
      pcVar8[0x36] = -1;
      pcVar8[0x37] = -1;
      pcVar8[0x38] = -1;
      pcVar8[0x39] = -1;
      pcVar8[0x3a] = -1;
      pcVar8[0x3b] = -1;
      pcVar8[0x3c] = -1;
      pcVar8[0x3d] = -1;
      pcVar8[0x3e] = -1;
      pcVar8[0x3f] = -1;
      pcVar8 = pcVar1;
    } while (pcVar1 != &stack0x00000000);
    local_100[(byte)puVar20[1]] = '\0';
    uVar10 = (uint)*puVar9;
    *(undefined4 *)(param_1 + 4) = 0;
    puVar20 = puVar9;
  }
  else {
    uVar4 = puVar20[1];
    pbVar15 = (byte *)(uVar14 + *(uint *)(puVar20 + 2));
    uVar16 = 0;
    if (uVar4 != 0) {
      uVar16 = uVar12 / uVar4;
    }
    uVar12 = (uint)pbVar15[1];
    if (*(byte *)(uVar14 + *(uint *)(puVar20 + 2)) == param_3) {
      uVar12 = uVar12 * uVar16;
      *(uint *)(param_2 + 1) = uVar12;
      while (uVar12 < 0x1000000) {
        *(uint *)(param_2 + 1) = uVar12 << 8;
        FUN_71007a18d0(param_2);
        uVar12 = *(uint *)(param_2 + 1);
      }
      param_1[2] = (ulong)pbVar15;
      FUN_71007a2860(param_1);
      return;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    uVar14 = (ulong)(uVar3 - 1);
    pbVar11 = pbVar15;
    do {
      pbVar18 = pbVar11 + 6;
      bVar2 = *pbVar18;
      if (bVar2 == param_3) {
        uVar10 = pbVar11[7] * uVar16;
        *param_2 = *param_2 + (ulong)uVar12 * (ulong)uVar16;
        *(uint *)(param_2 + 1) = uVar10;
        while (uVar10 < 0x1000000) {
          *(uint *)(param_2 + 1) = uVar10 << 8;
          FUN_71007a18d0(param_2);
          uVar10 = *(uint *)(param_2 + 1);
        }
        param_1[2] = (ulong)pbVar18;
        FUN_71007a2900(param_1);
        return;
      }
      uVar12 = uVar12 + pbVar11[7];
      pbVar11 = pbVar18;
    } while (pbVar15 + uVar14 * 6 != pbVar18);
    *(uint *)(param_1 + 5) = (uint)*(byte *)((long)param_1 + (ulong)*(byte *)param_1[2] + 0x3ac);
    pcVar8 = local_100;
    do {
      pcVar1 = pcVar8 + 0x40;
      pcVar8[0] = -1;
      pcVar8[1] = -1;
      pcVar8[2] = -1;
      pcVar8[3] = -1;
      pcVar8[4] = -1;
      pcVar8[5] = -1;
      pcVar8[6] = -1;
      pcVar8[7] = -1;
      pcVar8[8] = -1;
      pcVar8[9] = -1;
      pcVar8[10] = -1;
      pcVar8[0xb] = -1;
      pcVar8[0xc] = -1;
      pcVar8[0xd] = -1;
      pcVar8[0xe] = -1;
      pcVar8[0xf] = -1;
      pcVar8[0x10] = -1;
      pcVar8[0x11] = -1;
      pcVar8[0x12] = -1;
      pcVar8[0x13] = -1;
      pcVar8[0x14] = -1;
      pcVar8[0x15] = -1;
      pcVar8[0x16] = -1;
      pcVar8[0x17] = -1;
      pcVar8[0x18] = -1;
      pcVar8[0x19] = -1;
      pcVar8[0x1a] = -1;
      pcVar8[0x1b] = -1;
      pcVar8[0x1c] = -1;
      pcVar8[0x1d] = -1;
      pcVar8[0x1e] = -1;
      pcVar8[0x1f] = -1;
      pcVar8[0x20] = -1;
      pcVar8[0x21] = -1;
      pcVar8[0x22] = -1;
      pcVar8[0x23] = -1;
      pcVar8[0x24] = -1;
      pcVar8[0x25] = -1;
      pcVar8[0x26] = -1;
      pcVar8[0x27] = -1;
      pcVar8[0x28] = -1;
      pcVar8[0x29] = -1;
      pcVar8[0x2a] = -1;
      pcVar8[0x2b] = -1;
      pcVar8[0x2c] = -1;
      pcVar8[0x2d] = -1;
      pcVar8[0x2e] = -1;
      pcVar8[0x2f] = -1;
      pcVar8[0x30] = -1;
      pcVar8[0x31] = -1;
      pcVar8[0x32] = -1;
      pcVar8[0x33] = -1;
      pcVar8[0x34] = -1;
      pcVar8[0x35] = -1;
      pcVar8[0x36] = -1;
      pcVar8[0x37] = -1;
      pcVar8[0x38] = -1;
      pcVar8[0x39] = -1;
      pcVar8[0x3a] = -1;
      pcVar8[0x3b] = -1;
      pcVar8[0x3c] = -1;
      pcVar8[0x3d] = -1;
      pcVar8[0x3e] = -1;
      pcVar8[0x3f] = -1;
      pcVar8 = pcVar1;
    } while (&stack0x00000000 != pcVar1);
    pbVar15 = pbVar18 + uVar14 * -6;
    local_100[(uint)bVar2] = '\0';
    do {
      pbVar18 = pbVar18 + -6;
      local_100[*pbVar18] = '\0';
    } while (pbVar18 != pbVar15);
    uVar13 = (uVar4 - uVar12) * uVar16;
    *(uint *)(param_2 + 1) = uVar13;
    *param_2 = *param_2 + (ulong)uVar12 * (ulong)uVar16;
    if (uVar13 < 0x1000000) {
      do {
        *(uint *)(param_2 + 1) = uVar13 << 8;
        FUN_71007a18d0(param_2);
        uVar13 = *(uint *)(param_2 + 1);
      } while (uVar13 < 0x1000000);
      uVar10 = (uint)*(ushort *)*param_1;
      puVar20 = (ushort *)*param_1;
    }
  }
  uVar14 = (ulong)((int)param_1[3] + 1);
  do {
    do {
      uVar12 = *(uint *)(puVar20 + 4);
      iVar17 = (int)uVar14;
      if (uVar12 == 0) {
        *(int *)(param_1 + 3) = iVar17;
        return;
      }
      puVar20 = (ushort *)(param_1[8] + (ulong)uVar12);
      uVar14 = (ulong)(iVar17 + 1);
      uVar3 = *(ushort *)(param_1[8] + (ulong)uVar12);
      *param_1 = (ulong)puVar20;
    } while (uVar3 == uVar10);
    *(int *)(param_1 + 3) = iVar17;
    puVar9 = (ushort *)FUN_71007a15c0(param_1,uVar10,&local_104);
    iVar17 = local_104;
    uVar12 = *(uint *)(extraout_x12 + 2);
    uVar14 = (ulong)extraout_w14;
    pbVar15 = (byte *)(extraout_x11 + (ulong)uVar12);
    uVar10 = 0;
    do {
      bVar2 = *pbVar15;
      uVar14 = (ulong)((int)uVar14 - 1);
      pbVar11 = pbVar15 + 6;
      bVar6 = pbVar15[1];
      uVar16 = uVar10 + ((int)local_100[bVar2] & (uint)bVar6);
      if (param_3 == bVar2) {
        pbVar11 = pbVar15;
        uVar12 = uVar10;
        do {
          pbVar18 = pbVar11 + 6;
          uVar12 = uVar12 + ((int)local_100[*pbVar11] & (uint)pbVar11[1]);
          pbVar11 = pbVar18;
        } while (pbVar18 != pbVar15 + (uVar14 + 1) * 6);
        uVar16 = 0;
        if (uVar12 + local_104 != 0) {
          uVar16 = *(uint *)(param_2 + 1) / (uVar12 + local_104);
        }
        uVar12 = bVar6 * uVar16;
        *param_2 = *param_2 + (ulong)uVar10 * (ulong)uVar16;
        *(uint *)(param_2 + 1) = uVar12;
        if (uVar12 < 0x1000000) {
          do {
            *(uint *)(param_2 + 1) = uVar12 << 8;
            FUN_71007a18d0(param_2);
            uVar12 = *(uint *)(param_2 + 1);
          } while (uVar12 < 0x1000000);
          bVar6 = pbVar15[1];
        }
        bVar2 = (byte)puVar9[1];
        if ((bVar2 < 7) &&
           (cVar7 = *(char *)((long)puVar9 + 3) + -1, *(char *)((long)puVar9 + 3) = cVar7,
           cVar7 == '\0')) {
          *(byte *)(puVar9 + 1) = bVar2 + 1;
          *(char *)((long)puVar9 + 3) = (char)(3 << (ulong)(bVar2 & 0x1f));
          *puVar9 = (ushort)((*puVar9 & 0x7fff) << 1);
        }
        sVar5 = *(short *)(*param_1 + 2);
        param_1[2] = (ulong)pbVar15;
        *(short *)(*param_1 + 2) = sVar5 + 4;
        pbVar15[1] = bVar6 + 4;
        if (0x7c < (byte)(bVar6 + 4)) {
          FUN_71007a12d0(param_1);
        }
        *(int *)((long)param_1 + 0x2c) = (int)param_1[6];
        goto LAB_71007a2d7c;
      }
      local_100[bVar2] = '\0';
      pbVar15 = pbVar11;
      uVar10 = uVar16;
    } while ((byte *)(extraout_x11 + (ulong)uVar12) + ((ulong)(extraout_w14 - 1) + 1) * 6 != pbVar11
            );
    uVar12 = 0;
    if (local_104 + uVar16 != 0) {
      uVar12 = *(uint *)(param_2 + 1) / (local_104 + uVar16);
    }
    uVar13 = local_104 * uVar12;
    *param_2 = *param_2 + (ulong)uVar16 * (ulong)uVar12;
    *(uint *)(param_2 + 1) = uVar13;
    puVar20 = extraout_x12;
    uVar14 = extraout_x13;
    uVar10 = extraout_w14;
    if (uVar13 < 0x1000000) {
      do {
        *(uint *)(param_2 + 1) = uVar13 << 8;
        FUN_71007a18d0(param_2);
        uVar13 = *(uint *)(param_2 + 1);
      } while (uVar13 < 0x1000000);
      puVar20 = (ushort *)*param_1;
      uVar10 = (uint)*puVar20;
      uVar14 = (ulong)((int)param_1[3] + 1);
    }
    *puVar9 = (short)iVar17 + *puVar9 + (short)uVar16;
  } while( true );
}



// ===== FUN_71007a2ff0 @ 71007a2ff0 (size=1308) =====

ulong FUN_71007a2ff0(ulong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  byte **ppbVar12;
  uint uVar13;
  short *psVar14;
  byte **ppbVar15;
  int iVar16;
  code *pcVar17;
  ulong uVar18;
  ushort *puVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  uint uVar23;
  uint local_904;
  byte *local_900 [32];
  byte *local_800 [256];
  
  psVar14 = (short *)*param_1;
  uVar22 = param_1[8];
  if (*psVar14 == 1) {
    pcVar17 = (code *)param_2[2];
    bVar4 = *(byte *)((long)psVar14 + 3);
    bVar5 = *(byte *)((long)param_1 +
                     (long)(int)(*(ushort *)(uVar22 + *(uint *)(psVar14 + 4)) - 1) + 0x2ac);
    uVar13 = (uint)*(byte *)((long)param_1 + (ulong)*(byte *)param_1[2] + 0x3ac);
    *(uint *)(param_1 + 5) = uVar13;
    lVar20 = (ulong)((int)param_1[4] + ((*(uint *)((long)param_1 + 0x2c) & 0x80000000) >> 0x1a) +
                     (uint)bVar5 +
                    uVar13 + (uint)*(byte *)((long)param_1 + (ulong)*(byte *)(psVar14 + 1) + 0x3ac)
                             * 2) + (long)(int)(bVar4 - 1) * 0x40;
    iVar16 = (*pcVar17)(param_2,*(undefined2 *)((long)param_1 + lVar20 * 2 + 0xaf0));
    uVar6 = *(ushort *)((long)param_1 + lVar20 * 2 + 0xaf0);
    puVar19 = (ushort *)*param_1;
    uVar13 = uVar6 + 0x20 >> 7;
    if (iVar16 == 0) {
      uVar22 = param_1[3];
      *(ushort *)((long)param_1 + lVar20 * 2 + 0xaf0) = (uVar6 + 0x80) - (short)uVar13;
      param_1[2] = (ulong)(puVar19 + 1);
      uVar6 = puVar19[1];
      *(byte *)((long)puVar19 + 3) =
           *(byte *)((long)puVar19 + 3) + ((byte)(~(uint)*(byte *)((long)puVar19 + 3) >> 7) & 1);
      *(undefined4 *)(param_1 + 4) = 1;
      *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
      if (((int)uVar22 == 0) &&
         (uVar22 = param_1[8] + (ulong)*(uint *)(puVar19 + 2), param_1[0xb] < uVar22)) {
        *param_1 = uVar22;
        param_1[1] = uVar22;
        return (ulong)(byte)uVar6;
      }
      FUN_71007a2320(param_1);
      return (ulong)(byte)uVar6;
    }
    uVar13 = uVar6 - uVar13;
    bVar4 = (&DAT_71009cc930)[(int)((uVar13 & 0xffff) >> 10)];
    *(short *)((long)param_1 + lVar20 * 2 + 0xaf0) = (short)uVar13;
    *(uint *)((long)param_1 + 0x1c) = (uint)bVar4;
    ppbVar12 = local_900;
    do {
      ppbVar15 = ppbVar12 + 8;
      *(undefined4 *)ppbVar12 = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 4) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 1) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0xc) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 2) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x14) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 3) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x1c) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 4) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x24) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 5) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x2c) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 6) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x34) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 7) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x3c) = 0xffffffff;
      ppbVar12 = ppbVar15;
    } while (ppbVar15 != local_800);
    uVar6 = puVar19[1];
    uVar13 = (uint)*puVar19;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((long)local_900 + (ulong)(byte)uVar6) = 0;
  }
  else {
    uVar13 = *(uint *)(psVar14 + 2);
    uVar10 = (*(code *)*param_2)(param_2,psVar14[1]);
    pbVar21 = (byte *)(uVar22 + uVar13);
    bVar4 = pbVar21[1];
    if (uVar10 < bVar4) {
      (*(code *)param_2[1])(param_2,0,(uint)bVar4);
      param_1[2] = (ulong)pbVar21;
      bVar4 = *(byte *)(uVar22 + uVar13);
      FUN_71007a2860(param_1);
      return (ulong)bVar4;
    }
    uVar6 = *(ushort *)*param_1;
    *(undefined4 *)(param_1 + 4) = 0;
    pbVar2 = pbVar21 + ((ulong)(uVar6 - 2) + 1) * 6;
    uVar13 = (uint)bVar4;
    do {
      pbVar1 = pbVar21 + 7;
      pbVar21 = pbVar21 + 6;
      uVar23 = uVar13 + *pbVar1;
      if (uVar10 < uVar23) {
        (*(code *)param_2[1])(param_2,uVar13);
        param_1[2] = (ulong)pbVar21;
        bVar4 = *pbVar21;
        FUN_71007a2900(param_1);
        return (ulong)bVar4;
      }
      uVar13 = uVar23;
    } while (pbVar2 != pbVar21);
    uVar6 = ((ushort *)*param_1)[1];
    if (uVar6 <= uVar10) {
      return 0xfffffffe;
    }
    pcVar17 = (code *)param_2[1];
    *(uint *)(param_1 + 5) = (uint)*(byte *)((long)param_1 + (ulong)*(byte *)param_1[2] + 0x3ac);
    (*pcVar17)(param_2,uVar23,uVar6 - uVar23);
    ppbVar12 = local_900;
    do {
      ppbVar15 = ppbVar12 + 8;
      *(undefined4 *)ppbVar12 = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 4) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 1) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0xc) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 2) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x14) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 3) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x1c) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 4) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x24) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 5) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x2c) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 6) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x34) = 0xffffffff;
      *(undefined4 *)(ppbVar12 + 7) = 0xffffffff;
      *(undefined4 *)((long)ppbVar12 + 0x3c) = 0xffffffff;
      ppbVar12 = ppbVar15;
    } while (local_800 != ppbVar15);
    puVar19 = (ushort *)*param_1;
    uVar6 = *puVar19;
    uVar13 = (uint)uVar6;
    *(undefined1 *)((long)local_900 + (ulong)*pbVar21) = 0;
    pbVar2 = pbVar21 + ((ulong)(uVar6 - 2) + 1) * -6;
    do {
      pbVar21 = pbVar21 + -6;
      *(undefined1 *)((long)local_900 + (ulong)*pbVar21) = 0;
    } while (pbVar21 != pbVar2);
  }
  while( true ) {
    ppbVar12 = local_800;
    iVar16 = (int)param_1[3];
    do {
      iVar16 = iVar16 + 1;
      uVar10 = *(uint *)(puVar19 + 4);
      if (uVar10 == 0) {
        *(int *)(param_1 + 3) = iVar16;
        return 0xffffffff;
      }
      uVar22 = param_1[8];
      puVar19 = (ushort *)(uVar22 + uVar10);
      uVar6 = *(ushort *)(uVar22 + uVar10);
      *param_1 = (ulong)puVar19;
      uVar10 = (uint)uVar6;
    } while (uVar10 == uVar13);
    uVar23 = 0;
    uVar10 = uVar10 - uVar13;
    uVar3 = *(uint *)(puVar19 + 2);
    uVar18 = 0;
    *(int *)(param_1 + 3) = iVar16;
    pbVar21 = (byte *)(uVar22 + uVar3);
    do {
      bVar4 = *pbVar21;
      ppbVar12[uVar18] = pbVar21;
      uVar3 = (int)uVar18 - (int)*(char *)((long)local_900 + (ulong)bVar4);
      uVar18 = (ulong)uVar3;
      uVar23 = uVar23 + ((uint)pbVar21[1] & (int)*(char *)((long)local_900 + (ulong)bVar4));
      pbVar21 = pbVar21 + 6;
    } while (uVar10 != uVar3);
    puVar19 = (ushort *)FUN_71007a15c0(param_1,uVar13,&local_904);
    uVar3 = local_904;
    uVar13 = local_904 + uVar23;
    local_904 = uVar13;
    uVar11 = (*(code *)*param_2)(param_2,uVar13);
    if (uVar11 < uVar23) break;
    if (uVar13 <= uVar11) {
      return 0xfffffffe;
    }
    (*(code *)param_2[1])(param_2,uVar23,uVar3);
    ppbVar15 = ppbVar12 + (uVar10 - 1);
    *puVar19 = (short)uVar13 + *puVar19;
    do {
      pbVar21 = *ppbVar15;
      bVar9 = ppbVar15 != ppbVar12;
      ppbVar15 = ppbVar15 + -1;
      *(undefined1 *)((long)local_900 + (ulong)*pbVar21) = 0;
    } while (bVar9);
    puVar19 = (ushort *)*param_1;
    uVar13 = (uint)*puVar19;
  }
  uVar10 = (uint)local_800[0][1];
  uVar13 = (uint)local_800[0][1];
  if (uVar11 < uVar10) {
    uVar23 = 0;
    pbVar21 = local_800[0];
  }
  else {
    do {
      uVar23 = uVar13;
      ppbVar12 = ppbVar12 + 1;
      bVar4 = (*ppbVar12)[1];
      uVar10 = (uint)bVar4;
      uVar13 = uVar23 + bVar4;
      pbVar21 = *ppbVar12;
    } while (uVar13 <= uVar11);
  }
  (*(code *)param_2[1])(param_2,uVar23,uVar10);
  bVar4 = (byte)puVar19[1];
  if ((bVar4 < 7) &&
     (cVar8 = *(char *)((long)puVar19 + 3) + -1, *(char *)((long)puVar19 + 3) = cVar8, cVar8 == '\0'
     )) {
    *(byte *)(puVar19 + 1) = bVar4 + 1;
    *(char *)((long)puVar19 + 3) = (char)(3 << (ulong)(bVar4 & 0x1f));
    *puVar19 = (ushort)((*puVar19 & 0x7fff) << 1);
  }
  sVar7 = *(short *)(*param_1 + 2);
  param_1[2] = (ulong)pbVar21;
  bVar4 = *pbVar21;
  *(short *)(*param_1 + 2) = sVar7 + 4;
  bVar5 = pbVar21[1];
  pbVar21[1] = bVar5 + 4;
  if (0x7c < (byte)(bVar5 + 4)) {
    FUN_71007a12d0(param_1);
  }
  *(int *)((long)param_1 + 0x2c) = (int)param_1[6];
  FUN_71007a2320(param_1);
  return (ulong)bVar4;
}



// ===== FUN_71007a3510 @ 71007a3510 (size=176) =====

void FUN_71007a3510(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  param_3 = param_3 & 0xffffffff;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2 / param_3;
  }
  if (param_3 <= param_2) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = uVar1 / param_3;
    }
    if (param_3 <= uVar1) {
      uVar3 = 0;
      if (param_3 != 0) {
        uVar3 = uVar2 / param_3;
      }
      if (param_3 <= uVar2) {
        FUN_71007a3510(param_1,uVar3);
      }
      FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(uVar2 - uVar3 * param_3) + 5]);
    }
    FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(uVar1 - uVar2 * param_3) + 5]);
  }
  FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(param_2 - uVar1 * param_3) + 5]);
  return;
}



// ===== FUN_71007a35c0 @ 71007a35c0 (size=2304) =====

void FUN_71007a35c0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong *puVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong *puVar18;
  char cVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  int iVar25;
  ulong unaff_x22;
  undefined *unaff_x23;
  ulong unaff_x24;
  char *pcVar26;
  char *unaff_x28;
  ulong uVar27;
  
  puVar24 = (ulong *)*param_3;
  lVar2 = param_3[1];
  iVar25 = *(int *)(param_3 + 3);
  lVar15 = FUN_710079d7c0(param_1,0x40);
  if (lVar15 == 0) goto LAB_71007a3794;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  cVar19 = *param_2;
  if (cVar19 != '\0') {
    unaff_x23 = &UNK_71009953a0;
    unaff_x22 = 0x10005;
    unaff_x24 = 0xcccccccccccccccd;
    do {
      unaff_x28 = param_2 + 1;
      if (cVar19 == '%') {
        bVar13 = param_2[1];
        pcVar26 = unaff_x28;
        iVar14 = iVar25;
        bVar12 = bVar13;
        if ((byte)(bVar13 + 0x96) < 0x11) {
          if ((unaff_x22 >> ((ulong)(uint)(byte)(bVar13 + 0x96) & 0x3f) & 1) == 0) {
            if (bVar13 == 0x73) {
LAB_71007a3858:
              puVar18 = puVar24;
              if (iVar25 < 0) {
                iVar14 = iVar25 + 8;
                if (iVar14 < 1) {
                  puVar18 = (ulong *)(lVar2 + iVar25);
                }
                else {
                  puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                }
              }
              else {
                puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                iVar14 = iVar25;
              }
              unaff_x28 = pcVar26 + 1;
              puVar1 = &UNK_7100855870;
              if ((undefined *)*puVar18 != (undefined *)0x0) {
                puVar1 = (undefined *)*puVar18;
              }
              FUN_71007a0440(param_1,puVar1);
              iVar25 = iVar14;
            }
            else {
              if (0x73 < bVar13) {
                if (bVar13 == 0x75) {
                  bVar13 = 0;
LAB_71007a3b8c:
                  iVar20 = 0x75;
LAB_71007a3984:
                  pcVar26 = unaff_x28;
                  if (bVar13 == 0x6a) {
                    puVar18 = puVar24;
                    if (iVar25 < 0) {
                      iVar14 = iVar25 + 8;
                      if (iVar14 < 1) {
                        puVar18 = (ulong *)(lVar2 + iVar25);
                      }
                      else {
                        puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                      }
                    }
                    else {
                      puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                    }
                    uVar27 = *puVar18;
                  }
                  else if (iVar25 < 0) {
                    iVar14 = iVar25 + 8;
                    if (iVar14 < 1) {
                      uVar27 = (ulong)*(uint *)(lVar2 + iVar25);
                    }
                    else {
                      uVar27 = (ulong)(uint)*puVar24;
                      puVar24 = (ulong *)((long)puVar24 + 0xbU & 0xfffffffffffffff8);
                    }
                  }
                  else {
                    uVar27 = (ulong)(uint)*puVar24;
                    puVar24 = (ulong *)((long)puVar24 + 0xbU & 0xfffffffffffffff8);
                  }
                  goto LAB_71007a39a0;
                }
                bVar13 = 0;
LAB_71007a3900:
                if (bVar12 != 0x78) goto LAB_71007a36c0;
                if (bVar13 == 0x6c) {
LAB_71007a3ba4:
                  if (iVar25 < 0) {
                    iVar14 = iVar25 + 8;
                    if (iVar14 < 1) {
                      uVar27 = *(ulong *)(lVar2 + iVar25);
                    }
                    else {
                      uVar27 = *puVar24;
                      puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                    }
                    goto LAB_71007a3930;
                  }
                }
                else {
                  iVar20 = 0x78;
                  unaff_x28 = pcVar26;
                  if (bVar13 != 0x7a) goto LAB_71007a3984;
                  iVar20 = 0x78;
                  if (iVar25 < 0) goto LAB_71007a3d34;
                }
LAB_71007a3924:
                uVar27 = *puVar24;
                puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
LAB_71007a3930:
                if (0xf < uVar27) {
                  if (0xff < uVar27) {
                    FUN_71007a3510(param_1,uVar27 >> 8,0x10);
                  }
                  FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(uVar27 >> 4 & 0xf) + 5]);
                }
                bVar12 = "Z2fQ`0123456789abcdef"[(uVar27 & 0xf) + 5];
                goto LAB_71007a3674;
              }
              bVar13 = 0;
LAB_71007a36b8:
              if (bVar12 != 0x6f) goto LAB_71007a36c0;
              if (bVar13 == 0x6c) {
                if (iVar25 < 0) {
                  iVar14 = iVar25 + 8;
                  if (iVar14 < 1) {
                    uVar27 = *(ulong *)(lVar2 + iVar25);
                  }
                  else {
                    uVar27 = *puVar24;
                    puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                  }
                  goto LAB_71007a3a6c;
                }
              }
              else {
                iVar20 = 0x6f;
                unaff_x28 = pcVar26;
                if (bVar13 != 0x7a) goto LAB_71007a3984;
                if (iVar25 < 0) {
                  iVar20 = 0x6f;
                  goto LAB_71007a3d34;
                }
              }
              uVar27 = *puVar24;
              puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
LAB_71007a3a6c:
              if (7 < uVar27) {
                if (0x3f < uVar27) {
                  FUN_71007a3510(param_1,uVar27 >> 6,8);
                }
                FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(uVar27 >> 3 & 7) + 5]);
              }
              unaff_x28 = pcVar26 + 1;
              FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(uVar27 & 7) + 5]);
              iVar25 = iVar14;
            }
            goto LAB_71007a3680;
          }
          bVar12 = param_2[2];
          pcVar26 = param_2 + 2;
          if (bVar12 == 99) goto LAB_71007a37a8;
          if (bVar12 < 100) {
            if (bVar12 == 0x53) goto LAB_71007a374c;
            if (bVar12 != 0x58) goto LAB_71007a366c;
            if (bVar13 == 0x6c) goto LAB_71007a3ba4;
            if (bVar13 != 0x7a) {
              iVar20 = 0x58;
              unaff_x28 = pcVar26;
              goto LAB_71007a3984;
            }
            if (-1 < iVar25) goto LAB_71007a3924;
            iVar20 = 0x58;
LAB_71007a3d34:
            iVar14 = iVar25 + 8;
            if (iVar14 < 1) {
              puVar18 = (ulong *)(lVar2 + iVar25);
              puVar11 = puVar24;
            }
            else {
              puVar11 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
              puVar18 = puVar24;
            }
            puVar24 = puVar11;
            uVar27 = *puVar18;
LAB_71007a39a0:
            if (iVar20 == 0x6f) goto LAB_71007a3a6c;
            if (iVar20 != 0x75) goto LAB_71007a3930;
LAB_71007a39b0:
            if (9 < uVar27) {
              if (99 < uVar27) {
                FUN_71007a3510(param_1,(uVar27 / 10) / 10,10);
              }
              FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[(uVar27 / 10) % 10 + 5]);
            }
            unaff_x28 = pcVar26 + 1;
            FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[uVar27 % 10 + 5]);
            iVar25 = iVar14;
            goto LAB_71007a3680;
          }
          if (bVar12 == 0x73) {
            if (bVar13 != 0x6c) goto LAB_71007a3858;
            puVar18 = puVar24;
            if (iVar25 < 0) {
              iVar14 = iVar25 + 8;
              if (iVar14 < 1) {
                puVar18 = (ulong *)(lVar2 + iVar25);
                iVar25 = iVar14;
              }
              else {
                puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                iVar25 = iVar14;
              }
            }
            else {
              puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
            }
            unaff_x28 = "(";
            if ((char *)*puVar18 != (char *)0x0) {
              unaff_x28 = (char *)*puVar18;
            }
            uVar16 = FUN_710081f600(unaff_x28);
            iVar14 = FUN_71007a04d0(param_1,unaff_x28,uVar16);
            if (iVar14 == 0) {
              unaff_x28 = param_2 + 3;
            }
            else {
              piVar17 = (int *)FUN_710080e8e0();
              if (*piVar17 == 0xc) goto LAB_71007a3794;
              unaff_x28 = param_2 + 3;
            }
            goto LAB_71007a3680;
          }
          if (0x73 < bVar12) {
            if (bVar12 != 0x75) goto LAB_71007a3900;
            if (bVar13 == 0x6c) {
              if (iVar25 < 0) {
                iVar14 = iVar25 + 8;
                if (iVar14 < 1) {
                  uVar27 = *(ulong *)(lVar2 + iVar25);
                }
                else {
                  uVar27 = *puVar24;
                  puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                }
                goto LAB_71007a39b0;
              }
            }
            else {
              unaff_x28 = pcVar26;
              if (bVar13 != 0x7a) goto LAB_71007a3b8c;
              if (iVar25 < 0) {
                iVar20 = 0x75;
                goto LAB_71007a3d34;
              }
            }
            uVar27 = *puVar24;
            puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
            goto LAB_71007a39b0;
          }
          if (bVar12 != 100) goto LAB_71007a36b8;
          puVar18 = puVar24;
          if (iVar25 < 0) {
            iVar14 = iVar25 + 8;
            if (iVar14 < 1) {
              puVar18 = (ulong *)(lVar2 + iVar25);
            }
            else {
              puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
            }
          }
          else {
            puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
          }
          uVar27 = *puVar18;
          unaff_x28 = pcVar26;
          if (-1 < (long)uVar27) goto LAB_71007a3710;
          FUN_71007a0480(param_1,0x2d);
          if (uVar27 != 0x8000000000000000) goto LAB_71007a3808;
          lVar15 = 8;
          lVar22 = 0;
          uVar21 = 0x20c49ba5e353f7;
          lVar23 = 8;
LAB_71007a3d00:
          FUN_71007a3510(param_1,uVar21,10);
LAB_71007a3a2c:
          FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[lVar23 + 5]);
          FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[lVar22 + 5]);
LAB_71007a3730:
          unaff_x28 = pcVar26 + 1;
          FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[lVar15 + 5]);
          iVar25 = iVar14;
        }
        else {
          if (bVar13 == 99) {
LAB_71007a37a8:
            if (iVar25 < 0) {
              iVar14 = iVar25 + 8;
              if (iVar14 < 1) {
                bVar12 = *(byte *)(lVar2 + iVar25);
              }
              else {
                bVar12 = (byte)*puVar24;
                puVar24 = (ulong *)((long)puVar24 + 0xbU & 0xfffffffffffffff8);
              }
            }
            else {
              bVar12 = (byte)*puVar24;
              puVar24 = (ulong *)((long)puVar24 + 0xbU & 0xfffffffffffffff8);
              iVar14 = iVar25;
            }
LAB_71007a3674:
            FUN_71007a0480(param_1,bVar12);
            iVar25 = iVar14;
          }
          else {
            if (99 < bVar13) {
              if ((0x73 < bVar13) || (bVar13 != 100)) {
LAB_71007a36c0:
                cVar19 = '%';
                goto LAB_71007a36c4;
              }
              if (iVar25 < 0) {
                iVar14 = iVar25 + 8;
                if (iVar14 < 1) {
                  puVar18 = (ulong *)(lVar2 + iVar25);
                  goto LAB_71007a3704;
                }
                uVar27 = (ulong)(int)(uint)*puVar24;
                puVar24 = (ulong *)((long)puVar24 + 0xbU & 0xfffffffffffffff8);
                if ((long)uVar27 < 0) goto LAB_71007a3d18;
LAB_71007a3710:
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar27;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = unaff_x24;
                uVar21 = SUB168(auVar3 * auVar7,8) >> 3;
                lVar15 = uVar27 + uVar21 * -10;
                pcVar26 = unaff_x28;
              }
              else {
                puVar18 = puVar24;
                puVar24 = (ulong *)((long)puVar24 + 0xbU & 0xfffffffffffffff8);
LAB_71007a3704:
                uVar27 = (ulong)(int)(uint)*puVar18;
                if (-1 < (long)uVar27) goto LAB_71007a3710;
LAB_71007a3d18:
                FUN_71007a0480(param_1,0x2d);
LAB_71007a3808:
                uVar27 = -uVar27;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar27;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = unaff_x24;
                uVar21 = SUB168(auVar4 * auVar8,8) >> 3;
                lVar15 = uVar27 + uVar21 * -10;
              }
              if (9 < uVar27) {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar21;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = unaff_x24;
                lVar22 = uVar21 + (SUB168(auVar5 * auVar9,8) >> 3) * -10;
                if (99 < uVar27) {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar27 / 100;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = unaff_x24;
                  uVar21 = SUB168(auVar6 * auVar10,8) >> 3;
                  lVar23 = uVar27 / 100 + uVar21 * -10;
                  if (999 < uVar27) goto LAB_71007a3d00;
                  goto LAB_71007a3a2c;
                }
                FUN_71007a0480(param_1,"Z2fQ`0123456789abcdef"[lVar22 + 5]);
              }
              goto LAB_71007a3730;
            }
            if (bVar13 != 0x53) {
              if (bVar13 == 0x58) {
                bVar13 = 0;
                iVar20 = 0x58;
                goto LAB_71007a3984;
              }
LAB_71007a366c:
              if (bVar12 != 0x25) goto LAB_71007a36c0;
              goto LAB_71007a3674;
            }
LAB_71007a374c:
            puVar18 = puVar24;
            if (iVar25 < 0) {
              iVar14 = iVar25 + 8;
              if (iVar14 < 1) {
                puVar18 = (ulong *)(lVar2 + iVar25);
                iVar25 = iVar14;
              }
              else {
                puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
                iVar25 = iVar14;
              }
            }
            else {
              puVar24 = (ulong *)((long)puVar24 + 0xfU & 0xfffffffffffffff8);
            }
            puVar1 = unaff_x23;
            if ((undefined *)*puVar18 != (undefined *)0x0) {
              puVar1 = (undefined *)*puVar18;
            }
            uVar16 = FUN_710081f600(puVar1);
            iVar14 = FUN_71007a04d0(param_1,puVar1,uVar16);
            if ((iVar14 != 0) && (piVar17 = (int *)FUN_710080e8e0(), *piVar17 == 0xc)) {
LAB_71007a3794:
              FUN_71007a0e30(1,"Out of memory");
              pcVar26 = unaff_x28;
              goto LAB_71007a37a8;
            }
          }
          unaff_x28 = pcVar26 + 1;
        }
      }
      else {
LAB_71007a36c4:
        FUN_71007a0480(param_1,cVar19);
        pcVar26 = param_2;
      }
LAB_71007a3680:
      cVar19 = pcVar26[1];
      param_2 = unaff_x28;
    } while (cVar19 != '\0');
  }
  return;
}



// ===== FUN_71007a3ec0 @ 71007a3ec0 (size=48) =====

void FUN_71007a3ec0(long param_1,undefined8 *param_2)

{
  if (param_1 == 0) {
    param_1 = 1;
  }
  if ((param_2 != (undefined8 *)0x0) && ((code *)*param_2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0071007a3ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_2)(param_2[2]);
    return;
  }
  FUN_710081c1c0(param_1);
  return;
}



// ===== FUN_71007a3ef0 @ 71007a3ef0 (size=36) =====

void FUN_71007a3ef0(undefined8 param_1,long param_2)

{
  if ((param_2 != 0) && (*(code **)(param_2 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0071007a3f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_2 + 0x10),param_1);
    return;
  }
  FUN_710081c200();
  return;
}



// ===== FUN_71007a3f20 @ 71007a3f20 (size=108) =====

ulong FUN_71007a3f20(long param_1,long *param_2,long param_3,long param_4,long *param_5,long param_6
                    )

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_5;
  lVar3 = *param_2;
  uVar1 = param_3 - lVar3;
  if ((ulong)(param_6 - lVar2) < (ulong)(param_3 - lVar3)) {
    uVar1 = param_6 - lVar2;
  }
  FUN_710080f900(param_4 + lVar2,param_1 + lVar3,uVar1);
  *param_5 = lVar2 + uVar1;
  *param_2 = lVar3 + uVar1;
  return uVar1;
}



// ===== FUN_71007a3f90 @ 71007a3f90 (size=192) =====

undefined8 FUN_71007a3f90(long *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)param_3[1];
  if ((code *)param_1[2] == (code *)0x0 || UNRECOVERED_JUMPTABLE == (code *)param_1[2]) {
    param_1[1] = *param_3;
    param_1[2] = (long)UNRECOVERED_JUMPTABLE;
    goto joined_r0x0071007a4018;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[4];
  lVar2 = *param_1;
  lVar3 = param_2;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if ((param_2 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      lVar2 = *(long *)(param_2 + 0x10);
      lVar3 = *param_1;
      goto LAB_71007a3ff8;
    }
    FUN_710081c200();
  }
  else {
LAB_71007a3ff8:
    (*UNRECOVERED_JUMPTABLE)(lVar2,lVar3);
  }
  lVar2 = *param_3;
  UNRECOVERED_JUMPTABLE = (code *)param_3[1];
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = lVar2;
  param_1[2] = (long)UNRECOVERED_JUMPTABLE;
joined_r0x0071007a4018:
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071007a3fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



// ===== FUN_71007a40a0 @ 71007a40a0 (size=112) =====

void FUN_71007a40a0(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1[2] == 0) {
    return;
  }
  pcVar2 = (code *)param_1[4];
  lVar1 = *param_1;
  if (pcVar2 == (code *)0x0) {
    if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 8), pcVar2 == (code *)0x0)) {
      FUN_710081c200();
      goto LAB_71007a40c8;
    }
    lVar1 = *(long *)(param_2 + 0x10);
    param_2 = *param_1;
  }
  (*pcVar2)(lVar1,param_2);
LAB_71007a40c8:
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = -1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



// ===== FUN_71007a4110 @ 71007a4110 (size=176) =====

undefined8 FUN_71007a4110(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0xb;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if ((puVar1 == (undefined8 *)0x0) || ((code *)*puVar1 == (code *)0x0)) {
      puVar1 = (undefined8 *)FUN_710081c1c0(0x60);
    }
    else {
      puVar1 = (undefined8 *)(*(code *)*puVar1)(puVar1[2],1,0x60);
    }
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      return 5;
    }
    puVar1[8] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
  }
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((long)puVar1 + 0x5c) = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(lVar2 + 0x48) = 0;
  *(undefined1 *)(lVar2 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



// ===== FUN_71007a41c0 @ 71007a41c0 (size=632) =====

ulong FUN_71007a41c0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long local_10;
  long lStack_8;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (param_1[1] != 0) {
      return 0xb;
    }
    lVar8 = param_1[3];
  }
  else {
    lVar8 = param_1[3];
  }
  if ((lVar8 == 0) && (param_1[4] != 0)) {
    return 0xb;
  }
  puVar6 = (undefined8 *)param_1[7];
  if (puVar6 == (undefined8 *)0x0) {
    return 0xb;
  }
  if ((code *)puVar6[3] == (code *)0x0 || 4 < param_2) {
    return 0xb;
  }
  if (*(char *)((long)puVar6 + (ulong)param_2 + 0x58) == '\0') {
    return 0xb;
  }
  if (param_1[8] != 0) {
    return 8;
  }
  if (param_1[9] != 0) {
    return 8;
  }
  if (param_1[10] != 0) {
    return 8;
  }
  if (param_1[0xb] != 0) {
    return 8;
  }
  if (param_1[0xc] != 0) {
    return 8;
  }
  if (param_1[0xd] != 0) {
    return 8;
  }
  if (param_1[0xe] != 0) {
    return 8;
  }
  if (param_1[0xf] != 0) {
    return 8;
  }
  if (param_1[0x10] != 0) {
    return 8;
  }
  uVar1 = *(uint *)(puVar6 + 9);
  if (uVar1 == 3) {
    if (param_2 != 3) {
      return 0xb;
    }
  }
  else if (uVar1 < 4) {
    if (uVar1 == 1) {
      if (param_2 != 1) {
        return 0xb;
      }
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 != 0) {
          return 0xb;
        }
        lVar7 = param_1[1];
        if ((param_2 != 3) && (param_2 != 4)) {
          if (param_2 == 1) {
            *(undefined4 *)(puVar6 + 9) = 1;
            goto LAB_71007a4294;
          }
          if (param_2 != 2) goto LAB_71007a4294;
        }
        *(uint *)(puVar6 + 9) = param_2;
        goto LAB_71007a4294;
      }
      if (param_2 != 2) {
        return 0xb;
      }
    }
  }
  else {
    if (uVar1 != 4) {
      uVar2 = 0xb;
      if (uVar1 == 5) {
        uVar2 = 1;
      }
      return (ulong)uVar2;
    }
    if (param_2 != 4) {
      return 0xb;
    }
  }
  lVar7 = param_1[1];
  if (puVar6[10] != lVar7) {
    return 0xb;
  }
LAB_71007a4294:
  local_10 = 0;
  lStack_8 = 0;
  uVar3 = (*(code *)puVar6[3])
                    (*puVar6,param_1[6],lVar5,&local_10,lVar7,lVar8,&lStack_8,param_1[4],param_2);
  lVar5 = param_1[1];
  uVar1 = (uint)uVar3;
  *param_1 = *param_1 + local_10;
  param_1[1] = lVar5 - local_10;
  param_1[2] = param_1[2] + local_10;
  param_1[3] = param_1[3] + lStack_8;
  lVar8 = param_1[7];
  param_1[4] = param_1[4] - lStack_8;
  param_1[5] = param_1[5] + lStack_8;
  *(long *)(lVar8 + 0x50) = lVar5 - local_10;
  if (uVar1 < 5) {
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        if (local_10 == 0 && lStack_8 == 0) {
          if (*(char *)(lVar8 + 0x5d) != '\0') {
            return 10;
          }
          *(undefined1 *)(lVar8 + 0x5d) = 1;
          return uVar3;
        }
      }
      else {
        uVar4 = 0;
        if (1 < *(int *)(lVar8 + 0x48) - 1U && *(int *)(lVar8 + 0x48) != 4) {
          uVar4 = 5;
        }
        *(undefined4 *)(lVar8 + 0x48) = uVar4;
      }
    }
  }
  else if (uVar1 != 6) {
    if (uVar1 != 0x20) {
      *(undefined4 *)(lVar8 + 0x48) = 6;
      return uVar3;
    }
    *(undefined1 *)(lVar8 + 0x5d) = 0;
    return 0;
  }
  *(undefined1 *)(lVar8 + 0x5d) = 0;
  return uVar3;
}



// ===== FUN_71007a4440 @ 71007a4440 (size=188) =====

void FUN_71007a4440(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *(long *)(param_1 + 0x30);
      if (puVar2[2] != 0) {
        if ((code *)puVar2[4] == (code *)0x0) {
          if ((lVar1 == 0) || (*(code **)(lVar1 + 8) == (code *)0x0)) {
            FUN_710081c200();
          }
          else {
            (**(code **)(lVar1 + 8))(*(undefined8 *)(lVar1 + 0x10),*puVar2);
          }
        }
        else {
          (*(code *)puVar2[4])(*puVar2,lVar1);
        }
        lVar1 = *(long *)(param_1 + 0x30);
        puVar2[8] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[1] = 0xffffffffffffffff;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2 = *(undefined8 **)(param_1 + 0x38);
      }
      if ((lVar1 == 0) || (*(code **)(lVar1 + 8) == (code *)0x0)) {
        FUN_710081c200(puVar2);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        (**(code **)(lVar1 + 8))(*(undefined8 *)(lVar1 + 0x10),puVar2);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    return;
  }
  return;
}



// ===== FUN_71007a4550 @ 71007a4550 (size=136) =====

int FUN_71007a4550(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_71007a4110();
  if (iVar1 == 0) {
    iVar1 = FUN_71007a8db0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),param_2,
                           &LAB_71007a4500,0);
    if (iVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      *(undefined1 *)(lVar2 + 0x58) = 1;
      *(undefined1 *)(lVar2 + 0x5b) = 1;
      return 0;
    }
    FUN_71007a4440(param_1);
  }
  return iVar1;
}



// ===== FUN_71007a45e0 @ 71007a45e0 (size=116) =====

long FUN_71007a45e0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x4000000000000001;
  param_1[1] = 0;
  lVar1 = 0;
  while( true ) {
    if (*param_1 == lVar2) {
      if ((code *)(&PTR_FUN_7100aec360)[lVar1 * 4] != (code *)0x0) {
        lVar1 = (*(code *)(&PTR_FUN_7100aec360)[lVar1 * 4])(param_1 + 1);
        return lVar1;
      }
      return (ulong)(param_4 != 0) << 3;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 9) break;
    lVar2 = *(long *)(&DAT_7100aec348 + lVar1 * 0x20);
  }
  return 8;
}



// ===== FUN_71007a4670 @ 71007a4670 (size=628) =====

void FUN_71007a4670(long param_1,long param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  iVar2 = *(int *)(param_2 + 0x14);
  uVar3 = *(uint *)(param_2 + 0x18);
  puVar7 = (undefined2 *)(param_1 + 0x600);
  uVar4 = (1 << (ulong)(*(uint *)(param_2 + 0x1c) & 0x1f)) - 1;
  do {
    puVar6 = puVar7 + -0x300;
    do {
      puVar5 = puVar6;
      *puVar5 = 0x400;
      puVar6 = puVar5 + 1;
    } while (puVar5 + 1 != puVar7);
    puVar7 = puVar5 + 0x301;
  } while ((undefined2 *)
           (param_1 + 0xc00 + (ulong)((1 << (ulong)(iVar2 + uVar3 & 0x1f)) - 1) * 0x600) != puVar7);
  *(int *)(param_1 + 0x6e90) = iVar2;
  *(uint *)(param_1 + 0x6e8c) = uVar4;
  *(int *)(param_1 + 0x6e94) = (1 << (ulong)(uVar3 & 0x1f)) + -1;
  puVar7 = (undefined2 *)(param_1 + 0x6002 + (ulong)uVar4 * 2);
  *(undefined8 *)(param_1 + 0x6e7c) = 0;
  *(undefined8 *)(param_1 + 0x6e84) = 0;
  *(undefined8 *)(param_1 + 0x6e6c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x6e74) = 5;
  puVar6 = (undefined2 *)(param_1 + 0x6180);
  do {
    puVar5 = puVar7 + (-1 - (ulong)uVar4);
    do {
      puVar1 = puVar5 + 1;
      *puVar5 = 0x400;
      puVar5[0xf0] = 0x400;
      puVar5 = puVar1;
    } while (puVar7 != puVar1);
    puVar5 = puVar6 + 1;
    *puVar6 = 0x400;
    puVar7 = puVar7 + 0x10;
    puVar6[0xc] = 0x400;
    puVar6[0x18] = 0x400;
    puVar6[0x24] = 0x400;
    puVar6 = puVar5;
  } while ((undefined2 *)(param_1 + 0x6198) != puVar5);
  puVar7 = (undefined2 *)(param_1 + 0x63e0);
  do {
    puVar6 = puVar7 + -0x40;
    do {
      puVar5 = puVar6;
      *puVar5 = 0x400;
      puVar6 = puVar5 + 1;
    } while (puVar5 + 1 != puVar7);
    puVar7 = puVar5 + 0x41;
  } while (puVar7 != (undefined2 *)(param_1 + 0x65e0));
  puVar7 = (undefined2 *)(param_1 + 0x6560);
  do {
    puVar6 = puVar7 + 1;
    *puVar7 = 0x400;
    puVar7 = puVar6;
  } while (puVar6 != (undefined2 *)(param_1 + 0x6644));
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = 0x400;
    puVar6 = puVar7;
  } while ((undefined2 *)(param_1 + 0x6664) != puVar7);
  *(undefined4 *)(param_1 + 0x6664) = 0x4000400;
  *(undefined4 *)(param_1 + 0x6a68) = 0x4000400;
  puVar7 = (undefined2 *)(param_1 + 0x6668);
  do {
    puVar6 = puVar7 + 8;
    *puVar7 = 0x400;
    puVar7[1] = 0x400;
    puVar7[2] = 0x400;
    puVar7[3] = 0x400;
    puVar7[4] = 0x400;
    puVar7[5] = 0x400;
    puVar7[6] = 0x400;
    puVar7[7] = 0x400;
    puVar7[0x80] = 0x400;
    puVar7[0x81] = 0x400;
    puVar7[0x82] = 0x400;
    puVar7[0x83] = 0x400;
    puVar7[0x84] = 0x400;
    puVar7[0x85] = 0x400;
    puVar7[0x86] = 0x400;
    puVar7[0x87] = 0x400;
    puVar7[0x202] = 0x400;
    puVar7[0x203] = 0x400;
    puVar7[0x204] = 0x400;
    puVar7[0x205] = 0x400;
    puVar7[0x206] = 0x400;
    puVar7[0x207] = 0x400;
    puVar7[0x208] = 0x400;
    puVar7[0x209] = 0x400;
    puVar7[0x282] = 0x400;
    puVar7[0x283] = 0x400;
    puVar7[0x284] = 0x400;
    puVar7[0x285] = 0x400;
    puVar7[0x286] = 0x400;
    puVar7[0x287] = 0x400;
    puVar7[0x288] = 0x400;
    puVar7[0x289] = 0x400;
    puVar7 = puVar6;
  } while (puVar6 != (undefined2 *)(param_1 + 0x6678 + (ulong)uVar4 * 0x10));
  puVar7 = (undefined2 *)(param_1 + 0x6868);
  do {
    puVar6 = puVar7 + 1;
    *puVar7 = 0x400;
    puVar7 = puVar6;
  } while (puVar6 != (undefined2 *)(param_1 + 0x6a68));
  puVar7 = (undefined2 *)(param_1 + 0x6c6c);
  do {
    puVar6 = puVar7 + 1;
    *puVar7 = 0x400;
    puVar7 = puVar6;
  } while ((undefined2 *)(param_1 + 0x6e6c) != puVar6);
  *(undefined4 *)(param_1 + 0x6ea0) = 1;
  *(undefined8 *)(param_1 + 0x6ea8) = 0;
  *(undefined8 *)(param_1 + 0x6eb0) = 0;
  *(undefined8 *)(param_1 + 0x6eb8) = 0;
  return;
}



// ===== FUN_71007a48f0 @ 71007a48f0 (size=12348) =====

int FUN_71007a48f0(long param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_7c;
  
  iVar16 = *(int *)(param_1 + 0x6e74);
  lVar32 = *param_4;
  if (iVar16 == 0) {
    uVar33 = *(uint *)(param_1 + 0x6e70);
  }
  else {
    do {
      while( true ) {
        if (param_5 == lVar32) {
          return 0;
        }
        bVar10 = *(byte *)(param_3 + lVar32);
        if (iVar16 != 5) break;
        if (bVar10 != 0) {
          return 9;
        }
        iVar29 = *(int *)(param_1 + 0x6e70);
        lVar32 = lVar32 + 1;
        iVar16 = 4;
        *param_4 = lVar32;
        *(int *)(param_1 + 0x6e70) = iVar29 << 8;
        *(undefined4 *)(param_1 + 0x6e74) = 4;
      }
      iVar29 = *(int *)(param_1 + 0x6e70);
      lVar32 = lVar32 + 1;
      iVar16 = iVar16 + -1;
      *param_4 = lVar32;
      uVar33 = (uint)bVar10 | iVar29 << 8;
      *(uint *)(param_1 + 0x6e70) = uVar33;
      *(int *)(param_1 + 0x6e74) = iVar16;
    } while (iVar16 != 0);
  }
  uVar7 = *(uint *)(param_1 + 0x6e8c);
  lVar5 = *param_2;
  uVar6 = param_2[1];
  uVar28 = param_2[2];
  uVar17 = param_2[3];
  uVar19 = (ulong)(uVar7 & (uint)uVar6);
  local_90 = *(uint *)(param_1 + 0x6e78);
  uVar23 = *(ulong *)(param_1 + 0x6e98);
  uVar34 = *(uint *)(param_1 + 0x6e6c);
  local_88 = *(uint *)(param_1 + 0x6e80);
  uVar25 = *(uint *)(param_1 + 0x6e7c);
  uVar21 = *(uint *)(param_1 + 0x6eb0);
  uVar35 = (ulong)uVar21;
  local_84 = *(uint *)(param_1 + 0x6e84);
  uVar26 = *(uint *)(param_1 + 0x6eb4);
  uVar31 = *(uint *)(param_1 + 0x6eb8);
  local_7c = *(uint *)(param_1 + 0x6e88);
  uVar24 = *(uint *)(param_1 + 0x6ebc);
  lVar30 = param_2[4];
  uVar8 = *(uint *)(param_1 + 0x6e90);
  lVar22 = *(long *)(param_1 + 0x6ea8);
  uVar9 = *(uint *)(param_1 + 0x6e94);
  uVar27 = uVar17;
  if ((uVar23 != 0xffffffffffffffff) && (uVar27 = uVar23 + uVar6, uVar17 - uVar6 <= uVar23)) {
    uVar27 = uVar17;
  }
  uVar17 = uVar6;
  switch(*(undefined4 *)(param_1 + 0x6ea0)) {
  case 0:
  case 1:
    do {
      if ((uVar23 != 0xffffffffffffffff) && (uVar27 == uVar17)) {
        uVar23 = *(ulong *)(param_1 + 0x6e98);
        goto switchD_71007a4a88_default;
      }
      if (uVar34 < 0x1000000) {
        if (param_5 == lVar32) {
          iVar16 = 0;
          uVar23 = *(ulong *)(param_1 + 0x6e98);
          *(undefined4 *)(param_1 + 0x6ea0) = 1;
          break;
        }
        pbVar1 = (byte *)(param_3 + lVar32);
        uVar34 = uVar34 << 8;
        lVar32 = lVar32 + 1;
        uVar33 = (uint)*pbVar1 | uVar33 << 8;
      }
      puVar2 = (ushort *)(param_1 + (uVar19 + (ulong)local_90 * 0x10) * 2 + 0x6000);
      uVar11 = *puVar2;
      uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
      if (uVar33 < uVar21) {
        lVar22 = lVar30;
        if (uVar17 != 0) {
          lVar22 = 0;
        }
        *puVar2 = uVar11 + (short)(0x800 - uVar11 >> 5);
        lVar22 = param_1 + (((ulong)(uVar9 & (uint)uVar17) << ((ulong)uVar8 & 0x3f)) +
                           (long)((int)(uint)*(byte *)(lVar5 + lVar22 + (uVar17 - 1)) >>
                                 (8 - uVar8 & 0x1f))) * 0x600;
        uVar34 = uVar21;
        if (local_90 < 7) {
          uVar35 = 1;
LAB_71007a4bac:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 2;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4c00:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 3;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4c54:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 4;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4ca8:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 5;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4cfc:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 6;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4d50:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 7;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4da4:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 8;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a4df8:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 9;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
            uVar34 = uVar34 - uVar12;
          }
        }
        else {
          lVar4 = lVar30;
          if (uVar25 < uVar17) {
            lVar4 = 0;
          }
          iVar16 = 0x101;
          uVar31 = 0x100;
          uVar35 = 1;
          uVar24 = (uint)*(byte *)(lVar5 + lVar4 + ((uVar17 - 1) - (ulong)uVar25)) << 1;
LAB_71007a4e98:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 10;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar21 + iVar16) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a4f04:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0xb;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a4f74:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0xc;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a4fe4:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0xd;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a5054:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0xe;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a50c4:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0xf;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a5134:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x10;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar12 = uVar12 + 1;
            uVar31 = uVar21;
          }
          uVar35 = (ulong)uVar12;
          uVar24 = uVar24 << 1;
          *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a51a4:
          uVar21 = uVar31 & uVar24;
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x11;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = (ulong)(uVar31 + (int)uVar35 + uVar21) * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar12 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar12;
          uVar13 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar13) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar13;
            uVar31 = uVar31 & (uVar21 ^ 0xffffffff);
          }
          else {
            uVar34 = uVar34 - uVar13;
            uVar33 = uVar33 - uVar13;
            uVar35 = (ulong)(uVar12 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
            uVar31 = uVar21;
          }
        }
        local_90 = *(uint *)(&DAT_71009cc9f8 + (ulong)local_90 * 4);
LAB_71007a4ad8:
        if (uVar27 == uVar17) {
          uVar23 = *(ulong *)(param_1 + 0x6e98);
          iVar16 = 0;
          *(undefined4 *)(param_1 + 0x6ea0) = 0x12;
          uVar17 = uVar27;
          break;
        }
        uVar18 = uVar17 + 1;
        *(char *)(lVar5 + uVar17) = (char)uVar35;
        if (uVar28 < uVar18) {
          uVar28 = uVar18;
        }
      }
      else {
        uVar34 = uVar34 - uVar21;
        uVar33 = uVar33 - uVar21;
        *puVar2 = uVar11 - (uVar11 >> 5);
LAB_71007a6110:
        if (uVar34 < 0x1000000) {
          if (param_5 == lVar32) {
            uVar23 = *(ulong *)(param_1 + 0x6e98);
            iVar16 = 0;
            *(undefined4 *)(param_1 + 0x6ea0) = 0x13;
            break;
          }
          pbVar1 = (byte *)(param_3 + lVar32);
          uVar34 = uVar34 << 8;
          lVar32 = lVar32 + 1;
          uVar33 = (uint)*pbVar1 | uVar33 << 8;
        }
        lVar4 = param_1 + (ulong)local_90 * 2;
        uVar11 = *(ushort *)(lVar4 + 0x6180);
        uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
        if (uVar33 < uVar21) {
          uVar35 = 1;
          *(ushort *)(lVar4 + 0x6180) = uVar11 + (short)(0x800 - uVar11 >> 5);
          local_7c = local_84;
          local_84 = local_88;
          uVar34 = uVar21;
          local_88 = uVar25;
          if (local_90 < 7) {
            local_90 = 7;
          }
          else {
            local_90 = 10;
          }
LAB_71007a618c:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x14;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          uVar11 = *(ushort *)(param_1 + 0x6664);
          uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar21) {
            *(ushort *)(param_1 + 0x6664) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar21;
LAB_71007a61dc:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x15;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
            uVar21 = (int)uVar35 * 2;
            uVar35 = (ulong)uVar21;
            uVar11 = *(ushort *)(lVar4 + 0x6668);
            uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar12) {
              *(ushort *)(lVar4 + 0x6668) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar12;
            }
            else {
              uVar34 = uVar34 - uVar12;
              uVar33 = uVar33 - uVar12;
              uVar35 = (ulong)(uVar21 + 1);
              *(ushort *)(lVar4 + 0x6668) = uVar11 - (uVar11 >> 5);
            }
LAB_71007a623c:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x16;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
            uVar21 = (int)uVar35 * 2;
            uVar35 = (ulong)uVar21;
            uVar11 = *(ushort *)(lVar4 + 0x6668);
            uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar12) {
              *(ushort *)(lVar4 + 0x6668) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar12;
            }
            else {
              uVar34 = uVar34 - uVar12;
              uVar33 = uVar33 - uVar12;
              uVar35 = (ulong)(uVar21 + 1);
              *(ushort *)(lVar4 + 0x6668) = uVar11 - (uVar11 >> 5);
            }
LAB_71007a5b4c:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x17;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar22 = param_1 + (uVar35 + uVar19 * 8) * 2;
            iVar16 = (int)uVar35 * 2;
            uVar11 = *(ushort *)(lVar22 + 0x6668);
            uVar24 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar24) {
              sVar14 = (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar24;
            }
            else {
              sVar14 = -(uVar11 >> 5);
              uVar34 = uVar34 - uVar24;
              uVar33 = uVar33 - uVar24;
              iVar16 = iVar16 + 1;
            }
            uVar24 = iVar16 - 6;
            *(ushort *)(lVar22 + 0x6668) = uVar11 + sVar14;
          }
          else {
            uVar34 = uVar34 - uVar21;
            uVar33 = uVar33 - uVar21;
            *(ushort *)(param_1 + 0x6664) = uVar11 - (uVar11 >> 5);
LAB_71007a5cdc:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x18;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            uVar11 = *(ushort *)(param_1 + 0x6666);
            uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar21) {
              *(ushort *)(param_1 + 0x6666) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar21;
LAB_71007a5d2c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x19;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar11 = *(ushort *)(lVar4 + 0x6768);
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6768) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6768) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5d8c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x1a;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar11 = *(ushort *)(lVar4 + 0x6768);
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6768) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6768) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5dec:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x1b;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar22 = param_1 + (uVar35 + uVar19 * 8) * 2;
              iVar16 = (int)uVar35 * 2;
              uVar11 = *(ushort *)(lVar22 + 0x6768);
              uVar24 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar24) {
                sVar14 = (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar24;
              }
              else {
                sVar14 = -(uVar11 >> 5);
                uVar34 = uVar34 - uVar24;
                uVar33 = uVar33 - uVar24;
                iVar16 = iVar16 + 1;
              }
              uVar24 = iVar16 + 2;
              *(ushort *)(lVar22 + 0x6768) = uVar11 + sVar14;
            }
            else {
              uVar34 = uVar34 - uVar21;
              uVar33 = uVar33 - uVar21;
              *(ushort *)(param_1 + 0x6666) = uVar11 - (uVar11 >> 5);
LAB_71007a66cc:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x1c;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a6724:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x1d;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a677c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x1e;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a6458:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x1f;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a64b0:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x20;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a6508:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x21;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a6560:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x22;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6868);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6868) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6868) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a65b8:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x23;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar22 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar22 + 0x6868);
              iVar16 = (int)uVar35 * 2;
              uVar24 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar24) {
                sVar14 = (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar24;
              }
              else {
                sVar14 = -(uVar11 >> 5);
                uVar34 = uVar34 - uVar24;
                uVar33 = uVar33 - uVar24;
                iVar16 = iVar16 + 1;
              }
              uVar24 = iVar16 - 0xee;
              *(ushort *)(lVar22 + 0x6868) = uVar11 + sVar14;
            }
          }
          uVar21 = uVar24;
          if (5 < uVar24) {
            uVar21 = 5;
          }
          uVar35 = 1;
          lVar22 = param_1 + (ulong)(uVar21 - 2) * 0x80 + 0x6360;
LAB_71007a5bd8:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x24;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a5c2c:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x25;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a5c80:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x26;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a5218:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x27;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a526c:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x28;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = uVar35 * 2;
          uVar11 = *(ushort *)(lVar22 + lVar4);
          uVar21 = (int)uVar35 * 2;
          uVar35 = (ulong)uVar21;
          uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar12) {
            *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar12;
          }
          else {
            uVar34 = uVar34 - uVar12;
            uVar33 = uVar33 - uVar12;
            uVar35 = (ulong)(uVar21 + 1);
            *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
          }
LAB_71007a52c0:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x29;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          uVar11 = *(ushort *)(lVar22 + uVar35 * 2);
          iVar16 = (int)uVar35 * 2;
          uVar25 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar25) {
            sVar14 = (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar25;
          }
          else {
            sVar14 = -(uVar11 >> 5);
            uVar34 = uVar34 - uVar25;
            uVar33 = uVar33 - uVar25;
            iVar16 = iVar16 + 1;
          }
          uVar25 = iVar16 - 0x40;
          *(ushort *)(lVar22 + uVar35 * 2) = uVar11 + sVar14;
          if (uVar25 < 4) {
            uVar35 = (ulong)uVar25;
          }
          else {
            uVar12 = (uVar25 & 1) + 2;
            if (uVar25 < 0xe) {
              uVar26 = (uVar25 >> 1) - 1;
              uVar31 = 0;
              uVar19 = (ulong)uVar25;
              uVar25 = uVar12 << (ulong)(uVar26 & 0x1f);
              uVar35 = 1;
              lVar22 = param_1 + ((uVar12 << (ulong)(uVar26 & 0x1f)) - uVar19) * 2 + 0x655e;
LAB_71007a5360:
              if (uVar26 == 3) {
LAB_71007a6b24:
                if (uVar34 < 0x1000000) {
                  if (param_5 == lVar32) {
                    uVar23 = *(ulong *)(param_1 + 0x6e98);
                    iVar16 = 0;
                    uVar26 = 3;
                    *(undefined4 *)(param_1 + 0x6ea0) = 0x2a;
                    break;
                  }
                  pbVar1 = (byte *)(param_3 + lVar32);
                  uVar34 = uVar34 << 8;
                  lVar32 = lVar32 + 1;
                  uVar33 = (uint)*pbVar1 | uVar33 << 8;
                }
                lVar4 = uVar35 * 2;
                uVar11 = *(ushort *)(lVar22 + lVar4);
                uVar21 = (int)uVar35 * 2;
                uVar26 = (uVar34 >> 0xb) * (uint)uVar11;
                if (uVar33 < uVar26) {
                  sVar14 = (short)(0x800 - uVar11 >> 5);
                  uVar34 = uVar26;
                }
                else {
                  sVar14 = -(uVar11 >> 5);
                  uVar34 = uVar34 - uVar26;
                  uVar33 = uVar33 - uVar26;
                  uVar21 = uVar21 + 1;
                  uVar25 = uVar25 + (1 << (ulong)(uVar31 & 0x1f));
                }
                uVar35 = (ulong)uVar21;
                uVar31 = uVar31 + 1;
                *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
LAB_71007a537c:
                if (uVar34 < 0x1000000) {
                  if (param_5 == lVar32) {
                    uVar23 = *(ulong *)(param_1 + 0x6e98);
                    iVar16 = 0;
                    uVar26 = 2;
                    *(undefined4 *)(param_1 + 0x6ea0) = 0x2a;
                    break;
                  }
                  pbVar1 = (byte *)(param_3 + lVar32);
                  uVar34 = uVar34 << 8;
                  lVar32 = lVar32 + 1;
                  uVar33 = (uint)*pbVar1 | uVar33 << 8;
                }
                lVar4 = uVar35 * 2;
                uVar11 = *(ushort *)(lVar22 + lVar4);
                uVar21 = (int)uVar35 * 2;
                uVar26 = (uVar34 >> 0xb) * (uint)uVar11;
                if (uVar33 < uVar26) {
                  sVar14 = (short)(0x800 - uVar11 >> 5);
                  uVar34 = uVar26;
                }
                else {
                  sVar14 = -(uVar11 >> 5);
                  uVar34 = uVar34 - uVar26;
                  uVar33 = uVar33 - uVar26;
                  uVar21 = uVar21 + 1;
                  uVar25 = uVar25 + (1 << (ulong)(uVar31 & 0x1f));
                }
                uVar35 = (ulong)uVar21;
                uVar31 = uVar31 + 1;
                *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
              }
              else {
                if (3 < uVar26) {
                  if (uVar26 != 4) {
                    if (uVar26 != 5) goto LAB_71007a5434;
                    if (uVar34 < 0x1000000) {
                      if (param_5 == lVar32) {
                        uVar23 = *(ulong *)(param_1 + 0x6e98);
                        iVar16 = 0;
                        *(undefined4 *)(param_1 + 0x6ea0) = 0x2a;
                        break;
                      }
                      pbVar1 = (byte *)(param_3 + lVar32);
                      uVar34 = uVar34 << 8;
                      lVar32 = lVar32 + 1;
                      uVar33 = (uint)*pbVar1 | uVar33 << 8;
                    }
                    lVar4 = uVar35 * 2;
                    uVar11 = *(ushort *)(lVar22 + lVar4);
                    uVar21 = (int)uVar35 * 2;
                    uVar26 = (uVar34 >> 0xb) * (uint)uVar11;
                    if (uVar33 < uVar26) {
                      sVar14 = (short)(0x800 - uVar11 >> 5);
                      uVar34 = uVar26;
                    }
                    else {
                      sVar14 = -(uVar11 >> 5);
                      uVar34 = uVar34 - uVar26;
                      uVar33 = uVar33 - uVar26;
                      uVar21 = uVar21 + 1;
                      uVar25 = uVar25 + 1;
                    }
                    uVar35 = (ulong)uVar21;
                    uVar31 = uVar31 + 1;
                    *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
                  }
                  if (uVar34 < 0x1000000) {
                    if (param_5 == lVar32) {
                      uVar23 = *(ulong *)(param_1 + 0x6e98);
                      iVar16 = 0;
                      uVar26 = 4;
                      *(undefined4 *)(param_1 + 0x6ea0) = 0x2a;
                      break;
                    }
                    pbVar1 = (byte *)(param_3 + lVar32);
                    uVar34 = uVar34 << 8;
                    lVar32 = lVar32 + 1;
                    uVar33 = (uint)*pbVar1 | uVar33 << 8;
                  }
                  lVar4 = uVar35 * 2;
                  uVar11 = *(ushort *)(lVar22 + lVar4);
                  uVar21 = (int)uVar35 * 2;
                  uVar26 = (uVar34 >> 0xb) * (uint)uVar11;
                  if (uVar33 < uVar26) {
                    sVar14 = (short)(0x800 - uVar11 >> 5);
                    uVar34 = uVar26;
                  }
                  else {
                    sVar14 = -(uVar11 >> 5);
                    uVar34 = uVar34 - uVar26;
                    uVar33 = uVar33 - uVar26;
                    uVar21 = uVar21 + 1;
                    uVar25 = uVar25 + (1 << (ulong)(uVar31 & 0x1f));
                  }
                  uVar35 = (ulong)uVar21;
                  uVar31 = uVar31 + 1;
                  *(ushort *)(lVar22 + lVar4) = uVar11 + sVar14;
                  goto LAB_71007a6b24;
                }
                if (uVar26 != 1) {
                  if (uVar26 != 2) goto LAB_71007a5434;
                  goto LAB_71007a537c;
                }
              }
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  uVar26 = 1;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x2a;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = uVar35 * 2;
              uVar11 = *(ushort *)(lVar22 + lVar4);
              uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar21) {
                uVar26 = 1;
                *(ushort *)(lVar22 + lVar4) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar21;
              }
              else {
                uVar26 = 1;
                uVar34 = uVar34 - uVar21;
                uVar33 = uVar33 - uVar21;
                uVar25 = (1 << (ulong)(uVar31 & 0x1f)) + uVar25;
                *(ushort *)(lVar22 + lVar4) = uVar11 - (uVar11 >> 5);
              }
            }
            else {
              uVar26 = (uVar25 >> 1) - 5;
              uVar21 = uVar25;
LAB_71007a5598:
              do {
                uVar25 = uVar12;
                if (uVar34 < 0x1000000) {
                  if (param_5 == lVar32) {
                    uVar23 = *(ulong *)(param_1 + 0x6e98);
                    uVar35 = (ulong)uVar21;
                    *(undefined4 *)(param_1 + 0x6ea0) = 0x2b;
                    iVar16 = 0;
                    goto LAB_71007a54b8;
                  }
                  pbVar1 = (byte *)(param_3 + lVar32);
                  uVar34 = uVar34 << 8;
                  lVar32 = lVar32 + 1;
                  uVar33 = (uint)*pbVar1 | uVar33 << 8;
                }
                uVar34 = uVar34 >> 1;
                uVar26 = uVar26 - 1;
                uVar12 = (int)(uVar33 - uVar34) >> 0x1f;
                uVar33 = (uVar34 & uVar12) + (uVar33 - uVar34);
                uVar12 = uVar12 + uVar25 * 2 + 1;
              } while (uVar26 != 0);
              uVar25 = uVar12 * 0x10;
              uVar35 = 1;
LAB_71007a55e8:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x2c;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6644);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6644) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                uVar25 = uVar25 + 1;
                *(ushort *)(lVar4 + 0x6644) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5640:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x2d;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6644);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6644) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                uVar25 = uVar25 + 2;
                *(ushort *)(lVar4 + 0x6644) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5698:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x2e;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6644);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6644) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                uVar25 = uVar25 + 4;
                *(ushort *)(lVar4 + 0x6644) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a56f0:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x2f;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6644);
              uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar21) {
                sVar14 = (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar21;
              }
              else {
                sVar14 = -(uVar11 >> 5);
                uVar34 = uVar34 - uVar21;
                uVar33 = uVar33 - uVar21;
                uVar25 = uVar25 + 8;
              }
              *(ushort *)(lVar4 + 0x6644) = uVar11 + sVar14;
              if (uVar25 == 0xffffffff) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 9;
                if (uVar23 == 0xffffffffffffffff) goto LAB_71007a5764;
                break;
              }
            }
          }
LAB_71007a5434:
          uVar19 = (ulong)uVar25;
          if (uVar28 <= uVar19) {
LAB_71007a6f30:
            iVar16 = 9;
            uVar23 = *(ulong *)(param_1 + 0x6e98);
            break;
          }
        }
        else {
          uVar34 = uVar34 - uVar21;
          uVar33 = uVar33 - uVar21;
          *(ushort *)(lVar4 + 0x6180) = uVar11 - (uVar11 >> 5);
          if (uVar28 == 0) goto LAB_71007a6f30;
LAB_71007a5ad4:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x31;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          lVar4 = param_1 + (ulong)local_90 * 2;
          uVar11 = *(ushort *)(lVar4 + 0x6198);
          uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar21) {
            *(ushort *)(lVar4 + 0x6198) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar21;
LAB_71007a57bc:
            uVar21 = uVar34;
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x33;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar21 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (uVar19 + (ulong)local_90 * 0x10) * 2;
            uVar11 = *(ushort *)(lVar4 + 0x61e0);
            uVar34 = (uVar21 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar34) {
              *(ushort *)(lVar4 + 0x61e0) = uVar11 + (short)(0x800 - uVar11 >> 5);
              if (local_90 < 7) {
                local_90 = 9;
              }
              else {
                local_90 = 0xb;
              }
LAB_71007a582c:
              lVar4 = lVar30;
              if (uVar25 < uVar17) {
                lVar4 = 0;
              }
              if (uVar27 != uVar17) {
                uVar18 = uVar17 + 1;
                *(undefined1 *)(lVar5 + uVar17) =
                     *(undefined1 *)(lVar5 + (uVar17 - 1) + (lVar4 - (ulong)uVar25));
                if (uVar28 < uVar18) {
                  uVar28 = uVar18;
                }
                goto LAB_71007a4af4;
              }
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x32;
              uVar17 = uVar27;
              break;
            }
            uVar33 = uVar33 - uVar34;
            *(ushort *)(lVar4 + 0x61e0) = uVar11 - (uVar11 >> 5);
            uVar34 = uVar21 - uVar34;
            uVar12 = uVar25;
          }
          else {
            uVar34 = uVar34 - uVar21;
            uVar33 = uVar33 - uVar21;
            *(ushort *)(lVar4 + 0x6198) = uVar11 - (uVar11 >> 5);
LAB_71007a5868:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x34;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (ulong)local_90 * 2;
            uVar11 = *(ushort *)(lVar4 + 0x61b0);
            uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar21) {
              *(ushort *)(lVar4 + 0x61b0) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar21;
              uVar12 = local_88;
              local_88 = uVar25;
            }
            else {
              uVar34 = uVar34 - uVar21;
              uVar33 = uVar33 - uVar21;
              *(ushort *)(lVar4 + 0x61b0) = uVar11 - (uVar11 >> 5);
LAB_71007a5a68:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x35;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + (ulong)local_90 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x61c8);
              uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar21) {
                uVar13 = local_88;
                *(ushort *)(lVar4 + 0x61c8) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar21;
                uVar12 = local_84;
                local_88 = uVar25;
                local_84 = uVar13;
              }
              else {
                uVar34 = uVar34 - uVar21;
                uVar33 = uVar33 - uVar21;
                uVar21 = local_84;
                *(ushort *)(lVar4 + 0x61c8) = uVar11 - (uVar11 >> 5);
                local_84 = local_88;
                uVar12 = local_7c;
                local_88 = uVar25;
                local_7c = uVar21;
              }
            }
          }
          uVar25 = uVar12;
          uVar35 = 1;
          if (local_90 < 7) {
            local_90 = 8;
          }
          else {
            local_90 = 0xb;
          }
LAB_71007a58e4:
          if (uVar34 < 0x1000000) {
            if (param_5 == lVar32) {
              uVar23 = *(ulong *)(param_1 + 0x6e98);
              iVar16 = 0;
              *(undefined4 *)(param_1 + 0x6ea0) = 0x36;
              break;
            }
            pbVar1 = (byte *)(param_3 + lVar32);
            uVar34 = uVar34 << 8;
            lVar32 = lVar32 + 1;
            uVar33 = (uint)*pbVar1 | uVar33 << 8;
          }
          uVar11 = *(ushort *)(param_1 + 0x6a68);
          uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
          if (uVar33 < uVar21) {
            *(ushort *)(param_1 + 0x6a68) = uVar11 + (short)(0x800 - uVar11 >> 5);
            uVar34 = uVar21;
LAB_71007a5934:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x37;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
            uVar21 = (int)uVar35 * 2;
            uVar35 = (ulong)uVar21;
            uVar11 = *(ushort *)(lVar4 + 0x6a6c);
            uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar12) {
              *(ushort *)(lVar4 + 0x6a6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar12;
            }
            else {
              uVar34 = uVar34 - uVar12;
              uVar33 = uVar33 - uVar12;
              uVar35 = (ulong)(uVar21 + 1);
              *(ushort *)(lVar4 + 0x6a6c) = uVar11 - (uVar11 >> 5);
            }
LAB_71007a5994:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x38;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
            uVar21 = (int)uVar35 * 2;
            uVar35 = (ulong)uVar21;
            uVar11 = *(ushort *)(lVar4 + 0x6a6c);
            uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar12) {
              *(ushort *)(lVar4 + 0x6a6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar12;
            }
            else {
              uVar34 = uVar34 - uVar12;
              uVar33 = uVar33 - uVar12;
              uVar35 = (ulong)(uVar21 + 1);
              *(ushort *)(lVar4 + 0x6a6c) = uVar11 - (uVar11 >> 5);
            }
LAB_71007a59f4:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x39;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
            uVar24 = (int)uVar35 * 2;
            uVar11 = *(ushort *)(lVar4 + 0x6a6c);
            uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar21) {
              sVar14 = (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar21;
            }
            else {
              sVar14 = -(uVar11 >> 5);
              uVar34 = uVar34 - uVar21;
              uVar33 = uVar33 - uVar21;
              uVar24 = uVar24 + 1;
            }
            uVar35 = (ulong)uVar24;
            uVar24 = uVar24 - 6;
            *(ushort *)(lVar4 + 0x6a6c) = uVar11 + sVar14;
            uVar19 = (ulong)uVar25;
          }
          else {
            uVar34 = uVar34 - uVar21;
            uVar33 = uVar33 - uVar21;
            *(ushort *)(param_1 + 0x6a68) = uVar11 - (uVar11 >> 5);
LAB_71007a6664:
            if (uVar34 < 0x1000000) {
              if (param_5 == lVar32) {
                uVar23 = *(ulong *)(param_1 + 0x6e98);
                iVar16 = 0;
                *(undefined4 *)(param_1 + 0x6ea0) = 0x3a;
                break;
              }
              pbVar1 = (byte *)(param_3 + lVar32);
              uVar34 = uVar34 << 8;
              lVar32 = lVar32 + 1;
              uVar33 = (uint)*pbVar1 | uVar33 << 8;
            }
            uVar11 = *(ushort *)(param_1 + 0x6a6a);
            uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
            if (uVar33 < uVar21) {
              *(ushort *)(param_1 + 0x6a6a) = uVar11 + (short)(0x800 - uVar11 >> 5);
              uVar34 = uVar21;
LAB_71007a62ac:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x3b;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar11 = *(ushort *)(lVar4 + 0x6b6c);
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6b6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6b6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a630c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x3c;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar11 = *(ushort *)(lVar4 + 0x6b6c);
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6b6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6b6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a636c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x3d;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + (uVar35 + uVar19 * 8) * 2;
              uVar24 = (int)uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6b6c);
              uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar21) {
                sVar14 = (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar21;
              }
              else {
                sVar14 = -(uVar11 >> 5);
                uVar34 = uVar34 - uVar21;
                uVar33 = uVar33 - uVar21;
                uVar24 = uVar24 + 1;
              }
              uVar35 = (ulong)uVar24;
              uVar24 = uVar24 + 2;
              *(ushort *)(lVar4 + 0x6b6c) = uVar11 + sVar14;
              uVar19 = (ulong)uVar25;
            }
            else {
              uVar34 = uVar34 - uVar21;
              uVar33 = uVar33 - uVar21;
              *(ushort *)(param_1 + 0x6a6a) = uVar11 - (uVar11 >> 5);
LAB_71007a63f0:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x3e;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5e64:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x3f;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5ebc:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x40;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5f14:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x41;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5f6c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x42;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a5fc4:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x43;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a601c:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x44;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar21 = (int)uVar35 * 2;
              uVar35 = (ulong)uVar21;
              uVar12 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar12) {
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 + (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar12;
              }
              else {
                uVar34 = uVar34 - uVar12;
                uVar33 = uVar33 - uVar12;
                uVar35 = (ulong)(uVar21 + 1);
                *(ushort *)(lVar4 + 0x6c6c) = uVar11 - (uVar11 >> 5);
              }
LAB_71007a6074:
              if (uVar34 < 0x1000000) {
                if (param_5 == lVar32) {
                  uVar23 = *(ulong *)(param_1 + 0x6e98);
                  iVar16 = 0;
                  *(undefined4 *)(param_1 + 0x6ea0) = 0x45;
                  break;
                }
                pbVar1 = (byte *)(param_3 + lVar32);
                uVar34 = uVar34 << 8;
                lVar32 = lVar32 + 1;
                uVar33 = (uint)*pbVar1 | uVar33 << 8;
              }
              lVar4 = param_1 + uVar35 * 2;
              uVar11 = *(ushort *)(lVar4 + 0x6c6c);
              uVar24 = (int)uVar35 * 2;
              uVar21 = (uVar34 >> 0xb) * (uint)uVar11;
              if (uVar33 < uVar21) {
                sVar14 = (short)(0x800 - uVar11 >> 5);
                uVar34 = uVar21;
              }
              else {
                sVar14 = -(uVar11 >> 5);
                uVar34 = uVar34 - uVar21;
                uVar33 = uVar33 - uVar21;
                uVar24 = uVar24 + 1;
              }
              uVar35 = (ulong)uVar24;
              uVar24 = uVar24 - 0xee;
              *(ushort *)(lVar4 + 0x6c6c) = uVar11 + sVar14;
              uVar19 = (ulong)uVar25;
            }
          }
        }
LAB_71007a5440:
        uVar18 = uVar27 - uVar17;
        if ((ulong)uVar24 < uVar27 - uVar17) {
          uVar18 = (ulong)uVar24;
        }
        uVar21 = (uint)uVar18;
        uVar24 = uVar24 - uVar21;
        if (uVar25 < uVar21) {
          uVar18 = uVar17 + 1 + (ulong)(uVar21 - 1);
          uVar15 = uVar17 + 1;
          while( true ) {
            uVar20 = uVar15;
            lVar4 = lVar30;
            if (uVar19 < uVar17) {
              lVar4 = 0;
            }
            *(undefined1 *)(lVar5 + uVar17) =
                 *(undefined1 *)(lVar5 + lVar4 + (uVar17 - uVar19) + -1);
            if (uVar18 == uVar20) break;
            uVar15 = uVar20 + 1;
            uVar17 = uVar20;
          }
        }
        else {
          lVar4 = lVar5 + uVar17;
          if (uVar19 < uVar17) {
            FUN_710080f900(lVar4,lVar5 + ((uVar17 - 1) - uVar19),uVar18);
          }
          else {
            iVar29 = (int)lVar30;
            iVar16 = iVar29 + -1 + (int)uVar17;
            uVar12 = (uVar25 + iVar29) - iVar16;
            lVar3 = lVar5 + (ulong)(iVar16 - uVar25);
            if (uVar12 < uVar21) {
              FUN_710080f900(lVar4,lVar3);
              lVar4 = uVar17 + uVar12;
              FUN_710080f900(lVar5 + lVar4,lVar5);
              uVar18 = lVar4 + (ulong)(((iVar16 - uVar25) + uVar21) - iVar29);
              goto LAB_71007a5498;
            }
            FUN_710080f900(lVar4,lVar3,uVar18);
          }
          uVar18 = uVar17 + uVar18;
        }
LAB_71007a5498:
        if (uVar28 < uVar18) {
          uVar28 = uVar18;
        }
        if (uVar24 != 0) goto code_r0x0071007a54a4;
      }
LAB_71007a4af4:
      uVar19 = (ulong)(uVar7 & (uint)uVar18);
      uVar17 = uVar18;
    } while( true );
  case 2:
    goto LAB_71007a4bac;
  case 3:
    goto LAB_71007a4c00;
  case 4:
    goto LAB_71007a4c54;
  case 5:
    goto LAB_71007a4ca8;
  case 6:
    goto LAB_71007a4cfc;
  case 7:
    goto LAB_71007a4d50;
  case 8:
    goto LAB_71007a4da4;
  case 9:
    goto LAB_71007a4df8;
  case 10:
    iVar16 = uVar21 + uVar31;
    goto LAB_71007a4e98;
  case 0xb:
    goto LAB_71007a4f04;
  case 0xc:
    goto LAB_71007a4f74;
  case 0xd:
    goto LAB_71007a4fe4;
  case 0xe:
    goto LAB_71007a5054;
  case 0xf:
    goto LAB_71007a50c4;
  case 0x10:
    goto LAB_71007a5134;
  case 0x11:
    goto LAB_71007a51a4;
  case 0x12:
    goto LAB_71007a4ad8;
  case 0x13:
    goto LAB_71007a6110;
  case 0x14:
    goto LAB_71007a618c;
  case 0x15:
    goto LAB_71007a61dc;
  case 0x16:
    goto LAB_71007a623c;
  case 0x17:
    goto LAB_71007a5b4c;
  case 0x18:
    goto LAB_71007a5cdc;
  case 0x19:
    goto LAB_71007a5d2c;
  case 0x1a:
    goto LAB_71007a5d8c;
  case 0x1b:
    goto LAB_71007a5dec;
  case 0x1c:
    goto LAB_71007a66cc;
  case 0x1d:
    goto LAB_71007a6724;
  case 0x1e:
    goto LAB_71007a677c;
  case 0x1f:
    goto LAB_71007a6458;
  case 0x20:
    goto LAB_71007a64b0;
  case 0x21:
    goto LAB_71007a6508;
  case 0x22:
    goto LAB_71007a6560;
  case 0x23:
    goto LAB_71007a65b8;
  case 0x24:
    goto LAB_71007a5bd8;
  case 0x25:
    goto LAB_71007a5c2c;
  case 0x26:
    goto LAB_71007a5c80;
  case 0x27:
    goto LAB_71007a5218;
  case 0x28:
    goto LAB_71007a526c;
  case 0x29:
    goto LAB_71007a52c0;
  case 0x2a:
    goto LAB_71007a5360;
  case 0x2b:
    uVar12 = uVar25;
    goto LAB_71007a5598;
  case 0x2c:
    goto LAB_71007a55e8;
  case 0x2d:
    goto LAB_71007a5640;
  case 0x2e:
    goto LAB_71007a5698;
  case 0x2f:
    goto LAB_71007a56f0;
  case 0x30:
LAB_71007a5764:
    iVar16 = 1;
    if (uVar34 < 0x1000000) {
      if (param_5 == lVar32) {
        iVar16 = 0;
        *(undefined4 *)(param_1 + 0x6ea0) = 0x30;
      }
      else {
        pbVar1 = (byte *)(param_3 + lVar32);
        uVar34 = uVar34 << 8;
        lVar32 = lVar32 + 1;
        uVar33 = (uint)*pbVar1 | uVar33 << 8;
      }
    }
    break;
  case 0x31:
    goto LAB_71007a5ad4;
  case 0x32:
    goto LAB_71007a582c;
  case 0x33:
    goto LAB_71007a57bc;
  case 0x34:
    goto LAB_71007a5868;
  case 0x35:
    goto LAB_71007a5a68;
  case 0x36:
    goto LAB_71007a58e4;
  case 0x37:
    goto LAB_71007a5934;
  case 0x38:
    goto LAB_71007a5994;
  case 0x39:
    goto LAB_71007a59f4;
  case 0x3a:
    goto LAB_71007a6664;
  case 0x3b:
    goto LAB_71007a62ac;
  case 0x3c:
    goto LAB_71007a630c;
  case 0x3d:
    goto LAB_71007a636c;
  case 0x3e:
    goto LAB_71007a63f0;
  case 0x3f:
    goto LAB_71007a5e64;
  case 0x40:
    goto LAB_71007a5ebc;
  case 0x41:
    goto LAB_71007a5f14;
  case 0x42:
    goto LAB_71007a5f6c;
  case 0x43:
    goto LAB_71007a5fc4;
  case 0x44:
    goto LAB_71007a601c;
  case 0x45:
    goto LAB_71007a6074;
  case 0x46:
    uVar19 = (ulong)uVar25;
    goto LAB_71007a5440;
  default:
switchD_71007a4a88_default:
    if (uVar34 < 0x1000000) {
      if (param_5 == lVar32) {
        iVar16 = 0;
        *(undefined4 *)(param_1 + 0x6ea0) = 0;
        break;
      }
      pbVar1 = (byte *)(param_3 + lVar32);
      uVar34 = uVar34 << 8;
      lVar32 = lVar32 + 1;
      uVar33 = (uint)*pbVar1 | uVar33 << 8;
    }
    iVar16 = 0;
    *(undefined4 *)(param_1 + 0x6ea0) = 1;
  }
LAB_71007a54b8:
  *(uint *)(param_1 + 0x6e6c) = uVar34;
  *(uint *)(param_1 + 0x6e70) = uVar33;
  *(undefined4 *)(param_1 + 0x6e74) = 0;
  *(uint *)(param_1 + 0x6e7c) = uVar25;
  *(uint *)(param_1 + 0x6e78) = local_90;
  *param_4 = lVar32;
  param_2[1] = uVar17;
  param_2[2] = uVar28;
  *(uint *)(param_1 + 0x6e80) = local_88;
  *(uint *)(param_1 + 0x6e84) = local_84;
  *(uint *)(param_1 + 0x6e88) = local_7c;
  *(long *)(param_1 + 0x6ea8) = lVar22;
  *(int *)(param_1 + 0x6eb0) = (int)uVar35;
  *(uint *)(param_1 + 0x6eb4) = uVar26;
  *(uint *)(param_1 + 0x6eb8) = uVar31;
  *(uint *)(param_1 + 0x6ebc) = uVar24;
  if ((uVar23 == 0xffffffffffffffff) ||
     (lVar32 = (uVar6 + uVar23) - uVar17, *(long *)(param_1 + 0x6e98) = lVar32,
     lVar32 != 0 || iVar16 != 0)) {
    if (iVar16 != 1) {
      return iVar16;
    }
  }
  else {
    if (*(int *)(param_1 + 0x6ea0) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x6ea0) != 1) {
      return 9;
    }
  }
  iVar16 = 9;
  if (uVar33 == 0) {
    iVar16 = 1;
  }
  *(undefined4 *)(param_1 + 0x6e6c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x6e70) = 0x500000000;
  return iVar16;
code_r0x0071007a54a4:
  iVar16 = 0;
  uVar23 = *(ulong *)(param_1 + 0x6e98);
  *(undefined4 *)(param_1 + 0x6ea0) = 0x46;
  uVar17 = uVar18;
  goto LAB_71007a54b8;
}



// ===== FUN_71007a7930 @ 71007a7930 (size=252) =====

undefined8 FUN_71007a7930(long *param_1,undefined8 param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (4 < param_3[5]) {
    return 0xb;
  }
  if (((param_3[6] < 5) && (param_3[5] + param_3[6] < 5)) && (param_3[7] < 5)) {
    if (*param_1 == 0) {
      lVar3 = FUN_71007a3ec0(0x6ec0);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return 5;
      }
      param_1[1] = (long)FUN_71007a48f0;
      param_1[2] = (long)FUN_71007a4670;
      param_1[3] = (long)&LAB_71007a4660;
    }
    uVar1 = *param_3;
    uVar2 = param_3[4];
    param_4[1] = *(ulong *)(param_3 + 2);
    lVar3 = *param_1;
    *param_4 = (ulong)uVar1;
    param_4[2] = (ulong)uVar2;
    FUN_71007a4670(lVar3,param_3);
    *(undefined8 *)(lVar3 + 0x6e98) = 0xffffffffffffffff;
    return 0;
  }
  return 0xb;
}



// ===== FUN_71007a7a30 @ 71007a7a30 (size=136) =====

undefined8 FUN_71007a7a30(long *param_1,undefined8 param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    lVar2 = FUN_71007a3ec0(0x6ec0);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 5;
    }
    param_1[1] = (long)FUN_71007a48f0;
    param_1[2] = (long)FUN_71007a4670;
    param_1[3] = (long)&LAB_71007a4660;
  }
  uVar1 = *param_3;
  uVar3 = *(ulong *)(param_3 + 2);
  param_4[2] = (ulong)param_3[4];
  *param_4 = (ulong)uVar1;
  param_4[1] = uVar3;
  return 0;
}



// ===== FUN_71007a7ad0 @ 71007a7ad0 (size=116) =====

bool FUN_71007a7ad0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 0xe1) {
    uVar1 = param_2 % 0x2d;
    *(uint *)(param_1 + 0x18) = uVar1 / 9;
    *(uint *)(param_1 + 0x1c) = param_2 / 0x2d;
    iVar2 = uVar1 - (uVar1 / 9 + (uVar1 / 9) * 8);
    *(int *)(param_1 + 0x14) = iVar2;
    return 4 < uVar1 / 9 + iVar2;
  }
  return true;
}



// ===== FUN_71007a7b50 @ 71007a7b50 (size=32) =====

long FUN_71007a7b50(undefined4 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_71007a94c0(*param_1);
  return lVar1 + 0x6ec0;
}



// ===== FUN_71007a7bb8 @ 71007a7bb8 (size=32) =====

long FUN_71007a7bb8(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_71007a94c0(*param_2);
  return lVar1 + 0x6ec0;
}



// ===== FUN_71007a7be0 @ 71007a7be0 (size=244) =====

undefined8 FUN_71007a7be0(undefined8 *param_1,undefined8 param_2,byte *param_3,long param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_4 != 5) {
    return 8;
  }
  puVar4 = (undefined4 *)FUN_71007a3ec0(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    return 5;
  }
  bVar2 = *param_3;
  if (bVar2 < 0xe1) {
    iVar5 = (int)((ulong)bVar2 * 0x6c16c16d >> 0x20);
    uVar6 = iVar5 + ((uint)bVar2 - iVar5 >> 1);
    puVar4[7] = uVar6 >> 5 & 0xff;
    uVar6 = (uint)bVar2 + (uVar6 >> 5) * -0x2d & 0xff;
    uVar3 = uVar6 % 9;
    uVar6 = uVar6 / 9;
    puVar4[5] = uVar3;
    puVar4[6] = uVar6;
    if (uVar6 + uVar3 < 5) {
      uVar1 = *(undefined4 *)(param_3 + 1);
      *param_1 = puVar4;
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4[4] = 0;
      *puVar4 = uVar1;
      return 0;
    }
  }
  FUN_71007a3ef0(puVar4,param_2);
  return 8;
}



// ===== FUN_71007a7ce0 @ 71007a7ce0 (size=172) =====

undefined8 FUN_71007a7ce0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  
  puVar4 = (undefined4 *)*param_1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_71007a3ec0(0xb8);
    if (puVar4 == (undefined4 *)0x0) {
      return 5;
    }
    puVar2 = (undefined8 *)(puVar4 + 2);
    *puVar2 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *param_1 = puVar4;
    param_1[1] = FUN_71007a7dc0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    param_1[4] = FUN_71007a7d90;
  }
  else {
    puVar2 = (undefined8 *)(puVar4 + 2);
  }
  lVar5 = *(long *)(param_3 + 8);
  bVar1 = true;
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 0x10) = 1;
  if (lVar5 != 0) {
    bVar1 = *(int *)(param_3 + 0x10) == 0;
  }
  *(bool *)((long)puVar4 + 0x41) = bVar1;
  uVar3 = FUN_71007a7a30(puVar2,param_2,param_3,param_4);
  return uVar3;
}



// ===== FUN_71007a7d90 @ 71007a7d90 (size=48) =====

void FUN_71007a7d90(long param_1,undefined8 param_2)

{
  FUN_71007a3ef0(*(undefined8 *)(param_1 + 8));
  FUN_71007a3ef0(param_1,param_2);
  return;
}



// ===== FUN_71007a7dc0 @ 71007a7dc0 (size=820) =====

int FUN_71007a7dc0(uint *param_1,undefined8 *param_2,long param_3,ulong *param_4,ulong param_5)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar8 = *param_4;
  puVar1 = param_1 + 0x12;
LAB_71007a7e00:
  uVar9 = *param_1;
  if (uVar8 < param_5) goto LAB_71007a7e74;
LAB_71007a7e10:
  uVar10 = uVar8;
  if (uVar9 != 6) {
    return 0;
  }
LAB_71007a7e18:
  iVar5 = (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 2),param_2,param_3,param_4,param_5);
  uVar8 = *param_4;
  if (uVar8 - uVar10 <= *(ulong *)(param_1 + 0xe)) {
    lVar7 = (uVar10 - uVar8) + *(ulong *)(param_1 + 0xe);
    *(long *)(param_1 + 0xe) = lVar7;
    if (iVar5 != 1) {
      return iVar5;
    }
    if (lVar7 == 0) {
      *param_1 = 0;
      do {
        uVar9 = *param_1;
        if (param_5 <= uVar8) goto LAB_71007a7e10;
LAB_71007a7e74:
        if (uVar9 == 3) {
          bVar2 = *(byte *)(param_3 + uVar8);
          uVar8 = uVar8 + 1;
          *param_1 = 4;
          *param_4 = uVar8;
          *(ulong *)(param_1 + 0xe) = (ulong)bVar2 << 8;
          goto LAB_71007a7e00;
        }
        if (uVar9 < 4) {
          if (uVar9 == 1) {
            bVar2 = *(byte *)(param_3 + uVar8);
            uVar8 = uVar8 + 1;
            lVar7 = *(long *)(param_1 + 0xc);
            *param_1 = 2;
            *param_4 = uVar8;
            *(ulong *)(param_1 + 0xc) = lVar7 + (ulong)bVar2 * 0x100;
          }
          else if (uVar9 == 2) {
            bVar2 = *(byte *)(param_3 + uVar8);
            lVar7 = *(long *)(param_1 + 0xc);
            *param_1 = 3;
            *param_4 = uVar8 + 1;
            *(ulong *)(param_1 + 0xc) = (ulong)bVar2 + 1 + lVar7;
            (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 2));
            uVar8 = *param_4;
          }
          else {
            if (uVar9 != 0) {
              return 0xb;
            }
            bVar2 = *(byte *)(param_3 + uVar8);
            *param_4 = uVar8 + 1;
            if (bVar2 == 0) {
              return 1;
            }
            if (bVar2 < 0xe0 && bVar2 != 1) {
              if (*(char *)((long)param_1 + 0x41) != '\0') {
                return 9;
              }
              if (0x7f < bVar2) goto LAB_71007a7f9c;
LAB_71007a80a0:
              if (2 < bVar2) {
                return 9;
              }
              param_1[0] = 3;
              param_1[1] = 7;
            }
            else {
              *(undefined2 *)(param_1 + 0x10) = 0x101;
              if (bVar2 < 0x80) goto LAB_71007a80a0;
LAB_71007a7f9c:
              *param_1 = 1;
              *(ulong *)(param_1 + 0xc) = ((ulong)bVar2 & 0x1f) << 0x10;
              if (bVar2 < 0xc0) {
                if ((char)param_1[0x10] != '\0') {
                  return 9;
                }
                param_1[1] = 6;
                if (0x9f < bVar2) {
                  (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 2),puVar1);
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x10) = 0;
                param_1[1] = 5;
              }
            }
            if (*(char *)((long)param_1 + 0x41) != '\0') {
              *(undefined1 *)((long)param_1 + 0x41) = 0;
              *(undefined1 *)(param_2 + 5) = 1;
              return 0;
            }
LAB_71007a8080:
            uVar8 = *param_4;
          }
          goto LAB_71007a7e00;
        }
        if (uVar9 == 5) {
          uVar3 = *(undefined1 *)(param_3 + uVar8);
          *param_4 = uVar8 + 1;
          cVar4 = FUN_71007a7ad0(puVar1,uVar3);
          if (cVar4 != '\0') {
            return 9;
          }
          (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 2),puVar1);
          *param_1 = 6;
          goto LAB_71007a8080;
        }
        if (uVar9 < 6) {
          if (uVar9 != 4) {
            return 0xb;
          }
          bVar2 = *(byte *)(param_3 + uVar8);
          uVar8 = uVar8 + 1;
          lVar7 = *(long *)(param_1 + 0xe);
          *param_4 = uVar8;
          *param_1 = param_1[1];
          *(ulong *)(param_1 + 0xe) = lVar7 + (ulong)bVar2 + 1;
          goto LAB_71007a7e00;
        }
        uVar10 = uVar8;
        if (uVar9 == 6) goto LAB_71007a7e18;
        if (uVar9 != 7) {
          return 0xb;
        }
        uVar10 = uVar8 + *(ulong *)(param_1 + 0xe);
        if (param_5 - uVar8 <= *(ulong *)(param_1 + 0xe)) {
          uVar10 = param_5;
        }
        lVar7 = FUN_71007a3f20(param_3,param_4,uVar10,*param_2,param_2 + 1,param_2[3]);
        lVar6 = *(long *)(param_1 + 0xe);
        uVar8 = param_2[1];
        uVar10 = param_2[2];
        *(long *)(param_1 + 0xe) = lVar6 - lVar7;
        if (uVar10 < uVar8) {
          param_2[2] = uVar8;
        }
        if (lVar6 - lVar7 != 0) {
          return 0;
        }
        *param_1 = 0;
        uVar8 = *param_4;
      } while( true );
    }
  }
  return 9;
}



// ===== FUN_71007a8110 @ 71007a8110 (size=24) =====

long FUN_71007a8110(void)

{
  long lVar1;
  
  lVar1 = FUN_71007a7b50();
  return lVar1 + 0xb8;
}



// ===== FUN_71007a81d0 @ 71007a81d0 (size=44) =====

void FUN_71007a81d0(undefined8 param_1,undefined8 param_2)

{
  FUN_71007a40a0();
  FUN_71007a3ef0(param_1,param_2);
  return;
}



// ===== FUN_71007a8410 @ 71007a8410 (size=76) =====

undefined8 FUN_71007a8410(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_71007a3ec0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 5;
  }
  else {
    bVar1 = *param_3;
    uVar3 = 0;
    *param_1 = puVar2;
    *puVar2 = 0;
    puVar2[1] = bVar1 + 1;
  }
  return uVar3;
}



// ===== FUN_71007a8ce0 @ 71007a8ce0 (size=196) =====

undefined8 FUN_71007a8ce0(long *param_1,ulong *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  uVar5 = 0;
  cVar6 = '\x01';
  uVar7 = 0;
  while( true ) {
    if (lVar4 == 0x4000000000000001) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      lVar1 = 0x21;
      puVar2 = &UNK_71009ccad0;
      while (lVar3 = lVar3 + 1, lVar4 != lVar1) {
        if (lVar1 == -1) {
          return 8;
        }
        lVar1 = *(long *)(puVar2 + 0x30);
        puVar2 = puVar2 + 0x18;
      }
    }
    if (cVar6 == '\0') break;
    uVar5 = uVar5 + 1;
    lVar3 = lVar3 * 0x18;
    lVar4 = param_1[uVar5 * 2];
    cVar6 = (&UNK_71009ccae0)[lVar3];
    uVar7 = uVar7 + (byte)(&UNK_71009ccae2)[lVar3];
    if (lVar4 == -1) {
      if (3 < uVar7 || (4 < uVar5 || (&UNK_71009ccae1)[lVar3] != '\x01')) {
        return 8;
      }
      *param_2 = uVar5;
      return 0;
    }
  }
  return 8;
}



// ===== FUN_71007a8db0 @ 71007a8db0 (size=476) =====

int FUN_71007a8db0(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long extraout_x12;
  int extraout_w13;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_80;
  long local_78 [15];
  
  if (param_3 == (long *)0x0) {
    return 0xb;
  }
  if (*param_3 == -1) {
    return 0xb;
  }
  iVar3 = FUN_71007a8ce0(param_3,&local_80);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (extraout_w13 == 0) {
    lVar5 = 0;
    lVar7 = extraout_x12;
    plVar6 = local_78;
    if (local_80 == 0) goto LAB_71007a8f84;
    while( true ) {
      lVar5 = lVar5 + 1;
      lVar7 = (*param_4)(lVar7);
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 8), lVar7 == 0)) break;
      lVar4 = *param_3;
      lVar1 = param_3[1];
      param_3 = param_3 + 2;
      *plVar6 = lVar4;
      plVar6[1] = lVar7;
      plVar6[2] = lVar1;
      if (lVar5 == local_80) {
        lVar5 = local_80 << 1;
        goto LAB_71007a8f04;
      }
      lVar7 = *param_3;
      plVar6 = plVar6 + 3;
    }
  }
  else {
    if (local_80 == 0) {
LAB_71007a8f84:
      lVar5 = 0;
LAB_71007a8f04:
      local_78[lVar5 + local_80 + 1] = 0;
      local_78[lVar5 + local_80] = -1;
      iVar3 = FUN_71007a3f90(param_1,param_2,local_78);
      if (iVar3 != 0) {
        FUN_71007a40a0(param_1,param_2);
        return iVar3;
      }
      return 0;
    }
    lVar5 = local_80 * 2;
    lVar7 = 0;
    lVar4 = extraout_x12;
    plVar6 = local_78 + local_80 * 3;
    while( true ) {
      lVar7 = lVar7 + 1;
      lVar4 = (*param_4)(lVar4);
      if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 8), lVar4 == 0)) break;
      lVar1 = *param_3;
      lVar2 = param_3[1];
      param_3 = param_3 + 2;
      plVar6[-3] = lVar1;
      plVar6[-2] = lVar4;
      plVar6[-1] = lVar2;
      if (lVar7 == local_80) goto LAB_71007a8f04;
      lVar4 = *param_3;
      plVar6 = plVar6 + -3;
    }
  }
  return 8;
}



// ===== FUN_71007a8f90 @ 71007a8f90 (size=304) =====

int FUN_71007a8f90(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_6;
  uVar6 = param_1[1];
  uVar4 = param_1[4];
LAB_71007a8fd8:
  if (uVar6 == uVar4) goto LAB_71007a9078;
  do {
    uVar4 = uVar4 - uVar6;
    while( true ) {
      uVar1 = param_7 - lVar5;
      if (uVar4 < (ulong)(param_7 - lVar5)) {
        uVar1 = uVar4;
      }
      param_1[3] = uVar1 + uVar6;
      iVar3 = (*(code *)param_1[7])(param_1[6],param_1,param_2,param_3,param_4);
      lVar2 = param_1[1];
      lVar5 = *param_6;
      FUN_710080f900(param_5 + lVar5,*param_1 + uVar6,lVar2 - uVar6);
      lVar5 = lVar5 + (lVar2 - uVar6);
      lVar2 = param_1[5];
      *param_6 = lVar5;
      if ((char)lVar2 == '\0') {
        if (iVar3 != 0) {
          return iVar3;
        }
        if (lVar5 != param_7) {
          uVar6 = param_1[1];
          uVar4 = param_1[4];
          if (uVar4 <= uVar6) goto LAB_71007a8fd8;
        }
        return 0;
      }
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(*param_1 + param_1[4] + -1) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
      if (lVar5 == param_7) {
        return 0;
      }
      uVar6 = param_1[1];
      uVar4 = param_1[4];
      if (uVar6 != uVar4) break;
LAB_71007a9078:
      uVar6 = 0;
      param_1[1] = 0;
    }
  } while( true );
}



// ===== FUN_71007a90c0 @ 71007a90c0 (size=104) =====

void FUN_71007a90c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_71007a40a0(param_1 + 0xb);
  FUN_71007a3ef0(*param_1,param_2);
  if ((code *)param_1[10] != (code *)0x0) {
    (*(code *)param_1[10])();
    FUN_71007a3ef0(param_1,param_2);
    return;
  }
  FUN_71007a3ef0(param_1[6],param_2);
  FUN_71007a3ef0(param_1,param_2);
  return;
}



// ===== FUN_71007a9320 @ 71007a9320 (size=408) =====

undefined8 FUN_71007a9320(long *param_1,undefined8 param_2,long param_3,code *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong local_18;
  long local_10;
  ulong local_8;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_71007a3ec0(0x10b8);
    if (plVar4 == (long *)0x0) {
      return 5;
    }
    *plVar4 = 0;
    plVar4[4] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xc] = 0;
    plVar4[0xb] = 0;
    plVar4[0xe] = 0;
    plVar4[0xd] = 0;
    plVar4[0x10] = 0;
    plVar4[0xf] = 0;
    plVar4[0x12] = 0;
    plVar4[0x11] = 0;
    plVar4[0x13] = 0;
    *param_1 = (long)plVar4;
    param_1[3] = (long)&LAB_71007a9130;
    param_1[4] = (long)FUN_71007a90c0;
    plVar4[0xc] = -1;
  }
  uVar2 = (*param_4)(plVar4 + 6,param_2,*(undefined8 *)(param_3 + 0x10),&local_18);
  if ((int)uVar2 == 0) {
    if (local_18 < 0x1000) {
      local_18 = 0x1000;
    }
    else {
      if (0xfffffffffffffff0 < local_18) {
        return 5;
      }
      local_18 = local_18 + 0xf & 0xfffffffffffffff0;
    }
    if (plVar4[4] != local_18) {
      FUN_71007a3ef0(*plVar4,param_2);
      lVar3 = FUN_71007a3ec0(local_18,param_2);
      *plVar4 = lVar3;
      if (lVar3 == 0) {
        return 5;
      }
      plVar4[4] = local_18;
    }
    param_1 = (long *)*param_1;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(*param_1 + param_1[4] + -1) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    if ((local_10 != 0) && (local_8 != 0)) {
      uVar1 = local_18;
      if (local_8 < local_18) {
        uVar1 = local_8;
      }
      FUN_710080f900(*plVar4,local_10 + (local_8 - uVar1),uVar1);
      plVar4[1] = uVar1;
      plVar4[2] = uVar1;
    }
    *(undefined2 *)(plVar4 + 0x14) = 0;
    plVar4[0x15] = 0;
    plVar4[0x16] = 0;
    uVar2 = FUN_71007a3f90(plVar4 + 0xb,param_2,param_3 + 0x18);
  }
  return uVar2;
}



// ===== FUN_71007a94c0 @ 71007a94c0 (size=12) =====

long FUN_71007a94c0(long param_1)

{
  return param_1 + 0x10b8;
}



// ===== FUN_71007a9a00 @ 71007a9a00 (size=12) =====

void FUN_71007a9a00(undefined8 param_1,int param_2,int param_3)

{
  FUN_710081c1c0((long)(param_2 * param_3));
  return;
}



// ===== FUN_71007a9a10 @ 71007a9a10 (size=240) =====

undefined8 FUN_71007a9a10(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (param_1 != 0) {
    if (param_3 < 2) {
      if (param_2 < 5) {
        pcVar4 = *(code **)(param_1 + 0x38);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = FUN_71007a9a00;
          *(code **)(param_1 + 0x38) = FUN_71007a9a00;
          lVar1 = *(long *)(param_1 + 0x40);
        }
        else {
          lVar1 = *(long *)(param_1 + 0x40);
        }
        if (lVar1 == 0) {
          *(undefined1 **)(param_1 + 0x40) = &LAB_71007a99f0;
        }
        plVar2 = (long *)(*pcVar4)(*(undefined8 *)(param_1 + 0x48),0xfa90,1);
        if (plVar2 == (long *)0x0) {
          uVar3 = 0xfffffffd;
        }
        else {
          *plVar2 = param_1;
          uVar3 = 0;
          *(long **)(param_1 + 0x30) = plVar2;
          *(undefined4 *)(plVar2 + 1) = 10;
          plVar2[4] = 0;
          *(undefined4 *)((long)plVar2 + 0xc74) = 0;
          *(undefined8 *)(param_1 + 0xc) = 0;
          *(undefined8 *)(param_1 + 0x24) = 0;
          *(char *)((long)plVar2 + 0x2c) = (char)param_3;
          *(undefined4 *)(plVar2 + 6) = 0;
          *(uint *)((long)plVar2 + 0x34) = param_2;
          plVar2[0x18a] = 0;
          plVar2[0x18b] = 0;
          plVar2[0x18c] = 0;
        }
      }
      else {
        uVar3 = 0xfffffffe;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
    return uVar3;
  }
  return 0xfffffffe;
}



// ===== FUN_71007a9b00 @ 71007a9b00 (size=56) =====

void FUN_71007a9b00(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x100;
  iVar3 = 0;
  do {
    iVar1 = iVar4 + iVar3 >> 1;
    iVar2 = iVar1;
    if (param_1 < *(int *)(param_2 + (long)iVar1 * 4)) {
      iVar2 = iVar3;
      iVar4 = iVar1;
    }
    iVar3 = iVar2;
  } while (iVar4 - iVar2 != 1);
  return;
}



// ===== FUN_71007a9b40 @ 71007a9b40 (size=3692) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71007a9b40(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  
  if (param_1 == 0) {
    iVar7 = -2;
  }
  else {
    plVar25 = *(long **)(param_1 + 0x30);
    if ((plVar25 == (long *)0x0) || (*plVar25 != param_1)) {
      iVar7 = -2;
    }
    else {
      iVar7 = (int)plVar25[1];
      if (iVar7 != 1) {
        while (iVar7 != 2) {
          if (9 < iVar7) goto LAB_71007a9ca4;
        }
LAB_71007a9b8c:
        lVar10 = *plVar25;
        iVar7 = *(int *)(lVar10 + 0x20);
        if (*(char *)((long)plVar25 + 0x2c) == '\0') {
          if (*(char *)((long)plVar25 + 0x14) == '\0') {
            iVar22 = (int)plVar25[2];
            lVar15 = plVar25[0x1f4a];
            puVar16 = *(undefined1 **)(lVar10 + 0x18);
            iVar2 = (int)lVar15 + 1;
            lVar10 = plVar25[0x18a];
            uVar14 = (int)plVar25[5] * 100000;
            uVar12 = (uint)*(byte *)((long)plVar25 + 0xc);
            uVar21 = (ulong)*(uint *)((long)plVar25 + 0x3c);
            uVar20 = *(uint *)(plVar25 + 8);
            iVar18 = *(int *)((long)plVar25 + 0x444);
            uVar23 = *(uint *)(plVar25 + 0x18e);
            iVar9 = iVar7;
            if (0 < iVar22) goto LAB_71007aa388;
LAB_71007aa2c4:
            uVar13 = (uint)uVar21;
            if (iVar2 < iVar18) {
              return -4;
            }
            if (iVar2 != iVar18) {
              uVar12 = uVar20 & 0xff;
              if (uVar14 <= uVar13) {
                return -4;
              }
              uVar13 = *(uint *)(lVar10 + uVar21 * 4);
              uVar21 = (ulong)(uVar13 >> 8);
              iVar5 = iVar18 + 1;
              uVar11 = uVar13 & 0xff;
              iVar8 = iVar9;
              if ((uVar20 == (uVar13 & 0xff)) && ((int)lVar15 != iVar18)) goto code_r0x0071007aa2fc;
              goto LAB_71007aa860;
            }
            iVar22 = 0;
            goto LAB_71007aa3d0;
          }
          if (iVar7 != 0) {
            iVar7 = (int)plVar25[2];
            do {
              if (iVar7 == 0) {
                iVar2 = *(int *)((long)plVar25 + 0x444);
                iVar7 = (int)plVar25[0x1f4a] + 1;
                if (iVar2 == iVar7) goto LAB_71007a9c50;
                if (iVar2 != iVar7 && iVar7 <= iVar2) {
                  return -4;
                }
                *(undefined4 *)(plVar25 + 2) = 1;
                uVar12 = (int)plVar25[5] * 100000;
                *(char *)((long)plVar25 + 0xc) = (char)*(uint *)(plVar25 + 8);
                if (uVar12 <= *(uint *)((long)plVar25 + 0x3c)) {
                  return -4;
                }
                lVar15 = plVar25[0x18a];
                iVar22 = (int)plVar25[3];
                uVar20 = *(uint *)(lVar15 + (ulong)*(uint *)((long)plVar25 + 0x3c) * 4);
                uVar23 = uVar20 >> 8;
                *(uint *)((long)plVar25 + 0x3c) = uVar23;
                if (iVar22 == 0) {
                  iVar9 = *(int *)((long)plVar25 + 0x1c);
                  iVar22 = (&DAT_7100af3f68)[iVar9];
                  iVar18 = 0;
                  if (iVar9 != 0x1ff) {
                    iVar18 = iVar9 + 1;
                  }
                  *(int *)(plVar25 + 3) = iVar22;
                  *(int *)((long)plVar25 + 0x1c) = iVar18;
                }
                iVar22 = iVar22 + -1;
                *(int *)(plVar25 + 3) = iVar22;
                uVar20 = (iVar22 == 1 ^ uVar20) & 0xff;
                *(int *)((long)plVar25 + 0x444) = iVar2 + 1;
                if (iVar2 == (int)plVar25[0x1f4a]) {
LAB_71007aa070:
                  iVar7 = *(int *)(lVar10 + 0x20);
                }
                else if (*(uint *)(plVar25 + 8) == uVar20) {
                  *(undefined4 *)(plVar25 + 2) = 2;
                  if (uVar12 <= uVar23) {
                    return -4;
                  }
                  uVar23 = *(uint *)(lVar15 + (ulong)uVar23 * 4);
                  uVar14 = uVar23 >> 8;
                  *(uint *)((long)plVar25 + 0x3c) = uVar14;
                  if (iVar22 == 0) {
                    iVar9 = *(int *)((long)plVar25 + 0x1c);
                    iVar22 = (&DAT_7100af3f68)[iVar9];
                    iVar18 = 0;
                    if (iVar9 != 0x1ff) {
                      iVar18 = iVar9 + 1;
                    }
                    *(int *)(plVar25 + 3) = iVar22;
                    *(int *)((long)plVar25 + 0x1c) = iVar18;
                  }
                  iVar22 = iVar22 + -1;
                  *(int *)(plVar25 + 3) = iVar22;
                  uVar23 = (iVar22 == 1 ^ uVar23) & 0xff;
                  *(int *)((long)plVar25 + 0x444) = iVar2 + 2;
                  if (iVar7 == iVar2 + 2) goto LAB_71007aa070;
                  if (uVar20 == uVar23) {
                    *(undefined4 *)(plVar25 + 2) = 3;
                    if (uVar12 <= uVar14) {
                      return -4;
                    }
                    uVar23 = *(uint *)(lVar15 + (ulong)uVar14 * 4);
                    uVar14 = uVar23 >> 8;
                    *(uint *)((long)plVar25 + 0x3c) = uVar14;
                    if (iVar22 == 0) {
                      iVar22 = *(int *)((long)plVar25 + 0x1c);
                      iVar18 = 0;
                      if (iVar22 != 0x1ff) {
                        iVar18 = iVar22 + 1;
                      }
                      iVar22 = (&DAT_7100af3f68)[iVar22];
                      *(int *)(plVar25 + 3) = iVar22;
                      *(int *)((long)plVar25 + 0x1c) = iVar18;
                    }
                    iVar22 = iVar22 + -1;
                    *(int *)(plVar25 + 3) = iVar22;
                    uVar23 = (iVar22 == 1 ^ uVar23) & 0xff;
                    *(int *)((long)plVar25 + 0x444) = iVar2 + 3;
                    if (iVar7 == iVar2 + 3) goto LAB_71007aa070;
                    if (uVar20 == uVar23) {
                      if (uVar12 <= uVar14) {
                        return -4;
                      }
                      uVar20 = *(uint *)(lVar15 + (ulong)uVar14 * 4);
                      uVar23 = uVar20 >> 8;
                      *(uint *)((long)plVar25 + 0x3c) = uVar23;
                      if (iVar22 == 0) {
                        iVar22 = *(int *)((long)plVar25 + 0x1c);
                        iVar7 = 0;
                        if (iVar22 != 0x1ff) {
                          iVar7 = iVar22 + 1;
                        }
                        iVar22 = (&DAT_7100af3f68)[iVar22];
                        *(int *)(plVar25 + 3) = iVar22;
                        *(int *)((long)plVar25 + 0x1c) = iVar7;
                      }
                      iVar22 = iVar22 + -1;
                      *(int *)(plVar25 + 3) = iVar22;
                      *(int *)((long)plVar25 + 0x444) = iVar2 + 4;
                      *(uint *)(plVar25 + 2) = ((iVar22 == 1 ^ uVar20) & 0xff) + 4;
                      if (uVar12 <= uVar23) {
                        return -4;
                      }
                      uVar20 = *(uint *)(lVar15 + (ulong)uVar23 * 4);
                      uVar12 = uVar20 & 0xff;
                      *(uint *)((long)plVar25 + 0x3c) = uVar20 >> 8;
                      *(uint *)(plVar25 + 8) = uVar12;
                      if (iVar22 == 0) {
                        iVar22 = *(int *)((long)plVar25 + 0x1c);
                        iVar7 = 0;
                        if (iVar22 != 0x1ff) {
                          iVar7 = iVar22 + 1;
                        }
                        iVar22 = (&DAT_7100af3f68)[iVar22];
                        *(int *)(plVar25 + 3) = iVar22;
                        *(int *)((long)plVar25 + 0x1c) = iVar7;
                      }
                      iVar7 = *(int *)(lVar10 + 0x20);
                      *(int *)(plVar25 + 3) = iVar22 + -1;
                      *(uint *)(plVar25 + 8) = iVar22 + -1 == 1 ^ uVar12;
                      *(int *)((long)plVar25 + 0x444) = iVar2 + 5;
                      goto joined_r0x0071007aa074;
                    }
                  }
                  iVar7 = *(int *)(lVar10 + 0x20);
                  *(uint *)(plVar25 + 8) = uVar23;
                }
                else {
                  iVar7 = *(int *)(lVar10 + 0x20);
                  *(uint *)(plVar25 + 8) = uVar20;
                }
              }
              else {
                bVar3 = *(byte *)((long)plVar25 + 0xc);
                **(byte **)(lVar10 + 0x18) = bVar3;
                lVar10 = *plVar25;
                uVar12 = *(uint *)(&DAT_7100af3b68 +
                                  (ulong)((uint)bVar3 ^ *(uint *)(plVar25 + 0x18e) >> 0x18) * 4);
                lVar15 = *(long *)(lVar10 + 0x18);
                iVar7 = *(int *)(lVar10 + 0x20);
                *(int *)(plVar25 + 2) = (int)plVar25[2] + -1;
                iVar2 = *(int *)(lVar10 + 0x24);
                *(uint *)(plVar25 + 0x18e) = uVar12 ^ *(uint *)(plVar25 + 0x18e) << 8;
                iVar7 = iVar7 + -1;
                *(long *)(lVar10 + 0x18) = lVar15 + 1;
                iVar2 = iVar2 + 1;
                *(int *)(lVar10 + 0x20) = iVar7;
                *(int *)(lVar10 + 0x24) = iVar2;
                if (iVar2 == 0) {
                  *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
                }
              }
joined_r0x0071007aa074:
              if (iVar7 == 0) break;
              iVar7 = (int)plVar25[2];
            } while( true );
          }
LAB_71007a9c34:
          iVar18 = *(int *)((long)plVar25 + 0x444);
          iVar7 = (int)plVar25[0x1f4a] + 1;
        }
        else {
          if (*(char *)((long)plVar25 + 0x14) != '\0') {
            if (iVar7 != 0) {
              iVar7 = (int)plVar25[2];
              do {
                if (iVar7 == 0) {
                  iVar2 = *(int *)((long)plVar25 + 0x444);
                  iVar7 = (int)plVar25[0x1f4a] + 1;
                  if (iVar2 == iVar7) goto LAB_71007a9c50;
                  if (iVar2 != iVar7 && iVar7 <= iVar2) {
                    return -4;
                  }
                  *(undefined4 *)(plVar25 + 2) = 1;
                  uVar12 = *(uint *)((long)plVar25 + 0x3c);
                  uVar20 = (int)plVar25[5] * 100000;
                  *(char *)((long)plVar25 + 0xc) = (char)*(uint *)(plVar25 + 8);
                  if (uVar20 <= uVar12) {
                    return -4;
                  }
                  uVar23 = 0;
                  uVar14 = 0x100;
                  do {
                    uVar13 = (int)(uVar14 + uVar23) >> 1;
                    uVar11 = uVar13;
                    if (*(int *)((long)plVar25 + (long)(int)uVar13 * 4 + 0x448) <= (int)uVar12) {
                      uVar11 = uVar14;
                      uVar23 = uVar13;
                    }
                    uVar14 = uVar11;
                  } while (uVar11 - uVar23 != 1);
                  lVar15 = plVar25[0x18c];
                  lVar24 = plVar25[0x18b];
                  iVar22 = (int)plVar25[3];
                  uVar14 = (uint)*(ushort *)(lVar24 + (ulong)uVar12 * 2);
                  uVar12 = (*(byte *)(lVar15 + (ulong)(uVar12 >> 1)) >> (ulong)((uVar12 & 1) << 2) &
                           0xf) << 0x10 | uVar14;
                  *(uint *)((long)plVar25 + 0x3c) = uVar12;
                  if (iVar22 == 0) {
                    iVar9 = *(int *)((long)plVar25 + 0x1c);
                    iVar22 = (&DAT_7100af3f68)[iVar9];
                    iVar18 = 0;
                    if (iVar9 != 0x1ff) {
                      iVar18 = iVar9 + 1;
                    }
                    *(int *)(plVar25 + 3) = iVar22;
                    *(int *)((long)plVar25 + 0x1c) = iVar18;
                  }
                  iVar22 = iVar22 + -1;
                  *(int *)(plVar25 + 3) = iVar22;
                  uVar23 = (iVar22 == 1 ^ uVar23) & 0xff;
                  *(int *)((long)plVar25 + 0x444) = iVar2 + 1;
                  if (iVar2 == (int)plVar25[0x1f4a]) {
LAB_71007aa5ac:
                    iVar7 = *(int *)(lVar10 + 0x20);
                  }
                  else if (*(uint *)(plVar25 + 8) == uVar23) {
                    *(undefined4 *)(plVar25 + 2) = 2;
                    if (uVar20 <= uVar12) {
                      return -4;
                    }
                    uVar13 = 0;
                    uVar11 = 0x100;
                    do {
                      uVar19 = (int)(uVar11 + uVar13) >> 1;
                      uVar1 = uVar19;
                      if (*(int *)((long)plVar25 + (long)(int)uVar19 * 4 + 0x448) <= (int)uVar12) {
                        uVar1 = uVar11;
                        uVar13 = uVar19;
                      }
                      uVar11 = uVar1;
                    } while (uVar1 - uVar13 != 1);
                    uVar11 = (uint)*(ushort *)(lVar24 + (ulong)uVar12 * 2);
                    uVar12 = (*(byte *)(lVar15 + (ulong)(uVar12 >> 1)) >> (ulong)((uVar14 & 1) << 2)
                             & 0xf) << 0x10 | uVar11;
                    *(uint *)((long)plVar25 + 0x3c) = uVar12;
                    if (iVar22 == 0) {
                      iVar22 = *(int *)((long)plVar25 + 0x1c);
                      iVar18 = 0;
                      if (iVar22 != 0x1ff) {
                        iVar18 = iVar22 + 1;
                      }
                      iVar22 = (&DAT_7100af3f68)[iVar22];
                      *(int *)(plVar25 + 3) = iVar22;
                      *(int *)((long)plVar25 + 0x1c) = iVar18;
                    }
                    iVar22 = iVar22 + -1;
                    *(int *)(plVar25 + 3) = iVar22;
                    uVar14 = (iVar22 == 1 ^ uVar13) & 0xff;
                    *(int *)((long)plVar25 + 0x444) = iVar2 + 2;
                    if (iVar7 == iVar2 + 2) goto LAB_71007aa5ac;
                    if (uVar23 == uVar14) {
                      *(undefined4 *)(plVar25 + 2) = 3;
                      if (uVar20 <= uVar12) {
                        return -4;
                      }
                      uVar14 = 0;
                      uVar13 = 0x100;
                      do {
                        uVar19 = (int)(uVar13 + uVar14) >> 1;
                        uVar1 = uVar19;
                        if (*(int *)((long)plVar25 + (long)(int)uVar19 * 4 + 0x448) <= (int)uVar12)
                        {
                          uVar1 = uVar13;
                          uVar14 = uVar19;
                        }
                        uVar13 = uVar1;
                      } while (uVar1 - uVar14 != 1);
                      uVar13 = (uint)*(ushort *)(lVar24 + (ulong)uVar12 * 2);
                      uVar12 = (*(byte *)(lVar15 + (ulong)(uVar12 >> 1)) >>
                                (ulong)((uVar11 & 1) << 2) & 0xf) << 0x10 | uVar13;
                      *(uint *)((long)plVar25 + 0x3c) = uVar12;
                      if (iVar22 == 0) {
                        iVar22 = *(int *)((long)plVar25 + 0x1c);
                        iVar18 = 0;
                        if (iVar22 != 0x1ff) {
                          iVar18 = iVar22 + 1;
                        }
                        iVar22 = (&DAT_7100af3f68)[iVar22];
                        *(int *)(plVar25 + 3) = iVar22;
                        *(int *)((long)plVar25 + 0x1c) = iVar18;
                      }
                      iVar22 = iVar22 + -1;
                      *(int *)(plVar25 + 3) = iVar22;
                      uVar14 = (iVar22 == 1 ^ uVar14) & 0xff;
                      *(int *)((long)plVar25 + 0x444) = iVar2 + 3;
                      if (iVar7 == iVar2 + 3) goto LAB_71007aa5ac;
                      if (uVar23 == uVar14) {
                        if (uVar20 <= uVar12) {
                          return -4;
                        }
                        uVar23 = 0;
                        uVar14 = 0x100;
                        do {
                          uVar11 = (int)(uVar14 + uVar23) >> 1;
                          uVar19 = uVar11;
                          if (*(int *)((long)plVar25 + (long)(int)uVar11 * 4 + 0x448) <= (int)uVar12
                             ) {
                            uVar19 = uVar14;
                            uVar23 = uVar11;
                          }
                          uVar14 = uVar19;
                        } while (uVar19 - uVar23 != 1);
                        uVar14 = (uint)*(ushort *)(lVar24 + (ulong)uVar12 * 2);
                        uVar12 = (*(byte *)(lVar15 + (ulong)(uVar12 >> 1)) >>
                                  (ulong)((uVar13 & 1) << 2) & 0xf) << 0x10 | uVar14;
                        *(uint *)((long)plVar25 + 0x3c) = uVar12;
                        if (iVar22 == 0) {
                          iVar22 = *(int *)((long)plVar25 + 0x1c);
                          iVar7 = 0;
                          if (iVar22 != 0x1ff) {
                            iVar7 = iVar22 + 1;
                          }
                          iVar22 = (&DAT_7100af3f68)[iVar22];
                          *(int *)(plVar25 + 3) = iVar22;
                          *(int *)((long)plVar25 + 0x1c) = iVar7;
                        }
                        iVar22 = iVar22 + -1;
                        *(int *)(plVar25 + 3) = iVar22;
                        *(int *)((long)plVar25 + 0x444) = iVar2 + 4;
                        *(uint *)(plVar25 + 2) = ((iVar22 == 1 ^ uVar23) & 0xff) + 4;
                        if (uVar20 <= uVar12) {
                          return -4;
                        }
                        uVar20 = 0;
                        uVar23 = 0x100;
                        do {
                          uVar13 = (int)(uVar23 + uVar20) >> 1;
                          uVar11 = uVar13;
                          if (*(int *)((long)plVar25 + (long)(int)uVar13 * 4 + 0x448) <= (int)uVar12
                             ) {
                            uVar11 = uVar23;
                            uVar20 = uVar13;
                          }
                          uVar23 = uVar11;
                        } while (uVar11 - uVar20 != 1);
                        uVar4 = *(ushort *)(lVar24 + (ulong)uVar12 * 2);
                        *(uint *)(plVar25 + 8) = uVar20;
                        *(uint *)((long)plVar25 + 0x3c) =
                             (*(byte *)(lVar15 + (ulong)(uVar12 >> 1)) >> (ulong)((uVar14 & 1) << 2)
                             & 0xf) << 0x10 | (uint)uVar4;
                        if (iVar22 == 0) {
                          iVar22 = *(int *)((long)plVar25 + 0x1c);
                          iVar7 = 0;
                          if (iVar22 != 0x1ff) {
                            iVar7 = iVar22 + 1;
                          }
                          iVar22 = (&DAT_7100af3f68)[iVar22];
                          *(int *)(plVar25 + 3) = iVar22;
                          *(int *)((long)plVar25 + 0x1c) = iVar7;
                        }
                        iVar7 = *(int *)(lVar10 + 0x20);
                        *(int *)(plVar25 + 3) = iVar22 + -1;
                        *(uint *)(plVar25 + 8) = iVar22 + -1 == 1 ^ uVar20;
                        *(int *)((long)plVar25 + 0x444) = iVar2 + 5;
                        goto joined_r0x0071007aa5b0;
                      }
                    }
                    iVar7 = *(int *)(lVar10 + 0x20);
                    *(uint *)(plVar25 + 8) = uVar14;
                  }
                  else {
                    iVar7 = *(int *)(lVar10 + 0x20);
                    *(uint *)(plVar25 + 8) = uVar23;
                  }
                }
                else {
                  bVar3 = *(byte *)((long)plVar25 + 0xc);
                  **(byte **)(lVar10 + 0x18) = bVar3;
                  lVar10 = *plVar25;
                  uVar12 = *(uint *)(&DAT_7100af3b68 +
                                    (ulong)((uint)bVar3 ^ *(uint *)(plVar25 + 0x18e) >> 0x18) * 4);
                  lVar15 = *(long *)(lVar10 + 0x18);
                  iVar7 = *(int *)(lVar10 + 0x20);
                  *(int *)(plVar25 + 2) = (int)plVar25[2] + -1;
                  iVar2 = *(int *)(lVar10 + 0x24);
                  *(uint *)(plVar25 + 0x18e) = uVar12 ^ *(uint *)(plVar25 + 0x18e) << 8;
                  iVar7 = iVar7 + -1;
                  *(long *)(lVar10 + 0x18) = lVar15 + 1;
                  iVar2 = iVar2 + 1;
                  *(int *)(lVar10 + 0x20) = iVar7;
                  *(int *)(lVar10 + 0x24) = iVar2;
                  if (iVar2 == 0) {
                    *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
                  }
                }
joined_r0x0071007aa5b0:
                if (iVar7 == 0) break;
                iVar7 = (int)plVar25[2];
              } while( true );
            }
            goto LAB_71007a9c34;
          }
          if (iVar7 != 0) {
            do {
              while ((int)plVar25[2] == 0) {
                iVar2 = *(int *)((long)plVar25 + 0x444);
                iVar7 = (int)plVar25[0x1f4a] + 1;
                if (iVar2 == iVar7) goto LAB_71007a9c50;
                if (iVar2 != iVar7 && iVar7 <= iVar2) {
                  return -4;
                }
                *(undefined4 *)(plVar25 + 2) = 1;
                uVar12 = *(uint *)((long)plVar25 + 0x3c);
                uVar20 = *(uint *)(plVar25 + 8);
                uVar23 = (int)plVar25[5] * 100000;
                *(char *)((long)plVar25 + 0xc) = (char)uVar20;
                if (uVar23 <= uVar12) {
                  return -4;
                }
                uVar14 = 0;
                uVar13 = 0x100;
                do {
                  uVar11 = (int)(uVar13 + uVar14) >> 1;
                  uVar19 = uVar11;
                  if (*(int *)((long)plVar25 + (long)(int)uVar11 * 4 + 0x448) <= (int)uVar12) {
                    uVar19 = uVar13;
                    uVar14 = uVar11;
                  }
                  uVar13 = uVar19;
                } while (uVar19 - uVar14 != 1);
                lVar24 = plVar25[0x18c];
                lVar15 = plVar25[0x18b];
                bVar3 = *(byte *)(lVar24 + (ulong)(uVar12 >> 1));
                uVar4 = *(ushort *)(lVar15 + (ulong)uVar12 * 2);
                *(int *)((long)plVar25 + 0x444) = iVar2 + 1;
                uVar13 = (uint)uVar4;
                uVar12 = (bVar3 >> (ulong)((uVar12 & 1) << 2) & 0xf) << 0x10 | uVar13;
                *(uint *)((long)plVar25 + 0x3c) = uVar12;
                if (iVar2 == (int)plVar25[0x1f4a]) {
LAB_71007aa07c:
                  iVar7 = *(int *)(lVar10 + 0x20);
                }
                else {
                  uVar11 = uVar14 & 0xff;
                  if (uVar20 == (uVar14 & 0xff)) {
                    *(undefined4 *)(plVar25 + 2) = 2;
                    if (uVar23 <= uVar12) {
                      return -4;
                    }
                    uVar14 = 0;
                    uVar11 = 0x100;
                    do {
                      uVar19 = (int)(uVar11 + uVar14) >> 1;
                      uVar1 = uVar19;
                      if (*(int *)((long)plVar25 + (long)(int)uVar19 * 4 + 0x448) <= (int)uVar12) {
                        uVar1 = uVar11;
                        uVar14 = uVar19;
                      }
                      uVar11 = uVar1;
                    } while (uVar1 - uVar14 != 1);
                    bVar3 = *(byte *)(lVar24 + (ulong)(uVar12 >> 1));
                    uVar4 = *(ushort *)(lVar15 + (ulong)uVar12 * 2);
                    *(int *)((long)plVar25 + 0x444) = iVar2 + 2;
                    uVar19 = (uint)uVar4;
                    uVar12 = (bVar3 >> (ulong)((uVar13 & 1) << 2) & 0xf) << 0x10 | uVar19;
                    *(uint *)((long)plVar25 + 0x3c) = uVar12;
                    if (iVar7 == iVar2 + 2) goto LAB_71007aa07c;
                    uVar11 = uVar14 & 0xff;
                    if (uVar20 != (uVar14 & 0xff)) goto LAB_71007a9d70;
                    *(undefined4 *)(plVar25 + 2) = 3;
                    if (uVar23 <= uVar12) {
                      return -4;
                    }
                    uVar14 = 0;
                    uVar13 = 0x100;
                    do {
                      uVar11 = (int)(uVar13 + uVar14) >> 1;
                      uVar1 = uVar11;
                      if (*(int *)((long)plVar25 + (long)(int)uVar11 * 4 + 0x448) <= (int)uVar12) {
                        uVar1 = uVar13;
                        uVar14 = uVar11;
                      }
                      uVar13 = uVar1;
                    } while (uVar1 - uVar14 != 1);
                    bVar3 = *(byte *)(lVar24 + (ulong)(uVar12 >> 1));
                    uVar4 = *(ushort *)(lVar15 + (ulong)uVar12 * 2);
                    *(int *)((long)plVar25 + 0x444) = iVar2 + 3;
                    uVar13 = (uint)uVar4;
                    uVar12 = (bVar3 >> (ulong)((uVar19 & 1) << 2) & 0xf) << 0x10 | uVar13;
                    *(uint *)((long)plVar25 + 0x3c) = uVar12;
                    if (iVar7 == iVar2 + 3) goto LAB_71007aa07c;
                    uVar11 = uVar14 & 0xff;
                    if (uVar20 != (uVar14 & 0xff)) goto LAB_71007a9d70;
                    if (uVar23 <= uVar12) {
                      return -4;
                    }
                    uVar20 = 0;
                    uVar14 = 0x100;
                    do {
                      uVar11 = (int)(uVar14 + uVar20) >> 1;
                      uVar19 = uVar11;
                      if (*(int *)((long)plVar25 + (long)(int)uVar11 * 4 + 0x448) <= (int)uVar12) {
                        uVar19 = uVar14;
                        uVar20 = uVar11;
                      }
                      uVar14 = uVar19;
                    } while (uVar19 - uVar20 != 1);
                    bVar3 = *(byte *)(lVar24 + (ulong)(uVar12 >> 1));
                    uVar4 = *(ushort *)(lVar15 + (ulong)uVar12 * 2);
                    *(uint *)(plVar25 + 2) = (uVar20 & 0xff) + 4;
                    *(int *)((long)plVar25 + 0x444) = iVar2 + 4;
                    uVar20 = (uint)uVar4;
                    uVar12 = (bVar3 >> (ulong)((uVar13 & 1) << 2) & 0xf) << 0x10 | uVar20;
                    *(uint *)((long)plVar25 + 0x3c) = uVar12;
                    if (uVar23 <= uVar12) {
                      return -4;
                    }
                    iVar22 = 0;
                    iVar7 = 0x100;
                    do {
                      iVar18 = iVar7 + iVar22 >> 1;
                      iVar9 = iVar18;
                      if (*(int *)((long)plVar25 + (long)iVar18 * 4 + 0x448) <= (int)uVar12) {
                        iVar9 = iVar7;
                        iVar22 = iVar18;
                      }
                      iVar7 = iVar9;
                    } while (iVar9 - iVar22 != 1);
                    uVar4 = *(ushort *)(lVar15 + (ulong)uVar12 * 2);
                    iVar7 = *(int *)(lVar10 + 0x20);
                    *(int *)(plVar25 + 8) = iVar22;
                    bVar3 = *(byte *)(lVar24 + (ulong)(uVar12 >> 1));
                    *(int *)((long)plVar25 + 0x444) = iVar2 + 5;
                    *(uint *)((long)plVar25 + 0x3c) =
                         (bVar3 >> (ulong)((uVar20 & 1) << 2) & 0xf) << 0x10 | (uint)uVar4;
                  }
                  else {
LAB_71007a9d70:
                    iVar7 = *(int *)(lVar10 + 0x20);
                    *(uint *)(plVar25 + 8) = uVar11;
                  }
                }
                if (iVar7 == 0) goto LAB_71007a9c34;
              }
              bVar3 = *(byte *)((long)plVar25 + 0xc);
              **(byte **)(lVar10 + 0x18) = bVar3;
              lVar10 = *plVar25;
              uVar12 = *(uint *)(&DAT_7100af3b68 +
                                (ulong)((uint)bVar3 ^ *(uint *)(plVar25 + 0x18e) >> 0x18) * 4);
              lVar15 = *(long *)(lVar10 + 0x18);
              iVar2 = *(int *)(lVar10 + 0x20);
              *(int *)(plVar25 + 2) = (int)plVar25[2] + -1;
              iVar7 = *(int *)(lVar10 + 0x24);
              *(uint *)(plVar25 + 0x18e) = uVar12 ^ *(uint *)(plVar25 + 0x18e) << 8;
              iVar2 = iVar2 + -1;
              *(long *)(lVar10 + 0x18) = lVar15 + 1;
              iVar7 = iVar7 + 1;
              *(int *)(lVar10 + 0x20) = iVar2;
              *(int *)(lVar10 + 0x24) = iVar7;
              if (iVar7 == 0) {
                *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
              }
            } while (iVar2 != 0);
            goto LAB_71007a9c34;
          }
          iVar18 = *(int *)((long)plVar25 + 0x444);
          iVar7 = (int)plVar25[0x1f4a] + 1;
        }
        goto LAB_71007a9c40;
      }
      iVar7 = -1;
    }
  }
  return iVar7;
code_r0x0071007aa2fc:
  if (uVar14 <= uVar13 >> 8) {
    return -4;
  }
  uVar13 = *(uint *)(lVar10 + uVar21 * 4);
  uVar21 = (ulong)(uVar13 >> 8);
  uVar11 = uVar20;
  if ((iVar2 == iVar18 + 2) || (uVar11 = uVar13 & 0xff, uVar20 != (uVar13 & 0xff))) {
    uVar20 = uVar11;
    iVar22 = 2;
    iVar18 = iVar18 + 2;
  }
  else {
    if (uVar14 <= uVar13 >> 8) {
      return -4;
    }
    uVar13 = *(uint *)(lVar10 + uVar21 * 4);
    uVar21 = (ulong)(uVar13 >> 8);
    if ((iVar2 == iVar18 + 3) || (bVar6 = uVar20 != (uVar13 & 0xff), uVar20 = uVar13 & 0xff, bVar6))
    {
      iVar22 = 3;
      iVar18 = iVar18 + 3;
    }
    else {
      if (uVar14 <= uVar13 >> 8) {
        return -4;
      }
      uVar20 = *(uint *)(lVar10 + uVar21 * 4);
      uVar13 = uVar20 >> 8;
      iVar22 = (uVar20 & 0xff) + 4;
      if (uVar14 <= uVar13) {
        return -4;
      }
      uVar13 = *(uint *)(lVar10 + (ulong)uVar13 * 4);
      uVar20 = uVar13 & 0xff;
      uVar21 = (ulong)(uVar13 >> 8);
      iVar18 = iVar18 + 5;
    }
  }
  if (iVar22 != 0) {
LAB_71007aa388:
    uVar13 = (uint)uVar21;
    if (iVar9 == 0) {
      iVar9 = 0;
      goto LAB_71007aa3d0;
    }
    if (iVar22 != 1) {
      puVar17 = puVar16;
      iVar8 = iVar9;
      do {
        puVar16 = puVar17 + 1;
        *puVar17 = (char)uVar12;
        iVar8 = iVar8 + -1;
        uVar23 = *(uint *)(&DAT_7100af3b68 + (ulong)(uVar12 ^ uVar23 >> 0x18) * 4) ^ uVar23 << 8;
        if (iVar8 == 0) {
          iVar22 = iVar22 - iVar9;
          iVar9 = 0;
          goto LAB_71007aa3d0;
        }
        puVar17 = puVar16;
        iVar5 = iVar18;
        uVar11 = uVar20;
      } while (iVar8 != (iVar9 + 1) - iVar22);
LAB_71007aa860:
      iVar9 = iVar8;
      uVar20 = uVar11;
      iVar18 = iVar5;
      uVar13 = (uint)uVar21;
      if (iVar9 == 0) goto LAB_71007aa970;
    }
    *puVar16 = (char)uVar12;
    iVar9 = iVar9 + -1;
    uVar23 = *(uint *)(&DAT_7100af3b68 + (ulong)(uVar12 ^ uVar23 >> 0x18) * 4) ^ uVar23 << 8;
    puVar16 = puVar16 + 1;
  }
  goto LAB_71007aa2c4;
LAB_71007aa970:
  iVar9 = 0;
  iVar22 = 1;
LAB_71007aa3d0:
  lVar15 = *plVar25;
  uVar14 = *(uint *)(lVar15 + 0x24);
  uVar11 = (uVar14 + iVar7) - iVar9;
  *(uint *)(lVar15 + 0x24) = uVar11;
  if (uVar11 < uVar14) {
    *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x28) + 1;
  }
  *(char *)((long)plVar25 + 0xc) = (char)uVar12;
  *(int *)(plVar25 + 2) = iVar22;
  *(uint *)((long)plVar25 + 0x3c) = uVar13;
  *(uint *)(plVar25 + 8) = uVar20;
  *(int *)((long)plVar25 + 0x444) = iVar18;
  plVar25[0x18a] = lVar10;
  *(uint *)(plVar25 + 0x18e) = uVar23;
  iVar7 = (int)plVar25[0x1f4a] + 1;
  *(undefined1 **)(lVar15 + 0x18) = puVar16;
  *(int *)(lVar15 + 0x20) = iVar9;
LAB_71007a9c40:
  if ((iVar18 != iVar7) || ((int)plVar25[2] != 0)) {
    return 0;
  }
LAB_71007a9c50:
  iVar7 = *(int *)((long)plVar25 + 0x34);
  *(uint *)(plVar25 + 0x18e) = ~*(uint *)(plVar25 + 0x18e);
  if (2 < iVar7) {
    lVar10 = FUN_7100834b00();
    FUN_71008095a0(*(undefined8 *)(lVar10 + 0x18)," {0x%08x, 0x%08x}",(int)plVar25[0x18d],
                   (int)plVar25[0x18e]);
    iVar7 = *(int *)((long)plVar25 + 0x34);
  }
  if (1 < iVar7) {
    lVar10 = FUN_7100834b00();
    FUN_710081e920(0x5d,*(undefined8 *)(lVar10 + 0x18));
  }
  if (*(uint *)(plVar25 + 0x18e) == *(uint *)(plVar25 + 0x18d)) {
    *(undefined4 *)(plVar25 + 1) = 0xe;
    *(uint *)((long)plVar25 + 0xc74) =
         *(uint *)(plVar25 + 0x18e) ^
         (*(uint *)((long)plVar25 + 0xc74) >> 0x1f | *(uint *)((long)plVar25 + 0xc74) << 1);
LAB_71007a9ca4:
    iVar7 = FUN_71007aaac0(plVar25);
    if (iVar7 != 4) {
      if ((int)plVar25[1] != 2) {
        return iVar7;
      }
      goto LAB_71007a9b8c;
    }
    if (2 < *(int *)((long)plVar25 + 0x34)) {
      lVar10 = FUN_7100834b00();
      FUN_71008095a0(*(undefined8 *)(lVar10 + 0x18),
                     "\n    combined CRCs: stored = 0x%08x, computed = 0x%08x",
                     *(undefined4 *)((long)plVar25 + 0xc6c),*(undefined4 *)((long)plVar25 + 0xc74));
    }
    if (*(int *)((long)plVar25 + 0xc74) == *(int *)((long)plVar25 + 0xc6c)) {
      return 4;
    }
  }
  return -4;
}



// ===== FUN_71007aa9b0 @ 71007aa9b0 (size=136) =====

undefined8 FUN_71007aa9b0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x30);
    if ((plVar2 == (long *)0x0) || (*plVar2 != param_1)) {
      uVar1 = 0xfffffffe;
    }
    else {
      if (plVar2[0x18a] != 0) {
        (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
      }
      if (plVar2[0x18b] != 0) {
        (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
      }
      if (plVar2[0x18c] != 0) {
        (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
      }
      (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30))
      ;
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    return uVar1;
  }
  return 0xfffffffe;
}



// ===== FUN_71007aaa40 @ 71007aaa40 (size=12) =====

char * FUN_71007aaa40(void)

{
  return "1.0.8, 13-Jul-2019";
}



// ===== FUN_71007aaa50 @ 71007aaa50 (size=100) =====

void FUN_71007aaa50(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_7100834b00();
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar2 = FUN_71007aaa40();
  FUN_71008095a0(uVar3,
                 "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to: bzip2-devel@sourceware.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.\n\n"
                 ,param_1,uVar2);
  if (param_1 == 0x3ef) goto LAB_71007aaa94;
  do {
    FUN_710000a120(3);
LAB_71007aaa94:
    lVar1 = FUN_7100834b00();
    FUN_710080b100("\n*** A special note about internal error number 1007 ***\n\nExperience suggests that a common cause of i.e. 1007\nis unreliable memory or other hardware.  The 1007 assertion\njust happens to cross-check the results of huge numbers of\nmemory reads/writes, and so acts (unintendedly) as a stress\ntest of your memory system.\n\nI suggest the following: try compressing the file again,\npossibly monitoring progress in detail with the -vv flag.\n\n* If the error cannot be reproduced, and/or happens at different\n  points in compression, you may have a flaky memory system.\n  Try a memory-test program.  I have used Memtest86\n  (www.memtest86.com).  At the time of writing it is free (GPLd).\n  Memtest86 tests memory much more thorougly than your BIOSs\n  power-on test, and may find failures that the BIOS doesn\'t.\n\n* If the error can be repeatably reproduced, this is a bug in\n  bzip2, and I would very much like to hear about it.  Please\n  let me know, and, ideally, save a copy of the file causing the\n  problem -- without which I will be unable to investigate it.\n\n"
                   ,1,0x420,*(undefined8 *)(lVar1 + 0x18));
  } while( true );
}



// ===== FUN_71007aaac0 @ 71007aaac0 (size=10812) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007aaac0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  unkbyte9 Var6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  byte *pbVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  uint uVar40;
  int iVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  undefined1 auStack_9 [9];
  
  puVar39 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 1) == 10) {
    *(undefined8 *)((long)param_1 + 0xfa2c) = 0;
    *(undefined8 *)((long)param_1 + 0xfa24) = 0;
    *(undefined8 *)((long)param_1 + 0xfa3c) = 0;
    *(undefined8 *)((long)param_1 + 0xfa34) = 0;
    *(undefined8 *)((long)param_1 + 0xfa4c) = 0;
    *(undefined8 *)((long)param_1 + 0xfa44) = 0;
    *(undefined8 *)((long)param_1 + 0xfa5c) = 0;
    *(undefined8 *)((long)param_1 + 0xfa54) = 0;
    *(undefined8 *)((long)param_1 + 0xfa6c) = 0;
    *(undefined8 *)((long)param_1 + 0xfa64) = 0;
    iVar19 = *(int *)((long)param_1 + 0x24);
    *(undefined4 *)((long)param_1 + 0xfa74) = 0;
    param_1[0x1f4f] = 0;
    param_1[0x1f50] = 0;
    param_1[0x1f51] = 0;
    *(undefined4 *)(param_1 + 1) = 10;
    while (iVar19 < 8) {
      iVar31 = *(int *)(puVar39 + 1);
      if (iVar31 == 0) {
        lVar28 = 0;
        lVar26 = 0;
        local_a4 = 0;
        local_a0 = 0;
        lVar27 = 0;
        uVar44 = 0;
        local_9c = 0;
        local_98 = 0;
        uVar43 = 0;
        uVar40 = 0;
        local_94 = 0;
        uVar25 = 0;
        iVar29 = 0;
        uVar34 = 0;
        iVar32 = 0;
        uVar30 = 0;
        iVar24 = 0;
        iVar31 = 0;
        uVar33 = 0;
        uVar46 = 0;
        iVar19 = 0;
        uVar37 = 0;
        uVar45 = 0;
        uVar42 = 0;
        uVar13 = 0;
        goto LAB_71007aabf0;
      }
      pbVar35 = (byte *)*puVar39;
      iVar19 = iVar19 + 8;
      iVar29 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(int *)((long)param_1 + 0x24) = iVar19;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar31 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar29;
      if (iVar29 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar10 = iVar19 - 8;
    lVar28 = 0;
    local_a4 = 0;
    local_a0 = 0;
    lVar26 = 0;
    lVar27 = 0;
    *(uint *)((long)param_1 + 0x24) = uVar10;
    uVar44 = 0;
    uVar43 = 0;
    local_9c = 0;
    local_98 = 0;
    uVar40 = 0;
    uVar25 = 0;
    local_94 = 0;
    iVar29 = 0;
    uVar23 = 0;
    uVar34 = 0;
    iVar32 = 0;
    uVar30 = 0;
    iVar24 = 0;
    iVar31 = 0;
    uVar33 = 0;
    uVar46 = 0;
    iVar19 = 0;
    uVar38 = 0;
    uVar37 = 0;
    uVar45 = 0;
    uVar42 = 0;
    uVar11 = 0;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f) & 0xff) != 0x42) {
      uVar13 = 0xfffffffb;
      goto LAB_71007aabf0;
    }
LAB_71007abcbc:
    uVar45 = uVar11;
    uVar34 = (uint)uVar23;
    uVar37 = (uint)uVar38;
    *(undefined4 *)(param_1 + 1) = 0xb;
    while ((int)uVar10 < 8) {
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar10 = uVar10 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar10;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar10 = uVar10 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar10;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f) & 0xff) != 0x5a) {
      uVar13 = 0xfffffffb;
      goto LAB_71007aabf0;
    }
LAB_71007abd30:
    uVar34 = (uint)uVar23;
    uVar37 = (uint)uVar38;
    *(undefined4 *)(param_1 + 1) = 0xc;
    while ((int)uVar10 < 8) {
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar10 = uVar10 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar10;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar10 = uVar10 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar10;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f) & 0xff) != 0x68) {
      uVar13 = 0xfffffffb;
      goto LAB_71007aabf0;
    }
LAB_71007abda4:
    uVar34 = (uint)uVar23;
    uVar37 = (uint)uVar38;
    *(undefined4 *)(param_1 + 1) = 0xd;
    while ((int)uVar10 < 8) {
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar10 = uVar10 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar10;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    *(uint *)((long)param_1 + 0x24) = uVar10 - 8;
    uVar10 = *(uint *)(param_1 + 4) >> (ulong)(uVar10 - 8 & 0x1f) & 0xff;
    if (8 < uVar10 - 0x31) {
      *(uint *)(param_1 + 5) = uVar10;
      uVar13 = 0xfffffffb;
      goto LAB_71007aabf0;
    }
    iVar41 = uVar10 - 0x30;
    pcVar22 = (code *)puVar39[7];
    *(int *)(param_1 + 5) = iVar41;
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      lVar14 = (*pcVar22)(puVar39[9],iVar41 * 400000,1);
      param_1[0x18a] = lVar14;
      if (lVar14 != 0) goto switchD_71007aac94_caseD_e;
    }
    else {
      uVar13 = (*pcVar22)(puVar39[9],iVar41 * 200000,1);
      pcVar22 = (code *)puVar39[7];
      param_1[0x18b] = uVar13;
      lVar14 = (*pcVar22)(puVar39[9],*(int *)(param_1 + 5) * 100000 >> 1,1);
      param_1[0x18c] = lVar14;
      if (param_1[0x18b] != 0 && lVar14 != 0) {
switchD_71007aac94_caseD_e:
        uVar34 = (uint)uVar23;
        iVar41 = *(int *)((long)param_1 + 0x24);
        *(undefined4 *)(param_1 + 1) = 0xe;
        while (iVar41 < 8) {
          puVar39 = (undefined8 *)*param_1;
          iVar2 = *(int *)(puVar39 + 1);
          if (iVar2 == 0) goto LAB_71007ac788;
          pbVar35 = (byte *)*puVar39;
          iVar41 = iVar41 + 8;
          iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
          *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
          *(int *)((long)param_1 + 0x24) = iVar41;
          *puVar39 = pbVar35 + 1;
          *(int *)(puVar39 + 1) = iVar2 + -1;
          *(int *)((long)puVar39 + 0xc) = iVar1;
          if (iVar1 == 0) {
            *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
          }
        }
        uVar11 = iVar41 - 8;
        *(uint *)((long)param_1 + 0x24) = uVar11;
        uVar37 = *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff;
        if (uVar37 == 0x17) goto LAB_71007ac440;
        if (uVar37 == 0x31) goto LAB_71007aae54;
        goto LAB_71007ab9f8;
      }
    }
    uVar13 = 0xfffffffd;
    goto LAB_71007aabf0;
  }
  local_98 = *(uint *)((long)param_1 + 0xfa3c);
  lVar27 = param_1[0x1f4f];
  lVar26 = param_1[0x1f50];
  local_a0 = *(int *)(param_1 + 0x1f4b);
  lVar28 = param_1[0x1f51];
  uVar10 = *(uint *)((long)param_1 + 0xfa24);
  uVar42 = (ulong)uVar10;
  local_94 = *(undefined4 *)(param_1 + 0x1f4c);
  uVar45 = *(uint *)(param_1 + 0x1f45);
  uVar37 = *(uint *)((long)param_1 + 0xfa2c);
  uVar38 = (ulong)uVar37;
  local_9c = *(uint *)(param_1 + 0x1f4e);
  iVar19 = *(int *)(param_1 + 0x1f46);
  uVar46 = *(uint *)((long)param_1 + 0xfa34);
  local_a4 = *(uint *)((long)param_1 + 0xfa74);
  uVar33 = *(uint *)(param_1 + 0x1f47);
  iVar31 = *(int *)(param_1 + 0x1f48);
  iVar24 = *(int *)((long)param_1 + 0xfa44);
  uVar30 = *(uint *)(param_1 + 0x1f49);
  iVar32 = *(int *)((long)param_1 + 0xfa4c);
  uVar34 = *(uint *)(param_1 + 0x1f4a);
  uVar23 = (ulong)uVar34;
  iVar29 = *(int *)((long)param_1 + 0xfa54);
  uVar25 = *(uint *)((long)param_1 + 0xfa5c);
  uVar40 = *(uint *)((long)param_1 + 0xfa64);
  uVar43 = *(uint *)(param_1 + 0x1f4d);
  uVar44 = *(uint *)((long)param_1 + 0xfa6c);
  switch(*(int *)(param_1 + 1)) {
  case 0xb:
    uVar10 = *(uint *)((long)param_1 + 0x24);
    uVar11 = uVar45;
    goto LAB_71007abcbc;
  case 0xc:
    uVar10 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007abd30;
  case 0xd:
    uVar10 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007abda4;
  case 0xe:
    goto switchD_71007aac94_caseD_e;
  case 0xf:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007aae54:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0xf;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x41) goto LAB_71007aaec0;
    break;
  case 0x10:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007aaec0:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x10;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x59) goto LAB_71007aaf2c;
    break;
  case 0x11:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007aaf2c:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x11;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x26) goto LAB_71007aaf98;
    break;
  case 0x12:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007aaf98:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x12;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x53) goto LAB_71007ab004;
    break;
  case 0x13:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007ab004:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x13;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x59) {
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      if (*(int *)((long)param_1 + 0x34) < 2) {
        *(undefined4 *)(param_1 + 0x18d) = 0;
      }
      else {
        lVar14 = FUN_7100834b00();
        FUN_71008095a0(*(undefined8 *)(lVar14 + 0x18),"\n    [%d: huff+mtf ",
                       *(undefined4 *)(param_1 + 6));
        *(undefined4 *)(param_1 + 0x18d) = 0;
        uVar11 = *(uint *)((long)param_1 + 0x24);
      }
      goto LAB_71007ac090;
    }
    break;
  case 0x14:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007ac090:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x14;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 0x18d) =
         *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 0x18d) << 8;
    goto LAB_71007ac0fc;
  case 0x15:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007ac0fc:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x15;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 0x18d) =
         *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 0x18d) << 8;
LAB_71007ac168:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x16;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 0x18d) =
         *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 0x18d) << 8;
LAB_71007ac1d4:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x17;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 0x18d) =
         *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 0x18d) << 8;
LAB_71007ac240:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x18;
    while ((int)uVar11 < 1) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 1;
    *(undefined4 *)(param_1 + 7) = 0;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(byte *)((long)param_1 + 0x14) = (byte)(*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f)) & 1;
LAB_71007ac2ac:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x19;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 7) =
         *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 7) << 8;
LAB_71007ac318:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x1a;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 7) =
         *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 7) << 8;
LAB_71007abf6c:
    uVar34 = (uint)uVar23;
    *(undefined4 *)(param_1 + 1) = 0x1b;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    uVar37 = *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff | *(int *)(param_1 + 7) << 8;
    *(uint *)(param_1 + 7) = uVar37;
    if ((-1 < (int)uVar37) && ((int)uVar37 <= *(int *)(param_1 + 5) * 100000 + 10)) {
      uVar10 = 0;
LAB_71007abb18:
      uVar34 = (uint)uVar23;
      uVar42 = (ulong)(int)uVar10;
      do {
        *(undefined4 *)(param_1 + 1) = 0x1c;
        while ((int)uVar11 < 1) {
          puVar39 = (undefined8 *)*param_1;
          iVar41 = *(int *)(puVar39 + 1);
          if (iVar41 == 0) goto LAB_71007ac788;
          pbVar35 = (byte *)*puVar39;
          uVar11 = uVar11 + 8;
          iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
          *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
          *(uint *)((long)param_1 + 0x24) = uVar11;
          *puVar39 = pbVar35 + 1;
          *(int *)(puVar39 + 1) = iVar41 + -1;
          *(int *)((long)puVar39 + 0xc) = iVar2;
          if (iVar2 == 0) {
            *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
          }
        }
        uVar11 = uVar11 - 1;
        *(uint *)((long)param_1 + 0x24) = uVar11;
        *(byte *)((long)param_1 + uVar42 + 0xd7c) =
             (byte)(*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f)) & 1;
        uVar42 = uVar42 + 1;
      } while ((int)uVar42 < 0x10);
      uVar42 = 0;
      *(undefined8 *)((long)param_1 + 0xc84) = 0;
      *(undefined8 *)((long)param_1 + 0xc7c) = 0;
      *(undefined8 *)((long)param_1 + 0xc94) = 0;
      *(undefined8 *)((long)param_1 + 0xc8c) = 0;
      *(undefined8 *)((long)param_1 + 0xca4) = 0;
      *(undefined8 *)((long)param_1 + 0xc9c) = 0;
      *(undefined8 *)((long)param_1 + 0xcb4) = 0;
      *(undefined8 *)((long)param_1 + 0xcac) = 0;
      *(undefined8 *)((long)param_1 + 0xcc4) = 0;
      *(undefined8 *)((long)param_1 + 0xcbc) = 0;
      *(undefined8 *)((long)param_1 + 0xcd4) = 0;
      *(undefined8 *)((long)param_1 + 0xccc) = 0;
      *(undefined8 *)((long)param_1 + 0xce4) = 0;
      *(undefined8 *)((long)param_1 + 0xcdc) = 0;
      *(undefined8 *)((long)param_1 + 0xcf4) = 0;
      *(undefined8 *)((long)param_1 + 0xcec) = 0;
      *(undefined8 *)((long)param_1 + 0xd04) = 0;
      *(undefined8 *)((long)param_1 + 0xcfc) = 0;
      *(undefined8 *)((long)param_1 + 0xd14) = 0;
      *(undefined8 *)((long)param_1 + 0xd0c) = 0;
      *(undefined8 *)((long)param_1 + 0xd24) = 0;
      *(undefined8 *)((long)param_1 + 0xd1c) = 0;
      *(undefined8 *)((long)param_1 + 0xd34) = 0;
      *(undefined8 *)((long)param_1 + 0xd2c) = 0;
      *(undefined8 *)((long)param_1 + 0xd44) = 0;
      *(undefined8 *)((long)param_1 + 0xd3c) = 0;
      *(undefined8 *)((long)param_1 + 0xd54) = 0;
      *(undefined8 *)((long)param_1 + 0xd4c) = 0;
      *(undefined8 *)((long)param_1 + 0xd64) = 0;
      *(undefined8 *)((long)param_1 + 0xd5c) = 0;
      *(undefined8 *)((long)param_1 + 0xd74) = 0;
      *(undefined8 *)((long)param_1 + 0xd6c) = 0;
      do {
        iVar41 = (int)uVar42;
        if (*(char *)((long)param_1 + (long)iVar41 + 0xd7c) != '\0') {
          uVar45 = 0;
switchD_71007aac94_caseD_1d:
          uVar34 = (uint)uVar23;
          iVar41 = (int)uVar42;
          uVar37 = *(uint *)((long)param_1 + 0x24);
          do {
            *(undefined4 *)(param_1 + 1) = 0x1d;
            while ((int)uVar37 < 1) {
              puVar39 = (undefined8 *)*param_1;
              iVar2 = *(int *)(puVar39 + 1);
              if (iVar2 == 0) goto LAB_71007ac788;
              pbVar35 = (byte *)*puVar39;
              uVar37 = uVar37 + 8;
              iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
              *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
              *(uint *)((long)param_1 + 0x24) = uVar37;
              *puVar39 = pbVar35 + 1;
              *(int *)(puVar39 + 1) = iVar2 + -1;
              *(int *)((long)puVar39 + 0xc) = iVar1;
              if (iVar1 == 0) {
                *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
              }
            }
            uVar37 = uVar37 - 1;
            *(uint *)((long)param_1 + 0x24) = uVar37;
            if ((*(uint *)(param_1 + 4) >> (ulong)(uVar37 & 0x1f) & 1) != 0) {
              *(undefined1 *)((long)param_1 + (long)(int)(uVar45 + iVar41 * 0x10) + 0xc7c) = 1;
            }
            uVar45 = uVar45 + 1;
          } while ((int)uVar45 < 0x10);
        }
        uVar34 = (uint)uVar23;
        uVar42 = (ulong)(iVar41 + 1U);
      } while ((int)(iVar41 + 1U) < 0x10);
      lVar14 = 0;
      iVar41 = 0;
      *(undefined4 *)(param_1 + 399) = 0;
      do {
        if (*(char *)((long)param_1 + lVar14 + 0xc7c) != '\0') {
          lVar36 = (long)iVar41;
          iVar41 = iVar41 + 1;
          *(char *)((long)param_1 + lVar36 + 0xd8c) = (char)lVar14;
          *(int *)(param_1 + 399) = iVar41;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x100);
      if (iVar41 != 0) {
        iVar19 = iVar41 + 2;
switchD_71007aac94_caseD_1e:
        uVar34 = (uint)uVar23;
        iVar41 = *(int *)((long)param_1 + 0x24);
        *(undefined4 *)(param_1 + 1) = 0x1e;
        while (iVar41 < 3) {
          puVar39 = (undefined8 *)*param_1;
          iVar2 = *(int *)(puVar39 + 1);
          if (iVar2 == 0) goto LAB_71007ac788;
          pbVar35 = (byte *)*puVar39;
          iVar41 = iVar41 + 8;
          iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
          *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
          *(int *)((long)param_1 + 0x24) = iVar41;
          *puVar39 = pbVar35 + 1;
          *(int *)(puVar39 + 1) = iVar2 + -1;
          *(int *)((long)puVar39 + 0xc) = iVar1;
          if (iVar1 == 0) {
            *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
          }
        }
        uVar11 = iVar41 - 3;
        *(uint *)((long)param_1 + 0x24) = uVar11;
        uVar46 = *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 7;
        if (uVar46 - 2 < 5) {
LAB_71007ac004:
          uVar34 = (uint)uVar23;
          uVar37 = (uint)uVar38;
          *(undefined4 *)(param_1 + 1) = 0x1f;
          while ((int)uVar11 < 0xf) {
            puVar39 = (undefined8 *)*param_1;
            iVar41 = *(int *)(puVar39 + 1);
            if (iVar41 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            uVar11 = uVar11 + 8;
            iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(uint *)((long)param_1 + 0x24) = uVar11;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar41 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar2;
            if (iVar2 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          uVar11 = uVar11 - 0xf;
          *(uint *)((long)param_1 + 0x24) = uVar11;
          uVar33 = *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0x7fff;
          if (uVar33 == 0) {
            uVar33 = 0;
            uVar13 = 0xfffffffc;
            goto LAB_71007aabf0;
          }
          uVar45 = 0;
          uVar20 = 0;
LAB_71007abeec:
          while( true ) {
            uVar34 = (uint)uVar23;
            uVar37 = (uint)uVar38;
            uVar42 = uVar20 & 0xffffffff;
            while( true ) {
              *(undefined4 *)(param_1 + 1) = 0x20;
              while ((int)uVar11 < 1) {
                puVar39 = (undefined8 *)*param_1;
                iVar41 = *(int *)(puVar39 + 1);
                if (iVar41 == 0) goto LAB_71007ac788;
                pbVar35 = (byte *)*puVar39;
                uVar11 = uVar11 + 8;
                iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
                *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
                *(uint *)((long)param_1 + 0x24) = uVar11;
                *puVar39 = pbVar35 + 1;
                *(int *)(puVar39 + 1) = iVar41 + -1;
                *(int *)((long)puVar39 + 0xc) = iVar2;
                if (iVar2 == 0) {
                  *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
                }
              }
              uVar11 = uVar11 - 1;
              *(uint *)((long)param_1 + 0x24) = uVar11;
              if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 1) == 0) break;
              uVar45 = uVar45 + 1;
              if ((int)uVar46 <= (int)uVar45) {
                uVar13 = 0xfffffffc;
                goto LAB_71007aabf0;
              }
            }
            if ((int)uVar20 < 0x4652) {
              *(char *)((long)param_1 + uVar20 + 0x651e) = (char)uVar45;
            }
            uVar20 = uVar20 + 1;
            if ((int)uVar33 <= (int)uVar20) break;
            uVar45 = 0;
          }
          uVar34 = uVar33;
          if (0x4652 < (int)uVar33) {
            uVar34 = 0x4652;
          }
          uVar37 = 0;
          if (0 < (int)uVar46) {
            do {
              auStack_9[(long)(int)uVar37 + 1] = (char)uVar37;
              uVar37 = uVar37 + 1 & 0xff;
            } while ((int)uVar37 < (int)uVar46);
          }
          uVar42 = 0;
          if (0 < (int)uVar33) {
            lVar14 = 0;
            do {
              bVar9 = *(byte *)((long)param_1 + lVar14 + 0x651e);
              uVar4 = auStack_9[(long)(int)(uint)bVar9 + 1];
              if (bVar9 != 0) {
                FUN_710080f900(auStack_9 + ((ulong)bVar9 - (ulong)(byte)(bVar9 - 1)) + 1,
                               auStack_9 + ((ulong)bVar9 - (ulong)(byte)(bVar9 - 1)));
              }
              *(undefined1 *)((long)param_1 + lVar14 + 0x1ecc) = uVar4;
              lVar14 = lVar14 + 1;
              auStack_9[1] = uVar4;
            } while ((int)lVar14 < (int)uVar34);
            uVar42 = (ulong)uVar34;
          }
          uVar33 = uVar34;
          for (uVar38 = 0; (int)uVar38 < (int)uVar46; uVar38 = (ulong)((int)uVar38 + 1)) {
switchD_71007aac94_caseD_21:
            uVar34 = (uint)uVar23;
            iVar41 = *(int *)((long)param_1 + 0x24);
            *(undefined4 *)(param_1 + 1) = 0x21;
            while (iVar41 < 5) {
              puVar39 = (undefined8 *)*param_1;
              iVar2 = *(int *)(puVar39 + 1);
              if (iVar2 == 0) goto LAB_71007ac788;
              pbVar35 = (byte *)*puVar39;
              iVar41 = iVar41 + 8;
              iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
              *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
              *(int *)((long)param_1 + 0x24) = iVar41;
              *puVar39 = pbVar35 + 1;
              *(int *)(puVar39 + 1) = iVar2 + -1;
              *(int *)((long)puVar39 + 0xc) = iVar1;
              if (iVar1 == 0) {
                *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
              }
            }
            *(uint *)((long)param_1 + 0x24) = iVar41 - 5U;
            uVar25 = *(uint *)(param_1 + 4) >> (ulong)(iVar41 - 5U & 0x1f) & 0x1f;
            for (uVar42 = 0; uVar34 = uVar25, (int)uVar42 < iVar19;
                uVar42 = (ulong)((int)uVar42 + 1)) {
              while( true ) {
                uVar25 = uVar34;
                uVar34 = (uint)uVar23;
                if (0x13 < uVar25 - 1) goto LAB_71007ab9f8;
switchD_71007aac94_caseD_22:
                uVar34 = (uint)uVar23;
                iVar41 = *(int *)((long)param_1 + 0x24);
                *(undefined4 *)(param_1 + 1) = 0x22;
                while (iVar41 < 1) {
                  puVar39 = (undefined8 *)*param_1;
                  iVar2 = *(int *)(puVar39 + 1);
                  if (iVar2 == 0) goto LAB_71007ac788;
                  pbVar35 = (byte *)*puVar39;
                  iVar41 = iVar41 + 8;
                  iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
                  *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
                  *(int *)((long)param_1 + 0x24) = iVar41;
                  *puVar39 = pbVar35 + 1;
                  *(int *)(puVar39 + 1) = iVar2 + -1;
                  *(int *)((long)puVar39 + 0xc) = iVar1;
                  if (iVar1 == 0) {
                    *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
                  }
                }
                uVar37 = iVar41 - 1;
                *(uint *)((long)param_1 + 0x24) = uVar37;
                if ((*(uint *)(param_1 + 4) >> (ulong)(uVar37 & 0x1f) & 1) == 0) break;
LAB_71007ab090:
                uVar34 = (uint)uVar23;
                *(undefined4 *)(param_1 + 1) = 0x23;
                while ((int)uVar37 < 1) {
                  puVar39 = (undefined8 *)*param_1;
                  iVar41 = *(int *)(puVar39 + 1);
                  if (iVar41 == 0) goto LAB_71007ac788;
                  pbVar35 = (byte *)*puVar39;
                  uVar37 = uVar37 + 8;
                  iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
                  *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
                  *(uint *)((long)param_1 + 0x24) = uVar37;
                  *puVar39 = pbVar35 + 1;
                  *(int *)(puVar39 + 1) = iVar41 + -1;
                  *(int *)((long)puVar39 + 0xc) = iVar2;
                  if (iVar2 == 0) {
                    *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
                  }
                }
                *(uint *)((long)param_1 + 0x24) = uVar37 - 1;
                uVar34 = uVar25 - 1;
                if ((*(uint *)(param_1 + 4) >> (ulong)(uVar37 - 1 & 0x1f) & 1) == 0) {
                  uVar34 = uVar25 + 1;
                }
              }
              *(char *)((long)param_1 +
                       (long)(int)uVar42 +
                       ((-(uVar38 >> 0x1f) & 0xffffff8000000000 | uVar38 << 7) + (long)(int)uVar38)
                       * 2 + 0xab70) = (char)uVar25;
            }
          }
          if ((int)uVar46 < 1) {
            uVar37 = 0;
          }
          else {
            lVar36 = (long)param_1 + 0xb17c;
            puVar39 = param_1 + 0x156e;
            lVar14 = 0;
            do {
              lVar21 = 0;
              uVar34 = 0;
              uVar37 = 0x20;
              if (0 < iVar19) {
                do {
                  pbVar35 = (byte *)((long)puVar39 + lVar21);
                  lVar21 = lVar21 + 1;
                  uVar10 = (uint)*pbVar35;
                  if (uVar34 < *pbVar35) {
                    uVar34 = uVar10;
                  }
                  if (uVar10 < uVar37) {
                    uVar37 = uVar10;
                  }
                } while (iVar19 != lVar21);
              }
              FUN_71007ad500(lVar36,lVar36 + 0x1830,lVar36 + 0x3060,puVar39,uVar37,uVar34,iVar19);
              *(uint *)((long)param_1 + lVar14 * 4 + 0xfa0c) = uVar37;
              lVar14 = lVar14 + 1;
              puVar39 = (undefined8 *)((long)puVar39 + 0x102);
              lVar36 = lVar36 + 0x408;
              uVar37 = uVar46;
            } while ((int)uVar46 != lVar14);
          }
          iVar32 = *(int *)(param_1 + 5) * 100000;
          local_98 = *(int *)(param_1 + 399) + 1;
          FUN_7100808340((long)param_1 + 0x44,0,0x400);
          Var6 = _DAT_710085bd00;
          uVar38 = (ulong)uVar37;
          iVar31 = 0xff0;
          piVar17 = (int *)(param_1 + 0x3d9);
          do {
            cVar8 = (char)iVar31;
            auVar47[0] = cVar8 + '\x0f';
            auVar47[1] = cVar8 + '\x0e';
            auVar47[2] = cVar8 + '\r';
            auVar47[3] = cVar8 + '\f';
            auVar47[4] = cVar8 + '\v';
            auVar47[5] = cVar8 + '\n';
            auVar47[6] = cVar8 + '\t';
            auVar47[7] = cVar8 + '\b';
            auVar47[8] = cVar8 + '\a';
            auVar47[9] = cVar8 + '\x06';
            auVar47[10] = cVar8 + '\x05';
            auVar47[0xb] = cVar8 + '\x04';
            auVar47[0xc] = cVar8 + '\x03';
            auVar47[0xd] = cVar8 + '\x02';
            auVar47[0xe] = cVar8 + '\x01';
            auVar47[0xf] = cVar8;
            auVar48[9] = 6;
            auVar48._0_9_ = Var6;
            auVar48[10] = 5;
            auVar48[0xb] = 4;
            auVar48[0xc] = 3;
            auVar48[0xd] = 2;
            auVar48[0xe] = 1;
            auVar48[0xf] = 0;
            auVar48 = a64_TBL(ZEXT816(0),auVar47,auVar48);
            puVar39 = (undefined8 *)((long)piVar17 * 4 + -0x5ca4 + (long)param_1 * -3);
            puVar39[1] = auVar48._8_8_;
            *puVar39 = auVar48._0_8_;
            *piVar17 = iVar31;
            iVar31 = iVar31 + -0x10;
            piVar17 = piVar17 + -1;
          } while (iVar31 != 0xef0);
          if ((int)uVar33 < 1) {
            uVar34 = 0;
            iVar24 = 0;
            iVar31 = 0;
            uVar42 = 0x100;
            uVar13 = 0xfffffffc;
            goto LAB_71007aabf0;
          }
          bVar9 = *(byte *)((long)param_1 + 0x1ecc);
          local_9c = (uint)bVar9;
          uVar40 = *(uint *)((long)param_1 + (long)(int)local_9c * 4 + 0xfa0c);
          uVar23 = 0;
          iVar24 = 0x31;
          iVar31 = 0;
          uVar42 = 0x100;
          lVar26 = ((ulong)bVar9 * 0x80 + (ulong)bVar9) * 8;
          lVar27 = (long)param_1 + lVar26 + 0xb17c;
          lVar28 = (long)param_1 + lVar26 + 0xe1dc;
          lVar26 = (long)param_1 + lVar26 + 0xc9ac;
          local_a4 = uVar40;
switchD_71007aac94_caseD_24:
          uVar34 = (uint)uVar23;
          iVar41 = *(int *)((long)param_1 + 0x24);
          *(undefined4 *)(param_1 + 1) = 0x24;
          while (iVar41 < (int)uVar40) {
            puVar39 = (undefined8 *)*param_1;
            iVar2 = *(int *)(puVar39 + 1);
            if (iVar2 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            iVar41 = iVar41 + 8;
            iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(int *)((long)param_1 + 0x24) = iVar41;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar2 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar1;
            if (iVar1 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          uVar37 = iVar41 - uVar40;
          uVar43 = (1 << (ulong)(uVar40 & 0x1f)) - 1U &
                   *(uint *)(param_1 + 4) >> (ulong)(uVar37 & 0x1f);
          while( true ) {
            uVar34 = (uint)uVar23;
            *(uint *)((long)param_1 + 0x24) = uVar37;
            if (0x14 < (int)uVar40) break;
            if ((int)uVar43 <= *(int *)(lVar27 + (long)(int)uVar40 * 4)) {
              uVar37 = uVar43 - *(int *)(lVar26 + (long)(int)uVar40 * 4);
              if (uVar37 < 0x102) {
                uVar30 = *(uint *)(lVar28 + (long)(int)uVar37 * 4);
                goto LAB_71007ab720;
              }
              break;
            }
            uVar40 = uVar40 + 1;
switchD_71007aac94_caseD_25:
            uVar34 = (uint)uVar23;
            iVar41 = *(int *)((long)param_1 + 0x24);
            *(undefined4 *)(param_1 + 1) = 0x25;
            while (iVar41 < 1) {
              puVar39 = (undefined8 *)*param_1;
              iVar2 = *(int *)(puVar39 + 1);
              if (iVar2 == 0) goto LAB_71007ac788;
              pbVar35 = (byte *)*puVar39;
              iVar41 = iVar41 + 8;
              iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
              *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
              *(int *)((long)param_1 + 0x24) = iVar41;
              *puVar39 = pbVar35 + 1;
              *(int *)(puVar39 + 1) = iVar2 + -1;
              *(int *)((long)puVar39 + 0xc) = iVar1;
              if (iVar1 == 0) {
                *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
              }
            }
            uVar37 = iVar41 - 1;
            uVar44 = *(uint *)(param_1 + 4) >> (ulong)(uVar37 & 0x1f) & 1;
            uVar43 = uVar44 | uVar43 << 1;
          }
        }
      }
    }
    break;
  case 0x16:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac168;
  case 0x17:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac1d4;
  case 0x18:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac240;
  case 0x19:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac2ac;
  case 0x1a:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac318;
  case 0x1b:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007abf6c;
  case 0x1c:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007abb18;
  case 0x1d:
    goto switchD_71007aac94_caseD_1d;
  case 0x1e:
    goto switchD_71007aac94_caseD_1e;
  case 0x1f:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac004;
  case 0x20:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    uVar20 = (ulong)(int)uVar10;
    goto LAB_71007abeec;
  case 0x21:
    goto switchD_71007aac94_caseD_21;
  case 0x22:
    goto switchD_71007aac94_caseD_22;
  case 0x23:
    uVar37 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ab090;
  case 0x24:
    goto switchD_71007aac94_caseD_24;
  case 0x25:
    goto switchD_71007aac94_caseD_25;
  case 0x26:
    goto switchD_71007aac94_caseD_26;
  case 0x27:
    goto switchD_71007aac94_caseD_27;
  case 0x28:
    goto switchD_71007aac94_caseD_28;
  case 0x29:
    goto switchD_71007aac94_caseD_29;
  case 0x2a:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007ac440:
    *(undefined4 *)(param_1 + 1) = 0x2a;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) != 0x72) break;
    goto LAB_71007ac4ac;
  case 0x2b:
    uVar11 = *(uint *)((long)param_1 + 0x24);
LAB_71007ac4ac:
    uVar37 = (uint)uVar38;
    *(undefined4 *)(param_1 + 1) = 0x2b;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    uVar13 = 0xfffffffc;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) != 0x45) goto LAB_71007aabf0;
LAB_71007ac51c:
    *(undefined4 *)(param_1 + 1) = 0x2c;
    while ((int)uVar11 < 8) {
      puVar39 = (undefined8 *)*param_1;
      iVar41 = *(int *)(puVar39 + 1);
      if (iVar41 == 0) goto LAB_71007ac788;
      pbVar35 = (byte *)*puVar39;
      uVar11 = uVar11 + 8;
      iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
      *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      *puVar39 = pbVar35 + 1;
      *(int *)(puVar39 + 1) = iVar41 + -1;
      *(int *)((long)puVar39 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
      }
    }
    uVar11 = uVar11 - 8;
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x38) {
LAB_71007ac588:
      *(undefined4 *)(param_1 + 1) = 0x2d;
      while ((int)uVar11 < 8) {
        puVar39 = (undefined8 *)*param_1;
        iVar41 = *(int *)(puVar39 + 1);
        if (iVar41 == 0) goto LAB_71007ac788;
        pbVar35 = (byte *)*puVar39;
        uVar11 = uVar11 + 8;
        iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
        *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
        *(uint *)((long)param_1 + 0x24) = uVar11;
        *puVar39 = pbVar35 + 1;
        *(int *)(puVar39 + 1) = iVar41 + -1;
        *(int *)((long)puVar39 + 0xc) = iVar2;
        if (iVar2 == 0) {
          *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
        }
      }
      uVar11 = uVar11 - 8;
      *(uint *)((long)param_1 + 0x24) = uVar11;
      if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x50) {
LAB_71007ac5f4:
        *(undefined4 *)(param_1 + 1) = 0x2e;
        while ((int)uVar11 < 8) {
          puVar39 = (undefined8 *)*param_1;
          iVar41 = *(int *)(puVar39 + 1);
          if (iVar41 == 0) goto LAB_71007ac788;
          pbVar35 = (byte *)*puVar39;
          uVar11 = uVar11 + 8;
          iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
          *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
          *(uint *)((long)param_1 + 0x24) = uVar11;
          *puVar39 = pbVar35 + 1;
          *(int *)(puVar39 + 1) = iVar41 + -1;
          *(int *)((long)puVar39 + 0xc) = iVar2;
          if (iVar2 == 0) {
            *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
          }
        }
        uVar11 = uVar11 - 8;
        *(uint *)((long)param_1 + 0x24) = uVar11;
        if ((*(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff) == 0x90) {
          *(undefined4 *)((long)param_1 + 0xc6c) = 0;
LAB_71007ac664:
          *(undefined4 *)(param_1 + 1) = 0x2f;
          while ((int)uVar11 < 8) {
            puVar39 = (undefined8 *)*param_1;
            iVar41 = *(int *)(puVar39 + 1);
            if (iVar41 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            uVar11 = uVar11 + 8;
            iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(uint *)((long)param_1 + 0x24) = uVar11;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar41 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar2;
            if (iVar2 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          uVar11 = uVar11 - 8;
          *(uint *)((long)param_1 + 0x24) = uVar11;
          *(uint *)((long)param_1 + 0xc6c) =
               *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff |
               *(int *)((long)param_1 + 0xc6c) << 8;
LAB_71007ac3ac:
          *(undefined4 *)(param_1 + 1) = 0x30;
          while ((int)uVar11 < 8) {
            puVar39 = (undefined8 *)*param_1;
            iVar41 = *(int *)(puVar39 + 1);
            if (iVar41 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            uVar11 = uVar11 + 8;
            iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(uint *)((long)param_1 + 0x24) = uVar11;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar41 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar2;
            if (iVar2 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          uVar11 = uVar11 - 8;
          *(uint *)((long)param_1 + 0x24) = uVar11;
          *(uint *)((long)param_1 + 0xc6c) =
               *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff |
               *(int *)((long)param_1 + 0xc6c) << 8;
LAB_71007abbc8:
          *(undefined4 *)(param_1 + 1) = 0x31;
          while ((int)uVar11 < 8) {
            puVar39 = (undefined8 *)*param_1;
            iVar41 = *(int *)(puVar39 + 1);
            if (iVar41 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            uVar11 = uVar11 + 8;
            iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(uint *)((long)param_1 + 0x24) = uVar11;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar41 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar2;
            if (iVar2 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          uVar11 = uVar11 - 8;
          *(uint *)((long)param_1 + 0x24) = uVar11;
          *(uint *)((long)param_1 + 0xc6c) =
               *(uint *)(param_1 + 4) >> (ulong)(uVar11 & 0x1f) & 0xff |
               *(int *)((long)param_1 + 0xc6c) << 8;
LAB_71007abc34:
          uVar37 = (uint)uVar38;
          *(undefined4 *)(param_1 + 1) = 0x32;
          while ((int)uVar11 < 8) {
            puVar39 = (undefined8 *)*param_1;
            iVar41 = *(int *)(puVar39 + 1);
            if (iVar41 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            uVar11 = uVar11 + 8;
            iVar2 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(uint *)((long)param_1 + 0x24) = uVar11;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar41 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar2;
            if (iVar2 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          *(undefined4 *)(param_1 + 1) = 1;
          *(uint *)((long)param_1 + 0x24) = uVar11 - 8;
          uVar13 = 4;
          *(uint *)((long)param_1 + 0xc6c) =
               *(uint *)(param_1 + 4) >> (ulong)(uVar11 - 8 & 0x1f) & 0xff |
               *(int *)((long)param_1 + 0xc6c) << 8;
          goto LAB_71007aabf0;
        }
      }
    }
    break;
  case 0x2c:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac51c;
  case 0x2d:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac588;
  case 0x2e:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac5f4;
  case 0x2f:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac664;
  case 0x30:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007ac3ac;
  case 0x31:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007abbc8;
  case 0x32:
    uVar11 = *(uint *)((long)param_1 + 0x24);
    goto LAB_71007abc34;
  default:
    FUN_71007aaa50(0xfa1);
    FUN_71007aaa50(0xfa2);
    uVar13 = 0;
    goto LAB_71007aabf0;
  }
LAB_71007ab9f8:
  uVar37 = (uint)uVar38;
  uVar13 = 0xfffffffc;
LAB_71007aabf0:
  *(int *)((long)param_1 + 0xfa24) = (int)uVar42;
  *(uint *)(param_1 + 0x1f45) = uVar45;
  *(uint *)((long)param_1 + 0xfa2c) = uVar37;
  *(int *)(param_1 + 0x1f46) = iVar19;
  *(uint *)((long)param_1 + 0xfa34) = uVar46;
  *(uint *)((long)param_1 + 0xfa3c) = local_98;
  *(uint *)(param_1 + 0x1f47) = uVar33;
  *(int *)(param_1 + 0x1f48) = iVar31;
  *(int *)((long)param_1 + 0xfa44) = iVar24;
  *(uint *)(param_1 + 0x1f49) = uVar30;
  *(int *)(param_1 + 0x1f4b) = local_a0;
  *(int *)((long)param_1 + 0xfa4c) = iVar32;
  *(uint *)(param_1 + 0x1f4a) = uVar34;
  *(int *)((long)param_1 + 0xfa54) = iVar29;
  *(uint *)((long)param_1 + 0xfa5c) = uVar25;
  *(undefined4 *)(param_1 + 0x1f4c) = local_94;
  *(uint *)((long)param_1 + 0xfa64) = uVar40;
  *(uint *)(param_1 + 0x1f4d) = uVar43;
  *(uint *)((long)param_1 + 0xfa6c) = uVar44;
  *(uint *)(param_1 + 0x1f4e) = local_9c;
  *(uint *)((long)param_1 + 0xfa74) = local_a4;
  param_1[0x1f4f] = lVar27;
  param_1[0x1f50] = lVar26;
  param_1[0x1f51] = lVar28;
                    /* WARNING: Read-only address (ram,0x00710085bd00) is written */
  return uVar13;
LAB_71007ab720:
  uVar37 = (uint)uVar38;
  uVar34 = (uint)uVar23;
  if (local_98 != uVar30) {
    if (uVar30 < 2) {
      iVar29 = -1;
      local_a0 = 1;
      while( true ) {
        uVar34 = (uint)uVar23;
        uVar37 = (uint)uVar38;
        iVar41 = local_a0 * 2;
        if (uVar30 == 0) {
          iVar41 = local_a0;
        }
        iVar29 = iVar29 + iVar41;
        if (iVar24 == 0) {
          iVar31 = iVar31 + 1;
          if ((int)uVar33 <= iVar31) {
            uVar13 = 0xfffffffc;
            iVar24 = 0;
            local_a0 = local_a0 << 1;
            goto LAB_71007aabf0;
          }
          uVar20 = (ulong)*(byte *)((long)param_1 + (long)iVar31 + 0x1ecc);
          iVar24 = 0x32;
          lVar26 = uVar20 * 0x408;
          local_9c = (uint)*(byte *)((long)param_1 + (long)iVar31 + 0x1ecc);
          local_a4 = *(uint *)((long)param_1 + (uVar20 + 16000) * 4 + 0xc);
          lVar27 = (long)param_1 + lVar26 + 0xb17c;
          lVar28 = (long)param_1 + lVar26 + 0xe1dc;
          lVar26 = (long)param_1 + lVar26 + 0xc9ac;
        }
        iVar24 = iVar24 + -1;
        uVar40 = local_a4;
        local_a0 = local_a0 << 1;
switchD_71007aac94_caseD_26:
        uVar34 = (uint)uVar23;
        iVar41 = *(int *)((long)param_1 + 0x24);
        *(undefined4 *)(param_1 + 1) = 0x26;
        while (iVar41 < (int)uVar40) {
          puVar39 = (undefined8 *)*param_1;
          iVar2 = *(int *)(puVar39 + 1);
          if (iVar2 == 0) goto LAB_71007ac788;
          pbVar35 = (byte *)*puVar39;
          iVar41 = iVar41 + 8;
          iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
          *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
          *(int *)((long)param_1 + 0x24) = iVar41;
          *puVar39 = pbVar35 + 1;
          *(int *)(puVar39 + 1) = iVar2 + -1;
          *(int *)((long)puVar39 + 0xc) = iVar1;
          if (iVar1 == 0) {
            *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
          }
        }
        uVar10 = iVar41 - uVar40;
        uVar43 = (1 << (ulong)(uVar40 & 0x1f)) - 1U &
                 *(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f);
        while( true ) {
          uVar34 = (uint)uVar23;
          uVar37 = (uint)uVar38;
          *(uint *)((long)param_1 + 0x24) = uVar10;
          if (0x14 < (int)uVar40) goto LAB_71007ab9f8;
          if ((int)uVar43 <= *(int *)(lVar27 + (long)(int)uVar40 * 4)) break;
          uVar40 = uVar40 + 1;
switchD_71007aac94_caseD_27:
          uVar34 = (uint)uVar23;
          iVar41 = *(int *)((long)param_1 + 0x24);
          *(undefined4 *)(param_1 + 1) = 0x27;
          while (iVar41 < 1) {
            puVar39 = (undefined8 *)*param_1;
            iVar2 = *(int *)(puVar39 + 1);
            if (iVar2 == 0) goto LAB_71007ac788;
            pbVar35 = (byte *)*puVar39;
            iVar41 = iVar41 + 8;
            iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
            *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
            *(int *)((long)param_1 + 0x24) = iVar41;
            *puVar39 = pbVar35 + 1;
            *(int *)(puVar39 + 1) = iVar2 + -1;
            *(int *)((long)puVar39 + 0xc) = iVar1;
            if (iVar1 == 0) {
              *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
            }
          }
          uVar10 = iVar41 - 1;
          uVar44 = *(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f) & 1;
          uVar43 = uVar44 | uVar43 << 1;
        }
        uVar10 = uVar43 - *(int *)(lVar26 + (long)(int)uVar40 * 4);
        if (0x101 < uVar10) goto LAB_71007ab9f8;
        uVar30 = *(uint *)(lVar28 + (long)(int)uVar10 * 4);
        if (1 < uVar30) break;
        uVar13 = 0xfffffffc;
        if (0x1fffff < local_a0) goto LAB_71007aabf0;
      }
      iVar29 = iVar29 + 1;
      bVar9 = *(byte *)((long)param_1 +
                       (ulong)*(byte *)((long)param_1 +
                                       (long)*(int *)((long)param_1 + 0x1e8c) + 0xe8c) + 0xd8c);
      *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x44) =
           *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x44) + iVar29;
      if (*(char *)((long)param_1 + 0x2c) == '\0') {
        if (0 < iVar29) {
          if (iVar32 <= (int)uVar34) goto LAB_71007ab9f8;
          lVar14 = param_1[0x18a];
          lVar36 = (long)(int)uVar34;
          uVar10 = iVar32 - uVar34;
          uVar20 = (ulong)(int)(uVar34 + 1);
          while( true ) {
            iVar29 = iVar29 + -1;
            *(uint *)(lVar14 + -4 + uVar20 * 4) = (uint)bVar9;
            uVar23 = uVar20 & 0xffffffff;
            uVar34 = (uint)uVar20;
            if (iVar29 == 0) break;
            uVar20 = uVar20 + 1;
            if (uVar20 == (ulong)uVar10 + lVar36 + 1) {
              uVar13 = 0xfffffffc;
              goto LAB_71007aabf0;
            }
          }
        }
      }
      else if (0 < iVar29) {
        if (iVar32 <= (int)uVar34) goto LAB_71007ab9f8;
        lVar14 = param_1[0x18b];
        lVar36 = (long)(int)uVar34;
        uVar10 = iVar32 - uVar34;
        uVar20 = (ulong)(int)(uVar34 + 1);
        while( true ) {
          iVar29 = iVar29 + -1;
          *(ushort *)(lVar14 + -2 + uVar20 * 2) = (ushort)bVar9;
          uVar23 = uVar20 & 0xffffffff;
          uVar34 = (uint)uVar20;
          if (iVar29 == 0) break;
          uVar20 = uVar20 + 1;
          if ((ulong)uVar10 + lVar36 + 1 == uVar20) {
            uVar13 = 0xfffffffc;
            goto LAB_71007aabf0;
          }
        }
      }
    }
    else {
      if (iVar32 <= (int)uVar34) goto LAB_71007ab9f8;
      uVar37 = uVar30 - 1;
      if (uVar37 < 0x10) {
        uVar10 = *(uint *)((long)param_1 + 0x1e8c);
        bVar9 = *(byte *)((long)param_1 + (ulong)(uVar10 + uVar37) + 0xe8c);
        local_90 = (uint)bVar9;
        if (uVar37 < 4) {
LAB_71007ab7ec:
          uVar37 = uVar37 + uVar10;
          do {
            uVar11 = uVar37 - 1;
            uVar23 = (ulong)uVar37;
            uVar37 = uVar37 - 1;
            *(undefined1 *)((long)param_1 + uVar23 + 0xe8c) =
                 *(undefined1 *)((long)param_1 + (ulong)uVar11 + 0xe8c);
          } while (uVar10 != uVar37);
        }
        else {
          iVar41 = (uVar10 - 2) + uVar30;
          do {
            iVar2 = iVar41 + -4;
            *(undefined1 *)((long)param_1 + (long)(iVar41 + 1) + 0xe8c) =
                 *(undefined1 *)((long)param_1 + (long)iVar41 + 0xe8c);
            *(undefined1 *)((long)param_1 + (long)iVar41 + 0xe8c) =
                 *(undefined1 *)((long)param_1 + (long)(iVar41 + -1) + 0xe8c);
            *(undefined1 *)((long)param_1 + (long)(iVar41 + -1) + 0xe8c) =
                 *(undefined1 *)((long)param_1 + (long)(iVar41 + -2) + 0xe8c);
            *(undefined1 *)((long)param_1 + (long)(iVar41 + -2) + 0xe8c) =
                 *(undefined1 *)((long)param_1 + (long)(iVar41 + -3) + 0xe8c);
            iVar41 = iVar2;
          } while (3 < (1 - uVar10) + iVar2);
          uVar37 = (uVar30 - 5) + (uVar30 - 5 >> 2) * -4;
          if (uVar37 != 0) goto LAB_71007ab7ec;
        }
        *(byte *)((long)param_1 + (long)(int)uVar10 + 0xe8c) = bVar9;
      }
      else {
        uVar23 = (ulong)(uVar37 >> 4);
        iVar2 = *(int *)((long)param_1 + uVar23 * 4 + 0x1e8c);
        iVar41 = iVar2 + (uVar37 & 0xf);
        bVar9 = *(byte *)((long)param_1 + (long)iVar41 + 0xe8c);
        local_90 = (uint)bVar9;
        if (iVar2 < iVar41) {
          uVar20 = (ulong)((uVar37 & 0xf) - 1);
          FUN_710080f900((long)param_1 + (((long)iVar41 + 0xe8c) - uVar20),
                         (long)param_1 + (((long)iVar41 + 0xe8b) - uVar20),uVar20 + 1);
        }
        piVar17 = (int *)((long)param_1 + (uVar23 + 0x7a3) * 4);
        *(int *)((long)param_1 + uVar23 * 4 + 0x1e8c) = iVar2 + 1;
        do {
          iVar41 = *piVar17;
          *piVar17 = iVar41 + -1;
          piVar17 = piVar17 + -1;
          *(undefined1 *)((long)param_1 + (long)(iVar41 + -1) + 0xe8c) =
               *(undefined1 *)((long)param_1 + (long)(*piVar17 + 0xf) + 0xe8c);
        } while ((int *)((long)param_1 + uVar23 * 4 + (ulong)((uVar37 >> 4) - 1) * -4 + 0x1e88) !=
                 piVar17);
        iVar41 = *(int *)((long)param_1 + 0x1e8c) + -1;
        *(int *)((long)param_1 + 0x1e8c) = iVar41;
        *(byte *)((long)param_1 + (long)iVar41 + 0xe8c) = bVar9;
        if (iVar41 == 0) {
          lVar14 = 0xff0;
          piVar17 = (int *)(param_1 + 0x3d9);
          do {
            lVar36 = (long)*piVar17;
            puVar15 = (undefined1 *)((long)param_1 + lVar36 + 0xe9b);
            do {
              puVar16 = puVar15 + -1;
              puVar15[lVar14 - lVar36] = *puVar15;
              puVar15 = puVar16;
            } while ((undefined1 *)((long)param_1 + lVar36 + 0xe8b) != puVar16);
            *piVar17 = (int)lVar14;
            lVar14 = lVar14 + -0x10;
            piVar17 = piVar17 + -1;
          } while (lVar14 != 0xef0);
        }
      }
      bVar9 = *(byte *)((long)param_1 + (long)(int)local_90 + 0xd8c);
      bVar3 = *(byte *)((long)param_1 + (long)(int)local_90 + 0xd8c);
      *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x44) =
           *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x44) + 1;
      if (*(char *)((long)param_1 + 0x2c) == '\0') {
        *(uint *)(param_1[0x18a] + (long)(int)uVar34 * 4) = (uint)bVar3;
      }
      else {
        *(ushort *)(param_1[0x18b] + (long)(int)uVar34 * 2) = (ushort)bVar3;
      }
      uVar34 = uVar34 + 1;
      uVar23 = (ulong)uVar34;
      if (iVar24 == 0) {
        iVar31 = iVar31 + 1;
        if ((int)uVar33 <= iVar31) goto LAB_71007ab9f8;
        uVar20 = (ulong)*(byte *)((long)param_1 + (long)iVar31 + 0x1ecc);
        iVar24 = 0x32;
        lVar26 = uVar20 * 0x408;
        local_9c = (uint)*(byte *)((long)param_1 + (long)iVar31 + 0x1ecc);
        local_a4 = *(uint *)((long)param_1 + (uVar20 + 16000) * 4 + 0xc);
        lVar27 = (long)param_1 + lVar26 + 0xb17c;
        lVar28 = (long)param_1 + lVar26 + 0xe1dc;
        lVar26 = (long)param_1 + lVar26 + 0xc9ac;
      }
      iVar24 = iVar24 + -1;
      uVar40 = local_a4;
switchD_71007aac94_caseD_28:
      uVar34 = (uint)uVar23;
      iVar41 = *(int *)((long)param_1 + 0x24);
      *(undefined4 *)(param_1 + 1) = 0x28;
      while (iVar41 < (int)uVar40) {
        puVar39 = (undefined8 *)*param_1;
        iVar2 = *(int *)(puVar39 + 1);
        if (iVar2 == 0) goto LAB_71007ac788;
        pbVar35 = (byte *)*puVar39;
        iVar41 = iVar41 + 8;
        iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
        *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
        *(int *)((long)param_1 + 0x24) = iVar41;
        *puVar39 = pbVar35 + 1;
        *(int *)(puVar39 + 1) = iVar2 + -1;
        *(int *)((long)puVar39 + 0xc) = iVar1;
        if (iVar1 == 0) {
          *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
        }
      }
      uVar10 = iVar41 - uVar40;
      uVar43 = (1 << (ulong)(uVar40 & 0x1f)) - 1U & *(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f)
      ;
      while( true ) {
        uVar34 = (uint)uVar23;
        uVar37 = (uint)uVar38;
        *(uint *)((long)param_1 + 0x24) = uVar10;
        if (0x14 < (int)uVar40) goto LAB_71007ab9f8;
        if ((int)uVar43 <= *(int *)(lVar27 + (long)(int)uVar40 * 4)) break;
        uVar40 = uVar40 + 1;
switchD_71007aac94_caseD_29:
        uVar34 = (uint)uVar23;
        iVar41 = *(int *)((long)param_1 + 0x24);
        *(undefined4 *)(param_1 + 1) = 0x29;
        while (iVar41 < 1) {
          puVar39 = (undefined8 *)*param_1;
          iVar2 = *(int *)(puVar39 + 1);
          if (iVar2 == 0) goto LAB_71007ac788;
          pbVar35 = (byte *)*puVar39;
          iVar41 = iVar41 + 8;
          iVar1 = *(int *)((long)puVar39 + 0xc) + 1;
          *(uint *)(param_1 + 4) = (uint)*pbVar35 | *(int *)(param_1 + 4) << 8;
          *(int *)((long)param_1 + 0x24) = iVar41;
          *puVar39 = pbVar35 + 1;
          *(int *)(puVar39 + 1) = iVar2 + -1;
          *(int *)((long)puVar39 + 0xc) = iVar1;
          if (iVar1 == 0) {
            *(int *)(puVar39 + 2) = *(int *)(puVar39 + 2) + 1;
          }
        }
        uVar10 = iVar41 - 1;
        uVar44 = *(uint *)(param_1 + 4) >> (ulong)(uVar10 & 0x1f) & 1;
        uVar43 = uVar44 | uVar43 << 1;
      }
      uVar13 = 0xfffffffc;
      uVar10 = uVar43 - *(int *)(lVar26 + (long)(int)uVar40 * 4);
      if (0x101 < uVar10) goto LAB_71007aabf0;
      uVar30 = *(uint *)(lVar28 + (long)(int)uVar10 * 4);
    }
    goto LAB_71007ab720;
  }
  if (-1 < *(int *)(param_1 + 7) && *(int *)(param_1 + 7) < (int)uVar34) {
    uVar42 = 0;
    do {
      iVar41 = *(int *)((long)param_1 + 0x44 + uVar42 * 4);
      if (iVar41 < 0 || (int)uVar34 < iVar41) {
        uVar13 = 0xfffffffc;
        goto LAB_71007aabf0;
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 != 0x100);
    *(undefined4 *)(param_1 + 0x89) = 0;
    piVar17 = (int *)FUN_710080f900((long)param_1 + 0x44c,(long)param_1 + 0x44,0x400);
    iVar41 = 0;
    do {
      iVar41 = iVar41 + *piVar17;
      piVar18 = piVar17 + 1;
      *piVar17 = iVar41;
      piVar17 = piVar18;
    } while ((int *)((long)param_1 + 0x84c) != piVar18);
    piVar17 = (int *)(param_1 + 0x89);
    uVar42 = 0;
    do {
      if (piVar17[uVar42] < 0 || (int)uVar34 < piVar17[uVar42]) {
        uVar13 = 0xfffffffc;
        goto LAB_71007aabf0;
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 != 0x101);
    uVar42 = 1;
    piVar18 = piVar17;
    do {
      if (piVar18[1] < *piVar18) {
        uVar13 = 0xfffffffc;
        goto LAB_71007aabf0;
      }
      uVar10 = (int)uVar42 + 1;
      uVar42 = (ulong)uVar10;
      piVar18 = piVar18 + 1;
    } while (uVar10 != 0x101);
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 1) = 2;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 0x18e) = 0xffffffff;
    if (1 < *(int *)((long)param_1 + 0x34)) {
      lVar14 = FUN_7100834b00();
      FUN_710080b100("rt+rld",1,6,*(undefined8 *)(lVar14 + 0x18));
    }
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      lVar36 = param_1[0x18a];
      for (lVar14 = 0; (int)lVar14 < (int)uVar34; lVar14 = lVar14 + 1) {
        bVar9 = (byte)*(undefined4 *)(lVar36 + lVar14 * 4);
        lVar21 = (long)*(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x448) * 4;
        *(uint *)(lVar36 + lVar21) = *(uint *)(lVar36 + lVar21) | (int)lVar14 << 8;
        *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x448) =
             *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x448) + 1;
      }
      uVar10 = uVar34;
      if ((int)uVar34 < 0) {
        uVar10 = 0;
      }
      uVar42 = (ulong)uVar10;
      uVar10 = *(uint *)(lVar36 + (long)*(int *)(param_1 + 7) * 4);
      *(undefined4 *)((long)param_1 + 0x444) = 0;
      uVar10 = uVar10 >> 8;
      bVar7 = (uint)(*(int *)(param_1 + 5) * 100000) <= uVar10;
      *(uint *)((long)param_1 + 0x3c) = uVar10;
      if (*(char *)((long)param_1 + 0x14) == '\0') {
        if (bVar7) {
          return 1;
        }
        uVar10 = *(uint *)(lVar36 + (ulong)uVar10 * 4);
        uVar13 = 0;
        *(undefined4 *)((long)param_1 + 0x444) = 1;
        *(uint *)((long)param_1 + 0x3c) = uVar10 >> 8;
        *(uint *)(param_1 + 8) = uVar10 & 0xff;
      }
      else {
        param_1[3] = 0;
        if (bVar7) {
          return 1;
        }
        uVar10 = *(uint *)(lVar36 + (ulong)uVar10 * 4);
        uVar13 = 0;
        *(undefined4 *)((long)param_1 + 0x444) = 1;
        iVar41 = DAT_7100af3f68;
        *(uint *)((long)param_1 + 0x3c) = uVar10 >> 8;
        *(int *)(param_1 + 3) = iVar41 + -1;
        *(undefined4 *)((long)param_1 + 0x1c) = 1;
        *(uint *)(param_1 + 8) = uVar10 & 0xff ^ (uint)(iVar41 + -1 == 1);
      }
    }
    else {
      FUN_710080f900((int *)((long)param_1 + 0x84c),piVar17,0x404);
      uVar42 = 0;
      while( true ) {
        lVar36 = param_1[0x18b];
        lVar14 = param_1[0x18c];
        if ((int)uVar34 <= (int)uVar42) break;
        bVar9 = *(byte *)(lVar36 + uVar42 * 2);
        lVar21 = (long)((int)uVar42 >> 1);
        iVar41 = *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x84c);
        *(short *)(lVar36 + uVar42 * 2) = (short)iVar41;
        if ((uVar42 & 1) == 0) {
          *(byte *)(lVar14 + lVar21) =
               *(byte *)(lVar14 + lVar21) & 0xf0 | (byte)((uint)iVar41 >> 0x10);
        }
        else {
          *(byte *)(lVar14 + lVar21) =
               *(byte *)(lVar14 + lVar21) & 0xf | (byte)((iVar41 >> 0x10) << 4);
        }
        uVar42 = uVar42 + 1;
        *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x84c) =
             *(int *)((long)param_1 + (ulong)bVar9 * 4 + 0x84c) + 1;
      }
      uVar10 = *(uint *)(param_1 + 7);
      uVar11 = (*(byte *)(lVar14 + ((int)uVar10 >> 1)) >> (ulong)((uVar10 & 1) << 2) & 0xf) << 0x10
               | (uint)*(ushort *)(lVar36 + (long)(int)uVar10 * 2);
      while( true ) {
        uVar42 = (ulong)uVar11;
        iVar41 = (int)uVar11 >> 1;
        uVar5 = *(ushort *)(lVar36 + (long)(int)uVar11 * 2);
        bVar9 = *(byte *)(lVar14 + iVar41);
        *(short *)(lVar36 + uVar42 * 2) = (short)uVar10;
        uVar45 = (bVar9 >> (ulong)((uVar11 & 1) << 2) & 0xf) << 0x10 | (uint)uVar5;
        if ((uVar11 & 1) == 0) {
          bVar9 = *(byte *)(lVar14 + iVar41) & 0xf0 | (byte)(uVar10 >> 0x10);
        }
        else {
          bVar9 = *(byte *)(lVar14 + iVar41) & 0xf | (byte)(((int)uVar10 >> 0x10) << 4);
        }
        *(byte *)(lVar14 + iVar41) = bVar9;
        if (*(uint *)(param_1 + 7) == uVar11) break;
        lVar36 = param_1[0x18b];
        lVar14 = param_1[0x18c];
        uVar10 = uVar11;
        uVar11 = uVar45;
      }
      *(uint *)((long)param_1 + 0x3c) = uVar11;
      *(undefined4 *)((long)param_1 + 0x444) = 0;
      bVar7 = (uint)(*(int *)(param_1 + 5) * 100000) <= uVar11;
      if (*(char *)((long)param_1 + 0x14) == '\0') {
        if (bVar7) {
          return 1;
        }
        uVar12 = FUN_71007a9b00(uVar42,piVar17);
        uVar13 = 0;
        uVar10 = *(uint *)((long)param_1 + 0x3c);
        uVar5 = *(ushort *)(param_1[0x18b] + (ulong)uVar10 * 2);
        *(undefined4 *)(param_1 + 8) = uVar12;
        *(uint *)((long)param_1 + 0x3c) =
             (*(byte *)(param_1[0x18c] + (ulong)(uVar10 >> 1)) >> (ulong)((uVar10 & 1) << 2) & 0xf)
             << 0x10 | (uint)uVar5;
        *(int *)((long)param_1 + 0x444) = *(int *)((long)param_1 + 0x444) + 1;
      }
      else {
        param_1[3] = 0;
        if (bVar7) {
          return 1;
        }
        uVar11 = FUN_71007a9b00(uVar42,piVar17);
        uVar10 = *(uint *)((long)param_1 + 0x3c);
        uVar5 = *(ushort *)(param_1[0x18b] + (ulong)uVar10 * 2);
        *(uint *)(param_1 + 8) = uVar11;
        iVar41 = *(int *)(param_1 + 3);
        *(uint *)((long)param_1 + 0x3c) =
             (*(byte *)(param_1[0x18c] + (ulong)(uVar10 >> 1)) >> (ulong)((uVar10 & 1) << 2) & 0xf)
             << 0x10 | (uint)uVar5;
        *(int *)((long)param_1 + 0x444) = *(int *)((long)param_1 + 0x444) + 1;
        if (iVar41 == 0) {
          iVar2 = *(int *)((long)param_1 + 0x1c);
          iVar41 = (&DAT_7100af3f68)[iVar2];
          *(int *)(param_1 + 3) = iVar41;
          if (iVar2 == 0x1ff) {
            *(undefined4 *)((long)param_1 + 0x1c) = 0;
          }
          else {
            *(int *)((long)param_1 + 0x1c) = iVar2 + 1;
          }
        }
        uVar13 = 0;
        *(int *)(param_1 + 3) = iVar41 + -1;
        *(uint *)(param_1 + 8) = iVar41 + -1 == 1 ^ uVar11;
      }
    }
    goto LAB_71007aabf0;
  }
  goto LAB_71007ab9f8;
LAB_71007ac788:
  uVar37 = (uint)uVar38;
  uVar13 = 0;
  goto LAB_71007aabf0;
}



// ===== FUN_71007ad500 @ 71007ad500 (size=344) =====

void FUN_71007ad500(undefined8 *param_1,int *param_2,long param_3,byte *param_4,uint param_5,
                   int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  long lVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar5;
  
  if ((int)param_5 <= param_6) {
    uVar7 = param_5;
    do {
      if (0 < param_7) {
        iVar8 = 0;
        do {
          lVar6 = 0;
          do {
            if (param_4[lVar6] == uVar7) {
              *(int *)(param_3 + (long)iVar8 * 4) = (int)lVar6;
              iVar8 = iVar8 + 1;
            }
            lVar6 = lVar6 + 1;
          } while (param_7 != lVar6);
          uVar7 = uVar7 + 1;
        } while (param_6 + 1U != uVar7);
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_6 + 1U);
  }
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
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
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  if (0 < param_7) {
    pbVar5 = param_4;
    do {
      pbVar4 = pbVar5 + 1;
      param_2[(ulong)*pbVar5 + 1] = param_2[(ulong)*pbVar5 + 1] + 1;
      pbVar5 = pbVar4;
    } while (param_4 + param_7 != pbVar4);
  }
  iVar8 = *param_2;
  piVar2 = param_2 + 1;
  do {
    iVar8 = iVar8 + *piVar2;
    piVar3 = piVar2 + 1;
    *piVar2 = iVar8;
    piVar2 = piVar3;
  } while (piVar3 != param_2 + 0x17);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  if ((int)param_5 <= param_6) {
    lVar6 = (long)(int)param_5;
    iVar8 = 0;
    do {
      iVar1 = ((param_2 + 1)[lVar6] - param_2[lVar6]) + iVar8;
      iVar8 = iVar1 * 2;
      *(int *)((long)param_1 + lVar6 * 4) = iVar1 + -1;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 <= param_6);
  }
  if ((int)(param_5 + 1) <= param_6) {
    lVar6 = (long)(int)(param_5 + 1);
    do {
      param_2[lVar6] = (*(int *)((long)param_1 + lVar6 * 4 + -4) + 1) * 2 - param_2[lVar6];
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 <= param_6);
  }
  return;
}



// ===== FUN_71007ad660 @ 71007ad660 (size=76) =====

void FUN_71007ad660(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  do {
    (*(code *)*param_1)(param_1[1]);
    puVar1 = (undefined8 *)param_1[2];
    thunk_FUN_710081c200(param_1,0x18);
    param_1 = puVar1;
  } while (puVar1 != (undefined8 *)0x0);
  return;
}



// ===== FUN_71007ad6c0 @ 71007ad6c0 (size=28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007ad6c0(void)

{
  FUN_7100835ba0(_DAT_7100d20ff8);
  return;
}



// ===== FUN_71007ad6e0 @ 71007ad6e0 (size=116) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007ad6e0(void)

{
  int iVar1;
  
  if (((_DAT_7100d20ff0 & 1) == 0) && (iVar1 = FUN_71007af260(), iVar1 != 0)) {
    FUN_7100835b20(&DAT_7100d20ff8,FUN_71007ad660);
    FUN_710081f2e0(FUN_71007ad6c0);
    FUN_71007af440(&DAT_7100d20ff0);
    FUN_710081f2e0(FUN_71007ad780);
    return;
  }
  FUN_710081f2e0(FUN_71007ad780);
  return;
}



// ===== FUN_71007ad780 @ 71007ad780 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007ad780(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_7100835b80(_DAT_7100d20ff8);
  FUN_7100835b60(_DAT_7100d20ff8,0);
  while (puVar1 != (undefined8 *)0x0) {
    (*(code *)*puVar1)(puVar1[1]);
    puVar2 = (undefined8 *)puVar1[2];
    thunk_FUN_710081c200(puVar1,0x18);
    puVar1 = puVar2;
  }
  return;
}



// ===== FUN_71007ad7e0 @ 71007ad7e0 (size=128) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007ad7e0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_7100835a40(0x7100d20fe8,FUN_71007ad6e0);
  uVar2 = FUN_7100835b80(_DAT_7100d20ff8);
  puVar3 = (undefined8 *)FUN_71007af6c0(0x18,&DAT_71009ccd70);
  if (puVar3 == (undefined8 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    uVar1 = _DAT_7100d20ff8;
    puVar3[2] = uVar2;
    FUN_7100835b60(uVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_71007ad880 @ 71007ad880 (size=20) =====

void FUN_71007ad880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec478;
  FUN_71007ae160();
  return;
}



// ===== FUN_71007ad8a0 @ 71007ad8a0 (size=32) =====

void FUN_71007ad8a0(undefined8 param_1)

{
  FUN_71007ad880();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007ad8c0 @ 71007ad8c0 (size=104) =====

undefined8 FUN_71007ad8c0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = 0;
  local_10 = 0x1000000000;
  local_8 = 0;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,*param_3,&local_18);
  if (((uint)local_10 & 6) == 6) {
    *param_3 = local_18;
    return 1;
  }
  return 0;
}



// ===== FUN_71007ad960 @ 71007ad960 (size=20) =====

void FUN_71007ad960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec4b8;
  return;
}



// ===== FUN_71007ad980 @ 71007ad980 (size=32) =====

void FUN_71007ad980(undefined8 param_1)

{
  FUN_71007ad960();
  thunk_FUN_710081c200(param_1,0x10);
  return;
}



// ===== FUN_71007ad9a0 @ 71007ad9a0 (size=144) =====

bool FUN_71007ad9a0(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar2 = *(char **)(param_1 + 8);
  pcVar3 = *(char **)(param_2 + 8);
  if (pcVar2 == pcVar3) {
    bVar4 = true;
    *param_4 = param_3;
    param_4[2] = 0x10;
    *(undefined4 *)(param_4 + 1) = 6;
  }
  else {
    bVar4 = false;
    if (*pcVar2 != '*') {
      if (*pcVar3 == '*') {
        pcVar3 = pcVar3 + 1;
      }
      iVar1 = FUN_710080aec0(pcVar2,pcVar3);
      if (iVar1 == 0) {
        *param_4 = param_3;
        param_4[2] = 0x10;
        *(undefined4 *)(param_4 + 1) = 6;
      }
      return iVar1 == 0;
    }
  }
  return bVar4;
}



// ===== FUN_71007adb00 @ 71007adb00 (size=236) =====

undefined8
FUN_71007adb00(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
              long param_6,long param_7,long *param_8)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 8);
  if (param_5 == param_7) {
    pcVar2 = *(char **)(param_6 + 8);
    if (pcVar2 == pcVar3) {
LAB_71007adbdc:
      *(undefined4 *)((long)param_8 + 0xc) = param_3;
      return 0;
    }
    if (*pcVar3 == '*') {
      if (*(char **)(param_4 + 8) != pcVar3) {
        return 0;
      }
      goto LAB_71007adb54;
    }
    if (*pcVar2 == '*') {
      pcVar2 = pcVar2 + 1;
    }
    iVar1 = FUN_710080aec0(pcVar3,pcVar2);
    if (iVar1 == 0) goto LAB_71007adbdc;
    pcVar2 = *(char **)(param_4 + 8);
    if (pcVar2 == pcVar3) goto LAB_71007adb54;
  }
  else {
    pcVar2 = *(char **)(param_4 + 8);
    if (pcVar2 == pcVar3) goto LAB_71007adb54;
    if (*pcVar3 == '*') {
      return 0;
    }
  }
  if (*pcVar2 == '*') {
    pcVar2 = pcVar2 + 1;
  }
  iVar1 = FUN_710080aec0(pcVar3,pcVar2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_71007adb54:
  *param_8 = param_5;
  *(undefined4 *)(param_8 + 1) = param_3;
  *(undefined4 *)(param_8 + 2) = 1;
  return 0;
}



// ===== thunk_FUN_710081c200 @ 71007adc00 (size=4) =====

void thunk_FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== FUN_71007adc20 @ 71007adc20 (size=8) =====

void FUN_71007adc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_710081c200(param_1,param_3);
  return;
}



// ===== thunk_FUN_710081c200 @ 71007adc40 (size=4) =====

void thunk_FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== FUN_71007adcc0 @ 71007adcc0 (size=56) =====

void FUN_71007adcc0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aec540;
  FUN_71007ae160();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007add20 @ 71007add20 (size=56) =====

void FUN_71007add20(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aec568;
  FUN_71007ae160();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007add60 @ 71007add60 (size=276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007add60(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  iVar5 = FUN_7100835660(&DAT_7100d21000);
  if (iVar5 != 0) {
    FUN_7100003834();
    goto LAB_71007ade6c;
  }
  plVar9 = (long *)(param_1 + -0x10);
  if (_DAT_7100d21010 == (long *)0x0) {
LAB_71007ade18:
    *(long **)(param_1 + -8) = _DAT_7100d21010;
    _DAT_7100d21010 = plVar9;
  }
  else {
    lVar10 = *(long *)(param_1 + -0x10);
    plVar2 = (long *)((long)plVar9 + lVar10);
    if (plVar2 <= _DAT_7100d21010 && _DAT_7100d21010 != plVar2) goto LAB_71007ade18;
    plVar7 = (long *)_DAT_7100d21010[1];
    if (_DAT_7100d21010 == plVar2) {
      *(long *)(param_1 + -0x10) = *_DAT_7100d21010 + lVar10;
      *(long **)(param_1 + -8) = plVar7;
      _DAT_7100d21010 = plVar9;
    }
    else {
      plVar1 = (long *)&DAT_7100d21010;
      plVar8 = _DAT_7100d21010;
      while (plVar4 = plVar7, plVar4 != (long *)0x0) {
        if (plVar2 <= plVar4) {
          if (plVar4 == plVar2) {
            lVar6 = *(long *)plVar8[1];
            plVar8[1] = ((long *)plVar8[1])[1];
            plVar8 = (long *)*plVar1;
            lVar10 = lVar10 + lVar6;
          }
          break;
        }
        plVar1 = plVar8 + 1;
        plVar8 = plVar4;
        plVar7 = (long *)plVar4[1];
      }
      if (plVar9 == (long *)((long)plVar8 + *plVar8)) {
        *plVar8 = *plVar8 + lVar10;
      }
      else {
        lVar6 = plVar8[1];
        *(long *)(param_1 + -0x10) = lVar10;
        *(long *)(param_1 + -8) = lVar6;
        *(long **)(*plVar1 + 8) = plVar9;
      }
    }
  }
  iVar5 = FUN_71008356e0(&DAT_7100d21000);
  if (iVar5 == 0) {
    return;
  }
LAB_71007ade6c:
  FUN_7100003868();
                    /* WARNING: Does not return */
  pcVar3 = (code *)UndefinedInstructionException(0,0x71007ade70);
  (*pcVar3)();
}



// ===== FUN_71007ade80 @ 71007ade80 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_71007ade80(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  
  iVar2 = FUN_7100835660(&DAT_7100d21000);
  if (iVar2 == 0) {
    uVar4 = param_1 + 0x1f & 0xfffffffffffffff0;
    if (0xffffffffffffffef < param_1) {
      uVar4 = 0x10;
    }
    puVar5 = (ulong *)&DAT_7100d21010;
    puVar7 = _DAT_7100d21010;
    if (_DAT_7100d21010 == (ulong *)0x0) {
      puVar7 = (ulong *)0x0;
    }
    else {
      do {
        if (uVar4 <= *puVar7) {
          puVar7 = (ulong *)*puVar5;
          uVar6 = *puVar7 - uVar4;
          if (uVar6 < 0x10) {
            *puVar7 = *puVar7;
            uVar3 = puVar7[1];
          }
          else {
            uVar3 = (long)puVar7 + uVar4;
            *(ulong *)(uVar3 + 8) = puVar7[1];
            *(ulong *)((long)puVar7 + uVar4) = uVar6;
            puVar7 = (ulong *)*puVar5;
            *puVar7 = uVar4;
          }
          puVar7 = puVar7 + 2;
          *puVar5 = uVar3;
          break;
        }
        puVar5 = puVar7 + 1;
        puVar7 = (ulong *)puVar7[1];
      } while (puVar7 != (ulong *)0x0);
    }
    iVar2 = FUN_71008356e0(&DAT_7100d21000);
    if (iVar2 == 0) {
      return puVar7;
    }
  }
  else {
    FUN_7100003834();
  }
  FUN_7100003868();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007adf4c);
  (*pcVar1)();
}



// ===== FUN_71007adf60 @ 71007adf60 (size=88) =====

undefined8 * FUN_71007adf60(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_710081c1c0(param_1 + 0x80);
  if ((puVar1 == (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)FUN_71007ade80(param_1 + 0x80), puVar1 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003914();
  }
  *puVar1 = 0;
  puVar1[1] = 0;
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
  return puVar1 + 0x10;
}



// ===== FUN_71007adfc0 @ 71007adfc0 (size=40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007adfc0(long param_1)

{
  if (_DAT_7100d21018 + _DAT_7100d21020 <= param_1 - 0x80U || param_1 - 0x80U <= _DAT_7100d21018) {
    FUN_710081c200();
    return;
  }
  FUN_71007add60();
  return;
}



// ===== FUN_71007ae000 @ 71007ae000 (size=156) =====

long FUN_71007ae000(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)FUN_71007ae2a0();
  plVar5 = param_1 + -10;
  plVar4 = (long *)*plVar3;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar1 = (int)param_1[-5];
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + -5) = iVar2 + 1;
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    if (plVar4 != plVar5) {
      param_1[-6] = (long)plVar4;
      *plVar3 = (long)plVar5;
    }
    return param_1[-1];
  }
  if (plVar4 == (long *)0x0) {
    *plVar3 = (long)plVar5;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003914();
}



// ===== FUN_71007ae0a0 @ 71007ae0a0 (size=152) =====

void FUN_71007ae0a0(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  plVar1 = (long *)FUN_71007ae260();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (1 < *(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar1 = 0;
      FUN_71008049e0(lVar2 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar2 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        return;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
        FUN_71008049e0(lVar2 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003914();
      }
    }
    *(int *)(lVar2 + 0x28) = iVar3;
  }
  return;
}



// ===== FUN_71007ae140 @ 71007ae140 (size=32) =====

bool FUN_71007ae140(void)

{
  long lVar1;
  
  lVar1 = FUN_71007ae2a0();
  return *(int *)(lVar1 + 8) != 0;
}



// ===== FUN_71007ae160 @ 71007ae160 (size=4) =====

void FUN_71007ae160(void)

{
  return;
}



// ===== FUN_71007ae180 @ 71007ae180 (size=20) =====

void FUN_71007ae180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec5c8;
  FUN_71007ae160();
  return;
}



// ===== FUN_71007ae1e0 @ 71007ae1e0 (size=32) =====

void FUN_71007ae1e0(undefined8 param_1)

{
  FUN_71007ae180();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007ae200 @ 71007ae200 (size=68) =====

void FUN_71007ae200(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar2 = *param_1;
  while (lVar2 != 0) {
    lVar1 = lVar2 + 0x50;
    lVar2 = *(long *)(lVar2 + 0x20);
    FUN_71008049e0(lVar1);
  }
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007ae260 @ 71007ae260 (size=56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007ae260(void)

{
  undefined8 uVar1;
  
  if ((DAT_7100d2102c & 1) == 0) {
    return 0x7100d21030;
  }
  uVar1 = FUN_7100835b80(_DAT_7100d21028);
  return uVar1;
}



// ===== FUN_71007ae2a0 @ 71007ae2a0 (size=128) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_71007ae2a0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((DAT_7100d2102c & 1) == 0) {
    return (undefined8 *)0x7100d21030;
  }
  puVar2 = (undefined8 *)FUN_7100835b80(_DAT_7100d21028);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_710081c1c0(0x10);
    if ((puVar2 != (undefined8 *)0x0) && (iVar1 = FUN_7100835b60(_DAT_7100d21028), iVar1 == 0)) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      return puVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_7100003914();
  }
  return puVar2;
}



// ===== FUN_71007ae320 @ 71007ae320 (size=124) =====

byte FUN_71007ae320(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *local_8;
  
  local_8 = (undefined8 *)*param_3;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((uVar2 & 1) != 0) {
    local_8 = (undefined8 *)*local_8;
  }
  bVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_8,1);
  if ((bVar1 & 1) != 0) {
    *param_3 = local_8;
  }
  return bVar1;
}



// ===== FUN_71007ae3a0 @ 71007ae3a0 (size=316) =====

uint * FUN_71007ae3a0(uint param_1,uint *param_2,uint *param_3,ulong *param_4)

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
    goto LAB_71007ae44c;
  }
  uVar1 = param_1 & 0xf;
  if (uVar1 == 4) {
LAB_71007ae45c:
    puVar5 = param_3 + 2;
    puVar8 = *(ulong **)param_3;
LAB_71007ae3e0:
    if (puVar8 == (ulong *)0x0) goto LAB_71007ae44c;
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
        if (uVar1 == 0) goto LAB_71007ae45c;
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
      goto LAB_71007ae3e0;
    }
    if (uVar1 == 0xb) {
      puVar5 = param_3 + 1;
      puVar8 = (ulong *)(long)(int)*param_3;
      goto LAB_71007ae3e0;
    }
    if (0xb < uVar1) {
      if (uVar1 != 0xc) {
LAB_71007ae4cc:
        FUN_710080f820();
                    /* WARNING: Does not return */
        pcVar4 = (code *)UndefinedInstructionException(0,0x71007ae4d8);
        (*pcVar4)();
      }
      goto LAB_71007ae45c;
    }
    if (uVar1 != 9) {
      if (uVar1 != 10) goto LAB_71007ae4cc;
      puVar5 = (uint *)((long)param_3 + 2);
      puVar8 = (ulong *)(long)(short)*param_3;
      goto LAB_71007ae3e0;
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
    if ((0x3f < uVar1) || ((bVar2 >> 6 & 1) == 0)) goto LAB_71007ae3e0;
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
LAB_71007ae44c:
  *param_4 = (ulong)puVar8;
  return puVar5;
}



// ===== FUN_71007ae4e0 @ 71007ae4e0 (size=100) =====

undefined8 FUN_71007ae4e0(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  
  if (param_1 == 0xff) {
    return 0;
  }
  param_1 = param_1 & 0x70;
  if (param_1 != 0x30) {
    if (param_1 < 0x31) {
      if (param_1 == 0x20) {
        uVar1 = FUN_7100804560(param_2);
        return uVar1;
      }
      if (param_1 < 0x21) {
        return 0;
      }
    }
    else {
      if (param_1 == 0x40) {
        uVar1 = FUN_7100804520(param_2);
        return uVar1;
      }
      if (param_1 == 0x50) {
        return 0;
      }
    }
    FUN_710080f820();
    param_2 = extraout_x1;
  }
  uVar1 = FUN_7100804540(param_2);
  return uVar1;
}



// ===== FUN_71007ae560 @ 71007ae560 (size=264) =====

byte FUN_71007ae560(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 local_18 [2];
  undefined8 local_8;
  byte *pbVar8;
  
  pbVar7 = (byte *)(*(long *)(param_1 + 0x18) + ~param_4);
  local_18[0] = param_3;
  do {
    uVar6 = 0;
    uVar4 = 0;
    pbVar8 = pbVar7;
    do {
      pbVar7 = pbVar8 + 1;
      bVar3 = *pbVar8;
      uVar2 = uVar4 & 0x3f;
      uVar4 = (ulong)((int)uVar4 + 7);
      uVar6 = uVar6 | ((ulong)bVar3 & 0x7f) << uVar2;
      pbVar8 = pbVar7;
    } while ((char)bVar3 < '\0');
    if (uVar6 == 0) {
      return 0;
    }
    bVar3 = *(byte *)(param_1 + 0x28);
    if (bVar3 == 0xff) {
      lVar5 = 0;
    }
    else {
      bVar1 = bVar3 & 7;
      if (bVar1 == 2) {
        lVar5 = uVar6 * -2;
      }
      else {
        if (bVar1 < 3) {
          if ((bVar3 & 7) != 0) {
LAB_71007ae648:
            FUN_710080f820();
            return 0;
          }
        }
        else {
          lVar5 = uVar6 * -4;
          if (bVar1 == 3) goto LAB_71007ae5e4;
          if (bVar1 != 4) goto LAB_71007ae648;
        }
        lVar5 = uVar6 * -8;
      }
    }
LAB_71007ae5e4:
    FUN_71007ae3a0(bVar3,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + lVar5,&local_8)
    ;
    bVar3 = FUN_71007ae320(local_8,param_2,local_18);
    if ((bVar3 & 1) != 0) {
      return bVar3;
    }
  } while( true );
}



// ===== FUN_71007ae680 @ 71007ae680 (size=248) =====

void FUN_71007ae680(long param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  
  uVar7 = 0;
  if (param_1 != 0) {
    uVar7 = FUN_7100804520();
  }
  *param_3 = uVar7;
  pcVar6 = param_2 + 1;
  cVar1 = *param_2;
  if (cVar1 == -1) {
    param_3[1] = uVar7;
  }
  else {
    uVar7 = FUN_71007ae4e0(cVar1,param_1);
    pcVar6 = (char *)FUN_71007ae3a0(cVar1,uVar7,pcVar6,param_3 + 1);
  }
  pbVar9 = (byte *)0x0;
  pbVar4 = (byte *)(pcVar6 + 1);
  cVar1 = *pcVar6;
  *(char *)(param_3 + 5) = cVar1;
  if (cVar1 != -1) {
    uVar8 = 0;
    pbVar5 = pbVar4;
    do {
      pbVar4 = pbVar5 + 1;
      bVar2 = *pbVar5;
      uVar10 = uVar8 & 0x3f;
      uVar8 = (ulong)((int)uVar8 + 7);
      pbVar9 = (byte *)((ulong)pbVar9 | ((ulong)bVar2 & 0x7f) << uVar10);
      pbVar5 = pbVar4;
    } while ((char)bVar2 < '\0');
    pbVar9 = pbVar4 + (long)pbVar9;
  }
  param_3[3] = pbVar9;
  uVar8 = 0;
  uVar10 = 0;
  *(byte *)((long)param_3 + 0x29) = *pbVar4;
  pbVar9 = pbVar4 + 1;
  do {
    pbVar4 = pbVar9 + 1;
    bVar2 = *pbVar9;
    uVar3 = uVar8 & 0x3f;
    uVar8 = (ulong)((int)uVar8 + 7);
    uVar10 = uVar10 | ((ulong)bVar2 & 0x7f) << uVar3;
    pbVar9 = pbVar4;
  } while ((char)bVar2 < '\0');
  param_3[4] = pbVar4 + uVar10;
  return;
}



// ===== FUN_71007aedc0 @ 71007aedc0 (size=212) =====

void FUN_71007aedc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  FUN_71007ae000();
  iVar3 = *(int *)(param_1 + -0x24);
  uVar1 = *(undefined8 *)(param_1 + -0x18);
  local_20 = *(undefined8 *)(param_1 + -0x10);
  uVar2 = *(undefined8 *)(param_1 + -0x38);
  FUN_71007aef00(*(undefined8 *)(param_1 + -0x40));
  FUN_71007ae000();
  plVar5 = (long *)FUN_71007ae260();
  puVar6 = (undefined8 *)*plVar5;
  if ((puVar6[10] & 1) == 0) {
    puVar6 = puVar6 + 0xe;
  }
  else {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_71007ae680(0,uVar1,auStack_30);
  uVar7 = FUN_71007ae560(auStack_30,puVar6[-0xe],puVar6,(long)iVar3);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_71007ae560(auStack_30,&PTR_PTR_FUN_7100aec580,0,(long)iVar3);
    if ((uVar7 & 1) != 0) {
      puVar6 = (undefined8 *)FUN_71007adf60(8);
      *puVar6 = &PTR_FUN_7100aec5c8;
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(puVar6,&PTR_PTR_FUN_7100aec580,FUN_71007ae180);
    }
  }
  else {
    FUN_71007af060();
  }
  FUN_71007aeec0(uVar2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)UndefinedInstructionException(0,0x71007aeea4);
  (*pcVar4)();
}



// ===== FUN_71007aeec0 @ 71007aeec0 (size=28) =====

void FUN_71007aeec0(code *param_1)

{
  code *pcVar1;
  
  (*param_1)();
  FUN_710080f820();
  FUN_71007ae000();
  FUN_710080f820();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007aeed8);
  (*pcVar1)();
}



// ===== FUN_71007aeee0 @ 71007aeee0 (size=16) =====

undefined * FUN_71007aeee0(void)

{
  return PTR_FUN_7100af4788;
}



// ===== FUN_71007aef00 @ 71007aef00 (size=16) =====

void FUN_71007aef00(code *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_7100003914();
}



// ===== FUN_71007aef20 @ 71007aef20 (size=16) =====

undefined * FUN_71007aef20(void)

{
  return PTR_FUN_7100af4768;
}



// ===== FUN_71007aef40 @ 71007aef40 (size=92) =====

void FUN_71007aef40(uint param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  
  if (1 < param_1) {
    FUN_71007aeec0(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Does not return */
    pcVar4 = (code *)UndefinedInstructionException(0,0x71007aef98);
    (*pcVar4)();
  }
  piVar5 = (int *)(param_2 + -0x60);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))();
    }
    FUN_71007adfc0(param_2 + 0x20);
    return;
  }
  return;
}



// ===== FUN_71007aefa0 @ 71007aefa0 (size=84) =====

long FUN_71007aefa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + -0x80) = 0;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  uVar1 = FUN_71007aef20();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = FUN_71007aeee0();
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
  *(code **)(param_1 + -0x18) = FUN_71007aef40;
  return param_1 + -0x80;
}



// ===== FUN_71007af000 @ 71007af000 (size=92) =====

void FUN_71007af000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_71007ae2a0();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  puVar2 = (undefined4 *)FUN_71007aefa0(param_1,param_2,param_3);
  *puVar2 = 1;
  FUN_71008045a0(puVar2 + 0x18);
  FUN_71007ae000(puVar2 + 0x18);
                    /* WARNING: Subroutine does not return */
  FUN_7100003914();
}



// ===== FUN_71007af060 @ 71007af060 (size=112) =====

void FUN_71007af060(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_71007ae2a0();
  lVar2 = *plVar1;
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar2 + 0x28) = -*(int *)(lVar2 + 0x28);
    }
    else {
      *plVar1 = 0;
    }
    FUN_71008048a0(lVar2 + 0x50);
    FUN_71007ae000(lVar2 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003914();
}



// ===== FUN_71007af0e0 @ 71007af0e0 (size=20) =====

void FUN_71007af0e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec608;
  return;
}



// ===== FUN_71007af100 @ 71007af100 (size=32) =====

void FUN_71007af100(undefined8 param_1)

{
  FUN_71007af0e0();
  thunk_FUN_710081c200(param_1,0x10);
  return;
}



// ===== FUN_71007af1c0 @ 71007af1c0 (size=56) =====

void FUN_71007af1c0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aec6a0;
  FUN_71007ae160();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007af220 @ 71007af220 (size=56) =====

void FUN_71007af220(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aec678;
  FUN_71007ae160();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007af260 @ 71007af260 (size=336) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_71007af260(char *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  if (*param_1 != '\0') {
    return 0;
  }
  FUN_7100835a40(0x7100d21068,&LAB_71007af160);
  iVar2 = FUN_7100835660(_DAT_7100d21080);
  if (iVar2 == 0) {
    while (uVar5 = 0, *param_1 == '\0') {
      if (param_1[1] == '\0') {
        uVar5 = 1;
        param_1[1] = '\x01';
        break;
      }
      FUN_7100835a40(0x7100d21040,&LAB_71007af180);
      uVar3 = _DAT_7100d21060;
      FUN_7100835a40(0x7100d21068,&LAB_71007af160);
      iVar2 = FUN_7100835860(uVar3,_DAT_7100d21080);
      if (iVar2 != 0) {
        puVar4 = (undefined8 *)FUN_71007adf60(8);
        *puVar4 = &PTR_LAB_7100aec6a0;
                    /* WARNING: Subroutine does not return */
        FUN_71007af000(puVar4,&PTR_PTR_FUN_7100aec650,&LAB_71007af1a0);
      }
    }
    iVar2 = FUN_71008356e0(_DAT_7100d21080);
    if (iVar2 == 0) {
      return uVar5;
    }
    FUN_7100003868();
  }
  else {
    uVar3 = FUN_7100003834();
    iVar2 = FUN_71008356e0(_DAT_7100d21080);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100804760(uVar3);
    }
  }
  FUN_7100003868();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007af3ac);
  (*pcVar1)();
}



// ===== FUN_71007af440 @ 71007af440 (size=140) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007af440(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_7100835a40(0x7100d21068,&LAB_71007af160);
  iVar2 = FUN_7100835660(_DAT_7100d21080);
  if (iVar2 == 0) {
    *(undefined1 *)((long)param_1 + 1) = 0;
    *param_1 = 1;
    FUN_7100835a40(0x7100d21040,&LAB_71007af180);
    iVar2 = FUN_7100835840(_DAT_7100d21060);
    if (iVar2 != 0) goto LAB_71007af4c4;
    iVar2 = FUN_71008356e0(_DAT_7100d21080);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    FUN_7100003834();
  }
  FUN_7100003868();
LAB_71007af4c4:
  FUN_7100003934();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007af4c8);
  (*pcVar1)();
}



// ===== FUN_71007af4e0 @ 71007af4e0 (size=176) =====

ulong FUN_71007af4e0(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  plVar1 = (long *)((long)param_1 + (param_2 & 0xfffffffffffffff8));
  param_3 = param_2 * -0x395b586ca42e166b ^ param_3;
  if (param_1 != plVar1) {
    do {
      plVar3 = param_1 + 1;
      param_3 = ((*param_1 * -0x395b586ca42e166b ^ (ulong)(*param_1 * -0x395b586ca42e166b) >> 0x2f)
                 * -0x395b586ca42e166b ^ param_3) * -0x395b586ca42e166b;
      param_1 = plVar3;
    } while (plVar1 != plVar3);
  }
  param_2 = param_2 & 7;
  if (param_2 != 0) {
    uVar6 = 0;
    lVar4 = (long)((int)param_2 + -1);
    lVar5 = param_2 - lVar4;
    do {
      lVar2 = lVar4 + lVar5 + -1;
      lVar4 = lVar4 + -1;
      uVar6 = (ulong)*(byte *)((long)plVar1 + lVar2) + uVar6 * 0x100;
    } while (-1 < (int)lVar4);
    param_3 = (uVar6 ^ param_3) * -0x395b586ca42e166b;
  }
  uVar6 = (param_3 ^ param_3 >> 0x2f) * -0x395b586ca42e166b;
  return uVar6 ^ uVar6 >> 0x2f;
}



// ===== FUN_71007af5a0 @ 71007af5a0 (size=16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007af5a0(void)

{
  return _DAT_7100d21088;
}



// ===== FUN_71007af5c0 @ 71007af5c0 (size=104) =====

void FUN_71007af5c0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    lVar1 = FUN_710081c1c0(param_1);
    if (lVar1 != 0) {
      return;
    }
    pcVar2 = (code *)FUN_71007af5a0();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  puVar3 = (undefined8 *)FUN_71007adf60(8);
  *puVar3 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar3,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
}



// ===== FUN_71007af640 @ 71007af640 (size=128) =====

void FUN_71007af640(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 - 1 < (param_2 ^ param_2 - 1)) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    while( true ) {
      lVar2 = FUN_7100814b80(param_2,param_1);
      if (lVar2 != 0) {
        return;
      }
      pcVar1 = (code *)FUN_71007af5a0();
      if (pcVar1 == (code *)0x0) break;
      (*pcVar1)();
    }
  }
  puVar3 = (undefined8 *)FUN_71007adf60(8);
  *puVar3 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar3,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
}



// ===== FUN_71007af6c0 @ 71007af6c0 (size=20) =====

void FUN_71007af6c0(void)

{
  FUN_71007af5c0();
  return;
}



// ===== thunk_FUN_71007af5c0 @ 71007af700 (size=4) =====

void thunk_FUN_71007af5c0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    lVar1 = FUN_710081c1c0(param_1);
    if (lVar1 != 0) {
      return;
    }
    pcVar2 = (code *)FUN_71007af5a0();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  puVar3 = (undefined8 *)FUN_71007adf60(8);
  *puVar3 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar3,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
}



// ===== FUN_71007af740 @ 71007af740 (size=24) =====

void FUN_71007af740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec6e0;
  FUN_71007fa0e0();
  return;
}



// ===== FUN_71007af760 @ 71007af760 (size=32) =====

void FUN_71007af760(undefined8 param_1)

{
  FUN_71007af740();
  thunk_FUN_710081c200(param_1,0x20);
  return;
}



// ===== FUN_71007af840 @ 71007af840 (size=20) =====

void FUN_71007af840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec740;
  FUN_71007ad960();
  return;
}



// ===== FUN_71007af860 @ 71007af860 (size=32) =====

void FUN_71007af860(undefined8 param_1)

{
  FUN_71007af840();
  thunk_FUN_710081c200(param_1,0x18);
  return;
}



// ===== FUN_71007afae0 @ 71007afae0 (size=100) =====

void FUN_71007afae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_71007ad9a0();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0071007afb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
              (*(long **)(param_1 + 0x10),param_2,param_3,param_4);
    return;
  }
  return;
}



// ===== FUN_71007afbe0 @ 71007afbe0 (size=44) =====

bool FUN_71007afbe0(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 == '*') {
    param_2 = param_2 + 1;
  }
  iVar1 = FUN_710080aec0(param_1,param_2);
  return iVar1 == 0;
}



// ===== FUN_71007afc20 @ 71007afc20 (size=20) =====

void FUN_71007afc20(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_1 = param_2;
  param_1[1] = (long)plVar1;
  *plVar1 = (long)param_1;
  *(long **)(param_2 + 8) = param_1;
  return;
}



// ===== FUN_71007afc40 @ 71007afc40 (size=16) =====

void FUN_71007afc40(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  return;
}



// ===== FUN_71007afc60 @ 71007afc60 (size=4) =====

void FUN_71007afc60(void)

{
  return;
}



// ===== FUN_71007afcc0 @ 71007afcc0 (size=36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007afcc0(void)

{
  if (_DAT_7100d210a0 != 0) {
    return;
  }
  FUN_71007fb140(&DAT_7100d210a0,&DAT_71009ccdf0,0);
  return;
}



// ===== FUN_71007afd00 @ 71007afd00 (size=48) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007afd00(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_2;
  *param_1 = piVar3;
  if (piVar3 != _DAT_7100d210b8) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



// ===== FUN_71007afd40 @ 71007afd40 (size=8) =====

void FUN_71007afd40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// ===== FUN_71007afd60 @ 71007afd60 (size=76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_71007afd60(void)

{
  FUN_7100835a40(&DAT_7100d21098,FUN_71007afcc0);
  if (_DAT_7100d210a0 != 0) {
    return _DAT_7100d210a0;
  }
  FUN_71007afcc0();
  return _DAT_7100d210a0;
}



// ===== FUN_71007afdc0 @ 71007afdc0 (size=12) =====

undefined * FUN_71007afdc0(void)

{
  return &DAT_71009ccdf0;
}



// ===== FUN_71007afde0 @ 71007afde0 (size=396) =====

void FUN_71007afde0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        while (plVar9 = *(long **)(lVar5 + uVar8 * 8), plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
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
            if (*(code **)(*plVar9 + 8) == (code *)&UNK_71007afc80) {
              FUN_71007afc60();
              thunk_FUN_710081c200(plVar9);
              lVar5 = *(long *)(param_1 + 8);
              uVar6 = *(ulong *)(param_1 + 0x10);
              break;
            }
            (**(code **)(*plVar9 + 8))(plVar9);
            lVar5 = *(long *)(param_1 + 8);
            uVar6 = *(ulong *)(param_1 + 0x10);
          }
          else {
            lVar5 = *(long *)(param_1 + 8);
            uVar6 = *(ulong *)(param_1 + 0x10);
          }
          uVar8 = uVar8 + 1;
          if (uVar6 <= uVar8) goto LAB_71007afe74;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
LAB_71007afe74:
      if (lVar5 == 0) goto LAB_71007afe7c;
    }
    thunk_FUN_710081c200();
  }
LAB_71007afe7c:
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        while (plVar9 = *(long **)(lVar5 + uVar8 * 8), plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
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
            if (*(code **)(*plVar9 + 8) == (code *)&UNK_71007afc80) {
              FUN_71007afc60();
              thunk_FUN_710081c200(plVar9);
              uVar6 = *(ulong *)(param_1 + 0x10);
              lVar5 = *(long *)(param_1 + 0x18);
              break;
            }
            (**(code **)(*plVar9 + 8))(plVar9);
            uVar6 = *(ulong *)(param_1 + 0x10);
            lVar5 = *(long *)(param_1 + 0x18);
          }
          else {
            uVar6 = *(ulong *)(param_1 + 0x10);
            lVar5 = *(long *)(param_1 + 0x18);
          }
          uVar8 = uVar8 + 1;
          if (uVar6 <= uVar8) goto LAB_71007afefc;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
LAB_71007afefc:
      if (lVar5 == 0) goto LAB_71007aff04;
    }
    thunk_FUN_710081c200();
  }
LAB_71007aff04:
  lVar7 = *(long *)(param_1 + 0x20);
  lVar5 = 0;
  if (lVar7 != 0) {
    do {
      if (*(long *)(lVar7 + lVar5) != 0) {
        thunk_FUN_710081c200();
        lVar7 = *(long *)(param_1 + 0x20);
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x30);
    if (lVar7 != 0) {
      thunk_FUN_710081c200(lVar7);
      return;
    }
  }
  return;
}



// ===== FUN_71007affe0 @ 71007affe0 (size=148) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_71007affe0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_2;
  if (piVar4 != _DAT_7100d210b8) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != _DAT_7100d210b8) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      FUN_71007afde0();
      thunk_FUN_710081c200(piVar4);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



// ===== FUN_71007b0080 @ 71007b0080 (size=76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007b0080(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != _DAT_7100d210b8) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      FUN_71007afde0();
      thunk_FUN_710081c200(piVar4);
      return;
    }
  }
  return;
}



// ===== FUN_71007b00e0 @ 71007b00e0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_71007b00e0(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (*param_1 != 0) {
    return *param_1 + -1;
  }
  do {
    iVar1 = _DAT_7100d21090 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&DAT_7100d21090,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      _DAT_7100d21090 = iVar1;
    }
  } while (cVar2 != '\0');
  do {
    if (*param_1 != 0) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = (long)iVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return *param_1 + -1;
}



// ===== FUN_71007b0140 @ 71007b0140 (size=924) =====

void FUN_71007b0140(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  if (param_3 == 0) {
    return;
  }
  uVar6 = FUN_71007b00e0(param_2);
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 - 1 < uVar6) {
    uVar1 = uVar6 + 4;
    lVar7 = uVar1 * 8;
    if (0xfffffffffffffff < uVar1) {
      lVar7 = -1;
    }
    lVar13 = *(long *)(param_1 + 8);
    lVar8 = thunk_FUN_71007af5c0(lVar7);
    uVar10 = 0;
    do {
      *(undefined8 *)(lVar8 + uVar10 * 8) = *(undefined8 *)(lVar13 + uVar10 * 8);
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    if (uVar11 < uVar1) {
      FUN_7100808340(lVar8 + uVar11 * 8,0,((uVar6 - uVar11) + 4) * 8);
    }
    lVar15 = *(long *)(param_1 + 0x18);
    lVar7 = thunk_FUN_71007af5c0(lVar7);
    uVar10 = 0;
    do {
      *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar15 + uVar10 * 8);
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    if (uVar11 < uVar1) {
      FUN_7100808340(lVar7 + uVar11 * 8,0,((uVar6 - uVar11) + 4) * 8);
    }
    *(long *)(param_1 + 8) = lVar8;
    *(ulong *)(param_1 + 0x10) = uVar1;
    *(long *)(param_1 + 0x18) = lVar7;
    thunk_FUN_710081c200(lVar13);
    thunk_FUN_710081c200(lVar15);
  }
  piVar2 = (int *)(param_3 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = *piVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar8 = *(long *)(param_1 + 8);
  lVar7 = uVar6 * 8;
  plVar14 = *(long **)(lVar8 + lVar7);
  if (plVar14 == (long *)0x0) goto LAB_71007b0360;
  plVar12 = &DAT_7100aee798;
  if (DAT_7100aee798 != 0) {
LAB_71007b02a8:
    uVar11 = FUN_71007b00e0();
    if (uVar11 == uVar6) {
      lVar15 = *(long *)(param_1 + 8);
      lVar13 = FUN_71007b00e0(plVar12[1]);
      lVar13 = lVar13 * 8;
      if (*(long *)(lVar15 + lVar13) != 0) {
        lVar9 = FUN_71007c51a0(param_3,plVar12[1]);
        piVar2 = (int *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar12 = *(long **)(lVar15 + lVar13);
        plVar14 = plVar12 + 1;
        do {
          iVar5 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          if (*(code **)(*plVar12 + 8) == (code *)&UNK_71007afc80) {
            FUN_71007afc60();
LAB_71007b0330:
            thunk_FUN_710081c200(plVar12);
          }
          else {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
LAB_71007b0338:
        *(long *)(lVar15 + lVar13) = lVar9;
        plVar14 = *(long **)(lVar8 + lVar7);
        goto LAB_71007b0340;
      }
    }
    else {
      uVar11 = FUN_71007b00e0(plVar12[1]);
      if (uVar11 != uVar6) goto code_r0x0071007b02a0;
      lVar15 = *(long *)(param_1 + 8);
      lVar13 = FUN_71007b00e0(*plVar12);
      lVar13 = lVar13 * 8;
      if (*(long *)(lVar15 + lVar13) != 0) {
        lVar9 = FUN_71007b5920(param_3,*plVar12);
        piVar2 = (int *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar12 = *(long **)(lVar15 + lVar13);
        plVar14 = plVar12 + 1;
        do {
          iVar5 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          if (*(code **)(*plVar12 + 8) == (code *)&UNK_71007afc80) {
            FUN_71007afc60();
            goto LAB_71007b0330;
          }
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        goto LAB_71007b0338;
      }
    }
    goto LAB_71007b0434;
  }
LAB_71007b0340:
  plVar12 = plVar14 + 1;
  do {
    iVar5 = (int)*plVar12 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *(int *)plVar12 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
joined_r0x0071007b044c:
  if (iVar5 == 0) {
    if (*(code **)(*plVar14 + 8) == (code *)&UNK_71007afc80) {
      FUN_71007afc60();
      thunk_FUN_710081c200(plVar14);
    }
    else {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
LAB_71007b0360:
  uVar6 = *(ulong *)(param_1 + 0x10);
  *(long *)(lVar8 + lVar7) = param_3;
  if (uVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar11 = 0;
    do {
      plVar14 = *(long **)(lVar7 + uVar11 * 8);
      if (plVar14 != (long *)0x0) {
        plVar12 = plVar14 + 1;
        do {
          iVar5 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          if (*(code **)(*plVar14 + 8) == (code *)&UNK_71007afc80) {
            FUN_71007afc60();
            thunk_FUN_710081c200(plVar14);
          }
          else {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
        uVar6 = *(ulong *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        *(undefined8 *)(lVar7 + uVar11 * 8) = 0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
  return;
code_r0x0071007b02a0:
  plVar12 = plVar12 + 2;
  if (*plVar12 == 0) goto LAB_71007b0434;
  goto LAB_71007b02a8;
LAB_71007b0434:
  plVar14 = *(long **)(lVar8 + lVar7);
  plVar12 = plVar14 + 1;
  do {
    iVar5 = (int)*plVar12 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *(int *)plVar12 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto joined_r0x0071007b044c;
}



// ===== FUN_71007b05e0 @ 71007b05e0 (size=456) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007b05e0(long param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (((_DAT_7100d210c0 & 1) == 0) && (iVar3 = FUN_71007af260(&DAT_7100d210c0), iVar3 != 0)) {
    _DAT_7100d210c8 = 0;
    FUN_71007af440(&DAT_7100d210c0);
  }
  iVar3 = FUN_7100835660(&DAT_7100d210c8);
  if (iVar3 == 0) {
    plVar8 = &DAT_7100aee798;
    lVar4 = DAT_7100aee798;
    while (lVar4 != 0) {
      lVar4 = FUN_71007b00e0();
      if (lVar4 == param_3) {
        lVar5 = FUN_71007b00e0(plVar8[1]);
        lVar4 = param_3 * 8;
        lVar6 = *(long *)(*(long *)(param_1 + 0x18) + lVar4);
joined_r0x0071007b072c:
        if (lVar6 == 0) {
          plVar8 = param_2 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          *(long **)(*(long *)(param_1 + 0x18) + lVar4) = param_2;
          if (lVar5 != -1) {
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *(int *)plVar8 = (int)*plVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            *(long **)(*(long *)(param_1 + 0x18) + lVar5 * 8) = param_2;
          }
          goto LAB_71007b06a0;
        }
        goto LAB_71007b0674;
      }
      lVar4 = FUN_71007b00e0(plVar8[1]);
      if (lVar4 == param_3) {
        lVar4 = FUN_71007b00e0(*plVar8);
        lVar4 = lVar4 * 8;
        lVar6 = *(long *)(*(long *)(param_1 + 0x18) + lVar4);
        lVar5 = param_3;
        goto joined_r0x0071007b072c;
      }
      plVar8 = plVar8 + 2;
      lVar4 = *plVar8;
    }
    if (*(long *)(*(long *)(param_1 + 0x18) + param_3 * 8) == 0) {
      plVar8 = param_2 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(long **)(*(long *)(param_1 + 0x18) + param_3 * 8) = param_2;
    }
    else {
LAB_71007b0674:
      if (param_2 != (long *)0x0) {
        if (*(code **)(*param_2 + 8) == (code *)&UNK_71007afc80) {
          FUN_71007afc60();
          thunk_FUN_710081c200(param_2);
        }
        else {
          (**(code **)(*param_2 + 8))(param_2);
        }
      }
    }
LAB_71007b06a0:
    iVar3 = FUN_71008356e0(&DAT_7100d210c8);
    if (iVar3 == 0) {
      return;
    }
    FUN_7100003868();
  }
  puVar7 = (undefined8 *)FUN_71007adf60(8);
  *puVar7 = &PTR_LAB_7100aec540;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar7,&PTR_PTR_FUN_7100aec500,&LAB_71007adca0);
}



// ===== FUN_71007b0800 @ 71007b0800 (size=8) =====

undefined8 FUN_71007b0800(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ===== FUN_71007b0820 @ 71007b0820 (size=116) =====

void FUN_71007b0820(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  *param_1 = &PTR_FUN_7100aec7b8;
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



// ===== FUN_71007b08a0 @ 71007b08a0 (size=28) =====

void FUN_71007b08a0(undefined8 param_1)

{
  FUN_71007b0820();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b08c0 @ 71007b08c0 (size=20) =====

void FUN_71007b08c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec7e0;
  FUN_71007b0820();
  return;
}



// ===== FUN_71007b08e0 @ 71007b08e0 (size=28) =====

void FUN_71007b08e0(undefined8 param_1)

{
  FUN_71007b08c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b0900 @ 71007b0900 (size=20) =====

void FUN_71007b0900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec808;
  FUN_71007b0820();
  return;
}



// ===== FUN_71007b0920 @ 71007b0920 (size=28) =====

void FUN_71007b0920(undefined8 param_1)

{
  FUN_71007b0900();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b0940 @ 71007b0940 (size=20) =====

void FUN_71007b0940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec830;
  FUN_71007b0820();
  return;
}



// ===== FUN_71007b0960 @ 71007b0960 (size=28) =====

void FUN_71007b0960(undefined8 param_1)

{
  FUN_71007b0940();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b0980 @ 71007b0980 (size=20) =====

void FUN_71007b0980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec858;
  FUN_71007b0820();
  return;
}



// ===== FUN_71007b09a0 @ 71007b09a0 (size=28) =====

void FUN_71007b09a0(undefined8 param_1)

{
  FUN_71007b0980();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b09c0 @ 71007b09c0 (size=116) =====

void FUN_71007b09c0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  *param_1 = &PTR_FUN_7100aec880;
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



// ===== FUN_71007b0a40 @ 71007b0a40 (size=28) =====

void FUN_71007b0a40(undefined8 param_1)

{
  FUN_71007b09c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b0a60 @ 71007b0a60 (size=80) =====

long FUN_71007b0a60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    if (param_1 == *(long *)(lVar1 + 0x18)) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
      } while (lVar2 == *(long *)(lVar1 + 0x18));
      if (lVar1 == *(long *)(lVar2 + 0x18)) {
        lVar1 = lVar2;
      }
      return lVar1;
    }
  }
  else {
    do {
      lVar1 = lVar2;
      lVar2 = *(long *)(lVar1 + 0x10);
    } while (*(long *)(lVar1 + 0x10) != 0);
  }
  return lVar1;
}



// ===== FUN_71007b0ac0 @ 71007b0ac0 (size=100) =====

long FUN_71007b0ac0(int *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_1 == 0) && (param_1 == *(int **)(*(long *)(param_1 + 2) + 8))) {
    return *(long *)(param_1 + 6);
  }
  lVar3 = *(long *)(param_1 + 4);
  if (*(long *)(param_1 + 4) == 0) {
    lVar2 = *(long *)(param_1 + 2);
    if (param_1 == *(int **)(lVar2 + 0x10)) {
      do {
        lVar3 = *(long *)(lVar2 + 8);
        bVar1 = *(long *)(lVar3 + 0x10) == lVar2;
        lVar2 = lVar3;
      } while (bVar1);
      return lVar3;
    }
  }
  else {
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x18);
    } while (*(long *)(lVar2 + 0x18) != 0);
  }
  return lVar2;
}



// ===== FUN_71007b0b40 @ 71007b0b40 (size=668) =====

void FUN_71007b0b40(ulong param_1,int *param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  *param_2 = 0;
  *(long *)(param_2 + 2) = param_3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((param_1 & 1) == 0) {
    *(int **)(param_3 + 0x18) = param_2;
    if (*(long *)(param_4 + 0x18) == param_3) {
      *(int **)(param_4 + 0x18) = param_2;
    }
    piVar6 = *(int **)(param_4 + 8);
  }
  else {
    *(int **)(param_3 + 0x10) = param_2;
    if (param_4 == param_3) {
      *(int **)(param_4 + 8) = param_2;
      *(int **)(param_4 + 0x18) = param_2;
      *param_2 = 1;
      return;
    }
    piVar6 = *(int **)(param_4 + 8);
    if (*(long *)(param_4 + 0x10) == param_3) {
      *(int **)(param_4 + 0x10) = param_2;
    }
  }
  if (param_2 != piVar6) {
    do {
      while( true ) {
        piVar2 = *(int **)(param_2 + 2);
        if (*piVar2 != 0) goto LAB_71007b0c64;
        piVar1 = *(int **)(piVar2 + 2);
        piVar4 = *(int **)(piVar1 + 4);
        if (piVar4 != piVar2) break;
        piVar7 = *(int **)(piVar1 + 6);
        if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
          piVar7 = param_2;
          if (*(int **)(piVar2 + 6) == param_2) {
            lVar3 = *(long *)(param_2 + 4);
            *(long *)(piVar2 + 6) = lVar3;
            if (lVar3 == 0) {
              *(int **)(param_2 + 2) = piVar1;
              piVar6 = piVar1;
              if (piVar2 == *(int **)(param_4 + 8)) goto LAB_71007b0dd4;
LAB_71007b0dc4:
              *(int **)(piVar6 + 4) = param_2;
            }
            else {
              *(int **)(lVar3 + 8) = piVar2;
              piVar6 = *(int **)(piVar2 + 2);
              *(int **)(param_2 + 2) = piVar6;
              if (piVar2 == *(int **)(param_4 + 8)) {
LAB_71007b0dd4:
                *(int **)(param_4 + 8) = param_2;
              }
              else {
                if (piVar2 == *(int **)(piVar6 + 4)) goto LAB_71007b0dc4;
                *(int **)(piVar6 + 6) = param_2;
              }
            }
            *(int **)(param_2 + 4) = piVar2;
            piVar4 = *(int **)(piVar1 + 4);
            *(int **)(piVar2 + 2) = param_2;
            piVar7 = piVar2;
            piVar2 = param_2;
          }
          *piVar2 = 1;
          lVar3 = *(long *)(piVar4 + 6);
          *piVar1 = 0;
          *(long *)(piVar1 + 4) = lVar3;
          if (lVar3 != 0) {
            *(int **)(lVar3 + 8) = piVar1;
          }
          lVar3 = *(long *)(piVar1 + 2);
          *(long *)(piVar4 + 2) = lVar3;
          if (piVar1 == *(int **)(param_4 + 8)) {
            *(int **)(param_4 + 8) = piVar4;
          }
          else if (piVar1 == *(int **)(lVar3 + 0x18)) {
            *(int **)(lVar3 + 0x18) = piVar4;
          }
          else {
            *(int **)(lVar3 + 0x10) = piVar4;
          }
          *(int **)(piVar4 + 6) = piVar1;
          *(int **)(piVar1 + 2) = piVar4;
          piVar6 = *(int **)(param_4 + 8);
        }
        else {
          *piVar4 = 1;
          *piVar7 = 1;
LAB_71007b0bb0:
          *piVar1 = 0;
          piVar7 = piVar1;
        }
        param_2 = piVar7;
        if (piVar6 == piVar7) goto LAB_71007b0c64;
      }
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
        *piVar2 = 1;
        *piVar4 = 1;
        goto LAB_71007b0bb0;
      }
      piVar4 = param_2;
      if (*(int **)(piVar2 + 4) == param_2) {
        lVar3 = *(long *)(param_2 + 6);
        *(long *)(piVar2 + 4) = lVar3;
        piVar6 = piVar1;
        if (lVar3 != 0) {
          *(int **)(lVar3 + 8) = piVar2;
          piVar6 = *(int **)(piVar2 + 2);
        }
        *(int **)(param_2 + 2) = piVar6;
        if (piVar2 == *(int **)(param_4 + 8)) {
          *(int **)(param_4 + 8) = param_2;
        }
        else if (piVar2 == *(int **)(piVar6 + 6)) {
          *(int **)(piVar6 + 6) = param_2;
        }
        else {
          *(int **)(piVar6 + 4) = param_2;
        }
        *(int **)(param_2 + 6) = piVar2;
        *(int **)(piVar2 + 2) = param_2;
        piVar4 = piVar2;
        piVar2 = param_2;
      }
      *piVar2 = 1;
      lVar3 = *(long *)(piVar1 + 6);
      lVar5 = *(long *)(lVar3 + 0x10);
      *piVar1 = 0;
      *(long *)(piVar1 + 6) = lVar5;
      if (lVar5 != 0) {
        *(int **)(lVar5 + 8) = piVar1;
      }
      lVar5 = *(long *)(piVar1 + 2);
      *(long *)(lVar3 + 8) = lVar5;
      if (piVar1 == *(int **)(param_4 + 8)) {
        *(long *)(param_4 + 8) = lVar3;
      }
      else if (piVar1 == *(int **)(lVar5 + 0x10)) {
        *(long *)(lVar5 + 0x10) = lVar3;
      }
      else {
        *(long *)(lVar5 + 0x18) = lVar3;
      }
      *(int **)(lVar3 + 0x10) = piVar1;
      *(long *)(piVar1 + 2) = lVar3;
      piVar6 = *(int **)(param_4 + 8);
      param_2 = piVar4;
    } while (piVar6 != piVar4);
  }
LAB_71007b0c64:
  *piVar6 = 1;
  return;
}



// ===== FUN_71007b0de0 @ 71007b0de0 (size=1300) =====

void FUN_71007b0de0(int *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  
  piVar4 = *(int **)(param_1 + 4);
  piVar8 = *(int **)(param_1 + 6);
  piVar9 = piVar8;
  if (piVar4 == (int *)0x0) {
LAB_71007b10b0:
    piVar3 = *(int **)(param_1 + 2);
    piVar5 = (int *)0x0;
    if (piVar9 != (int *)0x0) goto LAB_71007b0f9c;
  }
  else {
    if (piVar8 != (int *)0x0) {
      do {
        piVar2 = piVar9;
        piVar9 = *(int **)(piVar2 + 4);
      } while (*(int **)(piVar2 + 4) != (int *)0x0);
      piVar5 = *(int **)(piVar2 + 6);
      piVar9 = piVar5;
      if (piVar2 != param_1) {
        *(int **)(piVar4 + 2) = piVar2;
        *(int **)(piVar2 + 4) = piVar4;
        piVar3 = piVar8;
        if (piVar2 != piVar8) {
          piVar3 = *(int **)(piVar2 + 2);
          if (piVar5 != (int *)0x0) {
            *(int **)(piVar5 + 2) = piVar3;
          }
          *(int **)(piVar3 + 4) = piVar5;
          *(int **)(piVar2 + 6) = piVar8;
          *(int **)(*(long *)(param_1 + 6) + 8) = piVar2;
        }
        if (*(int **)(param_2 + 8) == param_1) {
          *(int **)(param_2 + 8) = piVar2;
          lVar7 = *(long *)(param_1 + 2);
        }
        else {
          lVar7 = *(long *)(param_1 + 2);
          if (*(int **)(lVar7 + 0x10) == param_1) {
            *(int **)(lVar7 + 0x10) = piVar2;
          }
          else {
            *(int **)(lVar7 + 0x18) = piVar2;
          }
        }
        iVar1 = *param_1;
        *(long *)(piVar2 + 2) = lVar7;
        iVar6 = *piVar2;
        *piVar2 = iVar1;
        *param_1 = iVar6;
        goto LAB_71007b0e6c;
      }
      goto LAB_71007b10b0;
    }
    piVar3 = *(int **)(param_1 + 2);
    piVar9 = piVar4;
LAB_71007b0f9c:
    piVar5 = piVar9;
    *(int **)(piVar5 + 2) = piVar3;
  }
  if (*(int **)(param_2 + 8) == param_1) {
    *(int **)(param_2 + 8) = piVar5;
  }
  else {
    lVar7 = *(long *)(param_1 + 2);
    if (*(int **)(lVar7 + 0x10) == param_1) {
      *(int **)(lVar7 + 0x10) = piVar5;
    }
    else {
      *(int **)(lVar7 + 0x18) = piVar5;
    }
  }
  if (*(int **)(param_2 + 0x10) == param_1) {
    piVar4 = piVar5;
    if (*(long *)(param_1 + 6) == 0) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 2);
    }
    else {
      do {
        piVar8 = piVar4;
        piVar4 = *(int **)(piVar8 + 4);
      } while (piVar4 != (int *)0x0);
      *(int **)(param_2 + 0x10) = piVar8;
    }
  }
  if (*(int **)(param_2 + 0x18) == param_1) {
    piVar4 = piVar5;
    if (*(long *)(param_1 + 4) == 0) {
      iVar6 = *param_1;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 2);
    }
    else {
      do {
        piVar8 = piVar4;
        piVar4 = *(int **)(piVar8 + 6);
      } while (piVar4 != (int *)0x0);
      *(int **)(param_2 + 0x18) = piVar8;
      iVar6 = *param_1;
    }
  }
  else {
    iVar6 = *param_1;
  }
LAB_71007b0e6c:
  if (iVar6 != 0) {
    if (piVar5 != *(int **)(param_2 + 8)) {
      if (piVar5 != (int *)0x0) goto LAB_71007b0ed0;
      piVar4 = *(int **)(piVar3 + 4);
      if (piVar4 == (int *)0x0) goto LAB_71007b0ef0;
LAB_71007b0e8c:
      piVar8 = piVar4;
      if (*piVar4 == 0) {
        piVar8 = *(int **)(piVar4 + 6);
        *piVar4 = 1;
        *piVar3 = 0;
        *(int **)(piVar3 + 4) = piVar8;
        if (piVar8 != (int *)0x0) {
          *(int **)(piVar8 + 2) = piVar3;
        }
        lVar7 = *(long *)(piVar3 + 2);
        *(long *)(piVar4 + 2) = lVar7;
        if (*(int **)(param_2 + 8) == piVar3) {
          *(int **)(param_2 + 8) = piVar4;
          piVar8 = *(int **)(piVar3 + 4);
        }
        else if (*(int **)(lVar7 + 0x18) == piVar3) {
          *(int **)(lVar7 + 0x18) = piVar4;
        }
        else {
          *(int **)(lVar7 + 0x10) = piVar4;
          piVar8 = *(int **)(piVar3 + 4);
        }
        *(int **)(piVar4 + 6) = piVar3;
        *(int **)(piVar3 + 2) = piVar4;
      }
      piVar4 = *(int **)(piVar8 + 6);
      if ((piVar4 == (int *)0x0) || (*piVar4 == 1)) goto LAB_71007b0ea8;
      piVar9 = *(int **)(piVar8 + 4);
      if (piVar9 != (int *)0x0) goto LAB_71007b1128;
      goto LAB_71007b11c0;
    }
LAB_71007b0f88:
    if (piVar5 != (int *)0x0) {
LAB_71007b10a0:
      *piVar5 = 1;
      return;
    }
  }
  return;
LAB_71007b0ea8:
  piVar9 = *(int **)(piVar8 + 4);
  if ((piVar9 == (int *)0x0) || (*piVar9 == 1)) {
LAB_71007b0ebc:
    piVar5 = piVar3;
    piVar3 = *(int **)(piVar5 + 2);
    *piVar8 = 0;
    if (*(int **)(param_2 + 8) == piVar5) goto LAB_71007b10a0;
LAB_71007b0ed0:
    if (*piVar5 != 1) goto LAB_71007b10a0;
    piVar4 = *(int **)(piVar3 + 4);
    if (piVar4 == piVar5) {
LAB_71007b0ef0:
      piVar4 = *(int **)(piVar3 + 6);
      piVar8 = piVar4;
      if (*piVar4 == 0) {
        piVar8 = *(int **)(piVar4 + 4);
        *piVar4 = 1;
        *piVar3 = 0;
        *(int **)(piVar3 + 6) = piVar8;
        if (piVar8 != (int *)0x0) {
          *(int **)(piVar8 + 2) = piVar3;
        }
        lVar7 = *(long *)(piVar3 + 2);
        *(long *)(piVar4 + 2) = lVar7;
        if (*(int **)(param_2 + 8) == piVar3) {
          *(int **)(param_2 + 8) = piVar4;
          piVar8 = *(int **)(piVar3 + 6);
        }
        else if (*(int **)(lVar7 + 0x10) == piVar3) {
          *(int **)(lVar7 + 0x10) = piVar4;
        }
        else {
          *(int **)(lVar7 + 0x18) = piVar4;
          piVar8 = *(int **)(piVar3 + 6);
        }
        *(int **)(piVar4 + 4) = piVar3;
        *(int **)(piVar3 + 2) = piVar4;
      }
      piVar4 = *(int **)(piVar8 + 4);
      if ((piVar4 == (int *)0x0) || (*piVar4 == 1)) goto LAB_71007b0f10;
      piVar9 = *(int **)(piVar8 + 6);
      if (piVar9 != (int *)0x0) goto LAB_71007b0f24;
      goto LAB_71007b1238;
    }
    goto LAB_71007b0e8c;
  }
LAB_71007b1128:
  if (*piVar9 == 1) {
LAB_71007b11c0:
    *piVar4 = 1;
    lVar7 = *(long *)(piVar4 + 4);
    *piVar8 = 0;
    *(long *)(piVar8 + 6) = lVar7;
    if (lVar7 != 0) {
      *(int **)(lVar7 + 8) = piVar8;
    }
    lVar7 = *(long *)(piVar8 + 2);
    *(long *)(piVar4 + 2) = lVar7;
    if (piVar8 == *(int **)(param_2 + 8)) {
      *(int **)(param_2 + 8) = piVar4;
    }
    else if (piVar8 == *(int **)(lVar7 + 0x10)) {
      *(int **)(lVar7 + 0x10) = piVar4;
    }
    else {
      *(int **)(lVar7 + 0x18) = piVar4;
    }
    *(int **)(piVar4 + 4) = piVar8;
    *(int **)(piVar8 + 2) = piVar4;
    piVar4 = *(int **)(piVar3 + 4);
    piVar9 = *(int **)(piVar4 + 4);
    *piVar4 = *piVar3;
    *piVar3 = 1;
    if (piVar9 == (int *)0x0) goto LAB_71007b1150;
  }
  else {
    piVar4 = *(int **)(piVar3 + 4);
    *piVar8 = *piVar3;
    *piVar3 = 1;
  }
  *piVar9 = 1;
LAB_71007b1150:
  lVar7 = *(long *)(piVar4 + 6);
  *(long *)(piVar3 + 4) = lVar7;
  if (lVar7 != 0) {
    *(int **)(lVar7 + 8) = piVar3;
  }
  lVar7 = *(long *)(piVar3 + 2);
  *(long *)(piVar4 + 2) = lVar7;
  if (*(int **)(param_2 + 8) == piVar3) {
    *(int **)(param_2 + 8) = piVar4;
  }
  else if (*(int **)(lVar7 + 0x18) == piVar3) {
    *(int **)(lVar7 + 0x18) = piVar4;
  }
  else {
    *(int **)(lVar7 + 0x10) = piVar4;
  }
  *(int **)(piVar4 + 6) = piVar3;
  *(int **)(piVar3 + 2) = piVar4;
  if (piVar5 == (int *)0x0) {
    return;
  }
  goto LAB_71007b10a0;
LAB_71007b0f10:
  piVar9 = *(int **)(piVar8 + 6);
  if ((piVar9 == (int *)0x0) || (*piVar9 == 1)) goto LAB_71007b0ebc;
LAB_71007b0f24:
  if (*piVar9 == 1) {
LAB_71007b1238:
    *piVar4 = 1;
    lVar7 = *(long *)(piVar4 + 6);
    *piVar8 = 0;
    *(long *)(piVar8 + 4) = lVar7;
    if (lVar7 != 0) {
      *(int **)(lVar7 + 8) = piVar8;
    }
    lVar7 = *(long *)(piVar8 + 2);
    *(long *)(piVar4 + 2) = lVar7;
    if (piVar8 == *(int **)(param_2 + 8)) {
      *(int **)(param_2 + 8) = piVar4;
    }
    else if (piVar8 == *(int **)(lVar7 + 0x18)) {
      *(int **)(lVar7 + 0x18) = piVar4;
    }
    else {
      *(int **)(lVar7 + 0x10) = piVar4;
    }
    *(int **)(piVar4 + 6) = piVar8;
    *(int **)(piVar8 + 2) = piVar4;
    piVar4 = *(int **)(piVar3 + 6);
    piVar9 = *(int **)(piVar4 + 6);
    *piVar4 = *piVar3;
    *piVar3 = 1;
    if (piVar9 == (int *)0x0) goto LAB_71007b0f4c;
  }
  else {
    piVar4 = *(int **)(piVar3 + 6);
    *piVar8 = *piVar3;
    *piVar3 = 1;
  }
  *piVar9 = 1;
LAB_71007b0f4c:
  lVar7 = *(long *)(piVar4 + 4);
  *(long *)(piVar3 + 6) = lVar7;
  if (lVar7 != 0) {
    *(int **)(lVar7 + 8) = piVar3;
  }
  lVar7 = *(long *)(piVar3 + 2);
  *(long *)(piVar4 + 2) = lVar7;
  if (*(int **)(param_2 + 8) == piVar3) {
    *(int **)(param_2 + 8) = piVar4;
  }
  else if (*(int **)(lVar7 + 0x10) == piVar3) {
    *(int **)(lVar7 + 0x10) = piVar4;
  }
  else {
    *(int **)(lVar7 + 0x18) = piVar4;
  }
  *(int **)(piVar4 + 4) = piVar3;
  *(int **)(piVar3 + 2) = piVar4;
  goto LAB_71007b0f88;
}



// ===== FUN_71007b1300 @ 71007b1300 (size=244) =====

char * FUN_71007b1300(uint param_1)

{
  switch(param_1 & 0x7d) {
  case 1:
  case 0x11:
    return "a";
  default:
    return (char *)0x0;
  case 5:
  case 0x15:
    return "ab";
  case 8:
    return "r";
  case 9:
  case 0x19:
    return "a+";
  case 0xc:
    return "rb";
  case 0xd:
  case 0x1d:
    return "a+b";
  case 0x10:
  case 0x30:
    return "w";
  case 0x14:
  case 0x34:
    return "wb";
  case 0x18:
    return "r+";
  case 0x1c:
    return "r+b";
  case 0x38:
    return "w+";
  case 0x3c:
    return "w+b";
  case 0x50:
  case 0x70:
    return "wx";
  case 0x54:
    return "wbx";
  case 0x78:
    return "w+x";
  case 0x7c:
    return "w+bx";
  }
}



// ===== FUN_71007b1400 @ 71007b1400 (size=12) =====

void FUN_71007b1400(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// ===== FUN_71007b1420 @ 71007b1420 (size=16) =====

bool FUN_71007b1420(long *param_1)

{
  return *param_1 != 0;
}



// ===== FUN_71007b1440 @ 71007b1440 (size=120) =====

long * FUN_71007b1440(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_71007b1300(param_3);
  if ((lVar1 != 0) && (uVar2 = FUN_71007b1420(param_1), (uVar2 & 1) == 0)) {
    lVar1 = FUN_710081f2a0(param_2,lVar1);
    *param_1 = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
  }
  return (long *)0x0;
}



// ===== FUN_71007b14c0 @ 71007b14c0 (size=24) =====

void FUN_71007b14c0(undefined8 *param_1)

{
  FUN_710080e920(*param_1);
  return;
}



// ===== FUN_71007b1500 @ 71007b1500 (size=84) =====

undefined8 * FUN_71007b1500(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_71007b1420();
  if ((uVar2 & 1) == 0) {
    return (undefined8 *)0x0;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = FUN_71008082e0(*param_1);
    *param_1 = 0;
    if (iVar1 != 0) {
      return (undefined8 *)0x0;
    }
  }
  return param_1;
}



// ===== FUN_71007b1560 @ 71007b1560 (size=20) =====

void FUN_71007b1560(void)

{
  FUN_71007b1500();
  return;
}



// ===== FUN_71007b1580 @ 71007b1580 (size=116) =====

long FUN_71007b1580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  
  do {
    uVar1 = FUN_71007b14c0(param_1);
    lVar2 = FUN_71008084a0(uVar1,param_2,param_3);
    if (lVar2 != -1) {
      return lVar2;
    }
    piVar3 = (int *)FUN_710080e8e0();
  } while (*piVar3 == 4);
  return -1;
}



// ===== FUN_71007b1600 @ 71007b1600 (size=132) =====

long FUN_71007b1600(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  uVar1 = FUN_71007b14c0();
  lVar4 = param_3;
  do {
    while (lVar2 = FUN_7100823120(uVar1,param_2,lVar4), lVar2 != -1) {
      lVar4 = lVar4 - lVar2;
      if (lVar4 == 0) {
        return param_3;
      }
      param_2 = param_2 + lVar2;
    }
    piVar3 = (int *)FUN_710080e8e0();
  } while (*piVar3 == 4);
  return param_3 - lVar4;
}



// ===== FUN_71007b16a0 @ 71007b16a0 (size=256) =====

long FUN_71007b16a0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  if (param_3 != 0) {
    uVar1 = FUN_71007b14c0();
    lVar4 = param_3;
    do {
      while (lVar2 = FUN_7100823120(uVar1,param_2,lVar4), lVar2 != -1) {
        lVar4 = lVar4 - lVar2;
        if (lVar4 == 0) goto LAB_71007b1738;
        param_2 = param_2 + lVar2;
      }
      piVar3 = (int *)FUN_710080e8e0();
    } while (*piVar3 == 4);
    if (param_3 != param_3 - lVar4) {
      return param_3 - lVar4;
    }
  }
LAB_71007b1738:
  uVar1 = FUN_71007b14c0(param_1);
  lVar4 = param_5;
  do {
    while (lVar2 = FUN_7100823120(uVar1,param_4,lVar4), lVar2 != -1) {
      lVar4 = lVar4 - lVar2;
      if (lVar4 == 0) goto LAB_71007b1784;
      param_4 = param_4 + lVar2;
    }
    piVar3 = (int *)FUN_710080e8e0();
  } while (*piVar3 == 4);
  param_5 = param_5 - lVar4;
LAB_71007b1784:
  return param_3 + param_5;
}



// ===== FUN_71007b17a0 @ 71007b17a0 (size=40) =====

void FUN_71007b17a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007b14c0();
  FUN_710081cd80(uVar1,param_2,param_3);
  return;
}



// ===== FUN_71007b17e0 @ 71007b17e0 (size=128) =====

long FUN_71007b17e0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_68 [4];
  uint local_64;
  long local_58;
  
  uVar2 = FUN_71007b14c0();
  iVar1 = FUN_7100814220(uVar2,auStack_68);
  if (iVar1 != 0) {
    return 0;
  }
  if ((local_64 & 0xf000) != 0x8000) {
    return 0;
  }
  uVar2 = FUN_71007b14c0(param_1);
  lVar3 = FUN_710081cd80(uVar2,0,1);
  return local_58 - lVar3;
}



// ===== FUN_71007b1860 @ 71007b1860 (size=44) =====

long FUN_71007b1860(void)

{
  long local_10;
  long lStack_8;
  
  FUN_7100833f00(1,&local_10);
  return lStack_8 + local_10 * 1000000000;
}



// ===== FUN_71007b18a0 @ 71007b18a0 (size=44) =====

long FUN_71007b18a0(void)

{
  long local_10;
  long lStack_8;
  
  FUN_7100833f00(4,&local_10);
  return lStack_8 + local_10 * 1000000000;
}



// ===== FUN_71007b18e0 @ 71007b18e0 (size=12) =====

void FUN_71007b18e0(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  return;
}



// ===== FUN_71007b1900 @ 71007b1900 (size=20) =====

void FUN_71007b1900(void)

{
  FUN_7100835800();
  return;
}



// ===== FUN_71007b1920 @ 71007b1920 (size=8) =====

void FUN_71007b1920(undefined8 param_1,undefined8 *param_2)

{
  FUN_7100835860(param_1,*param_2);
  return;
}



// ===== FUN_71007b1940 @ 71007b1940 (size=20) =====

void FUN_71007b1940(void)

{
  FUN_7100835820();
  return;
}



// ===== FUN_71007b1960 @ 71007b1960 (size=20) =====

void FUN_71007b1960(void)

{
  FUN_7100835840();
  return;
}



// ===== FUN_71007b2000 @ 71007b2000 (size=200) =====

long * FUN_71007b2000(undefined4 *param_1,undefined4 *param_2)

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



// ===== FUN_71007b20e0 @ 71007b20e0 (size=184) =====

long * FUN_71007b20e0(undefined1 *param_1,undefined1 *param_2)

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



// ===== FUN_71007b21a0 @ 71007b21a0 (size=116) =====

undefined8 * FUN_71007b21a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007c3d40(0,*(undefined8 *)(param_2 + 0x18),&local_28,param_3,param_4);
  if (local_8 != (code *)0x0) {
    uVar1 = FUN_71007b2000(local_28,local_28 + lStack_20 * 4,auStack_30);
    *param_1 = uVar1;
    if (local_8 != (code *)0x0) {
      (*local_8)(&local_28);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007b2240 @ 71007b2240 (size=128) =====

undefined8 *
FUN_71007b2240(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,long *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007c4940(0,*(undefined8 *)(param_2 + 0x20),&local_28,param_3,param_4,param_5,*param_6,
                 *(undefined8 *)(*param_6 + -0x18));
  if (local_8 != (code *)0x0) {
    uVar1 = FUN_71007b2000(local_28,local_28 + lStack_20 * 4,auStack_30);
    *param_1 = uVar1;
    if (local_8 != (code *)0x0) {
      (*local_8)(&local_28);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007b22e0 @ 71007b22e0 (size=248) =====

undefined1  [16]
FUN_71007b22e0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined4 param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_30 [8];
  long local_28;
  undefined8 uStack_20;
  code *local_8;
  
  local_28 = *param_7;
  local_8 = (code *)0x0;
  piVar3 = (int *)(local_28 + -8);
  if (*piVar3 < 0) {
    local_28 = FUN_71007b7ac0((undefined1 *)(local_28 + -0x18),auStack_30,0);
  }
  else if ((undefined1 *)(local_28 + -0x18) != &DAT_7100d210f8) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_20 = *(undefined8 *)(*param_7 + -0x18);
  local_8 = FUN_71007b2660;
  auVar4 = FUN_71007c5080(0,0,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,
                          param_6);
  if (local_8 != (code *)0x0) {
    (*local_8)(&local_28);
  }
  return auVar4;
}



// ===== FUN_71007b2400 @ 71007b2400 (size=248) =====

undefined1  [16]
FUN_71007b2400(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined4 param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_30 [8];
  long local_28;
  undefined8 uStack_20;
  code *local_8;
  
  local_28 = *param_7;
  local_8 = (code *)0x0;
  piVar3 = (int *)(local_28 + -8);
  if (*piVar3 < 0) {
    local_28 = FUN_71007b6e00((undefined1 *)(local_28 + -0x18),auStack_30,0);
  }
  else if ((undefined1 *)(local_28 + -0x18) != &DAT_7100d210d8) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_20 = *(undefined8 *)(*param_7 + -0x18);
  local_8 = FUN_71007b26c0;
  auVar4 = FUN_71007c4f60(0,0,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,
                          param_6);
  if (local_8 != (code *)0x0) {
    (*local_8)(&local_28);
  }
  return auVar4;
}



// ===== FUN_71007b2520 @ 71007b2520 (size=116) =====

undefined8 * FUN_71007b2520(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007c3ca0(0,*(undefined8 *)(param_2 + 0x18),&local_28,param_3,param_4);
  if (local_8 != (code *)0x0) {
    uVar1 = FUN_71007b20e0(local_28,local_28 + lStack_20,auStack_30);
    *param_1 = uVar1;
    if (local_8 != (code *)0x0) {
      (*local_8)(&local_28);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007b25c0 @ 71007b25c0 (size=128) =====

undefined8 *
FUN_71007b25c0(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,long *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007c4820(0,*(undefined8 *)(param_2 + 0x20),&local_28,param_3,param_4,param_5,*param_6,
                 *(undefined8 *)(*param_6 + -0x18));
  if (local_8 != (code *)0x0) {
    uVar1 = FUN_71007b20e0(local_28,local_28 + lStack_20,auStack_30);
    *param_1 = uVar1;
    if (local_8 != (code *)0x0) {
      (*local_8)(&local_28);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007b2660 @ 71007b2660 (size=80) =====

void FUN_71007b2660(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  puVar4 = (undefined1 *)(*param_1 + -0x18);
  if (puVar4 != &DAT_7100d210f8) {
    piVar5 = (int *)(*param_1 + -8);
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
      return;
    }
  }
  return;
}



// ===== FUN_71007b26c0 @ 71007b26c0 (size=80) =====

void FUN_71007b26c0(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  puVar4 = (undefined1 *)(*param_1 + -0x18);
  if (puVar4 != &DAT_7100d210d8) {
    piVar5 = (int *)(*param_1 + -8);
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
      return;
    }
  }
  return;
}



// ===== FUN_71007b2ae0 @ 71007b2ae0 (size=92) =====

void FUN_71007b2ae0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6ed0;
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
  FUN_71007d0e60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2b40 @ 71007b2b40 (size=92) =====

void FUN_71007b2b40(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6f68;
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
  FUN_71007e3e60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2ca0 @ 71007b2ca0 (size=108) =====

void FUN_71007b2ca0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6e70;
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
  *param_1 = &PTR_LAB_7100aee670;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2d20 @ 71007b2d20 (size=108) =====

void FUN_71007b2d20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6ea0;
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
  *param_1 = &PTR_LAB_7100aee6a0;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2da0 @ 71007b2da0 (size=108) =====

void FUN_71007b2da0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6f08;
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
  *param_1 = &PTR_LAB_7100aef1f8;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2e20 @ 71007b2e20 (size=108) =====

void FUN_71007b2e20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6f38;
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
  *param_1 = &PTR_LAB_7100aef228;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2ea0 @ 71007b2ea0 (size=108) =====

void FUN_71007b2ea0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6fa0;
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
  *param_1 = &PTR_LAB_7100aee6f8;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2f20 @ 71007b2f20 (size=108) =====

void FUN_71007b2f20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae6ff0;
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
  *param_1 = &PTR_LAB_7100aef280;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b2fa0 @ 71007b2fa0 (size=108) =====

void FUN_71007b2fa0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aecc80;
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
  *param_1 = &PTR_FUN_7100aee378;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007b3020 @ 71007b3020 (size=108) =====

void FUN_71007b3020(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aecdd0;
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
  *param_1 = &PTR_FUN_7100aeee80;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007b30a0 @ 71007b30a0 (size=100) =====

void FUN_71007b30a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100aecc38;
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
  FUN_71007fd5e0(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b3120 @ 71007b3120 (size=100) =====

void FUN_71007b3120(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100aecd88;
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
  FUN_71007fd7e0(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b31a0 @ 71007b31a0 (size=116) =====

void FUN_71007b31a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aecc80;
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
  *param_1 = &PTR_FUN_7100aee378;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b3220 @ 71007b3220 (size=116) =====

void FUN_71007b3220(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aecdd0;
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
  *param_1 = &PTR_FUN_7100aeee80;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b34a0 @ 71007b34a0 (size=112) =====

void FUN_71007b34a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aeccb8;
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
  FUN_71007fcba0(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b3520 @ 71007b3520 (size=112) =====

void FUN_71007b3520(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aecd20;
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
  FUN_71007fcca0(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b35a0 @ 71007b35a0 (size=112) =====

void FUN_71007b35a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aece08;
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
  FUN_71007fcf60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b3620 @ 71007b3620 (size=112) =====

void FUN_71007b3620(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aece70;
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
  FUN_71007fd060(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b3960 @ 71007b3960 (size=488) =====

void FUN_71007b3960(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  long lVar8;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_3 + 0x48) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_3 + 0x49) = uVar4;
  *(undefined1 *)(param_3 + 0x88) = 1;
  pcVar6 = *(code **)(*param_2 + 0x20);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  (*pcVar6)(&local_8,param_2);
  lVar8 = *(long *)(local_8 + -0x18);
  lVar5 = thunk_FUN_71007af5c0(lVar8 + 1);
  FUN_71007b66e0(&local_8,lVar5,lVar8,0);
  *(undefined1 *)(lVar5 + lVar8) = 0;
  *(long *)(param_3 + 0x10) = lVar5;
  *(long *)(param_3 + 0x18) = lVar8;
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x28))(&local_8,param_2);
  lVar8 = *(long *)(local_8 + -0x18);
  lVar5 = thunk_FUN_71007af5c0(lVar8 + 1);
  FUN_71007b66e0(&local_8,lVar5,lVar8,0);
  *(undefined1 *)(lVar5 + lVar8) = 0;
  *(long *)(param_3 + 0x28) = lVar5;
  *(long *)(param_3 + 0x30) = lVar8;
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x30))(&local_8,param_2);
  lVar8 = *(long *)(local_8 + -0x18);
  lVar5 = thunk_FUN_71007af5c0(lVar8 + 1);
  FUN_71007b66e0(&local_8,lVar5,lVar8,0);
  *(undefined1 *)(lVar5 + lVar8) = 0;
  *(long *)(param_3 + 0x38) = lVar5;
  *(long *)(param_3 + 0x40) = lVar8;
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  return;
}



// ===== FUN_71007b3b80 @ 71007b3b80 (size=536) =====

void FUN_71007b3b80(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_3 + 0x48) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_3 + 0x4c) = uVar4;
  *(undefined1 *)(param_3 + 0x148) = 1;
  lVar5 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  (**(code **)(lVar5 + 0x20))(&local_8,param_2);
  lVar7 = *(long *)(local_8 + -0x18);
  lVar5 = thunk_FUN_71007af5c0(lVar7 + 1);
  FUN_71007b66e0(&local_8,lVar5,lVar7,0);
  *(undefined1 *)(lVar5 + lVar7) = 0;
  *(long *)(param_3 + 0x10) = lVar5;
  *(long *)(param_3 + 0x18) = lVar7;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x28))(&local_8,param_2);
  lVar5 = *(long *)(local_8 + -0x18);
  if (lVar5 + 1U < 0x1fffffffffffffff) {
    lVar7 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
    FUN_71007b73a0(&local_8,lVar7,lVar5,0);
    *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
    *(long *)(param_3 + 0x28) = lVar7;
    *(long *)(param_3 + 0x30) = lVar5;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    (**(code **)(*param_2 + 0x30))(&local_8,param_2);
    lVar5 = *(long *)(local_8 + -0x18);
    if (lVar5 + 1U < 0x1fffffffffffffff) {
      lVar7 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
      FUN_71007b73a0(&local_8,lVar7,lVar5,0);
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      *(long *)(param_3 + 0x38) = lVar7;
      *(long *)(param_3 + 0x40) = lVar5;
      if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
          thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_710000389c();
}



// ===== FUN_71007b3e60 @ 71007b3e60 (size=236) =====

void FUN_71007b3e60(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  (**(code **)(*param_2 + 0x18))(&local_8,param_2,param_4,param_5);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3);
  }
  piVar5 = (int *)(local_8 + -8);
  if (*piVar5 < 0) {
    lVar4 = FUN_71007b6e00((undefined1 *)(local_8 + -0x18),auStack_10,0);
  }
  else {
    lVar4 = local_8;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_3 = lVar4;
  param_3[1] = *(long *)(local_8 + -0x18);
  param_3[4] = (long)FUN_71007b26c0;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar5 = (int *)(local_8 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  return;
}



// ===== FUN_71007b3f60 @ 71007b3f60 (size=236) =====

void FUN_71007b3f60(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  (**(code **)(*param_2 + 0x18))(&local_8,param_2,param_4,param_5);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3);
  }
  piVar5 = (int *)(local_8 + -8);
  if (*piVar5 < 0) {
    lVar4 = FUN_71007b7ac0((undefined1 *)(local_8 + -0x18),auStack_10,0);
  }
  else {
    lVar4 = local_8;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_3 = lVar4;
  param_3[1] = *(long *)(local_8 + -0x18);
  param_3[4] = (long)FUN_71007b2660;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar5 = (int *)(local_8 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  return;
}



// ===== FUN_71007b4060 @ 71007b4060 (size=676) =====

void FUN_71007b4060(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_3 + 0x21) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_3 + 0x22) = uVar4;
  uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x58) = uVar5;
  *(undefined1 *)(param_3 + 0x6f) = 1;
  lVar6 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  pcVar7 = *(code **)(lVar6 + 0x20);
  *(undefined8 *)(param_3 + 0x48) = 0;
  (*pcVar7)(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x10) = lVar6;
  *(long *)(param_3 + 0x18) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x28))(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x28) = lVar6;
  *(long *)(param_3 + 0x30) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x30))(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x38) = lVar6;
  *(long *)(param_3 + 0x40) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x38))(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x48) = lVar6;
  *(long *)(param_3 + 0x50) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  *(undefined4 *)(param_3 + 0x5c) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar5;
  return;
}



// ===== FUN_71007b4340 @ 71007b4340 (size=676) =====

void FUN_71007b4340(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_3 + 0x21) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_3 + 0x22) = uVar4;
  uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x58) = uVar5;
  *(undefined1 *)(param_3 + 0x6f) = 1;
  lVar6 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  pcVar7 = *(code **)(lVar6 + 0x20);
  *(undefined8 *)(param_3 + 0x48) = 0;
  (*pcVar7)(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x10) = lVar6;
  *(long *)(param_3 + 0x18) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x28))(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x28) = lVar6;
  *(long *)(param_3 + 0x30) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x30))(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x38) = lVar6;
  *(long *)(param_3 + 0x40) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x38))(&local_8,param_2);
  lVar9 = *(long *)(local_8 + -0x18);
  lVar6 = thunk_FUN_71007af5c0(lVar9 + 1);
  FUN_71007b66e0(&local_8,lVar6,lVar9,0);
  *(undefined1 *)(lVar6 + lVar9) = 0;
  *(long *)(param_3 + 0x48) = lVar6;
  *(long *)(param_3 + 0x50) = lVar9;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar8 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  *(undefined4 *)(param_3 + 0x5c) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar5;
  return;
}



// ===== FUN_71007b4620 @ 71007b4620 (size=744) =====

void FUN_71007b4620(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  long lVar8;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar4;
  *(undefined1 *)(param_3 + 0x98) = 1;
  lVar5 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  pcVar6 = *(code **)(lVar5 + 0x20);
  *(undefined8 *)(param_3 + 0x50) = 0;
  (*pcVar6)(&local_8,param_2);
  lVar8 = *(long *)(local_8 + -0x18);
  lVar5 = thunk_FUN_71007af5c0(lVar8 + 1);
  FUN_71007b66e0(&local_8,lVar5,lVar8,0);
  *(undefined1 *)(lVar5 + lVar8) = 0;
  *(long *)(param_3 + 0x10) = lVar5;
  *(long *)(param_3 + 0x18) = lVar8;
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x28))(&local_8,param_2);
  lVar5 = *(long *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < lVar5 + 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  lVar8 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
  FUN_71007b73a0(&local_8,lVar8,lVar5,0);
  *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
  *(long *)(param_3 + 0x30) = lVar8;
  *(long *)(param_3 + 0x38) = lVar5;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x30))(&local_8,param_2);
  lVar5 = *(long *)(local_8 + -0x18);
  if (lVar5 + 1U < 0x1fffffffffffffff) {
    lVar8 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
    FUN_71007b73a0(&local_8,lVar8,lVar5,0);
    *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
    *(long *)(param_3 + 0x40) = lVar8;
    *(long *)(param_3 + 0x48) = lVar5;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    (**(code **)(*param_2 + 0x38))(&local_8,param_2);
    lVar5 = *(long *)(local_8 + -0x18);
    if (lVar5 + 1U < 0x1fffffffffffffff) {
      lVar8 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
      FUN_71007b73a0(&local_8,lVar8,lVar5,0);
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      *(long *)(param_3 + 0x50) = lVar8;
      *(long *)(param_3 + 0x58) = lVar5;
      if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
          thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
        }
      }
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      *(undefined4 *)(param_3 + 100) = uVar4;
      uVar4 = (**(code **)(*param_2 + 0x50))(param_2);
      *(undefined4 *)(param_3 + 0x68) = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_710000389c();
}



// ===== FUN_71007b4940 @ 71007b4940 (size=744) =====

void FUN_71007b4940(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  long lVar8;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar4;
  *(undefined1 *)(param_3 + 0x98) = 1;
  lVar5 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  pcVar6 = *(code **)(lVar5 + 0x20);
  *(undefined8 *)(param_3 + 0x50) = 0;
  (*pcVar6)(&local_8,param_2);
  lVar8 = *(long *)(local_8 + -0x18);
  lVar5 = thunk_FUN_71007af5c0(lVar8 + 1);
  FUN_71007b66e0(&local_8,lVar5,lVar8,0);
  *(undefined1 *)(lVar5 + lVar8) = 0;
  *(long *)(param_3 + 0x10) = lVar5;
  *(long *)(param_3 + 0x18) = lVar8;
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x28))(&local_8,param_2);
  lVar5 = *(long *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < lVar5 + 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  lVar8 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
  FUN_71007b73a0(&local_8,lVar8,lVar5,0);
  *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
  *(long *)(param_3 + 0x30) = lVar8;
  *(long *)(param_3 + 0x38) = lVar5;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  (**(code **)(*param_2 + 0x30))(&local_8,param_2);
  lVar5 = *(long *)(local_8 + -0x18);
  if (lVar5 + 1U < 0x1fffffffffffffff) {
    lVar8 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
    FUN_71007b73a0(&local_8,lVar8,lVar5,0);
    *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
    *(long *)(param_3 + 0x40) = lVar8;
    *(long *)(param_3 + 0x48) = lVar5;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    (**(code **)(*param_2 + 0x38))(&local_8,param_2);
    lVar5 = *(long *)(local_8 + -0x18);
    if (lVar5 + 1U < 0x1fffffffffffffff) {
      lVar8 = thunk_FUN_71007af5c0((lVar5 + 1U) * 4);
      FUN_71007b73a0(&local_8,lVar8,lVar5,0);
      *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
      *(long *)(param_3 + 0x50) = lVar8;
      *(long *)(param_3 + 0x58) = lVar5;
      if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
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
          thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
        }
      }
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      *(undefined4 *)(param_3 + 100) = uVar4;
      uVar4 = (**(code **)(*param_2 + 0x50))(param_2);
      *(undefined4 *)(param_3 + 0x68) = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_710000389c();
}



// ===== FUN_71007b4c60 @ 71007b4c60 (size=148) =====

undefined4
FUN_71007b4c60(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = FUN_71007b20e0(param_3,param_3 + param_4,auStack_10);
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,param_5);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar5 = (int *)(local_8 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  return uVar4;
}



// ===== FUN_71007b4d20 @ 71007b4d20 (size=148) =====

undefined4
FUN_71007b4d20(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = FUN_71007b20e0(param_3,param_3 + param_4,auStack_10);
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,param_5);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar5 = (int *)(local_8 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  return uVar4;
}



// ===== FUN_71007b4de0 @ 71007b4de0 (size=344) =====

void FUN_71007b4de0(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  long local_10;
  long local_8;
  
  local_10 = FUN_71007b20e0(param_7,param_7 + param_8,auStack_20);
  (**(code **)(*param_2 + 0x18))(&local_8,param_2,param_4,param_5,param_6,&local_10);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3);
  }
  piVar5 = (int *)(local_8 + -8);
  if (*piVar5 < 0) {
    lVar4 = FUN_71007b6e00((undefined1 *)(local_8 + -0x18),auStack_18,0);
  }
  else {
    lVar4 = local_8;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_3 = lVar4;
  param_3[1] = *(long *)(local_8 + -0x18);
  param_3[4] = (long)FUN_71007b26c0;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar5 = (int *)(local_8 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_18);
    }
  }
  if ((undefined1 *)(local_10 + -0x18) != &DAT_7100d210d8) {
    piVar5 = (int *)(local_10 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_10 + -0x18),auStack_18);
    }
  }
  return;
}



// ===== FUN_71007b4f60 @ 71007b4f60 (size=344) =====

void FUN_71007b4f60(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  long local_10;
  long local_8;
  
  local_10 = FUN_71007b2000(param_7,param_7 + param_8 * 4,auStack_20);
  (**(code **)(*param_2 + 0x18))(&local_8,param_2,param_4,param_5,param_6,&local_10);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3);
  }
  piVar5 = (int *)(local_8 + -8);
  if (*piVar5 < 0) {
    lVar4 = FUN_71007b7ac0((undefined1 *)(local_8 + -0x18),auStack_18,0);
  }
  else {
    lVar4 = local_8;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_3 = lVar4;
  param_3[1] = *(long *)(local_8 + -0x18);
  param_3[4] = (long)FUN_71007b2660;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar5 = (int *)(local_8 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_18);
    }
  }
  if ((undefined1 *)(local_10 + -0x18) != &DAT_7100d210f8) {
    piVar5 = (int *)(local_10 + -8);
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
      thunk_FUN_710081c200((undefined1 *)(local_10 + -0x18),auStack_18);
    }
  }
  return;
}



// ===== FUN_71007b50e0 @ 71007b50e0 (size=24) =====

void FUN_71007b50e0(undefined8 param_1,long *param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0071007b50f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  return;
}



// ===== FUN_71007b5100 @ 71007b5100 (size=24) =====

void FUN_71007b5100(undefined8 param_1,long *param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0071007b5114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  return;
}



// ===== FUN_71007b5160 @ 71007b5160 (size=224) =====

void FUN_71007b5160(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,byte param_10)

{
  if (param_10 == 0x74) {
                    /* WARNING: Could not recover jumptable at 0x0071007b521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (0x74 < param_10) {
    if (param_10 != 0x77) {
                    /* WARNING: Could not recover jumptable at 0x0071007b51b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x38))(param_2,param_3,param_4,param_5,param_6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0071007b523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_10 != 100) {
                    /* WARNING: Could not recover jumptable at 0x0071007b51dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007b51fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4,param_5,param_6);
  return;
}



// ===== FUN_71007b5240 @ 71007b5240 (size=224) =====

void FUN_71007b5240(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,byte param_10)

{
  if (param_10 == 0x74) {
                    /* WARNING: Could not recover jumptable at 0x0071007b52fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (0x74 < param_10) {
    if (param_10 != 0x77) {
                    /* WARNING: Could not recover jumptable at 0x0071007b5294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x38))(param_2,param_3,param_4,param_5,param_6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0071007b531c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_10 != 100) {
                    /* WARNING: Could not recover jumptable at 0x0071007b52bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007b52dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4,param_5,param_6);
  return;
}



// ===== FUN_71007b5320 @ 71007b5320 (size=416) =====

undefined1  [16]
FUN_71007b5320(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,int *param_9,long param_10,
              undefined8 *param_11)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  if (param_10 == 0) {
    local_8 = &DAT_7100d210f0;
    auVar6 = (**(code **)(*param_2 + 0x18))
                       (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_8);
    if (*param_9 == 0) {
      if ((code *)param_11[4] != (code *)0x0) {
        (*(code *)param_11[4])(param_11);
      }
      piVar5 = (int *)(local_8 + -8);
      if (*piVar5 < 0) {
        puVar4 = (undefined1 *)FUN_71007b6e00(local_8 + -0x18,auStack_10,0);
      }
      else {
        puVar4 = local_8;
        if (local_8 + -0x18 != &DAT_7100d210d8) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = *piVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      *param_11 = puVar4;
      param_11[1] = *(undefined8 *)(local_8 + -0x18);
      param_11[4] = FUN_71007b26c0;
    }
    if (local_8 + -0x18 != &DAT_7100d210d8) {
      piVar5 = (int *)(local_8 + -8);
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
        thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
      }
    }
    auVar6._8_8_ = param_4 & 0xffffffff00000000 | auVar6._8_8_ & 0xffffffff;
    return auVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007b537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar6 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6);
  return auVar6;
}



// ===== FUN_71007b54e0 @ 71007b54e0 (size=416) =====

undefined1  [16]
FUN_71007b54e0(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,int *param_9,long param_10,
              long *param_11)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  if (param_10 == 0) {
    local_8 = 0x7100d21110;
    auVar6 = (**(code **)(*param_2 + 0x18))
                       (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_8);
    if (*param_9 == 0) {
      if ((code *)param_11[4] != (code *)0x0) {
        (*(code *)param_11[4])(param_11);
      }
      piVar5 = (int *)(local_8 + -8);
      if (*piVar5 < 0) {
        lVar4 = FUN_71007b7ac0((undefined1 *)(local_8 + -0x18),auStack_10,0);
      }
      else {
        lVar4 = local_8;
        if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = *piVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      *param_11 = lVar4;
      param_11[1] = *(long *)(local_8 + -0x18);
      param_11[4] = (long)FUN_71007b2660;
    }
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
      piVar5 = (int *)(local_8 + -8);
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
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    auVar6._8_8_ = param_4 & 0xffffffff00000000 | auVar6._8_8_ & 0xffffffff;
    return auVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007b553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar6 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6);
  return auVar6;
}



// ===== FUN_71007b56a0 @ 71007b56a0 (size=276) =====

undefined1  [16]
FUN_71007b56a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7,long *param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  if (param_8 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071007b5774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
    return auVar5;
  }
  if (param_8[4] != 0) {
    local_8 = FUN_71007b20e0(*param_8,*param_8 + param_8[1]);
    auVar5 = (**(code **)(*param_2 + 0x18))
                       (param_2,param_3,param_4,param_5,param_6,param_7,&local_8);
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      piVar4 = (int *)(local_8 + -8);
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
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007b57e0 @ 71007b57e0 (size=276) =====

undefined1  [16]
FUN_71007b57e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7,long *param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  if (param_8 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071007b58b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
    return auVar5;
  }
  if (param_8[4] != 0) {
    local_8 = FUN_71007b2000(*param_8,*param_8 + param_8[1] * 4);
    auVar5 = (**(code **)(*param_2 + 0x18))
                       (param_2,param_3,param_4,param_5,param_6,param_7,&local_8);
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
      piVar4 = (int *)(local_8 + -8);
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
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007b5920 @ 71007b5920 (size=2128) =====

undefined8 * FUN_71007b5920(long param_1,undefined1 *param_2)

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
    if (param_2 == &DAT_7100d212b0) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0x90);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aee788;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *puVar4 = &PTR_FUN_7100aee3b0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined2 *)(puVar6 + 9) = 0;
      *(undefined1 *)(puVar6 + 0x11) = 0;
      FUN_71007fd4c0(puVar4,0);
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
      *puVar4 = &PTR_LAB_7100aecc38;
      puVar4[4] = puVar6;
      FUN_71007c38e0(0,param_1);
    }
    else if (param_2 == &DAT_7100d21288) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x20);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_7100aee378;
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
      *puVar4 = &PTR_FUN_7100aecc80;
    }
    else if (param_2 == &DAT_7100d21298) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aee6f8;
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
      *puVar4 = &PTR_LAB_7100ae6fa0;
    }
    else if (param_2 == &DAT_7100d212d0) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aee670;
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
      *puVar4 = &PTR_LAB_7100ae6e70;
    }
    else if (param_2 == &DAT_7100d212c8) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aee6a0;
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
      *puVar4 = &PTR_LAB_7100ae6ea0;
    }
    else if (param_2 == &DAT_7100d212b8) {
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
      *puVar4 = &PTR_FUN_7100aee510;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined2 *)(puVar6 + 4) = 0;
      *(undefined1 *)((long)puVar6 + 0x22) = 0;
      *(undefined4 *)(puVar6 + 0xb) = 0;
      *(undefined8 *)((long)puVar6 + 0x5c) = 0;
      *(undefined1 *)((long)puVar6 + 0x6f) = 0;
      FUN_71007fc9e0(puVar4,0,0);
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
      *puVar4 = &PTR_LAB_7100aeccb8;
      puVar4[4] = puVar6;
      FUN_71007c3de0(0,param_1,puVar6);
    }
    else if (param_2 == &DAT_7100d212c0) {
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
      *puVar4 = &PTR_FUN_7100aee578;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined2 *)(puVar6 + 4) = 0;
      *(undefined1 *)((long)puVar6 + 0x22) = 0;
      *(undefined4 *)(puVar6 + 0xb) = 0;
      *(undefined8 *)((long)puVar6 + 0x5c) = 0;
      *(undefined1 *)((long)puVar6 + 0x6f) = 0;
      FUN_71007fcac0(puVar4,0,0);
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
      *puVar4 = &PTR_LAB_7100aecd20;
      puVar4[4] = puVar6;
      FUN_71007c4000(0,param_1,puVar6);
    }
    else if (param_2 == &DAT_7100d21290) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      FUN_71007d35c0(puVar4,0);
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
      *puVar4 = &PTR_LAB_7100ae6ed0;
    }
    else if (param_2 == &DAT_7100d22838) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0x150);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aef310;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *puVar4 = &PTR_FUN_7100aeef38;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 0x29) = 0;
      FUN_71007fd6e0(puVar4,0);
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
      *puVar4 = &PTR_LAB_7100aecd88;
      puVar4[4] = puVar6;
      FUN_71007c3a60(0,param_1);
    }
    else if (param_2 == &DAT_7100d22810) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x20);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_7100aeee80;
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
      *puVar4 = &PTR_FUN_7100aecdd0;
    }
    else if (param_2 == &DAT_7100d22820) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aef280;
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
      *puVar4 = &PTR_LAB_7100ae6ff0;
    }
    else if (param_2 == &DAT_7100d22858) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aef1f8;
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
      *puVar4 = &PTR_LAB_7100ae6f08;
    }
    else if (param_2 == &DAT_7100d22850) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aef228;
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
      *puVar4 = &PTR_LAB_7100ae6f38;
    }
    else if (param_2 == &DAT_7100d22840) {
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
      *puVar4 = &PTR_FUN_7100aef098;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined8 *)((long)puVar6 + 0x24) = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)((long)puVar6 + 100) = 0;
      *(undefined1 *)(puVar6 + 0x13) = 0;
      FUN_71007fcda0(puVar4,0,0);
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
      *puVar4 = &PTR_LAB_7100aece08;
      puVar4[4] = puVar6;
      FUN_71007c4220(0,param_1,puVar6);
    }
    else if (param_2 == &DAT_7100d22848) {
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
      *puVar4 = &PTR_FUN_7100aef100;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined8 *)((long)puVar6 + 0x24) = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)((long)puVar6 + 100) = 0;
      *(undefined1 *)(puVar6 + 0x13) = 0;
      FUN_71007fce80(puVar4,0,0);
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
      *puVar4 = &PTR_LAB_7100aece70;
      puVar4[4] = puVar6;
      FUN_71007c4480(0,param_1,puVar6);
    }
    else {
      if (param_2 != &DAT_7100d22818) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("cannot create shim for unknown locale::facet");
      }
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      FUN_71007e6600(puVar4,0);
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
      *puVar4 = &PTR_LAB_7100ae6f68;
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  return puVar4;
}



// ===== FUN_71007b6280 @ 71007b6280 (size=84) =====

void FUN_71007b6280(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  lVar4 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_7100aec880;
  piVar5 = (int *)(lVar4 + -8);
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



// ===== FUN_71007b62c0 @ 71007b62c0 (size=40) =====

void FUN_71007b62c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_8 [8];
  
  uVar1 = FUN_71007b6e00(param_1,auStack_8,0);
  *(undefined8 *)(param_4 + 8) = uVar1;
  return;
}



// ===== FUN_71007b6300 @ 71007b6300 (size=228) =====

void FUN_71007b6300(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_8 [8];
  
  *param_1 = &PTR_FUN_7100aec7b8;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *param_2;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,param_2,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    param_1[1] = plVar3;
    return;
  }
  param_1[1] = &DAT_7100d210f0;
  return;
}



// ===== FUN_71007b6400 @ 71007b6400 (size=48) =====

void FUN_71007b6400(undefined8 *param_1)

{
  FUN_71007b6300();
  *param_1 = &PTR_FUN_7100aec7e0;
  return;
}



// ===== FUN_71007b6440 @ 71007b6440 (size=48) =====

void FUN_71007b6440(undefined8 *param_1)

{
  FUN_71007b6300();
  *param_1 = &PTR_FUN_7100aec808;
  return;
}



// ===== FUN_71007b6480 @ 71007b6480 (size=48) =====

void FUN_71007b6480(undefined8 *param_1)

{
  FUN_71007b6300();
  *param_1 = &PTR_FUN_7100aec830;
  return;
}



// ===== FUN_71007b64c0 @ 71007b64c0 (size=48) =====

void FUN_71007b64c0(undefined8 *param_1)

{
  FUN_71007b6300();
  *param_1 = &PTR_FUN_7100aec858;
  return;
}



// ===== FUN_71007b6500 @ 71007b6500 (size=228) =====

void FUN_71007b6500(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_8 [8];
  
  *param_1 = &PTR_FUN_7100aec880;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *param_2;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,param_2,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    param_1[1] = plVar3;
    return;
  }
  param_1[1] = &DAT_7100d210f0;
  return;
}



// ===== FUN_71007b6600 @ 71007b6600 (size=204) =====

void FUN_71007b6600(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_8 [8];
  
  if (param_3 == 0) {
    *param_1 = &DAT_7100d210f0;
    return;
  }
  if (param_2 != (undefined1 *)0x0) {
    plVar1 = (long *)FUN_71007b6800(param_3,0,auStack_8);
    plVar2 = plVar1 + 3;
    if (param_3 == 1) {
      *(undefined1 *)(plVar1 + 3) = *param_2;
    }
    else {
      plVar2 = (long *)FUN_710080f900(plVar2,param_2,param_3);
    }
    if (plVar1 != (long *)&DAT_7100d210d8) {
      *plVar1 = param_3;
      *(undefined4 *)(plVar1 + 2) = 0;
      *(undefined1 *)((long)plVar1 + param_3 + 0x18) = 0;
    }
    *param_1 = plVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string::_S_construct null not valid");
}



// ===== FUN_71007b66e0 @ 71007b66e0 (size=132) =====

ulong FUN_71007b66e0(long *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (*(ulong *)(lVar1 + -0x18) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                   param_4);
  }
  uVar2 = *(ulong *)(lVar1 + -0x18) - param_4;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *param_2 = *(undefined1 *)(lVar1 + param_4);
      return 1;
    }
    FUN_710080f900(param_2,lVar1 + param_4);
  }
  return uVar2;
}



// ===== FUN_71007b6780 @ 71007b6780 (size=52) =====

void FUN_71007b6780(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + -8) < 0) {
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  lVar2 = *param_2;
  if (*(int *)(lVar2 + -8) < 0) {
    *(undefined4 *)(lVar2 + -8) = 0;
  }
  *param_1 = lVar2;
  *param_2 = lVar1;
  return;
}



// ===== FUN_71007b67c0 @ 71007b67c0 (size=56) =====

ulong FUN_71007b67c0(long *param_1,char param_2,ulong param_3)

{
  while( true ) {
    if (*(ulong *)(*param_1 + -0x18) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) != param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}



// ===== FUN_71007b6800 @ 71007b6800 (size=128) =====

void FUN_71007b6800(ulong param_1,ulong param_2)

{
  long lVar1;
  
  if (param_1 < 0x3ffffffffffffffa) {
    if (param_2 < param_1) {
      if (param_1 < param_2 << 1) {
        param_1 = param_2 << 1;
      }
      if ((0x1000 < param_1 + 0x39 && param_2 < param_1) &&
         (param_1 = (param_1 + 0x1000) - (param_1 + 0x39 & 0xfff), 0x3ffffffffffffff9 < param_1)) {
        param_1 = 0x3ffffffffffffff9;
      }
    }
    lVar1 = FUN_71007af5c0(param_1 + 0x19);
    *(ulong *)(lVar1 + 8) = param_1;
    *(undefined4 *)(lVar1 + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::_S_create");
}



// ===== FUN_71007b6880 @ 71007b6880 (size=24) =====

long * FUN_71007b6880(long param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    return (long *)&DAT_7100d210f0;
  }
  plVar1 = (long *)FUN_71007b6800(param_1,0);
  plVar2 = plVar1 + 3;
  if (param_1 == 1) {
    *(undefined1 *)(plVar1 + 3) = param_2;
  }
  else {
    plVar2 = (long *)FUN_7100808340(plVar2,param_2,param_1);
  }
  if (plVar1 != (long *)&DAT_7100d210d8) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined1 *)((long)plVar1 + param_1 + 0x18) = 0;
  }
  return plVar2;
}



// ===== FUN_71007b6898 @ 71007b6898 (size=136) =====

long * FUN_71007b6898(long param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_71007b6800(param_1,0);
  plVar2 = plVar1 + 3;
  if (param_1 == 1) {
    *(undefined1 *)(plVar1 + 3) = param_2;
  }
  else {
    plVar2 = (long *)FUN_7100808340(plVar2,param_2,param_1);
  }
  if (plVar1 != (long *)&DAT_7100d210d8) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined1 *)((long)plVar1 + param_1 + 0x18) = 0;
  }
  return plVar2;
}



// ===== thunk_FUN_710081c200 @ 71007b6920 (size=4) =====

void thunk_FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== FUN_71007b6940 @ 71007b6940 (size=480) =====

void FUN_71007b6940(long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_8 [8];
  
  lVar8 = param_3 + param_2;
  lVar10 = *param_1;
  uVar7 = *(ulong *)(lVar10 + -0x10);
  uVar1 = (param_4 - param_3) + *(long *)(lVar10 + -0x18);
  lVar12 = *(long *)(lVar10 + -0x18) - lVar8;
  if (uVar7 < uVar1) {
LAB_71007b6994:
    puVar5 = (undefined1 *)FUN_71007b6800(uVar1,uVar7,auStack_8);
    puVar11 = puVar5 + 0x18;
    if (param_2 == 0) {
LAB_71007b69d8:
      if (lVar12 == 0) goto LAB_71007b6a08;
LAB_71007b69dc:
      param_4 = param_2 + 0x18 + param_4;
      if (lVar12 != 1) {
        FUN_710080f900(puVar5 + param_4,*param_1 + lVar8,lVar12);
        goto LAB_71007b6a08;
      }
      puVar5[param_4] = *(undefined1 *)(*param_1 + lVar8);
      lVar8 = *param_1;
      puVar6 = (undefined1 *)(lVar8 + -0x18);
      if (puVar6 != &DAT_7100d210d8) goto LAB_71007b6aa0;
    }
    else {
      if (param_2 != 1) {
        puVar11 = (undefined1 *)FUN_710080f900(puVar11,(undefined1 *)*param_1,param_2);
        goto LAB_71007b69d8;
      }
      puVar5[0x18] = *(undefined1 *)*param_1;
      if (lVar12 != 0) goto LAB_71007b69dc;
LAB_71007b6a08:
      lVar8 = *param_1;
      puVar6 = (undefined1 *)(lVar8 + -0x18);
      if (puVar6 != &DAT_7100d210d8) {
LAB_71007b6aa0:
        piVar9 = (int *)(lVar8 + -8);
        do {
          iVar2 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 < 1) {
          thunk_FUN_710081c200(puVar6,auStack_8);
        }
      }
    }
    *param_1 = (long)puVar11;
  }
  else {
    puVar11 = (undefined1 *)*param_1;
    if (0 < (int)*(undefined8 *)(lVar10 + -8)) {
      uVar7 = *(ulong *)(puVar11 + -0x10);
      goto LAB_71007b6994;
    }
    if (lVar12 == 0 || param_4 == param_3) {
LAB_71007b6a6c:
      if (puVar11 == &DAT_7100d210f0) {
        return;
      }
      goto LAB_71007b6a80;
    }
    if (lVar12 != 1) {
      FUN_710080f900(puVar11 + param_4 + param_2,puVar11 + lVar8,lVar12);
      puVar11 = (undefined1 *)*param_1;
      goto LAB_71007b6a6c;
    }
    puVar11[param_4 + param_2] = puVar11[lVar8];
    puVar11 = (undefined1 *)*param_1;
    puVar5 = puVar11 + -0x18;
  }
  if (puVar5 == &DAT_7100d210d8) {
    return;
  }
LAB_71007b6a80:
  *(ulong *)(puVar11 + -0x18) = uVar1;
  *(undefined4 *)(puVar11 + -8) = 0;
  puVar11[uVar1] = 0;
  return;
}



// ===== FUN_71007b6b20 @ 71007b6b20 (size=48) =====

void FUN_71007b6b20(long *param_1)

{
  if (*(long *)(*param_1 + -0x18) == 0) {
    return;
  }
  if ((int)*(undefined8 *)(*param_1 + -8) < 1) {
    *(undefined4 *)(*param_1 + -8) = 0xffffffff;
    return;
  }
  FUN_71007b6940(param_1,0,0,0);
  *(undefined4 *)(*param_1 + -8) = 0xffffffff;
  return;
}



// ===== FUN_71007b6b50 @ 71007b6b50 (size=52) =====

void FUN_71007b6b50(long *param_1)

{
  FUN_71007b6940(param_1,0,0,0);
  *(undefined4 *)(*param_1 + -8) = 0xffffffff;
  return;
}



// ===== FUN_71007b6ba0 @ 71007b6ba0 (size=24) =====

void FUN_71007b6ba0(long *param_1)

{
  if (*(int *)(*param_1 + -8) < 0) {
    return;
  }
  FUN_71007b6b20();
  return;
}



// ===== FUN_71007b6bc0 @ 71007b6bc0 (size=156) =====

long * FUN_71007b6bc0(long *param_1,long param_2,long param_3,ulong param_4,undefined1 param_5)

{
  if ((ulong)((param_3 + 0x3ffffffffffffff9) - *(long *)(*param_1 + -0x18)) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_replace_aux");
  }
  FUN_71007b6940();
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(undefined1 *)(*param_1 + param_2) = param_5;
      return param_1;
    }
    FUN_7100808340(*param_1 + param_2,param_5,param_4);
  }
  return param_1;
}



// ===== FUN_71007b6c60 @ 71007b6c60 (size=120) =====

long * FUN_71007b6c60(long *param_1,long param_2,undefined8 param_3,undefined1 *param_4,long param_5
                     )

{
  FUN_71007b6940();
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(undefined1 *)(*param_1 + param_2) = *param_4;
      return param_1;
    }
    FUN_710080f900(*param_1 + param_2,param_4,param_5);
  }
  return param_1;
}



// ===== FUN_71007b6ce0 @ 71007b6ce0 (size=276) =====

undefined8 * FUN_71007b6ce0(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (0x3ffffffffffffff9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::assign");
  }
  if ((param_2 < puVar1) || (puVar1 + *(long *)(puVar1 + -0x18) < param_2)) {
    puVar2 = (undefined8 *)FUN_71007b6c60(param_1,0,*(long *)(puVar1 + -0x18));
    return puVar2;
  }
  puVar3 = (undefined1 *)*param_1;
  if (0 < (int)*(undefined8 *)(puVar1 + -8)) {
    puVar2 = (undefined8 *)FUN_71007b6c60(param_1,0,*(undefined8 *)(puVar3 + -0x18));
    return puVar2;
  }
  if ((ulong)((long)param_2 - (long)puVar3) < param_3) {
    if (param_2 == puVar3) goto LAB_71007b6d88;
    if (param_3 != 1) {
      FUN_710080f900();
      puVar3 = (undefined1 *)*param_1;
      goto LAB_71007b6d88;
    }
  }
  else if (param_3 != 1) {
    if (param_3 != 0) {
      FUN_710080f900();
      puVar3 = (undefined1 *)*param_1;
    }
    goto LAB_71007b6d88;
  }
  *puVar3 = *param_2;
  puVar3 = (undefined1 *)*param_1;
LAB_71007b6d88:
  if (puVar3 != &DAT_7100d210f0) {
    *(ulong *)(puVar3 + -0x18) = param_3;
    *(undefined4 *)(puVar3 + -8) = 0;
    puVar3[param_3] = 0;
  }
  return param_1;
}



// ===== FUN_71007b6e00 @ 71007b6e00 (size=180) =====

long * FUN_71007b6e00(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)FUN_71007b6800(param_3 + *param_1,param_1[1],param_2);
  lVar3 = *param_1;
  plVar2 = plVar1 + 3;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      *(char *)(plVar1 + 3) = (char)param_1[3];
      lVar3 = *param_1;
    }
    else {
      plVar2 = (long *)FUN_710080f900(plVar2,param_1 + 3);
      lVar3 = *param_1;
    }
  }
  if (plVar1 != (long *)&DAT_7100d210d8) {
    *plVar1 = lVar3;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined1 *)((long)plVar1 + lVar3 + 0x18) = 0;
    return plVar2;
  }
  return plVar2;
}



// ===== FUN_71007b6ec0 @ 71007b6ec0 (size=180) =====

void FUN_71007b6ec0(long *param_1,ulong param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  int *piVar7;
  undefined1 auStack_8 [8];
  
  lVar6 = *param_1;
  puVar1 = (ulong *)(lVar6 + -0x10);
  if (param_2 <= *puVar1) {
    if ((int)*(undefined8 *)(lVar6 + -8) < 1) {
      return;
    }
    lVar6 = *param_1;
    param_2 = *puVar1;
  }
  lVar6 = FUN_71007b6e00(lVar6 + -0x18,auStack_8,param_2 - *(long *)(lVar6 + -0x18));
  puVar5 = (undefined1 *)(*param_1 + -0x18);
  if (puVar5 != &DAT_7100d210d8) {
    piVar7 = (int *)(*param_1 + -8);
    do {
      iVar2 = *piVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 < 1) {
      thunk_FUN_710081c200(puVar5,auStack_8);
    }
  }
  *param_1 = lVar6;
  return;
}



// ===== FUN_71007b6f80 @ 71007b6f80 (size=224) =====

long * FUN_71007b6f80(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(*param_2 + -0x18);
  if (lVar4 != 0) {
    lVar2 = *param_1;
    uVar1 = lVar4 + *(long *)(lVar2 + -0x18);
    if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < (int)*(undefined8 *)(lVar2 + -8))) {
      FUN_71007b6ec0(param_1,uVar1);
      lVar5 = *param_1;
      puVar3 = (undefined1 *)*param_2;
      lVar6 = *(long *)(lVar5 + -0x18);
      lVar2 = lVar5 + lVar6;
    }
    else {
      lVar5 = *param_1;
      puVar3 = (undefined1 *)*param_2;
      lVar6 = *(long *)(lVar5 + -0x18);
      lVar2 = lVar5 + lVar6;
    }
    if (lVar4 == 1) {
      *(undefined1 *)(lVar5 + lVar6) = *puVar3;
    }
    else {
      FUN_710080f900(lVar2);
    }
    puVar3 = (undefined1 *)*param_1;
    if (puVar3 != &DAT_7100d210f0) {
      *(ulong *)(puVar3 + -0x18) = uVar1;
      *(undefined4 *)(puVar3 + -8) = 0;
      puVar3[uVar1] = 0;
    }
    return param_1;
  }
  return param_1;
}



// ===== FUN_71007b7060 @ 71007b7060 (size=316) =====

undefined8 * FUN_71007b7060(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar4 = (undefined1 *)*param_1;
  lVar3 = *(long *)(puVar4 + -0x18);
  if (0x3ffffffffffffff9U - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  uVar1 = param_3 + lVar3;
  if (*(ulong *)(puVar4 + -0x10) < uVar1) {
    if (puVar4 <= param_2) {
LAB_71007b7130:
      if (param_2 <= puVar4 + lVar3) {
        lVar3 = (long)param_2 - (long)puVar4;
        FUN_71007b6ec0(param_1,uVar1);
        puVar4 = (undefined1 *)*param_1;
        param_2 = puVar4 + lVar3;
        lVar3 = *(long *)(puVar4 + -0x18);
        puVar2 = puVar4 + lVar3;
        goto joined_r0x0071007b7170;
      }
    }
LAB_71007b70a8:
    FUN_71007b6ec0(param_1,uVar1);
    puVar4 = (undefined1 *)*param_1;
  }
  else {
    puVar5 = (undefined8 *)(puVar4 + -8);
    puVar4 = (undefined1 *)*param_1;
    if (0 < (int)*puVar5) {
      if (puVar4 <= param_2) {
        lVar3 = *(long *)(puVar4 + -0x18);
        goto LAB_71007b7130;
      }
      goto LAB_71007b70a8;
    }
  }
  lVar3 = *(long *)(puVar4 + -0x18);
  puVar2 = puVar4 + lVar3;
joined_r0x0071007b7170:
  if (param_3 == 1) {
    puVar4[lVar3] = *param_2;
  }
  else {
    FUN_710080f900(puVar2,param_2);
  }
  puVar4 = (undefined1 *)*param_1;
  if (puVar4 != &DAT_7100d210f0) {
    *(ulong *)(puVar4 + -0x18) = uVar1;
    *(undefined4 *)(puVar4 + -8) = 0;
    puVar4[uVar1] = 0;
  }
  return param_1;
}



// ===== FUN_71007b71a0 @ 71007b71a0 (size=256) =====

long * FUN_71007b71a0(long *param_1,ulong param_2,undefined1 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return param_1;
  }
  lVar2 = *param_1;
  if (param_2 <= 0x3ffffffffffffff9U - *(long *)(lVar2 + -0x18)) {
    uVar1 = param_2 + *(long *)(lVar2 + -0x18);
    if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < (int)*(undefined8 *)(lVar2 + -8))) {
      FUN_71007b6ec0(param_1,uVar1);
      lVar4 = *param_1;
      lVar5 = *(long *)(lVar4 + -0x18);
      lVar2 = lVar4 + lVar5;
    }
    else {
      lVar4 = *param_1;
      lVar5 = *(long *)(lVar4 + -0x18);
      lVar2 = lVar4 + lVar5;
    }
    if (param_2 == 1) {
      *(undefined1 *)(lVar4 + lVar5) = param_3;
    }
    else {
      FUN_7100808340(lVar2,param_3,param_2);
    }
    puVar3 = (undefined1 *)*param_1;
    if (puVar3 != &DAT_7100d210f0) {
      *(ulong *)(puVar3 + -0x18) = uVar1;
      *(undefined4 *)(puVar3 + -8) = 0;
      puVar3[uVar1] = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::append");
}



// ===== FUN_71007b72a0 @ 71007b72a0 (size=60) =====

void FUN_71007b72a0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (0x3ffffffffffffff9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::resize");
  }
  if (param_2 <= uVar1) {
    if (uVar1 <= param_2) {
      return;
    }
    FUN_71007b6940(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  FUN_71007b71a0(param_1,param_2 - uVar1);
  return;
}



// ===== FUN_71007b72dc @ 71007b72dc (size=20) =====

void FUN_71007b72dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::resize");
}



// ===== FUN_71007b7300 @ 71007b7300 (size=144) =====

void FUN_71007b7300(long *param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + -0x18);
  uVar1 = lVar2 + 1;
  if ((*(ulong *)(lVar3 + -0x10) < uVar1) || (0 < (int)*(undefined8 *)(lVar3 + -8))) {
    FUN_71007b6ec0();
  }
  *(undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18)) = param_2;
  lVar3 = *param_1;
  if ((undefined1 *)(lVar3 + -0x18) == &DAT_7100d210d8) {
    return;
  }
  *(ulong *)(lVar3 + -0x18) = uVar1;
  *(undefined4 *)(lVar3 + -8) = 0;
  ((undefined1 *)(lVar3 + -0x18))[lVar2 + 0x19] = 0;
  return;
}



// ===== FUN_71007b73a0 @ 71007b73a0 (size=132) =====

ulong FUN_71007b73a0(long *param_1,undefined4 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (*(ulong *)(lVar1 + -0x18) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                   param_4);
  }
  uVar2 = *(ulong *)(lVar1 + -0x18) - param_4;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *param_2 = *(undefined4 *)(lVar1 + param_4 * 4);
      return 1;
    }
    FUN_710080e900(param_2,lVar1 + param_4 * 4);
  }
  return uVar2;
}



// ===== FUN_71007b7440 @ 71007b7440 (size=52) =====

void FUN_71007b7440(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + -8) < 0) {
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  lVar2 = *param_2;
  if (*(int *)(lVar2 + -8) < 0) {
    *(undefined4 *)(lVar2 + -8) = 0;
  }
  *param_1 = lVar2;
  *param_2 = lVar1;
  return;
}



// ===== FUN_71007b7480 @ 71007b7480 (size=148) =====

void FUN_71007b7480(ulong param_1,ulong param_2)

{
  long lVar1;
  
  if (0xffffffffffffffe < param_1) {
LAB_71007b7508:
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_S_create");
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 << 1) {
      param_1 = param_2 << 1;
    }
    lVar1 = (param_1 + 7) * 4;
    if (lVar1 + 0x20U < 0x1001 || param_1 <= param_2) {
      if (lVar1 < 0) {
        FUN_7100003a1c();
        goto LAB_71007b7508;
      }
      goto LAB_71007b74e8;
    }
    param_1 = param_1 + (0x1000 - (lVar1 + 0x20U & 0xfff) >> 2);
    if (0xffffffffffffffe < param_1) {
      param_1 = 0xffffffffffffffe;
    }
  }
  lVar1 = (param_1 + 7) * 4;
LAB_71007b74e8:
  lVar1 = FUN_71007af5c0(lVar1);
  *(ulong *)(lVar1 + 8) = param_1;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  return;
}



// ===== FUN_71007b7520 @ 71007b7520 (size=24) =====

long * FUN_71007b7520(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return (long *)0x7100d21110;
  }
  plVar1 = (long *)FUN_71007b7480(param_1,0);
  if (param_1 == 1) {
    *(undefined4 *)(plVar1 + 3) = param_2;
  }
  else {
    FUN_710081fbc0(plVar1 + 3,param_2,param_1);
  }
  if (plVar1 != (long *)&DAT_7100d210f8) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)((long)plVar1 + param_1 * 4 + 0x18) = 0;
  }
  return plVar1 + 3;
}



// ===== FUN_71007b7538 @ 71007b7538 (size=140) =====

long * FUN_71007b7538(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_71007b7480(param_1,0);
  if (param_1 == 1) {
    *(undefined4 *)(plVar1 + 3) = param_2;
  }
  else {
    FUN_710081fbc0(plVar1 + 3,param_2,param_1);
  }
  if (plVar1 != (long *)&DAT_7100d210f8) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)((long)plVar1 + param_1 * 4 + 0x18) = 0;
  }
  return plVar1 + 3;
}



// ===== thunk_FUN_710081c200 @ 71007b75e0 (size=4) =====

void thunk_FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== FUN_71007b7600 @ 71007b7600 (size=484) =====

void FUN_71007b7600(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_8 [8];
  
  lVar11 = *param_1;
  lVar1 = param_3 + param_2;
  uVar8 = *(ulong *)(lVar11 + -0x10);
  uVar2 = (param_4 - param_3) + *(long *)(lVar11 + -0x18);
  lVar13 = *(long *)(lVar11 + -0x18) - lVar1;
  if (uVar8 < uVar2) {
LAB_71007b765c:
    puVar6 = (undefined1 *)FUN_71007b7480(uVar2,uVar8,auStack_8);
    puVar9 = (undefined4 *)*param_1;
    puVar12 = puVar6 + 0x18;
    if (param_2 == 0) {
LAB_71007b7698:
      if (lVar13 == 0) goto LAB_71007b76cc;
LAB_71007b769c:
      lVar11 = (param_4 + param_2) * 4 + 0x18;
      if (lVar13 != 1) {
        FUN_710080e900(puVar6 + lVar11,puVar9 + lVar1,lVar13);
        puVar9 = (undefined4 *)*param_1;
        goto LAB_71007b76cc;
      }
      *(undefined4 *)(puVar6 + lVar11) = puVar9[lVar1];
      puVar7 = puVar9 + -6;
      if (puVar7 != (undefined4 *)&DAT_7100d210f8) goto LAB_71007b776c;
    }
    else {
      if (param_2 != 1) {
        FUN_710080e900(puVar12,puVar9,param_2);
        puVar9 = (undefined4 *)*param_1;
        goto LAB_71007b7698;
      }
      *(undefined4 *)(puVar6 + 0x18) = *puVar9;
      if (lVar13 != 0) goto LAB_71007b769c;
LAB_71007b76cc:
      puVar7 = puVar9 + -6;
      if (puVar7 != (undefined4 *)&DAT_7100d210f8) {
LAB_71007b776c:
        piVar10 = puVar9 + -2;
        do {
          iVar3 = *piVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 < 1) {
          thunk_FUN_710081c200(puVar7,auStack_8);
        }
      }
    }
    *param_1 = (long)puVar12;
  }
  else {
    puVar12 = (undefined1 *)*param_1;
    if (0 < (int)*(undefined8 *)(lVar11 + -8)) {
      uVar8 = *(ulong *)(puVar12 + -0x10);
      goto LAB_71007b765c;
    }
    if (lVar13 == 0 || param_4 == param_3) {
LAB_71007b7734:
      if (puVar12 == (undefined1 *)0x7100d21110) {
        return;
      }
      goto LAB_71007b7748;
    }
    if (lVar13 != 1) {
      FUN_7100806820(puVar12 + (param_4 + param_2) * 4,puVar12 + lVar1 * 4,lVar13);
      puVar12 = (undefined1 *)*param_1;
      goto LAB_71007b7734;
    }
    puVar6 = puVar12 + -0x18;
    *(undefined4 *)(puVar12 + (param_4 + param_2) * 4) = *(undefined4 *)(puVar12 + lVar1 * 4);
  }
  if (puVar6 == &DAT_7100d210f8) {
    return;
  }
LAB_71007b7748:
  *(ulong *)(puVar12 + -0x18) = uVar2;
  *(undefined4 *)(puVar12 + -8) = 0;
  *(undefined4 *)(puVar12 + uVar2 * 4) = 0;
  return;
}



// ===== FUN_71007b7800 @ 71007b7800 (size=48) =====

void FUN_71007b7800(long *param_1)

{
  if (*(long *)(*param_1 + -0x18) == 0) {
    return;
  }
  if ((int)*(undefined8 *)(*param_1 + -8) < 1) {
    *(undefined4 *)(*param_1 + -8) = 0xffffffff;
    return;
  }
  FUN_71007b7600(param_1,0,0,0);
  *(undefined4 *)(*param_1 + -8) = 0xffffffff;
  return;
}



// ===== FUN_71007b7830 @ 71007b7830 (size=52) =====

void FUN_71007b7830(long *param_1)

{
  FUN_71007b7600(param_1,0,0,0);
  *(undefined4 *)(*param_1 + -8) = 0xffffffff;
  return;
}



// ===== FUN_71007b7880 @ 71007b7880 (size=156) =====

long * FUN_71007b7880(long *param_1,long param_2,long param_3,ulong param_4,undefined4 param_5)

{
  if ((ulong)((param_3 + 0xffffffffffffffe) - *(long *)(*param_1 + -0x18)) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_replace_aux");
  }
  FUN_71007b7600();
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(undefined4 *)(*param_1 + param_2 * 4) = param_5;
      return param_1;
    }
    FUN_710081fbc0(*param_1 + param_2 * 4,param_5,param_4);
  }
  return param_1;
}



// ===== FUN_71007b79a0 @ 71007b79a0 (size=400) =====

undefined8 * FUN_71007b79a0(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = (undefined4 *)*param_1;
  lVar3 = *(long *)(puVar1 + -6);
  if (0xffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::assign");
  }
  if ((param_2 < puVar1) || (puVar1 + lVar3 < param_2)) {
LAB_71007b7920:
    FUN_71007b7600(param_1,0,lVar3,param_3);
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(undefined4 *)*param_1 = *param_2;
        return param_1;
      }
      FUN_710080e900((undefined4 *)*param_1,param_2,param_3);
    }
    return param_1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (0 < (int)*(undefined8 *)(puVar1 + -2)) {
    lVar3 = *(long *)(puVar2 + -6);
    goto LAB_71007b7920;
  }
  uVar4 = (long)param_2 - (long)puVar2 >> 2;
  if (uVar4 < param_3) {
    if (uVar4 == 0) goto LAB_71007b7a48;
    if (param_3 != 1) {
      FUN_7100806820();
      puVar2 = (undefined4 *)*param_1;
      goto LAB_71007b7a48;
    }
  }
  else if (param_3 != 1) {
    if (param_3 != 0) {
      FUN_710080e900();
      puVar2 = (undefined4 *)*param_1;
    }
    goto LAB_71007b7a48;
  }
  *puVar2 = *param_2;
LAB_71007b7a48:
  if (puVar2 != (undefined4 *)0x7100d21110) {
    *(ulong *)(puVar2 + -6) = param_3;
    puVar2[-2] = 0;
    puVar2[param_3] = 0;
  }
  return param_1;
}



// ===== FUN_71007b7ac0 @ 71007b7ac0 (size=172) =====

long * FUN_71007b7ac0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_71007b7480(param_3 + *param_1,param_1[1],param_2);
  lVar3 = *param_1;
  plVar1 = plVar2 + 3;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      *(int *)(plVar2 + 3) = (int)param_1[3];
    }
    else {
      FUN_710080e900(plVar1,param_1 + 3);
      lVar3 = *param_1;
    }
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar3;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar3 * 4 + 0x18) = 0;
    return plVar1;
  }
  return plVar1;
}



// ===== FUN_71007b7b80 @ 71007b7b80 (size=180) =====

void FUN_71007b7b80(long *param_1,ulong param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  int *piVar7;
  undefined1 auStack_8 [8];
  
  lVar6 = *param_1;
  puVar1 = (ulong *)(lVar6 + -0x10);
  if (param_2 <= *puVar1) {
    if ((int)*(undefined8 *)(lVar6 + -8) < 1) {
      return;
    }
    lVar6 = *param_1;
    param_2 = *puVar1;
  }
  lVar6 = FUN_71007b7ac0(lVar6 + -0x18,auStack_8,param_2 - *(long *)(lVar6 + -0x18));
  puVar5 = (undefined1 *)(*param_1 + -0x18);
  if (puVar5 != &DAT_7100d210f8) {
    piVar7 = (int *)(*param_1 + -8);
    do {
      iVar2 = *piVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 < 1) {
      thunk_FUN_710081c200(puVar5,auStack_8);
    }
  }
  *param_1 = lVar6;
  return;
}



// ===== FUN_71007b7c40 @ 71007b7c40 (size=232) =====

long * FUN_71007b7c40(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(*param_2 + -0x18);
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar1 = lVar5 + *(long *)(lVar2 + -0x18);
    if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < (int)*(undefined8 *)(lVar2 + -8))) {
      FUN_71007b7b80(param_1,uVar1);
      lVar6 = *param_1;
      puVar4 = (undefined4 *)*param_2;
      lVar3 = *(long *)(lVar6 + -0x18);
      lVar2 = lVar6 + lVar3 * 4;
    }
    else {
      lVar6 = *param_1;
      puVar4 = (undefined4 *)*param_2;
      lVar3 = *(long *)(lVar6 + -0x18);
      lVar2 = lVar6 + lVar3 * 4;
    }
    if (lVar5 == 1) {
      *(undefined4 *)(lVar6 + lVar3 * 4) = *puVar4;
    }
    else {
      FUN_710080e900(lVar2);
      lVar6 = *param_1;
    }
    if (lVar6 != 0x7100d21110) {
      *(ulong *)(lVar6 + -0x18) = uVar1;
      *(undefined4 *)(lVar6 + -8) = 0;
      *(undefined4 *)(lVar6 + uVar1 * 4) = 0;
    }
    return param_1;
  }
  return param_1;
}



// ===== FUN_71007b7d40 @ 71007b7d40 (size=320) =====

undefined8 * FUN_71007b7d40(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar4 = (undefined4 *)*param_1;
  lVar3 = *(long *)(puVar4 + -6);
  if (0xffffffffffffffeU - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  uVar1 = param_3 + lVar3;
  if (*(ulong *)(puVar4 + -4) < uVar1) {
    if (puVar4 <= param_2) {
LAB_71007b7e10:
      if (param_2 <= puVar4 + lVar3) {
        lVar3 = (long)param_2 - (long)puVar4;
        FUN_71007b7b80(param_1,uVar1);
        puVar4 = (undefined4 *)*param_1;
        param_2 = (undefined4 *)((long)puVar4 + lVar3);
        lVar3 = *(long *)(puVar4 + -6);
        puVar2 = puVar4 + lVar3;
        goto joined_r0x0071007b7e54;
      }
    }
LAB_71007b7d84:
    FUN_71007b7b80(param_1,uVar1);
    puVar4 = (undefined4 *)*param_1;
  }
  else {
    puVar5 = (undefined8 *)(puVar4 + -2);
    puVar4 = (undefined4 *)*param_1;
    if (0 < (int)*puVar5) {
      if (puVar4 <= param_2) {
        lVar3 = *(long *)(puVar4 + -6);
        goto LAB_71007b7e10;
      }
      goto LAB_71007b7d84;
    }
  }
  lVar3 = *(long *)(puVar4 + -6);
  puVar2 = puVar4 + lVar3;
joined_r0x0071007b7e54:
  if (param_3 == 1) {
    puVar4[lVar3] = *param_2;
  }
  else {
    FUN_710080e900(puVar2,param_2);
    puVar4 = (undefined4 *)*param_1;
  }
  if (puVar4 != (undefined4 *)0x7100d21110) {
    *(ulong *)(puVar4 + -6) = uVar1;
    puVar4[-2] = 0;
    puVar4[uVar1] = 0;
  }
  return param_1;
}



// ===== FUN_71007b7e80 @ 71007b7e80 (size=260) =====

long * FUN_71007b7e80(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return param_1;
  }
  lVar2 = *param_1;
  if (param_2 <= 0xffffffffffffffeU - *(long *)(lVar2 + -0x18)) {
    uVar1 = param_2 + *(long *)(lVar2 + -0x18);
    if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < (int)*(undefined8 *)(lVar2 + -8))) {
      FUN_71007b7b80(param_1,uVar1);
      lVar4 = *param_1;
      lVar3 = *(long *)(lVar4 + -0x18);
      lVar2 = lVar4 + lVar3 * 4;
    }
    else {
      lVar4 = *param_1;
      lVar3 = *(long *)(lVar4 + -0x18);
      lVar2 = lVar4 + lVar3 * 4;
    }
    if (param_2 == 1) {
      *(undefined4 *)(lVar4 + lVar3 * 4) = param_3;
    }
    else {
      FUN_710081fbc0(lVar2,param_3,param_2);
      lVar4 = *param_1;
    }
    if (lVar4 != 0x7100d21110) {
      *(ulong *)(lVar4 + -0x18) = uVar1;
      *(undefined4 *)(lVar4 + -8) = 0;
      *(undefined4 *)(lVar4 + uVar1 * 4) = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::append");
}



// ===== FUN_71007b7fa0 @ 71007b7fa0 (size=56) =====

void FUN_71007b7fa0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (0xffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::resize");
  }
  if (param_2 <= uVar1) {
    if (uVar1 <= param_2) {
      return;
    }
    FUN_71007b7600(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  FUN_71007b7e80(param_1,param_2 - uVar1);
  return;
}



// ===== FUN_71007b7fd8 @ 71007b7fd8 (size=20) =====

void FUN_71007b7fd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::resize");
}



// ===== FUN_71007b8000 @ 71007b8000 (size=176) =====

void FUN_71007b8000(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(long *)(lVar2 + -0x18) + 1;
  if (uVar1 <= *(ulong *)(lVar2 + -0x10)) {
    if ((int)*(undefined8 *)(lVar2 + -8) < 1) {
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + *(long *)(lVar2 + -0x18) * 4) = param_2;
      if (lVar2 == 0x7100d21110) {
        return;
      }
      *(ulong *)(lVar2 + -0x18) = uVar1;
      *(undefined4 *)(lVar2 + -8) = 0;
      *(undefined4 *)(lVar2 + uVar1 * 4) = 0;
      return;
    }
  }
  FUN_71007b7b80();
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + *(long *)(lVar2 + -0x18) * 4) = param_2;
  if (lVar2 != 0x7100d21110) {
    *(ulong *)(lVar2 + -0x18) = uVar1;
    *(undefined4 *)(lVar2 + -8) = 0;
    *(undefined4 *)(lVar2 + uVar1 * 4) = 0;
  }
  return;
}



// ===== FUN_71007b80c0 @ 71007b80c0 (size=72) =====

void FUN_71007b80c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aecf38;
  FUN_71007fb180(param_1 + 2);
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (param_1[6] != 0)) {
    thunk_FUN_710081c200();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007b8120 @ 71007b8120 (size=68) =====

void FUN_71007b8120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aecf98;
  FUN_71007fb180(param_1 + 2);
  *param_1 = &DAT_7100aeeeb8;
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007b8180 @ 71007b8180 (size=28) =====

void FUN_71007b8180(undefined8 param_1)

{
  FUN_71007b80c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b81a0 @ 71007b81a0 (size=28) =====

void FUN_71007b81a0(undefined8 param_1)

{
  FUN_71007b8120();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b81c0 @ 71007b81c0 (size=52) =====

long FUN_71007b81c0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  if (param_3 != param_2) {
    FUN_710080f900(param_5,param_2,param_3 - param_2);
  }
  return param_3;
}



// ===== FUN_71007b8200 @ 71007b8200 (size=52) =====

long FUN_71007b8200(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  if (param_3 != param_2) {
    FUN_710080f900(param_4,param_2,param_3 - param_2);
  }
  return param_3;
}



// ===== FUN_71007b8240 @ 71007b8240 (size=340) =====

void FUN_71007b8240(long *param_1)

{
  uint3 uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  undefined8 local_100 [32];
  
  iVar6 = 0;
  sVar11 = 1;
  puVar7 = local_100;
  do {
    cVar4 = (char)iVar6;
    cVar3 = (char)sVar11;
    iVar9 = iVar6 + 4;
    sVar10 = sVar11 + 4;
    sVar5 = (short)iVar6;
    iVar6 = iVar6 + 0x10;
    sVar11 = sVar11 + 0x10;
    uVar2 = (ulong)CONCAT24(sVar10,iVar9) & 0xffffffff0000ffff;
    uVar1 = CONCAT12(cVar3 + '\b',sVar5 + 8) & 0xff00ff;
    puVar8 = puVar7 + 2;
    puVar7[1] = CONCAT17(cVar3 + '\x0e',
                         CONCAT16(cVar4 + '\x0e',
                                  CONCAT15(cVar3 + '\f',
                                           CONCAT14(cVar4 + '\f',
                                                    CONCAT13(cVar3 + '\n',
                                                             CONCAT12(cVar4 + '\n',
                                                                      CONCAT11((char)(uVar1 >> 0x10)
                                                                               ,(char)uVar1)))))));
    *puVar7 = CONCAT17(cVar3 + '\x06',
                       CONCAT16(cVar4 + '\x06',
                                CONCAT15((char)(uVar2 >> 0x20),
                                         CONCAT14((char)uVar2,
                                                  CONCAT13(cVar3 + '\x02',
                                                           CONCAT12(cVar4 + '\x02',
                                                                    CONCAT11(cVar3,cVar4)))))));
    puVar7 = puVar8;
  } while ((undefined8 *)&stack0x00000000 != puVar8);
  if (*(code **)(*param_1 + 0x38) == FUN_71007b8200) {
    *(undefined8 *)((long)param_1 + 0x41) = local_100[1];
    *(undefined8 *)((long)param_1 + 0x39) = local_100[0];
    *(undefined8 *)((long)param_1 + 0x51) = local_100[3];
    *(undefined8 *)((long)param_1 + 0x49) = local_100[2];
    *(undefined8 *)((long)param_1 + 0x61) = local_100[5];
    *(undefined8 *)((long)param_1 + 0x59) = local_100[4];
    *(undefined8 *)((long)param_1 + 0x71) = local_100[7];
    *(undefined8 *)((long)param_1 + 0x69) = local_100[6];
    *(undefined8 *)((long)param_1 + 0x81) = local_100[9];
    *(undefined8 *)((long)param_1 + 0x79) = local_100[8];
    *(undefined8 *)((long)param_1 + 0x89) = local_100[10];
    *(undefined8 *)((long)param_1 + 0x91) = local_100[0xb];
    *(undefined8 *)((long)param_1 + 0xa1) = local_100[0xd];
    *(undefined8 *)((long)param_1 + 0x99) = local_100[0xc];
    *(undefined8 *)((long)param_1 + 0xb1) = local_100[0xf];
    *(undefined8 *)((long)param_1 + 0xa9) = local_100[0xe];
    *(undefined8 *)((long)param_1 + 0xc1) = local_100[0x11];
    *(undefined8 *)((long)param_1 + 0xb9) = local_100[0x10];
    *(undefined8 *)((long)param_1 + 0xd1) = local_100[0x13];
    *(undefined8 *)((long)param_1 + 0xc9) = local_100[0x12];
    *(undefined8 *)((long)param_1 + 0xe1) = local_100[0x15];
    *(undefined8 *)((long)param_1 + 0xd9) = local_100[0x14];
    *(undefined8 *)((long)param_1 + 0xe9) = local_100[0x16];
    *(undefined8 *)((long)param_1 + 0xf1) = local_100[0x17];
    *(undefined8 *)((long)param_1 + 0x101) = local_100[0x19];
    *(undefined8 *)((long)param_1 + 0xf9) = local_100[0x18];
    *(undefined8 *)((long)param_1 + 0x111) = local_100[0x1b];
    *(undefined8 *)((long)param_1 + 0x109) = local_100[0x1a];
    *(undefined8 *)((long)param_1 + 0x121) = local_100[0x1d];
    *(undefined8 *)((long)param_1 + 0x119) = local_100[0x1c];
    *(undefined8 *)((long)param_1 + 0x129) = local_100[0x1e];
    *(undefined8 *)((long)param_1 + 0x131) = local_100[0x1f];
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,local_100,&stack0x00000000);
  }
  iVar6 = FUN_710081ec40(local_100,(long)param_1 + 0x39,0x100);
  *(char *)(param_1 + 7) = (iVar6 != 0) + '\x01';
  return;
}



// ===== FUN_71007b83a0 @ 71007b83a0 (size=72) =====

void FUN_71007b83a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aecf98;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_71007b8de0(param_1);
  return;
}



// ===== FUN_71007b8460 @ 71007b8460 (size=16) =====

undefined * FUN_71007b8460(void)

{
  return &DAT_71009d32f1;
}



// ===== FUN_71007b8480 @ 71007b8480 (size=188) =====

void FUN_71007b8480(undefined8 *param_1,long param_2,char param_3,long param_4)

{
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_7100aecf38;
  *(bool *)(param_1 + 3) = param_2 != 0 && param_3 != '\0';
  if (param_2 == 0) {
    param_2 = FUN_71007b8460();
  }
  param_1[6] = param_2;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x89) = 0;
  *(undefined8 *)((long)param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x99) = 0;
  *(undefined8 *)((long)param_1 + 0xa1) = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xb9) = 0;
  *(undefined8 *)((long)param_1 + 0xc1) = 0;
  *(undefined8 *)((long)param_1 + 0xc9) = 0;
  *(undefined8 *)((long)param_1 + 0xd1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xe9) = 0;
  *(undefined8 *)((long)param_1 + 0xf1) = 0;
  *(undefined8 *)((long)param_1 + 0xf9) = 0;
  *(undefined8 *)((long)param_1 + 0x101) = 0;
  *(undefined8 *)((long)param_1 + 0x109) = 0;
  *(undefined8 *)((long)param_1 + 0x111) = 0;
  *(undefined8 *)((long)param_1 + 0x119) = 0;
  *(undefined8 *)((long)param_1 + 0x121) = 0;
  *(undefined8 *)((long)param_1 + 0x129) = 0;
  *(undefined8 *)((long)param_1 + 0x131) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x139) = 0;
  *(undefined8 *)((long)param_1 + 0x141) = 0;
  *(undefined8 *)((long)param_1 + 0x149) = 0;
  *(undefined8 *)((long)param_1 + 0x151) = 0;
  *(undefined8 *)((long)param_1 + 0x159) = 0;
  *(undefined8 *)((long)param_1 + 0x161) = 0;
  *(undefined8 *)((long)param_1 + 0x169) = 0;
  *(undefined8 *)((long)param_1 + 0x171) = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
  *(undefined8 *)((long)param_1 + 0x181) = 0;
  *(undefined8 *)((long)param_1 + 0x189) = 0;
  *(undefined8 *)((long)param_1 + 0x191) = 0;
  *(undefined8 *)((long)param_1 + 0x199) = 0;
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  *(undefined8 *)((long)param_1 + 0x1a9) = 0;
  *(undefined8 *)((long)param_1 + 0x1b1) = 0;
  *(undefined8 *)((long)param_1 + 0x1b9) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c9) = 0;
  *(undefined8 *)((long)param_1 + 0x1d1) = 0;
  *(undefined8 *)((long)param_1 + 0x1d9) = 0;
  *(undefined8 *)((long)param_1 + 0x1e1) = 0;
  *(undefined8 *)((long)param_1 + 0x1e9) = 0;
  *(undefined8 *)((long)param_1 + 0x1f1) = 0;
  *(undefined8 *)((long)param_1 + 0x1f9) = 0;
  *(undefined8 *)((long)param_1 + 0x201) = 0;
  *(undefined8 *)((long)param_1 + 0x209) = 0;
  *(undefined8 *)((long)param_1 + 0x211) = 0;
  *(undefined8 *)((long)param_1 + 0x219) = 0;
  *(undefined8 *)((long)param_1 + 0x221) = 0;
  *(undefined8 *)((long)param_1 + 0x229) = 0;
  *(undefined8 *)((long)param_1 + 0x231) = 0;
  *(undefined1 *)((long)param_1 + 0x239) = 0;
  return;
}



// ===== FUN_71007b8540 @ 71007b8540 (size=148) =====

byte * FUN_71007b8540(long *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (param_2 < param_3) {
    do {
      while( true ) {
        bVar2 = *param_2;
        if (*(code **)(*param_1 + 0x10) == (code *)&LAB_71007b8420) break;
        bVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        pbVar3 = param_2 + 1;
        *param_2 = bVar2;
        param_2 = pbVar3;
        if (param_3 == pbVar3) {
          return param_3;
        }
      }
      bVar1 = bVar2 - 0x20;
      if ((*(byte *)(param_1[6] + (ulong)bVar2) & 2) == 0) {
        bVar1 = bVar2;
      }
      pbVar3 = param_2 + 1;
      *param_2 = bVar1;
      param_2 = pbVar3;
    } while (param_3 != pbVar3);
  }
  return param_3;
}



// ===== FUN_71007b85e0 @ 71007b85e0 (size=136) =====

byte * FUN_71007b85e0(long *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 < param_3) {
    do {
      while( true ) {
        if (*(code **)(*param_1 + 0x20) == (code *)&LAB_71007b8440) break;
        bVar1 = (**(code **)(*param_1 + 0x20))(param_1);
        pbVar2 = param_2 + 1;
        *param_2 = bVar1;
        param_2 = pbVar2;
        if (param_3 == pbVar2) {
          return param_3;
        }
      }
      pbVar2 = param_2 + 1;
      *param_2 = *param_2 + (*(byte *)(param_1[6] + (ulong)*param_2) & 1) * ' ';
      param_2 = pbVar2;
    } while (param_3 != pbVar2);
  }
  return param_3;
}



// ===== FUN_71007b8680 @ 71007b8680 (size=140) =====

undefined8 FUN_71007b8680(long param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + 0x49c);
  while (((param_2 & *pbVar2) == 0 ||
         (iVar1 = FUN_7100823340(param_3,*(undefined4 *)(param_1 * -3 + -0xdc4 + (long)pbVar2 * 4)),
         iVar1 == 0))) {
    pbVar2 = pbVar2 + 1;
    if (pbVar2 == (byte *)(param_1 + 0x4a4)) {
      return 0;
    }
  }
  return 1;
}



// ===== FUN_71007b8720 @ 71007b8720 (size=272) =====

undefined8 FUN_71007b8720(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 8) {
    uVar2 = FUN_710080ee00("space");
    return uVar2;
  }
  if (uVar1 < 9) {
    if (uVar1 == 3) {
      uVar2 = FUN_710080ee00("alpha");
      return uVar2;
    }
    if (uVar1 < 4) {
      if (uVar1 == 1) {
        uVar2 = FUN_710080ee00("upper");
        return uVar2;
      }
      if (uVar1 != 2) {
        return 0;
      }
      uVar2 = FUN_710080ee00("lower");
      return uVar2;
    }
    if (uVar1 == 4) {
      uVar2 = FUN_710080ee00("digit");
      return uVar2;
    }
    if (uVar1 == 7) {
      uVar2 = FUN_710080ee00("alnum");
      return uVar2;
    }
  }
  else {
    if (uVar1 == 0x20) {
      uVar2 = FUN_710080ee00("cntrl");
      return uVar2;
    }
    if (uVar1 < 0x21) {
      if (uVar1 == 0x10) {
        uVar2 = FUN_710080ee00("punct");
        return uVar2;
      }
      if (uVar1 == 0x17) {
        uVar2 = FUN_710080ee00("graph");
        return uVar2;
      }
      if ((uVar1 >> 2 & 1) == 0) goto LAB_71007b87ac;
    }
    else if (uVar1 != 0x44) {
      if (uVar1 != 0x97) {
        if ((param_2 & 0x44) != 0) goto LAB_71007b87bc;
        if ((param_2 & 0x97) == 0) {
          return 0;
        }
      }
LAB_71007b87ac:
      uVar2 = FUN_710080ee00("print");
      return uVar2;
    }
  }
LAB_71007b87bc:
  uVar2 = FUN_710080ee00("xdigit");
  return uVar2;
}



// ===== FUN_71007b8860 @ 71007b8860 (size=104) =====

undefined4 * FUN_71007b8860(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 < param_3) {
    puVar2 = param_2;
    do {
      uVar1 = FUN_7100817080(*puVar2);
      puVar3 = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)
                       ((long)param_2 +
                       ((long)param_3 + (-1 - (long)param_2) & 0xfffffffffffffffcU) + 4));
  }
  return param_3;
}



// ===== FUN_71007b8900 @ 71007b8900 (size=104) =====

undefined4 * FUN_71007b8900(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 < param_3) {
    puVar2 = param_2;
    do {
      uVar1 = FUN_7100822f20(*puVar2);
      puVar3 = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)
                       ((long)param_2 +
                       ((long)param_3 + (-1 - (long)param_2) & 0xfffffffffffffffcU) + 4));
  }
  return param_3;
}



// ===== FUN_71007b8980 @ 71007b8980 (size=184) =====

ulong FUN_71007b8980(long param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  
  if (param_2 < param_3) {
    uVar3 = 0;
    while( true ) {
      pbVar2 = (byte *)(param_1 + 0x49c);
      bVar4 = 0;
      do {
        iVar1 = FUN_7100823340(*(undefined4 *)(param_2 + uVar3 * 4),
                               *(undefined4 *)(param_1 * -3 + -0xdc4 + (long)pbVar2 * 4));
        if (iVar1 != 0) {
          bVar4 = bVar4 | *pbVar2;
        }
        pbVar2 = pbVar2 + 1;
      } while (pbVar2 != (byte *)(param_1 + 0x4a4));
      *(byte *)(param_4 + uVar3) = bVar4;
      if (uVar3 == (param_3 - 1) - param_2 >> 2) break;
      uVar3 = uVar3 + 1;
    }
  }
  return param_3;
}



// ===== FUN_71007b8a40 @ 71007b8a40 (size=212) =====

undefined4 * FUN_71007b8a40(long *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  
  if (param_3 < param_4) {
    do {
      uVar1 = *param_3;
      if (*(code **)(*param_1 + 0x10) == FUN_71007b8680) {
        pbVar4 = (byte *)((long)param_1 + 0x49c);
        do {
          if (((param_2 & *pbVar4) != 0) &&
             (iVar2 = FUN_7100823340(uVar1,*(undefined4 *)
                                            ((long)param_1 * -3 + -0xdc4 + (long)pbVar4 * 4)),
             iVar2 != 0)) {
            return param_3;
          }
          pbVar4 = pbVar4 + 1;
        } while (pbVar4 != (byte *)((long)param_1 + 0x4a4));
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar1);
        if ((uVar3 & 1) != 0) {
          return param_3;
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return param_3;
}



// ===== FUN_71007b8b20 @ 71007b8b20 (size=236) =====

undefined4 * FUN_71007b8b20(long *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  
  if (param_3 < param_4) {
    do {
      while( true ) {
        uVar1 = *param_3;
        if (*(code **)(*param_1 + 0x10) == FUN_71007b8680) break;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar1);
        if ((uVar3 & 1) == 0) {
          return param_3;
        }
        param_3 = param_3 + 1;
        if (param_4 <= param_3) {
          return param_3;
        }
      }
      pbVar4 = (byte *)((long)param_1 + 0x49c);
      while (((param_2 & *pbVar4) == 0 ||
             (iVar2 = FUN_7100823340(uVar1,*(undefined4 *)
                                            ((long)param_1 * -3 + -0xdc4 + (long)pbVar4 * 4)),
             iVar2 == 0))) {
        pbVar4 = pbVar4 + 1;
        if (pbVar4 == (byte *)((long)param_1 + 0x4a4)) {
          return param_3;
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return param_3;
}



// ===== FUN_71007b8ce0 @ 71007b8ce0 (size=228) =====

ulong FUN_71007b8ce0(long param_1,ulong param_2,ulong param_3,undefined1 param_4,long param_5)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (param_2 < param_3) {
      uVar4 = 0;
      while( true ) {
        iVar3 = FUN_710081c2e0(*(undefined4 *)(param_2 + uVar4 * 4));
        uVar2 = (char)iVar3;
        if (iVar3 == -1) {
          uVar2 = param_4;
        }
        *(undefined1 *)(param_5 + uVar4) = uVar2;
        if (uVar4 == (param_3 - 1) - param_2 >> 2) break;
        uVar4 = uVar4 + 1;
      }
    }
  }
  else if (param_2 < param_3) {
    uVar4 = 0;
    while( true ) {
      uVar1 = *(uint *)(param_2 + uVar4 * 4);
      if (uVar1 < 0x80) {
        uVar2 = *(undefined1 *)(param_1 + (ulong)uVar1 + 0x19);
      }
      else {
        iVar3 = FUN_710081c2e0();
        uVar2 = (char)iVar3;
        if (iVar3 == -1) {
          uVar2 = param_4;
        }
      }
      *(undefined1 *)(param_5 + uVar4) = uVar2;
      if (uVar4 == (param_3 - 1) - param_2 >> 2) break;
      uVar4 = uVar4 + 1;
    }
  }
  return param_3;
}



// ===== FUN_71007b8de0 @ 71007b8de0 (size=196) =====

void FUN_71007b8de0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0;
  do {
    iVar2 = FUN_710081c2e0(uVar4 & 0xffffffff);
    if (iVar2 == -1) {
      uVar1 = 0;
      goto LAB_71007b8e28;
    }
    *(char *)(param_1 + 0x19 + uVar4) = (char)iVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x80);
  uVar1 = 1;
LAB_71007b8e28:
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  do {
    uVar3 = FUN_710081c940(uVar4 & 0xffffffff);
    *(undefined4 *)(param_1 + 0x9c + uVar4 * 4) = uVar3;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x100);
  lVar5 = 0;
  do {
    *(char *)(param_1 + 0x49c + lVar5) = (char)(1 << (ulong)((uint)lVar5 & 0x1f));
    uVar3 = FUN_71007b8720(param_1);
    *(undefined4 *)(param_1 + 0x4ac + lVar5 * 4) = uVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 8);
  return;
}



// ===== FUN_71007b9100 @ 71007b9100 (size=52) =====

void FUN_71007b9100(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aed310;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b9160 @ 71007b9160 (size=52) =====

void FUN_71007b9160(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aed340;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b91c0 @ 71007b91c0 (size=52) =====

void FUN_71007b91c0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aed370;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b9200 @ 71007b9200 (size=52) =====

void FUN_71007b9200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aed2d8;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007b9240 @ 71007b9240 (size=28) =====

void FUN_71007b9240(undefined8 param_1)

{
  FUN_71007b9200();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b9260 @ 71007b9260 (size=52) =====

void FUN_71007b9260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aed188;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007b92a0 @ 71007b92a0 (size=180) =====

void FUN_71007b92a0(long *param_1,undefined1 *param_2,long param_3)

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



// ===== FUN_71007b9360 @ 71007b9360 (size=60) =====

void FUN_71007b9360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aed188;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007b93a0 @ 71007b93a0 (size=88) =====

long * FUN_71007b93a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9400 @ 71007b9400 (size=88) =====

long * FUN_71007b9400(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9460 @ 71007b9460 (size=88) =====

long * FUN_71007b9460(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b94c0 @ 71007b94c0 (size=88) =====

long * FUN_71007b94c0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x48);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9520 @ 71007b9520 (size=88) =====

long * FUN_71007b9520(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9580 @ 71007b9580 (size=88) =====

long * FUN_71007b9580(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b95e0 @ 71007b95e0 (size=88) =====

long * FUN_71007b95e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9640 @ 71007b9640 (size=88) =====

long * FUN_71007b9640(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x48);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b96a0 @ 71007b96a0 (size=88) =====

long * FUN_71007b96a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9700 @ 71007b9700 (size=88) =====

long * FUN_71007b9700(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b9760 @ 71007b9760 (size=88) =====

long * FUN_71007b9760(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081ce00(lVar2);
    FUN_71007b92a0(param_1,lVar2,lVar2 + lVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007b97c0 @ 71007b97c0 (size=256) =====

int FUN_71007b97c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_71007b92a0(&local_40);
  lStack_18 = 0;
  local_20 = auStack_10;
  FUN_71007b92a0(&local_20,param_4,param_5);
  puVar1 = local_40 + lStack_38;
  puVar2 = local_20 + lStack_18;
  puVar5 = local_40;
  puVar6 = local_20;
  do {
    iVar3 = FUN_71007fb8a0(param_1,puVar5,puVar6);
    if (iVar3 != 0) {
LAB_71007b9874:
      if (local_20 != auStack_10) {
        thunk_FUN_710081c200();
      }
      if (local_40 != auStack_30) {
        thunk_FUN_710081c200();
      }
      return iVar3;
    }
    lVar4 = FUN_710081ce00(puVar5);
    puVar5 = puVar5 + lVar4;
    lVar4 = FUN_710081ce00(puVar6);
    puVar6 = puVar6 + lVar4;
    if (puVar1 == puVar5 && puVar2 == puVar6) goto LAB_71007b9874;
    if (puVar1 == puVar5) {
      iVar3 = -1;
      goto LAB_71007b9874;
    }
    if (puVar2 == puVar6) {
      iVar3 = 1;
      goto LAB_71007b9874;
    }
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while( true );
}



// ===== FUN_71007b98e0 @ 71007b98e0 (size=604) =====

/* WARNING: Removing unreachable block (ram,0x0071007b9aa8) */

long * FUN_71007b98e0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined4 local_34;
  undefined1 auStack_10 [16];
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_71007b92a0();
  uVar12 = (param_4 - param_3) * 2;
  if (uVar12 < 0x101) {
    lVar7 = -(uVar12 + 0xf & 0xfffffffffffffff0);
    puVar10 = &stack0xffffffffffffff60 + lVar7;
    puVar13 = &stack0xffffffffffffff60 + lVar7;
    puVar4 = (undefined4 *)FUN_710080e8e0();
    local_34 = *puVar4;
  }
  else {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    local_34 = *puVar4;
    puVar10 = (undefined1 *)thunk_FUN_71007af5c0(uVar12);
    puVar13 = (undefined1 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_710080e8e0();
  *puVar4 = 0;
  puVar11 = auStack_10;
  while( true ) {
    uVar6 = FUN_71007fb8e0(param_2,puVar10,puVar11,uVar12);
    if (uVar6 < uVar12) {
      lVar7 = param_1[1];
      puVar5 = puVar10;
    }
    else {
      piVar9 = (int *)FUN_710080e8e0();
      if (*piVar9 != 0) {
        puVar4 = (undefined4 *)FUN_710080e8e0();
                    /* WARNING: Subroutine does not return */
        FUN_7100003e58(*puVar4);
      }
      uVar12 = uVar6 + 1;
      puVar5 = (undefined1 *)thunk_FUN_71007af5c0(uVar12);
      if (puVar10 != (undefined1 *)0x0 && puVar13 != puVar10) {
        thunk_FUN_710081c200(puVar10);
      }
      uVar6 = FUN_71007fb8e0(param_2,puVar5,puVar11,uVar12);
      lVar7 = param_1[1];
    }
    if (0x7ffffffffffffffeU - lVar7 < uVar6) break;
    FUN_71007e2a60(param_1,puVar5);
    lVar7 = FUN_710081ce00(puVar11);
    if (auStack_10 == puVar11 + lVar7) {
      if (puVar5 == (undefined1 *)0x0 || puVar13 == puVar5) {
        piVar9 = (int *)FUN_710080e8e0();
        iVar3 = *piVar9;
      }
      else {
        thunk_FUN_710081c200(puVar5);
        piVar9 = (int *)FUN_710080e8e0();
        iVar3 = *piVar9;
      }
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)FUN_710080e8e0();
        *puVar4 = local_34;
      }
      return param_1;
    }
    lVar8 = *param_1;
    lVar2 = param_1[1];
    if (param_1 + 2 == (long *)lVar8) {
      uVar6 = 0xf;
    }
    else {
      uVar6 = param_1[2];
    }
    uVar1 = lVar2 + 1;
    if (uVar6 < uVar1) {
      FUN_71007e2360(param_1,lVar2,0,0,1);
      lVar8 = *param_1;
    }
    *(undefined1 *)(lVar8 + lVar2) = 0;
    puVar11 = puVar11 + lVar7 + 1;
    param_1[1] = uVar1;
    *(undefined1 *)(*param_1 + uVar1) = 0;
    puVar10 = puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::append");
}



// ===== FUN_71007b9ba0 @ 71007b9ba0 (size=364) =====

undefined4 FUN_71007b9ba0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  
  pbVar3 = (byte *)FUN_7100809560(4,0);
  uVar1 = *pbVar3 - 0x43;
  if (uVar1 == 0) {
    uVar1 = (uint)pbVar3[1];
  }
  if (uVar1 == 0) {
    uVar2 = FUN_710080eae0(param_2,(long)param_3,param_4);
    return uVar2;
  }
  lVar4 = FUN_710081ce00(pbVar3);
  uVar5 = thunk_FUN_71007af5c0(lVar4 + 1);
  FUN_710080f900(uVar5,pbVar3,lVar4 + 1);
  FUN_7100809560(4,"C");
  uVar2 = FUN_710080eae0(param_2,(long)param_3,param_4);
  FUN_7100809560(4,uVar5);
  thunk_FUN_710081c200(uVar5);
  return uVar2;
}



// ===== FUN_71007b9d20 @ 71007b9d20 (size=4492) =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_71007b9d20(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6
              ,uint *param_7,undefined8 param_8)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined1 auVar26 [16];
  byte *local_d8;
  ulong local_c0;
  int local_84;
  uint local_6c;
  undefined4 local_48;
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  char *local_20;
  ulong local_18;
  char local_10;
  undefined7 uStack_f;
  
  uVar22 = param_3 & 0xffffffff;
  lVar15 = FUN_71007b00e0(&DAT_7100d21120);
  lVar15 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar15 * 8);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar16 = FUN_71007b00e0(&DAT_7100d21188);
  lVar23 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar25 = *(long *)(lVar23 + lVar16 * 8);
  if (lVar25 == 0) {
    puVar19 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar19 + 1) = 0;
    puVar19[2] = 0;
    puVar19[3] = 0;
    *puVar19 = &PTR_FUN_7100aee768;
    *(undefined2 *)(puVar19 + 4) = 0;
    *(undefined1 *)((long)puVar19 + 0x22) = 0;
    puVar19[5] = 0;
    puVar19[6] = 0;
    puVar19[7] = 0;
    puVar19[8] = 0;
    puVar19[9] = 0;
    puVar19[10] = 0;
    *(undefined4 *)(puVar19 + 0xb) = 0;
    *(undefined8 *)((long)puVar19 + 0x5c) = 0;
    *(undefined1 *)((long)puVar19 + 0x6f) = 0;
    FUN_71007d2800(puVar19,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar19,lVar16);
    lVar25 = *(long *)(lVar23 + lVar16 * 8);
  }
  if (*(long *)(lVar25 + 0x40) == 0) {
    local_6c = 0;
  }
  else {
    local_6c = (uint)(*(long *)(lVar25 + 0x50) != 0);
  }
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  if ((*(byte *)(lVar25 + 0x20) & 1) != 0) {
    FUN_71007e25c0(&local_40,0x20);
  }
  local_18 = 0;
  local_10 = '\0';
  local_20 = &local_10;
  FUN_71007e25c0(&local_20,0x20);
  bVar2 = 0;
  local_84 = 0;
  iVar11 = 0;
  local_48 = *(uint *)(lVar25 + 0x60);
  iVar9 = 0;
  local_d8 = (byte *)&local_48;
  local_c0 = 0;
  bVar7 = false;
  uVar14 = local_48 & 0xff;
  bVar3 = uVar14 == 2;
  if (bVar3) goto LAB_71007ba248;
LAB_71007b9e3c:
  iVar10 = (int)uVar22;
  if (1 < uVar14 && !bVar3) {
    if (uVar14 != 3) {
      if (uVar14 != 4) goto LAB_71007ba784;
      bVar3 = iVar10 == -1;
      iVar10 = iVar9;
      if (param_2 != (long *)0x0 && bVar3) goto LAB_71007ba008;
LAB_71007b9f68:
      bVar6 = param_5 == -1;
      bVar4 = param_4 != (long *)0x0 && bVar6;
      bVar5 = bVar3;
      if (param_4 != (long *)0x0 && bVar6) goto LAB_71007ba040;
LAB_71007b9f80:
      iVar9 = iVar10;
      if (bVar6 != bVar5) {
        do {
          if (param_2 != (long *)0x0 && bVar3) {
            if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar14 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar14 == 0xffffffff) {
                param_2 = (long *)0x0;
                uVar14 = 0xff;
              }
              else {
                uVar14 = uVar14 & 0xff;
              }
            }
            lVar16 = FUN_710080c980(lVar25 + 0x65,uVar14,10);
            if (lVar16 != 0) {
              cVar1 = PTR_DAT_7100af47a0[lVar16 - (lVar25 + 100)];
              goto LAB_71007b9fc0;
            }
LAB_71007ba094:
            uVar24 = local_38;
            if (*(byte *)(lVar25 + 0x21) == uVar14) {
              bVar8 = bVar2;
              if (bVar2 == 0) {
                if (0 < *(int *)(lVar25 + 0x58)) {
                  bVar2 = 1;
                  iVar10 = 0;
                  local_84 = iVar9;
                  goto LAB_71007b9ff4;
                }
                break;
              }
              goto LAB_71007ba20c;
            }
            if ((*(byte *)(lVar25 + 0x20) & 1) == 0) break;
            bVar8 = *(byte *)(lVar25 + 0x20);
            if (((*(byte *)(lVar25 + 0x22) != uVar14) || (bVar8 = bVar2, bVar2 != 0)) ||
               (iVar9 == 0)) goto LAB_71007ba20c;
            uVar20 = local_38 + 1;
            uVar22 = CONCAT71(uStack_2f,local_30);
            if (local_40 == &local_30) {
              uVar22 = 0xf;
            }
            if (uVar22 < uVar20) {
              FUN_71007e2360(&local_40,local_38,0,0,1);
            }
            local_40[uVar24] = (char)iVar9;
            iVar10 = 0;
            local_40[uVar20] = 0;
            uVar22 = param_2[2];
            local_38 = uVar20;
            if ((ulong)param_2[3] <= uVar22) goto LAB_71007ba100;
LAB_71007ba000:
            param_2[2] = uVar22 + 1;
LAB_71007ba008:
            if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007ba11c:
              uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar22 = (ulong)uVar14;
              if (uVar14 == 0xffffffff) {
                param_2 = (long *)0x0;
                bVar3 = true;
                goto LAB_71007b9f68;
              }
            }
          }
          else {
            lVar16 = FUN_710080c980(lVar25 + 0x65,(uint)uVar22 & 0xff,10);
            uVar14 = (uint)uVar22 & 0xff;
            if (lVar16 == 0) goto LAB_71007ba094;
            cVar1 = PTR_DAT_7100af47a0[lVar16 - (lVar25 + 100)];
LAB_71007b9fc0:
            uVar20 = local_18;
            uVar22 = local_18 + 1;
            uVar24 = CONCAT71(uStack_f,local_10);
            if (local_20 == &local_10) {
              uVar24 = 0xf;
            }
            if (uVar24 < uVar22) {
              FUN_71007e2360(&local_20,local_18,0,0,1);
            }
            local_20[uVar20] = cVar1;
            iVar10 = iVar9 + 1;
            local_20[uVar22] = '\0';
            local_18 = uVar22;
LAB_71007b9ff4:
            uVar22 = param_2[2];
            if (uVar22 < (ulong)param_2[3]) goto LAB_71007ba000;
LAB_71007ba100:
            (**(code **)(*param_2 + 0x50))(param_2);
            if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007ba11c;
          }
          bVar6 = param_5 == -1;
          bVar3 = true;
          uVar22 = 0xffffffff;
          bVar4 = param_4 != (long *)0x0 && bVar6;
          bVar5 = false;
          if (param_4 == (long *)0x0 || !bVar6) goto LAB_71007b9f80;
LAB_71007ba040:
          bVar6 = false;
          if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007b9f80;
          iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar9 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar4 = false;
          }
          iVar9 = iVar10;
          if (bVar4 == bVar5) break;
        } while( true );
      }
      bVar8 = 1;
LAB_71007ba20c:
      uVar14 = (uint)(local_18 != 0 && bVar8 != 0);
      goto LAB_71007ba21c;
    }
    if (*(long *)(lVar25 + 0x40) == 0) {
      if (*(long *)(lVar25 + 0x50) != 0) {
LAB_71007ba80c:
        bVar4 = iVar10 == -1;
        bVar5 = param_2 != (long *)0x0;
        bVar3 = bVar4;
        if (bVar5 && bVar4) {
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            bVar3 = false;
          }
          else {
            iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
            if (iVar10 == -1) {
              param_2 = (long *)0x0;
            }
            bVar3 = iVar10 == -1 && (bVar5 && bVar4);
          }
        }
        bVar6 = param_5 == -1;
        bVar5 = param_4 != (long *)0x0 && bVar6;
        if ((param_4 != (long *)0x0 && bVar6) &&
           (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
          iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar10 == -1) {
            param_4 = (long *)0x0;
          }
          bVar6 = iVar10 == -1 && bVar5;
        }
        if (bVar6 != bVar3) {
          uVar24 = uVar22;
          if (param_2 != (long *)0x0 && bVar4) {
            pcVar17 = (char *)param_2[2];
            if ((char *)param_2[3] <= pcVar17) {
              uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
              if ((int)uVar24 == -1) {
                param_2 = (long *)0x0;
              }
              goto LAB_71007baab8;
            }
            if (*pcVar17 != **(char **)(lVar25 + 0x48)) goto LAB_71007ba848;
            local_c0 = *(ulong *)(lVar25 + 0x50);
LAB_71007baadc:
            param_2[2] = (long)(pcVar17 + 1);
          }
          else {
LAB_71007baab8:
            if (**(char **)(lVar25 + 0x48) != (char)uVar24) goto LAB_71007ba848;
            local_c0 = *(ulong *)(lVar25 + 0x50);
            pcVar17 = (char *)param_2[2];
            if (pcVar17 < (char *)param_2[3]) goto LAB_71007baadc;
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          uVar14 = 1;
          uVar22 = 0xffffffff;
          bVar7 = true;
          goto LAB_71007ba21c;
        }
LAB_71007ba848:
        if (*(long *)(lVar25 + 0x40) != 0) {
          lVar16 = *(long *)(lVar25 + 0x50);
          goto joined_r0x0071007ba564;
        }
      }
    }
    else {
      bVar4 = iVar10 == -1;
      bVar5 = param_2 != (long *)0x0;
      bVar3 = bVar4;
      if (bVar5 && bVar4) {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          bVar3 = false;
        }
        else {
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
          if (iVar12 == -1) {
            param_2 = (long *)0x0;
          }
          bVar3 = iVar12 == -1 && (bVar5 && bVar4);
        }
      }
      bVar6 = param_5 == -1;
      bVar5 = param_4 != (long *)0x0 && bVar6;
      if ((param_4 != (long *)0x0 && bVar6) &&
         (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
        iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar12 == -1) {
          param_4 = (long *)0x0;
        }
        bVar6 = iVar12 == -1 && bVar5;
      }
      if (bVar6 != bVar3) {
        uVar24 = uVar22;
        if (param_2 != (long *)0x0 && bVar4) {
          pcVar17 = (char *)param_2[2];
          if ((char *)param_2[3] <= pcVar17) {
            uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
            if ((int)uVar24 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007baa70;
          }
          if (*pcVar17 != **(char **)(lVar25 + 0x38)) goto LAB_71007ba558;
          local_c0 = *(ulong *)(lVar25 + 0x40);
LAB_71007baa94:
          param_2[2] = (long)(pcVar17 + 1);
        }
        else {
LAB_71007baa70:
          if (**(char **)(lVar25 + 0x38) != (char)uVar24) goto LAB_71007ba558;
          local_c0 = *(ulong *)(lVar25 + 0x40);
          pcVar17 = (char *)param_2[2];
          if (pcVar17 < (char *)param_2[3]) goto LAB_71007baa94;
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        uVar22 = 0xffffffff;
        uVar14 = 1;
        goto LAB_71007ba21c;
      }
LAB_71007ba558:
      if (*(long *)(lVar25 + 0x50) != 0) goto LAB_71007ba80c;
      lVar16 = *(long *)(lVar25 + 0x40);
joined_r0x0071007ba564:
      if (lVar16 != 0) {
        uVar14 = 1;
        bVar7 = true;
        goto LAB_71007ba21c;
      }
    }
    uVar14 = local_6c ^ 1;
LAB_71007ba21c:
    do {
      iVar11 = iVar11 + 1;
      if (uVar14 == 0 || iVar11 == 4) goto LAB_71007b9e8c;
      while( true ) {
        local_d8 = local_d8 + 1;
        uVar14 = (uint)*local_d8;
        bVar3 = uVar14 == 2;
        if (!bVar3) goto LAB_71007b9e3c;
LAB_71007ba248:
        if (((*(uint *)(param_6 + 0x18) >> 9 & 1) != 0) || (iVar11 == 0 || 1 < local_c0)) break;
        if (iVar11 == 1) {
          if (((local_6c != 0) || ((byte)local_48 == 3)) || (local_48._2_1_ == '\x01')) break;
        }
        else {
          if (iVar11 != 2) goto LAB_71007ba274;
          if ((local_48._3_1_ == '\x04') || (local_6c != 0 && local_48._3_1_ == '\x03')) break;
        }
        iVar11 = iVar11 + 1;
      }
      bVar3 = (int)uVar22 == -1;
      uVar24 = *(ulong *)(lVar25 + 0x30);
      if (param_2 != (long *)0x0 && bVar3) {
        uVar20 = 0;
        goto LAB_71007ba660;
      }
      uVar20 = 0;
      bVar4 = bVar3;
      while( true ) {
        if (param_4 != (long *)0x0 && param_5 == -1) {
          if ((ulong)param_4[3] <= (ulong)param_4[2]) {
            iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
            if (iVar10 == -1) {
              param_4 = (long *)0x0;
            }
            bVar3 = (bool)(bVar3 ^ iVar10 == -1);
          }
        }
        else {
          bVar3 = (bool)(bVar3 ^ param_5 == -1);
        }
        if (!bVar3 || uVar24 <= uVar20) break;
        uVar21 = uVar22;
        if (param_2 == (long *)0x0 || bVar4 == false) {
LAB_71007ba638:
          if (*(char *)(*(long *)(lVar25 + 0x28) + uVar20) != (char)uVar21) goto LAB_71007ba760;
          pcVar17 = (char *)param_2[2];
          if (pcVar17 < (char *)param_2[3]) goto LAB_71007ba654;
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar20 = uVar20 + 1;
        }
        else {
          pcVar17 = (char *)param_2[2];
          if ((char *)param_2[3] <= pcVar17) {
            uVar21 = (**(code **)(*param_2 + 0x48))(param_2);
            if ((int)uVar21 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007ba638;
          }
          if (*pcVar17 != *(char *)(*(long *)(lVar25 + 0x28) + uVar20)) goto LAB_71007ba760;
LAB_71007ba654:
          uVar20 = uVar20 + 1;
          param_2[2] = (long)(pcVar17 + 1);
        }
LAB_71007ba660:
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007ba66c:
          bVar4 = true;
          uVar22 = 0xffffffff;
          bVar3 = false;
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
          uVar22 = (ulong)uVar14;
          if (uVar14 != 0xffffffff) goto LAB_71007ba66c;
          bVar4 = true;
          param_2 = (long *)0x0;
          bVar3 = true;
        }
      }
      if (uVar24 == uVar20) goto LAB_71007ba784;
LAB_71007ba760:
      if (uVar20 != 0) goto LAB_71007ba47c;
      uVar14 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
    } while( true );
  }
  if (uVar14 == 0) {
    uVar14 = 1;
joined_r0x0071007ba398:
    if (iVar11 != 3) {
      bVar4 = iVar10 == -1;
      bVar3 = bVar4;
      if (param_2 == (long *)0x0 || !bVar4) goto LAB_71007ba3bc;
LAB_71007ba40c:
      do {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007ba418:
          bVar3 = true;
          uVar22 = 0xffffffff;
          bVar4 = false;
        }
        else {
          uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
          uVar22 = (ulong)uVar13;
          if (uVar13 != 0xffffffff) goto LAB_71007ba418;
          bVar3 = true;
          param_2 = (long *)0x0;
          bVar4 = true;
        }
LAB_71007ba3bc:
        bVar5 = param_5 == -1;
        bVar6 = param_4 != (long *)0x0;
        if (bVar6 && bVar5) {
          if ((ulong)param_4[2] < (ulong)param_4[3]) {
            bVar5 = false;
          }
          else {
            iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
            if (iVar10 == -1) {
              param_4 = (long *)0x0;
            }
            bVar5 = iVar10 == -1 && (bVar6 && bVar5);
          }
        }
        if (bVar5 == bVar4) goto LAB_71007ba21c;
        uVar24 = uVar22;
        if (param_2 != (long *)0x0 && bVar3) {
          pbVar18 = (byte *)param_2[2];
          if ((byte *)param_2[3] <= pbVar18) {
            uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
            if ((int)uVar24 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007ba3e8;
          }
          if ((*(byte *)(*(long *)(lVar15 + 0x30) + (ulong)*pbVar18) >> 3 & 1) == 0)
          goto LAB_71007ba21c;
        }
        else {
LAB_71007ba3e8:
          if ((*(byte *)(*(long *)(lVar15 + 0x30) + (long)(int)((uint)uVar24 & 0xff)) >> 3 & 1) == 0
             ) goto LAB_71007ba21c;
          pbVar18 = (byte *)param_2[2];
          if ((byte *)param_2[3] <= pbVar18) {
            (**(code **)(*param_2 + 0x50))(param_2);
            goto LAB_71007ba40c;
          }
        }
        param_2[2] = (long)(pbVar18 + 1);
      } while( true );
    }
  }
  else {
    bVar4 = iVar10 == -1;
    bVar5 = param_2 != (long *)0x0;
    bVar3 = bVar4;
    if (bVar5 && bVar4) {
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        bVar3 = false;
      }
      else {
        iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
        bVar3 = iVar12 == -1 && (bVar5 && bVar4);
      }
    }
    bVar6 = param_5 == -1;
    bVar5 = param_4 != (long *)0x0 && bVar6;
    if ((param_4 != (long *)0x0 && bVar6) && (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])
       ) {
      iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
      if (iVar12 == -1) {
        param_4 = (long *)0x0;
      }
      bVar6 = iVar12 == -1 && bVar5;
    }
    uVar14 = 0;
    if (bVar6 == bVar3) {
LAB_71007b9e84:
      uVar14 = 0;
      goto joined_r0x0071007ba398;
    }
    uVar24 = uVar22;
    if (param_2 != (long *)0x0 && bVar4) {
      pbVar18 = (byte *)param_2[2];
      if ((byte *)param_2[3] <= pbVar18) {
        uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
        if ((int)uVar24 == -1) {
          param_2 = (long *)0x0;
        }
        goto LAB_71007ba588;
      }
      if ((*(byte *)(*(long *)(lVar15 + 0x30) + (ulong)*pbVar18) >> 3 & 1) != 0)
      goto LAB_71007ba5a8;
    }
    else {
LAB_71007ba588:
      if ((*(byte *)(*(long *)(lVar15 + 0x30) + (long)(int)((uint)uVar24 & 0xff)) >> 3 & 1) == 0)
      goto LAB_71007b9e84;
      pbVar18 = (byte *)param_2[2];
      if (pbVar18 < (byte *)param_2[3]) {
LAB_71007ba5a8:
        param_2[2] = (long)(pbVar18 + 1);
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      uVar14 = 1;
    }
    if (iVar11 != 3) goto LAB_71007ba40c;
    uVar22 = 0xffffffff;
  }
LAB_71007b9e8c:
  bVar4 = uVar14 != 0;
  bVar3 = (bVar4 && local_c0 != 0) && (uVar14 == 0 || local_c0 != 1);
  if (bVar4 && 1 < local_c0) {
    if (bVar7) {
      lVar15 = *(long *)(lVar25 + 0x48);
    }
    else {
      lVar15 = *(long *)(lVar25 + 0x38);
    }
    bVar5 = (int)uVar22 == -1;
    if (param_2 != (long *)0x0 && bVar5) {
      uVar24 = 1;
      goto LAB_71007b9f24;
    }
    uVar24 = 1;
    bVar4 = bVar5;
LAB_71007b9ec8:
    if (param_4 != (long *)0x0 && param_5 == -1) {
      if ((ulong)param_4[3] <= (ulong)param_4[2]) {
        iVar11 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar11 == -1) {
          param_4 = (long *)0x0;
        }
        bVar5 = (bool)(bVar5 ^ iVar11 == -1);
      }
    }
    else {
      bVar5 = (bool)(bVar5 ^ param_5 == -1);
    }
    if (!bVar5 || local_c0 <= uVar24) {
      if (uVar24 != local_c0) goto LAB_71007ba47c;
      if (local_18 < 2) goto LAB_71007ba280;
      goto LAB_71007ba85c;
    }
    uVar20 = uVar22;
    if (param_2 == (long *)0x0 || bVar4 == false) {
LAB_71007b9f00:
      if (*(char *)(lVar15 + uVar24) != (char)uVar20) goto LAB_71007ba47c;
      pcVar17 = (char *)param_2[2];
      if (pcVar17 < (char *)param_2[3]) goto LAB_71007b9f18;
      (**(code **)(*param_2 + 0x50))(param_2);
      uVar24 = uVar24 + 1;
    }
    else {
      pcVar17 = (char *)param_2[2];
      if ((char *)param_2[3] <= pcVar17) {
        uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
        if ((int)uVar20 == -1) {
          param_2 = (long *)0x0;
        }
        goto LAB_71007b9f00;
      }
      if (*pcVar17 != *(char *)(lVar15 + uVar24)) goto code_r0x0071007ba6d0;
LAB_71007b9f18:
      uVar24 = uVar24 + 1;
      param_2[2] = (long)(pcVar17 + 1);
    }
LAB_71007b9f24:
    bVar4 = bVar3;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007b9f30:
      uVar22 = 0xffffffff;
      bVar5 = false;
    }
    else {
      uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar22 = (ulong)uVar14;
      if (uVar14 != 0xffffffff) goto LAB_71007b9f30;
      param_2 = (long *)0x0;
      bVar5 = bVar3;
    }
    goto LAB_71007b9ec8;
  }
  if (uVar14 == 0) {
    bVar4 = (int)uVar22 == -1;
  }
  else {
LAB_71007ba274:
    if (1 < local_18) {
LAB_71007ba85c:
      uVar24 = FUN_71007e30c0(&local_20,0x30,0);
      if (uVar24 != 0) {
        if (uVar24 == 0xffffffffffffffff) {
          uVar24 = local_18 - 1;
          if (local_18 == 0) {
            *local_20 = '\0';
          }
          else if (uVar24 != 0) goto LAB_71007ba888;
        }
        else {
LAB_71007ba888:
          if (local_18 < uVar24) {
            uVar24 = local_18;
          }
          FUN_71007e24a0(&local_20,0,uVar24);
        }
      }
    }
LAB_71007ba280:
    if ((bVar7) && (*local_20 != '0')) {
      FUN_71007e2740(&local_20,0,0,1,0x2d);
    }
    uVar24 = local_38;
    if (local_38 != 0) {
      if (bVar2 == 0) {
        local_84 = iVar9;
      }
      uVar20 = local_38 + 1;
      uVar21 = CONCAT71(uStack_2f,local_30);
      if (local_40 == &local_30) {
        uVar21 = 0xf;
      }
      if (uVar21 < uVar20) {
        FUN_71007e2360(&local_40,local_38,0,0,1);
      }
      local_40[uVar24] = (undefined1)local_84;
      local_40[uVar20] = 0;
      local_38 = uVar20;
      uVar24 = FUN_71007fc3a0(*(undefined8 *)(lVar25 + 0x10),*(undefined8 *)(lVar25 + 0x18),
                              &local_40);
      if ((uVar24 & 1) == 0) {
        *param_7 = *param_7 | 4;
      }
    }
    bVar4 = (int)uVar22 == -1;
    if ((bVar2 == 0) || (*(int *)(lVar25 + 0x58) == iVar9)) {
      FUN_71007e2c60(param_8,&local_20);
      if (param_2 == (long *)0x0 || !bVar4) goto LAB_71007ba498;
      goto LAB_71007ba360;
    }
  }
LAB_71007ba47c:
  *param_7 = *param_7 | 4;
  if (param_2 == (long *)0x0 || bVar4 == false) goto LAB_71007ba498;
LAB_71007ba360:
  if (((ulong)param_2[2] < (ulong)param_2[3]) ||
     (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 != -1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    param_2 = (long *)0x0;
  }
LAB_71007ba498:
  bVar7 = param_5 == -1;
  if ((param_4 != (long *)0x0 && bVar7) && (bVar7 = false, (ulong)param_4[3] <= (ulong)param_4[2]))
  {
    iVar11 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar7 = iVar11 == -1;
  }
  if (bVar4 == bVar7) {
    *param_7 = *param_7 | 2;
  }
  if (local_20 != &local_10) {
    thunk_FUN_710081c200();
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
  auVar26._8_8_ = param_3 & 0xffffffff00000000 | uVar22;
  auVar26._0_8_ = param_2;
  return auVar26;
LAB_71007ba784:
  uVar14 = 1;
  goto LAB_71007ba21c;
code_r0x0071007ba6d0:
  *param_7 = *param_7 | 4;
  goto LAB_71007ba360;
}



// ===== FUN_71007baf00 @ 71007baf00 (size=4492) =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_71007baf00(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6
              ,uint *param_7,undefined8 param_8)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined1 auVar26 [16];
  byte *local_d8;
  ulong local_c0;
  int local_84;
  uint local_6c;
  undefined4 local_48;
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  char *local_20;
  ulong local_18;
  char local_10;
  undefined7 uStack_f;
  
  uVar22 = param_3 & 0xffffffff;
  lVar15 = FUN_71007b00e0(&DAT_7100d21120);
  lVar15 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar15 * 8);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar16 = FUN_71007b00e0(&DAT_7100d21190);
  lVar23 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar25 = *(long *)(lVar23 + lVar16 * 8);
  if (lVar25 == 0) {
    puVar19 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar19 + 1) = 0;
    puVar19[2] = 0;
    puVar19[3] = 0;
    *puVar19 = &PTR_FUN_7100aee748;
    *(undefined2 *)(puVar19 + 4) = 0;
    *(undefined1 *)((long)puVar19 + 0x22) = 0;
    puVar19[5] = 0;
    puVar19[6] = 0;
    puVar19[7] = 0;
    puVar19[8] = 0;
    puVar19[9] = 0;
    puVar19[10] = 0;
    *(undefined4 *)(puVar19 + 0xb) = 0;
    *(undefined8 *)((long)puVar19 + 0x5c) = 0;
    *(undefined1 *)((long)puVar19 + 0x6f) = 0;
    FUN_71007d22a0(puVar19,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar19,lVar16);
    lVar25 = *(long *)(lVar23 + lVar16 * 8);
  }
  if (*(long *)(lVar25 + 0x40) == 0) {
    local_6c = 0;
  }
  else {
    local_6c = (uint)(*(long *)(lVar25 + 0x50) != 0);
  }
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  if ((*(byte *)(lVar25 + 0x20) & 1) != 0) {
    FUN_71007e25c0(&local_40,0x20);
  }
  local_18 = 0;
  local_10 = '\0';
  local_20 = &local_10;
  FUN_71007e25c0(&local_20,0x20);
  bVar2 = 0;
  local_84 = 0;
  iVar11 = 0;
  local_48 = *(uint *)(lVar25 + 0x60);
  iVar9 = 0;
  local_d8 = (byte *)&local_48;
  local_c0 = 0;
  bVar7 = false;
  uVar14 = local_48 & 0xff;
  bVar3 = uVar14 == 2;
  if (bVar3) goto LAB_71007bb428;
LAB_71007bb01c:
  iVar10 = (int)uVar22;
  if (1 < uVar14 && !bVar3) {
    if (uVar14 != 3) {
      if (uVar14 != 4) goto LAB_71007bb964;
      bVar3 = iVar10 == -1;
      iVar10 = iVar9;
      if (param_2 != (long *)0x0 && bVar3) goto LAB_71007bb1e8;
LAB_71007bb148:
      bVar6 = param_5 == -1;
      bVar4 = param_4 != (long *)0x0 && bVar6;
      bVar5 = bVar3;
      if (param_4 != (long *)0x0 && bVar6) goto LAB_71007bb220;
LAB_71007bb160:
      iVar9 = iVar10;
      if (bVar6 != bVar5) {
        do {
          if (param_2 != (long *)0x0 && bVar3) {
            if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar14 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar14 == 0xffffffff) {
                param_2 = (long *)0x0;
                uVar14 = 0xff;
              }
              else {
                uVar14 = uVar14 & 0xff;
              }
            }
            lVar16 = FUN_710080c980(lVar25 + 0x65,uVar14,10);
            if (lVar16 != 0) {
              cVar1 = PTR_DAT_7100af47a0[lVar16 - (lVar25 + 100)];
              goto LAB_71007bb1a0;
            }
LAB_71007bb274:
            uVar24 = local_38;
            if (*(byte *)(lVar25 + 0x21) == uVar14) {
              bVar8 = bVar2;
              if (bVar2 == 0) {
                if (0 < *(int *)(lVar25 + 0x58)) {
                  bVar2 = 1;
                  iVar10 = 0;
                  local_84 = iVar9;
                  goto LAB_71007bb1d4;
                }
                break;
              }
              goto LAB_71007bb3ec;
            }
            if ((*(byte *)(lVar25 + 0x20) & 1) == 0) break;
            bVar8 = *(byte *)(lVar25 + 0x20);
            if (((*(byte *)(lVar25 + 0x22) != uVar14) || (bVar8 = bVar2, bVar2 != 0)) ||
               (iVar9 == 0)) goto LAB_71007bb3ec;
            uVar20 = local_38 + 1;
            uVar22 = CONCAT71(uStack_2f,local_30);
            if (local_40 == &local_30) {
              uVar22 = 0xf;
            }
            if (uVar22 < uVar20) {
              FUN_71007e2360(&local_40,local_38,0,0,1);
            }
            local_40[uVar24] = (char)iVar9;
            iVar10 = 0;
            local_40[uVar20] = 0;
            uVar22 = param_2[2];
            local_38 = uVar20;
            if ((ulong)param_2[3] <= uVar22) goto LAB_71007bb2e0;
LAB_71007bb1e0:
            param_2[2] = uVar22 + 1;
LAB_71007bb1e8:
            if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007bb2fc:
              uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar22 = (ulong)uVar14;
              if (uVar14 == 0xffffffff) {
                param_2 = (long *)0x0;
                bVar3 = true;
                goto LAB_71007bb148;
              }
            }
          }
          else {
            lVar16 = FUN_710080c980(lVar25 + 0x65,(uint)uVar22 & 0xff,10);
            uVar14 = (uint)uVar22 & 0xff;
            if (lVar16 == 0) goto LAB_71007bb274;
            cVar1 = PTR_DAT_7100af47a0[lVar16 - (lVar25 + 100)];
LAB_71007bb1a0:
            uVar20 = local_18;
            uVar22 = local_18 + 1;
            uVar24 = CONCAT71(uStack_f,local_10);
            if (local_20 == &local_10) {
              uVar24 = 0xf;
            }
            if (uVar24 < uVar22) {
              FUN_71007e2360(&local_20,local_18,0,0,1);
            }
            local_20[uVar20] = cVar1;
            iVar10 = iVar9 + 1;
            local_20[uVar22] = '\0';
            local_18 = uVar22;
LAB_71007bb1d4:
            uVar22 = param_2[2];
            if (uVar22 < (ulong)param_2[3]) goto LAB_71007bb1e0;
LAB_71007bb2e0:
            (**(code **)(*param_2 + 0x50))(param_2);
            if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007bb2fc;
          }
          bVar6 = param_5 == -1;
          bVar3 = true;
          uVar22 = 0xffffffff;
          bVar4 = param_4 != (long *)0x0 && bVar6;
          bVar5 = false;
          if (param_4 == (long *)0x0 || !bVar6) goto LAB_71007bb160;
LAB_71007bb220:
          bVar6 = false;
          if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007bb160;
          iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar9 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar4 = false;
          }
          iVar9 = iVar10;
          if (bVar4 == bVar5) break;
        } while( true );
      }
      bVar8 = 1;
LAB_71007bb3ec:
      uVar14 = (uint)(local_18 != 0 && bVar8 != 0);
      goto LAB_71007bb3fc;
    }
    if (*(long *)(lVar25 + 0x40) == 0) {
      if (*(long *)(lVar25 + 0x50) != 0) {
LAB_71007bb9ec:
        bVar4 = iVar10 == -1;
        bVar5 = param_2 != (long *)0x0;
        bVar3 = bVar4;
        if (bVar5 && bVar4) {
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            bVar3 = false;
          }
          else {
            iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
            if (iVar10 == -1) {
              param_2 = (long *)0x0;
            }
            bVar3 = iVar10 == -1 && (bVar5 && bVar4);
          }
        }
        bVar6 = param_5 == -1;
        bVar5 = param_4 != (long *)0x0 && bVar6;
        if ((param_4 != (long *)0x0 && bVar6) &&
           (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
          iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar10 == -1) {
            param_4 = (long *)0x0;
          }
          bVar6 = iVar10 == -1 && bVar5;
        }
        if (bVar6 != bVar3) {
          uVar24 = uVar22;
          if (param_2 != (long *)0x0 && bVar4) {
            pcVar17 = (char *)param_2[2];
            if ((char *)param_2[3] <= pcVar17) {
              uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
              if ((int)uVar24 == -1) {
                param_2 = (long *)0x0;
              }
              goto LAB_71007bbc98;
            }
            if (*pcVar17 != **(char **)(lVar25 + 0x48)) goto LAB_71007bba28;
            local_c0 = *(ulong *)(lVar25 + 0x50);
LAB_71007bbcbc:
            param_2[2] = (long)(pcVar17 + 1);
          }
          else {
LAB_71007bbc98:
            if (**(char **)(lVar25 + 0x48) != (char)uVar24) goto LAB_71007bba28;
            local_c0 = *(ulong *)(lVar25 + 0x50);
            pcVar17 = (char *)param_2[2];
            if (pcVar17 < (char *)param_2[3]) goto LAB_71007bbcbc;
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          uVar14 = 1;
          uVar22 = 0xffffffff;
          bVar7 = true;
          goto LAB_71007bb3fc;
        }
LAB_71007bba28:
        if (*(long *)(lVar25 + 0x40) != 0) {
          lVar16 = *(long *)(lVar25 + 0x50);
          goto joined_r0x0071007bb744;
        }
      }
    }
    else {
      bVar4 = iVar10 == -1;
      bVar5 = param_2 != (long *)0x0;
      bVar3 = bVar4;
      if (bVar5 && bVar4) {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          bVar3 = false;
        }
        else {
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
          if (iVar12 == -1) {
            param_2 = (long *)0x0;
          }
          bVar3 = iVar12 == -1 && (bVar5 && bVar4);
        }
      }
      bVar6 = param_5 == -1;
      bVar5 = param_4 != (long *)0x0 && bVar6;
      if ((param_4 != (long *)0x0 && bVar6) &&
         (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
        iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar12 == -1) {
          param_4 = (long *)0x0;
        }
        bVar6 = iVar12 == -1 && bVar5;
      }
      if (bVar6 != bVar3) {
        uVar24 = uVar22;
        if (param_2 != (long *)0x0 && bVar4) {
          pcVar17 = (char *)param_2[2];
          if ((char *)param_2[3] <= pcVar17) {
            uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
            if ((int)uVar24 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007bbc50;
          }
          if (*pcVar17 != **(char **)(lVar25 + 0x38)) goto LAB_71007bb738;
          local_c0 = *(ulong *)(lVar25 + 0x40);
LAB_71007bbc74:
          param_2[2] = (long)(pcVar17 + 1);
        }
        else {
LAB_71007bbc50:
          if (**(char **)(lVar25 + 0x38) != (char)uVar24) goto LAB_71007bb738;
          local_c0 = *(ulong *)(lVar25 + 0x40);
          pcVar17 = (char *)param_2[2];
          if (pcVar17 < (char *)param_2[3]) goto LAB_71007bbc74;
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        uVar22 = 0xffffffff;
        uVar14 = 1;
        goto LAB_71007bb3fc;
      }
LAB_71007bb738:
      if (*(long *)(lVar25 + 0x50) != 0) goto LAB_71007bb9ec;
      lVar16 = *(long *)(lVar25 + 0x40);
joined_r0x0071007bb744:
      if (lVar16 != 0) {
        uVar14 = 1;
        bVar7 = true;
        goto LAB_71007bb3fc;
      }
    }
    uVar14 = local_6c ^ 1;
LAB_71007bb3fc:
    do {
      iVar11 = iVar11 + 1;
      if (uVar14 == 0 || iVar11 == 4) goto LAB_71007bb06c;
      while( true ) {
        local_d8 = local_d8 + 1;
        uVar14 = (uint)*local_d8;
        bVar3 = uVar14 == 2;
        if (!bVar3) goto LAB_71007bb01c;
LAB_71007bb428:
        if (((*(uint *)(param_6 + 0x18) >> 9 & 1) != 0) || (iVar11 == 0 || 1 < local_c0)) break;
        if (iVar11 == 1) {
          if (((local_6c != 0) || ((byte)local_48 == 3)) || (local_48._2_1_ == '\x01')) break;
        }
        else {
          if (iVar11 != 2) goto LAB_71007bb454;
          if ((local_48._3_1_ == '\x04') || (local_6c != 0 && local_48._3_1_ == '\x03')) break;
        }
        iVar11 = iVar11 + 1;
      }
      bVar3 = (int)uVar22 == -1;
      uVar24 = *(ulong *)(lVar25 + 0x30);
      if (param_2 != (long *)0x0 && bVar3) {
        uVar20 = 0;
        goto LAB_71007bb840;
      }
      uVar20 = 0;
      bVar4 = bVar3;
      while( true ) {
        if (param_4 != (long *)0x0 && param_5 == -1) {
          if ((ulong)param_4[3] <= (ulong)param_4[2]) {
            iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
            if (iVar10 == -1) {
              param_4 = (long *)0x0;
            }
            bVar3 = (bool)(bVar3 ^ iVar10 == -1);
          }
        }
        else {
          bVar3 = (bool)(bVar3 ^ param_5 == -1);
        }
        if (!bVar3 || uVar24 <= uVar20) break;
        uVar21 = uVar22;
        if (param_2 == (long *)0x0 || bVar4 == false) {
LAB_71007bb818:
          if (*(char *)(*(long *)(lVar25 + 0x28) + uVar20) != (char)uVar21) goto LAB_71007bb940;
          pcVar17 = (char *)param_2[2];
          if (pcVar17 < (char *)param_2[3]) goto LAB_71007bb834;
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar20 = uVar20 + 1;
        }
        else {
          pcVar17 = (char *)param_2[2];
          if ((char *)param_2[3] <= pcVar17) {
            uVar21 = (**(code **)(*param_2 + 0x48))(param_2);
            if ((int)uVar21 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007bb818;
          }
          if (*pcVar17 != *(char *)(*(long *)(lVar25 + 0x28) + uVar20)) goto LAB_71007bb940;
LAB_71007bb834:
          uVar20 = uVar20 + 1;
          param_2[2] = (long)(pcVar17 + 1);
        }
LAB_71007bb840:
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007bb84c:
          bVar4 = true;
          uVar22 = 0xffffffff;
          bVar3 = false;
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
          uVar22 = (ulong)uVar14;
          if (uVar14 != 0xffffffff) goto LAB_71007bb84c;
          bVar4 = true;
          param_2 = (long *)0x0;
          bVar3 = true;
        }
      }
      if (uVar24 == uVar20) goto LAB_71007bb964;
LAB_71007bb940:
      if (uVar20 != 0) goto LAB_71007bb65c;
      uVar14 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
    } while( true );
  }
  if (uVar14 == 0) {
    uVar14 = 1;
joined_r0x0071007bb578:
    if (iVar11 != 3) {
      bVar4 = iVar10 == -1;
      bVar3 = bVar4;
      if (param_2 == (long *)0x0 || !bVar4) goto LAB_71007bb59c;
LAB_71007bb5ec:
      do {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007bb5f8:
          bVar3 = true;
          uVar22 = 0xffffffff;
          bVar4 = false;
        }
        else {
          uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
          uVar22 = (ulong)uVar13;
          if (uVar13 != 0xffffffff) goto LAB_71007bb5f8;
          bVar3 = true;
          param_2 = (long *)0x0;
          bVar4 = true;
        }
LAB_71007bb59c:
        bVar5 = param_5 == -1;
        bVar6 = param_4 != (long *)0x0;
        if (bVar6 && bVar5) {
          if ((ulong)param_4[2] < (ulong)param_4[3]) {
            bVar5 = false;
          }
          else {
            iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
            if (iVar10 == -1) {
              param_4 = (long *)0x0;
            }
            bVar5 = iVar10 == -1 && (bVar6 && bVar5);
          }
        }
        if (bVar5 == bVar4) goto LAB_71007bb3fc;
        uVar24 = uVar22;
        if (param_2 != (long *)0x0 && bVar3) {
          pbVar18 = (byte *)param_2[2];
          if ((byte *)param_2[3] <= pbVar18) {
            uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
            if ((int)uVar24 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007bb5c8;
          }
          if ((*(byte *)(*(long *)(lVar15 + 0x30) + (ulong)*pbVar18) >> 3 & 1) == 0)
          goto LAB_71007bb3fc;
        }
        else {
LAB_71007bb5c8:
          if ((*(byte *)(*(long *)(lVar15 + 0x30) + (long)(int)((uint)uVar24 & 0xff)) >> 3 & 1) == 0
             ) goto LAB_71007bb3fc;
          pbVar18 = (byte *)param_2[2];
          if ((byte *)param_2[3] <= pbVar18) {
            (**(code **)(*param_2 + 0x50))(param_2);
            goto LAB_71007bb5ec;
          }
        }
        param_2[2] = (long)(pbVar18 + 1);
      } while( true );
    }
  }
  else {
    bVar4 = iVar10 == -1;
    bVar5 = param_2 != (long *)0x0;
    bVar3 = bVar4;
    if (bVar5 && bVar4) {
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        bVar3 = false;
      }
      else {
        iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
        bVar3 = iVar12 == -1 && (bVar5 && bVar4);
      }
    }
    bVar6 = param_5 == -1;
    bVar5 = param_4 != (long *)0x0 && bVar6;
    if ((param_4 != (long *)0x0 && bVar6) && (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])
       ) {
      iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
      if (iVar12 == -1) {
        param_4 = (long *)0x0;
      }
      bVar6 = iVar12 == -1 && bVar5;
    }
    uVar14 = 0;
    if (bVar6 == bVar3) {
LAB_71007bb064:
      uVar14 = 0;
      goto joined_r0x0071007bb578;
    }
    uVar24 = uVar22;
    if (param_2 != (long *)0x0 && bVar4) {
      pbVar18 = (byte *)param_2[2];
      if ((byte *)param_2[3] <= pbVar18) {
        uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
        if ((int)uVar24 == -1) {
          param_2 = (long *)0x0;
        }
        goto LAB_71007bb768;
      }
      if ((*(byte *)(*(long *)(lVar15 + 0x30) + (ulong)*pbVar18) >> 3 & 1) != 0)
      goto LAB_71007bb788;
    }
    else {
LAB_71007bb768:
      if ((*(byte *)(*(long *)(lVar15 + 0x30) + (long)(int)((uint)uVar24 & 0xff)) >> 3 & 1) == 0)
      goto LAB_71007bb064;
      pbVar18 = (byte *)param_2[2];
      if (pbVar18 < (byte *)param_2[3]) {
LAB_71007bb788:
        param_2[2] = (long)(pbVar18 + 1);
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      uVar14 = 1;
    }
    if (iVar11 != 3) goto LAB_71007bb5ec;
    uVar22 = 0xffffffff;
  }
LAB_71007bb06c:
  bVar4 = uVar14 != 0;
  bVar3 = (bVar4 && local_c0 != 0) && (uVar14 == 0 || local_c0 != 1);
  if (bVar4 && 1 < local_c0) {
    if (bVar7) {
      lVar15 = *(long *)(lVar25 + 0x48);
    }
    else {
      lVar15 = *(long *)(lVar25 + 0x38);
    }
    bVar5 = (int)uVar22 == -1;
    if (param_2 != (long *)0x0 && bVar5) {
      uVar24 = 1;
      goto LAB_71007bb104;
    }
    uVar24 = 1;
    bVar4 = bVar5;
LAB_71007bb0a8:
    if (param_4 != (long *)0x0 && param_5 == -1) {
      if ((ulong)param_4[3] <= (ulong)param_4[2]) {
        iVar11 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar11 == -1) {
          param_4 = (long *)0x0;
        }
        bVar5 = (bool)(bVar5 ^ iVar11 == -1);
      }
    }
    else {
      bVar5 = (bool)(bVar5 ^ param_5 == -1);
    }
    if (!bVar5 || local_c0 <= uVar24) {
      if (uVar24 != local_c0) goto LAB_71007bb65c;
      if (local_18 < 2) goto LAB_71007bb460;
      goto LAB_71007bba3c;
    }
    uVar20 = uVar22;
    if (param_2 == (long *)0x0 || bVar4 == false) {
LAB_71007bb0e0:
      if (*(char *)(lVar15 + uVar24) != (char)uVar20) goto LAB_71007bb65c;
      pcVar17 = (char *)param_2[2];
      if (pcVar17 < (char *)param_2[3]) goto LAB_71007bb0f8;
      (**(code **)(*param_2 + 0x50))(param_2);
      uVar24 = uVar24 + 1;
    }
    else {
      pcVar17 = (char *)param_2[2];
      if ((char *)param_2[3] <= pcVar17) {
        uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
        if ((int)uVar20 == -1) {
          param_2 = (long *)0x0;
        }
        goto LAB_71007bb0e0;
      }
      if (*pcVar17 != *(char *)(lVar15 + uVar24)) goto code_r0x0071007bb8b0;
LAB_71007bb0f8:
      uVar24 = uVar24 + 1;
      param_2[2] = (long)(pcVar17 + 1);
    }
LAB_71007bb104:
    bVar4 = bVar3;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007bb110:
      uVar22 = 0xffffffff;
      bVar5 = false;
    }
    else {
      uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar22 = (ulong)uVar14;
      if (uVar14 != 0xffffffff) goto LAB_71007bb110;
      param_2 = (long *)0x0;
      bVar5 = bVar3;
    }
    goto LAB_71007bb0a8;
  }
  if (uVar14 == 0) {
    bVar4 = (int)uVar22 == -1;
  }
  else {
LAB_71007bb454:
    if (1 < local_18) {
LAB_71007bba3c:
      uVar24 = FUN_71007e30c0(&local_20,0x30,0);
      if (uVar24 != 0) {
        if (uVar24 == 0xffffffffffffffff) {
          uVar24 = local_18 - 1;
          if (local_18 == 0) {
            *local_20 = '\0';
          }
          else if (uVar24 != 0) goto LAB_71007bba68;
        }
        else {
LAB_71007bba68:
          if (local_18 < uVar24) {
            uVar24 = local_18;
          }
          FUN_71007e24a0(&local_20,0,uVar24);
        }
      }
    }
LAB_71007bb460:
    if ((bVar7) && (*local_20 != '0')) {
      FUN_71007e2740(&local_20,0,0,1,0x2d);
    }
    uVar24 = local_38;
    if (local_38 != 0) {
      if (bVar2 == 0) {
        local_84 = iVar9;
      }
      uVar20 = local_38 + 1;
      uVar21 = CONCAT71(uStack_2f,local_30);
      if (local_40 == &local_30) {
        uVar21 = 0xf;
      }
      if (uVar21 < uVar20) {
        FUN_71007e2360(&local_40,local_38,0,0,1);
      }
      local_40[uVar24] = (undefined1)local_84;
      local_40[uVar20] = 0;
      local_38 = uVar20;
      uVar24 = FUN_71007fc3a0(*(undefined8 *)(lVar25 + 0x10),*(undefined8 *)(lVar25 + 0x18),
                              &local_40);
      if ((uVar24 & 1) == 0) {
        *param_7 = *param_7 | 4;
      }
    }
    bVar4 = (int)uVar22 == -1;
    if ((bVar2 == 0) || (*(int *)(lVar25 + 0x58) == iVar9)) {
      FUN_71007e2c60(param_8,&local_20);
      if (param_2 == (long *)0x0 || !bVar4) goto LAB_71007bb678;
      goto LAB_71007bb540;
    }
  }
LAB_71007bb65c:
  *param_7 = *param_7 | 4;
  if (param_2 == (long *)0x0 || bVar4 == false) goto LAB_71007bb678;
LAB_71007bb540:
  if (((ulong)param_2[2] < (ulong)param_2[3]) ||
     (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 != -1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    param_2 = (long *)0x0;
  }
LAB_71007bb678:
  bVar7 = param_5 == -1;
  if ((param_4 != (long *)0x0 && bVar7) && (bVar7 = false, (ulong)param_4[3] <= (ulong)param_4[2]))
  {
    iVar11 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar7 = iVar11 == -1;
  }
  if (bVar4 == bVar7) {
    *param_7 = *param_7 | 2;
  }
  if (local_20 != &local_10) {
    thunk_FUN_710081c200();
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
  auVar26._8_8_ = param_3 & 0xffffffff00000000 | uVar22;
  auVar26._0_8_ = param_2;
  return auVar26;
LAB_71007bb964:
  uVar14 = 1;
  goto LAB_71007bb3fc;
code_r0x0071007bb8b0:
  *param_7 = *param_7 | 4;
  goto LAB_71007bb540;
}



// ===== FUN_71007bc0e0 @ 71007bc0e0 (size=164) =====

undefined1  [16]
FUN_71007bc0e0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
    auVar2 = FUN_71007baf00();
  }
  else {
    auVar2 = FUN_71007b9d20();
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



// ===== FUN_71007bc1a0 @ 71007bc1a0 (size=388) =====

undefined1  [16]
FUN_71007bc1a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 *local_20;
  long local_18;
  undefined1 local_10 [16];
  
  lVar3 = FUN_71007b00e0(&DAT_7100d21120);
  plVar5 = *(long **)(*(long *)(*(long *)(param_7 + 0xd0) + 8) + lVar3 * 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  local_18 = 0;
  local_10[0] = 0;
  local_20 = local_10;
  if ((param_6 & 1) == 0) {
    auVar6 = FUN_71007baf00(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_20);
  }
  else {
    auVar6 = FUN_71007b9d20(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_20);
  }
  lVar3 = local_18;
  if (local_18 != 0) {
    FUN_71007e28a0(param_9,local_18,0);
    puVar2 = local_20;
    uVar4 = *param_9;
    puVar1 = local_20 + lVar3;
    if ((char)plVar5[7] != '\x01') {
      if ((char)plVar5[7] == '\0') {
        FUN_71007b8240(plVar5);
      }
      if (*(code **)(*plVar5 + 0x38) != FUN_71007b8200) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar2,puVar1);
        goto LAB_71007bc2ac;
      }
    }
    if (puVar1 != puVar2) {
      FUN_710080f900(uVar4,puVar2,lVar3);
    }
  }
LAB_71007bc2ac:
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20);
  }
  auVar6._8_8_ = param_3 & 0xffffffff00000000 | auVar6._8_8_ & 0xffffffff;
  return auVar6;
}



// ===== FUN_71007bc340 @ 71007bc340 (size=1660) =====

undefined1  [16]
FUN_71007bc340(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
              undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 *local_a8;
  uint local_a0;
  undefined4 local_48;
  byte abStack_44 [4];
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined1 *local_20;
  ulong local_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  lVar9 = FUN_71007b00e0(&DAT_7100d21120);
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar9 * 8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar10 = FUN_71007b00e0(&DAT_7100d21188);
  lVar17 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar17 + lVar10 * 8);
  if (lVar16 == 0) {
    puVar12 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar12 + 1) = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = &PTR_FUN_7100aee768;
    *(undefined2 *)(puVar12 + 4) = 0;
    *(undefined1 *)((long)puVar12 + 0x22) = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    *(undefined4 *)(puVar12 + 0xb) = 0;
    *(undefined8 *)((long)puVar12 + 0x5c) = 0;
    *(undefined1 *)((long)puVar12 + 0x6f) = 0;
    FUN_71007d2800(puVar12,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar12,lVar10);
    lVar16 = *(long *)(lVar17 + lVar10 * 8);
    pbVar18 = (byte *)*param_6;
    if (*pbVar18 == *(byte *)(lVar16 + 100)) goto LAB_71007bc4ac;
LAB_71007bc3c0:
    local_48 = *(undefined4 *)(lVar16 + 0x5c);
    lVar10 = param_6[1];
    local_a8 = *(undefined1 **)(lVar16 + 0x38);
    uVar15 = *(ulong *)(lVar16 + 0x40);
  }
  else {
    pbVar18 = (byte *)*param_6;
    if (*(byte *)(lVar16 + 100) != *pbVar18) goto LAB_71007bc3c0;
LAB_71007bc4ac:
    local_48 = *(undefined4 *)(lVar16 + 0x60);
    lVar10 = param_6[1];
    local_a8 = *(undefined1 **)(lVar16 + 0x48);
    uVar15 = *(ulong *)(lVar16 + 0x50);
    if (lVar10 == 0) goto LAB_71007bc40c;
    pbVar18 = pbVar18 + 1;
  }
  if (pbVar18 + lVar10 <= pbVar18) goto LAB_71007bc40c;
  pbVar11 = pbVar18;
  do {
    if ((*(byte *)(*(long *)(lVar9 + 0x30) + (ulong)*pbVar11) >> 2 & 1) == 0) break;
    pbVar11 = pbVar11 + 1;
  } while (pbVar18 + lVar10 != pbVar11);
  uVar14 = (long)pbVar11 - (long)pbVar18;
  if (uVar14 == 0) goto LAB_71007bc40c;
  lVar9 = uVar14 * 2;
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  FUN_71007e25c0(&local_40,lVar9);
  iVar4 = *(int *)(lVar16 + 0x58);
  uVar19 = uVar14 - (long)iVar4;
  if ((long)uVar19 < 1) {
    if (0 < iVar4) goto LAB_71007bc6c0;
LAB_71007bc570:
    uVar8 = *(uint *)(param_4 + 0x18);
  }
  else {
    if (iVar4 < 0) {
      uVar19 = uVar14;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_71007bc874;
LAB_71007bc51c:
      FUN_71007e2740(&local_40,0,local_38,lVar9,0);
      puVar13 = (undefined1 *)
                FUN_71007d3620(local_40,*(undefined1 *)(lVar16 + 0x22),
                               *(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),pbVar18
                               ,pbVar18 + uVar19);
      if (local_38 < (ulong)((long)puVar13 - (long)local_40)) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::erase");
      }
      *puVar13 = 0;
      local_38 = (long)puVar13 - (long)local_40;
    }
    else {
      if (*(long *)(lVar16 + 0x18) != 0) {
        lVar9 = uVar19 * 2;
        goto LAB_71007bc51c;
      }
LAB_71007bc874:
      FUN_71007e28e0(&local_40,0,local_38,pbVar18,uVar19);
    }
    if (*(int *)(lVar16 + 0x58) < 1) goto LAB_71007bc570;
LAB_71007bc6c0:
    uVar3 = local_38;
    uVar1 = local_38 + 1;
    uVar6 = *(undefined1 *)(lVar16 + 0x21);
    uVar2 = CONCAT71(uStack_2f,local_30);
    if (local_40 == &local_30) {
      uVar2 = 0xf;
    }
    if (uVar2 < uVar1) {
      FUN_71007e2360(&local_40,local_38,0,0,1);
      local_40[uVar3] = uVar6;
      local_40[uVar1] = 0;
      if ((long)uVar19 < 0) goto LAB_71007bc8dc;
LAB_71007bc6fc:
      uVar14 = (ulong)*(int *)(lVar16 + 0x58);
      pbVar18 = pbVar18 + uVar19;
      local_38 = uVar1;
      if (0x7ffffffffffffffe - uVar1 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",pbVar18);
      }
    }
    else {
      local_40[local_38] = uVar6;
      local_40[uVar1] = 0;
      if (-1 < (long)uVar19) goto LAB_71007bc6fc;
LAB_71007bc8dc:
      local_38 = uVar1;
      FUN_71007e2740(&local_40,uVar1,0,-uVar19,*(undefined1 *)(lVar16 + 0x65));
      if (0x7ffffffffffffffe - local_38 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
    }
    FUN_71007e2a60(&local_40,pbVar18,uVar14);
    uVar8 = *(uint *)(param_4 + 0x18);
  }
  local_a0 = uVar8 & 0xb0;
  uVar14 = uVar15 + local_38;
  if ((uVar8 >> 9 & 1) != 0) {
    uVar14 = uVar14 + *(long *)(lVar16 + 0x30);
  }
  local_18 = 0;
  local_10 = 0;
  local_20 = &local_10;
  FUN_71007e25c0(&local_20,uVar14 << 1);
  uVar19 = *(ulong *)(param_4 + 0x10);
  pbVar18 = (byte *)&local_48;
  bVar7 = local_a0 == 0x10;
  do {
    uVar1 = local_18;
    bVar5 = *pbVar18;
    if (bVar5 == 2) {
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        if (0x7ffffffffffffffe - local_18 < *(ulong *)(lVar16 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_7100003b58("basic_string::append",*(undefined8 *)(lVar16 + 0x28));
        }
LAB_71007bc760:
        FUN_71007e2a60(&local_20);
      }
    }
    else if (bVar5 < 3) {
      if (bVar5 == 0) {
        if ((bVar7 && uVar14 <= uVar19) && (local_a0 != 0x10 || uVar19 != uVar14)) {
          FUN_71007e2740(&local_20,local_18,0,uVar19 - uVar14,param_5);
        }
      }
      else if (bVar7 && (uVar14 <= uVar19 && uVar19 != uVar14)) {
        FUN_71007e2740(&local_20,local_18,0,uVar19 - uVar14,param_5);
      }
      else {
        uVar2 = local_18 + 1;
        uVar3 = CONCAT71(uStack_f,local_10);
        if (local_20 == &local_10) {
          uVar3 = 0xf;
        }
        if (uVar3 < uVar2) {
          FUN_71007e2360(&local_20,local_18,0,0,1);
        }
        local_20[uVar1] = param_5;
        local_20[uVar2] = 0;
        local_18 = uVar2;
      }
    }
    else if (bVar5 == 3) {
      if (uVar15 != 0) {
        uVar2 = local_18 + 1;
        uVar3 = CONCAT71(uStack_f,local_10);
        if (local_20 == &local_10) {
          uVar3 = 0xf;
        }
        uVar6 = *local_a8;
        if (uVar3 < uVar2) {
          FUN_71007e2360(&local_20,local_18,0,0,1);
        }
        local_20[uVar1] = uVar6;
        local_20[uVar2] = 0;
        local_18 = uVar2;
      }
    }
    else if (bVar5 == 4) {
      if (0x7ffffffffffffffe - local_18 < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",local_40);
      }
      goto LAB_71007bc760;
    }
    pbVar18 = pbVar18 + 1;
  } while (abStack_44 != pbVar18);
  if (1 < uVar15) {
    if (0x7ffffffffffffffe - local_18 < uVar15 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append",local_a8 + 1);
    }
    FUN_71007e2a60(&local_20);
  }
  uVar15 = local_18;
  if (local_18 < uVar19) {
    uVar15 = uVar19;
    if (local_a0 == 0x20) {
      FUN_71007e2740(&local_20,local_18,0,uVar19 - local_18,param_5);
    }
    else {
      FUN_71007e2740(&local_20,0,0,uVar19 - local_18,param_5);
    }
  }
  uVar8 = (uint)param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_20,(long)(int)uVar15),
     (int)uVar15 != lVar9)) {
    uVar8 = 1;
  }
  param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar8;
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
LAB_71007bc40c:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar20._8_8_ = param_3;
  auVar20._0_8_ = param_2;
  return auVar20;
}



// ===== FUN_71007bca20 @ 71007bca20 (size=1660) =====

undefined1  [16]
FUN_71007bca20(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
              undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 *local_a8;
  uint local_a0;
  undefined4 local_48;
  byte abStack_44 [4];
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined1 *local_20;
  ulong local_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  lVar9 = FUN_71007b00e0(&DAT_7100d21120);
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar9 * 8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar10 = FUN_71007b00e0(&DAT_7100d21190);
  lVar17 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar17 + lVar10 * 8);
  if (lVar16 == 0) {
    puVar12 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar12 + 1) = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = &PTR_FUN_7100aee748;
    *(undefined2 *)(puVar12 + 4) = 0;
    *(undefined1 *)((long)puVar12 + 0x22) = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    *(undefined4 *)(puVar12 + 0xb) = 0;
    *(undefined8 *)((long)puVar12 + 0x5c) = 0;
    *(undefined1 *)((long)puVar12 + 0x6f) = 0;
    FUN_71007d22a0(puVar12,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar12,lVar10);
    lVar16 = *(long *)(lVar17 + lVar10 * 8);
    pbVar18 = (byte *)*param_6;
    if (*pbVar18 == *(byte *)(lVar16 + 100)) goto LAB_71007bcb8c;
LAB_71007bcaa0:
    local_48 = *(undefined4 *)(lVar16 + 0x5c);
    lVar10 = param_6[1];
    local_a8 = *(undefined1 **)(lVar16 + 0x38);
    uVar15 = *(ulong *)(lVar16 + 0x40);
  }
  else {
    pbVar18 = (byte *)*param_6;
    if (*(byte *)(lVar16 + 100) != *pbVar18) goto LAB_71007bcaa0;
LAB_71007bcb8c:
    local_48 = *(undefined4 *)(lVar16 + 0x60);
    lVar10 = param_6[1];
    local_a8 = *(undefined1 **)(lVar16 + 0x48);
    uVar15 = *(ulong *)(lVar16 + 0x50);
    if (lVar10 == 0) goto LAB_71007bcaec;
    pbVar18 = pbVar18 + 1;
  }
  if (pbVar18 + lVar10 <= pbVar18) goto LAB_71007bcaec;
  pbVar11 = pbVar18;
  do {
    if ((*(byte *)(*(long *)(lVar9 + 0x30) + (ulong)*pbVar11) >> 2 & 1) == 0) break;
    pbVar11 = pbVar11 + 1;
  } while (pbVar18 + lVar10 != pbVar11);
  uVar14 = (long)pbVar11 - (long)pbVar18;
  if (uVar14 == 0) goto LAB_71007bcaec;
  lVar9 = uVar14 * 2;
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  FUN_71007e25c0(&local_40,lVar9);
  iVar4 = *(int *)(lVar16 + 0x58);
  uVar19 = uVar14 - (long)iVar4;
  if ((long)uVar19 < 1) {
    if (0 < iVar4) goto LAB_71007bcda0;
LAB_71007bcc50:
    uVar8 = *(uint *)(param_4 + 0x18);
  }
  else {
    if (iVar4 < 0) {
      uVar19 = uVar14;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_71007bcf54;
LAB_71007bcbfc:
      FUN_71007e2740(&local_40,0,local_38,lVar9,0);
      puVar13 = (undefined1 *)
                FUN_71007d3620(local_40,*(undefined1 *)(lVar16 + 0x22),
                               *(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),pbVar18
                               ,pbVar18 + uVar19);
      if (local_38 < (ulong)((long)puVar13 - (long)local_40)) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::erase");
      }
      *puVar13 = 0;
      local_38 = (long)puVar13 - (long)local_40;
    }
    else {
      if (*(long *)(lVar16 + 0x18) != 0) {
        lVar9 = uVar19 * 2;
        goto LAB_71007bcbfc;
      }
LAB_71007bcf54:
      FUN_71007e28e0(&local_40,0,local_38,pbVar18,uVar19);
    }
    if (*(int *)(lVar16 + 0x58) < 1) goto LAB_71007bcc50;
LAB_71007bcda0:
    uVar3 = local_38;
    uVar1 = local_38 + 1;
    uVar6 = *(undefined1 *)(lVar16 + 0x21);
    uVar2 = CONCAT71(uStack_2f,local_30);
    if (local_40 == &local_30) {
      uVar2 = 0xf;
    }
    if (uVar2 < uVar1) {
      FUN_71007e2360(&local_40,local_38,0,0,1);
      local_40[uVar3] = uVar6;
      local_40[uVar1] = 0;
      if ((long)uVar19 < 0) goto LAB_71007bcfbc;
LAB_71007bcddc:
      uVar14 = (ulong)*(int *)(lVar16 + 0x58);
      pbVar18 = pbVar18 + uVar19;
      local_38 = uVar1;
      if (0x7ffffffffffffffe - uVar1 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",pbVar18);
      }
    }
    else {
      local_40[local_38] = uVar6;
      local_40[uVar1] = 0;
      if (-1 < (long)uVar19) goto LAB_71007bcddc;
LAB_71007bcfbc:
      local_38 = uVar1;
      FUN_71007e2740(&local_40,uVar1,0,-uVar19,*(undefined1 *)(lVar16 + 0x65));
      if (0x7ffffffffffffffe - local_38 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
    }
    FUN_71007e2a60(&local_40,pbVar18,uVar14);
    uVar8 = *(uint *)(param_4 + 0x18);
  }
  local_a0 = uVar8 & 0xb0;
  uVar14 = uVar15 + local_38;
  if ((uVar8 >> 9 & 1) != 0) {
    uVar14 = uVar14 + *(long *)(lVar16 + 0x30);
  }
  local_18 = 0;
  local_10 = 0;
  local_20 = &local_10;
  FUN_71007e25c0(&local_20,uVar14 << 1);
  uVar19 = *(ulong *)(param_4 + 0x10);
  pbVar18 = (byte *)&local_48;
  bVar7 = local_a0 == 0x10;
  do {
    uVar1 = local_18;
    bVar5 = *pbVar18;
    if (bVar5 == 2) {
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        if (0x7ffffffffffffffe - local_18 < *(ulong *)(lVar16 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_7100003b58("basic_string::append",*(undefined8 *)(lVar16 + 0x28));
        }
LAB_71007bce40:
        FUN_71007e2a60(&local_20);
      }
    }
    else if (bVar5 < 3) {
      if (bVar5 == 0) {
        if ((bVar7 && uVar14 <= uVar19) && (local_a0 != 0x10 || uVar19 != uVar14)) {
          FUN_71007e2740(&local_20,local_18,0,uVar19 - uVar14,param_5);
        }
      }
      else if (bVar7 && (uVar14 <= uVar19 && uVar19 != uVar14)) {
        FUN_71007e2740(&local_20,local_18,0,uVar19 - uVar14,param_5);
      }
      else {
        uVar2 = local_18 + 1;
        uVar3 = CONCAT71(uStack_f,local_10);
        if (local_20 == &local_10) {
          uVar3 = 0xf;
        }
        if (uVar3 < uVar2) {
          FUN_71007e2360(&local_20,local_18,0,0,1);
        }
        local_20[uVar1] = param_5;
        local_20[uVar2] = 0;
        local_18 = uVar2;
      }
    }
    else if (bVar5 == 3) {
      if (uVar15 != 0) {
        uVar2 = local_18 + 1;
        uVar3 = CONCAT71(uStack_f,local_10);
        if (local_20 == &local_10) {
          uVar3 = 0xf;
        }
        uVar6 = *local_a8;
        if (uVar3 < uVar2) {
          FUN_71007e2360(&local_20,local_18,0,0,1);
        }
        local_20[uVar1] = uVar6;
        local_20[uVar2] = 0;
        local_18 = uVar2;
      }
    }
    else if (bVar5 == 4) {
      if (0x7ffffffffffffffe - local_18 < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",local_40);
      }
      goto LAB_71007bce40;
    }
    pbVar18 = pbVar18 + 1;
  } while (abStack_44 != pbVar18);
  if (1 < uVar15) {
    if (0x7ffffffffffffffe - local_18 < uVar15 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append",local_a8 + 1);
    }
    FUN_71007e2a60(&local_20);
  }
  uVar15 = local_18;
  if (local_18 < uVar19) {
    uVar15 = uVar19;
    if (local_a0 == 0x20) {
      FUN_71007e2740(&local_20,local_18,0,uVar19 - local_18,param_5);
    }
    else {
      FUN_71007e2740(&local_20,0,0,uVar19 - local_18,param_5);
    }
  }
  uVar8 = (uint)param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_20,(long)(int)uVar15),
     (int)uVar15 != lVar9)) {
    uVar8 = 1;
  }
  param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar8;
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
LAB_71007bcaec:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar20._8_8_ = param_3;
  auVar20._0_8_ = param_2;
  return auVar20;
}



// ===== FUN_71007bd100 @ 71007bd100 (size=488) =====

undefined1  [16]
FUN_71007bd100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,long param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_100 [64];
  long local_28;
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  FUN_71007afd00(&local_28,param_6 + 0xd0);
  lVar4 = FUN_71007b00e0(&DAT_7100d21120);
  plVar6 = *(long **)(*(long *)(local_28 + 8) + lVar4 * 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  puVar2 = auStack_100;
  local_20[0] = (undefined1 *)FUN_71007afd60();
  iVar3 = FUN_71007b9ba0(param_1,local_20,auStack_100,0x40,"%.*Lf",0);
  if (0x3f < iVar3) {
    lVar4 = -((long)(iVar3 + 1) + 0xfU & 0xfffffffffffffff0);
    puVar2 = auStack_100 + lVar4;
    local_20[0] = (undefined1 *)FUN_71007afd60();
    iVar3 = FUN_71007b9ba0(param_1,local_20,auStack_100 + lVar4,iVar3 + 1,"%.*Lf",0);
  }
  lVar4 = (long)iVar3;
  local_20[0] = auStack_10;
  FUN_71007e21c0(local_20,lVar4,0);
  puVar1 = local_20[0];
  if ((char)plVar6[7] != '\x01') {
    if ((char)plVar6[7] == '\0') {
      FUN_71007b8240(plVar6);
      pcVar5 = *(code **)(*plVar6 + 0x38);
    }
    else {
      pcVar5 = *(code **)(*plVar6 + 0x38);
    }
    if (pcVar5 != FUN_71007b8200) {
      (*pcVar5)(plVar6,puVar2);
      goto LAB_71007bd238;
    }
  }
  if (puVar2 + lVar4 != puVar2) {
    FUN_710080f900(puVar1,puVar2,lVar4);
  }
LAB_71007bd238:
  if ((param_5 & 1) == 0) {
    auVar7 = FUN_71007bca20(param_2,param_3,param_4,param_6,param_7,local_20);
  }
  else {
    auVar7 = FUN_71007bc340();
  }
  if (local_20[0] != auStack_10) {
    thunk_FUN_710081c200();
  }
  FUN_71007b0080(&local_28);
  return auVar7;
}



// ===== FUN_71007bd340 @ 71007bd340 (size=680) =====

undefined1  [16]
FUN_71007bd340(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
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
    goto LAB_71007bd468;
  }
  iVar9 = 0;
  uVar11 = 0;
LAB_71007bd3c4:
  bVar2 = bVar4;
  if (param_4 != (long *)0x0 && bVar3) goto LAB_71007bd48c;
LAB_71007bd3d0:
  bVar4 = (bool)(bVar4 ^ bVar3);
LAB_71007bd3d4:
  if (bVar4 == false || param_9 <= uVar11) {
LAB_71007bd4d0:
    if ((uVar11 == 0 || iVar9 < param_7) || param_8 < iVar9) {
LAB_71007bd4e4:
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
      if (uVar6 == 0x2a) goto LAB_71007bd4d0;
      *(char *)((long)plVar12 + uVar10 + 0x139) = (char)uVar6;
    }
    if (9 < (uVar6 - 0x30 & 0xff)) goto LAB_71007bd4d0;
    iVar9 = (uVar6 - 0x30) + iVar9 * 10;
    if (param_8 < iVar9) goto LAB_71007bd4e4;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      uVar11 = uVar11 + 1;
      param_2[2] = param_2[2] + 1;
LAB_71007bd468:
      if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007bd56c:
        uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar13 = (ulong)uVar6;
        if (uVar6 == 0xffffffff) {
          param_2 = (long *)0x0;
          bVar4 = true;
          goto LAB_71007bd3c4;
        }
      }
    }
    else {
      uVar11 = uVar11 + 1;
      (**(code **)(*param_2 + 0x50))(param_2);
      if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007bd56c;
    }
    bVar2 = true;
    uVar13 = 0xffffffff;
    bVar4 = false;
    if (param_4 == (long *)0x0 || !bVar3) goto LAB_71007bd3d0;
LAB_71007bd48c:
    if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007bd3d4;
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
    if (iVar5 == -1) {
      param_4 = (long *)0x0;
    }
    if (bVar4 == (iVar5 == -1) || param_9 <= uVar11) goto LAB_71007bd4d0;
  } while( true );
}



// ===== FUN_71007bdea0 @ 71007bdea0 (size=3072) =====

undefined1  [16]
FUN_71007bdea0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,
              undefined4 *param_6,long param_7,ulong param_8,long param_9,uint *param_10)

{
  ulong *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  ulong *puVar18;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  ulong local_20;
  long *local_18;
  long *local_10;
  ulong *puVar19;
  
  uVar21 = param_3 & 0xffffffff;
  lVar12 = FUN_71007b00e0(&DAT_7100d21120);
  plVar25 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar12 * 8);
  if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  bVar2 = (int)param_3 == -1;
  puVar13 = (ulong *)(&stack0xffffffffffffff50 + param_8 * -0x10);
  bVar3 = param_2 != (long *)0x0;
  local_10 = param_2;
  bVar6 = bVar2;
  if (bVar3 && bVar2) {
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      bVar6 = false;
    }
    else {
      iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
      if (iVar11 == -1) {
        param_2 = (long *)0x0;
      }
      local_10 = param_2;
      bVar6 = iVar11 == -1 && (bVar3 && bVar2);
    }
  }
  bVar4 = param_5 == -1;
  bVar5 = param_4 != (long *)0x0;
  local_18 = param_4;
  bVar3 = bVar4;
  if (bVar5 && bVar4) {
    if ((ulong)param_4[2] < (ulong)param_4[3]) {
      bVar3 = false;
    }
    else {
      iVar11 = (**(code **)(*param_4 + 0x48))(param_4);
      if (iVar11 == -1) {
        param_4 = (long *)0x0;
      }
      local_18 = param_4;
      bVar3 = iVar11 == -1 && (bVar5 && bVar4);
    }
  }
  if (bVar3 != bVar6) {
    uVar24 = uVar21;
    if (local_10 != (long *)0x0 && bVar2) {
      if ((byte *)local_10[2] < (byte *)local_10[3]) {
        uVar24 = (ulong)*(byte *)local_10[2];
      }
      else {
        uVar16 = (**(code **)(*local_10 + 0x48))(local_10);
        bVar6 = uVar16 == 0xffffffff;
        if (bVar6) {
          uVar16 = 0xff;
        }
        uVar24 = (ulong)uVar16;
        if (bVar6) {
          local_10 = (long *)0x0;
        }
      }
    }
    cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,uVar24);
    cVar8 = (**(code **)(*plVar25 + 0x10))(plVar25,uVar24);
    if (param_8 != 0) {
      puVar1 = puVar13 + param_8;
      local_20 = 0;
      uVar24 = 0;
      uVar20 = local_20;
      do {
        while ((local_20 = uVar20,
               cVar9 = (**(code **)(*plVar25 + 0x20))
                                 (plVar25,**(undefined1 **)(param_7 + local_20 * 8)), cVar7 != cVar9
               && (cVar9 = (**(code **)(*plVar25 + 0x10))
                                     (plVar25,**(undefined1 **)(param_7 + local_20 * 8)),
                  cVar8 != cVar9))) {
          uVar20 = local_20 + 1;
          if (param_8 == local_20 + 1) goto LAB_71007be09c;
        }
        uVar20 = uVar24 + 1;
        uVar14 = FUN_710081ce00(*(undefined8 *)(param_7 + local_20 * 8));
        puVar1[uVar24] = uVar14;
        puVar13[uVar24] = local_20;
        uVar24 = uVar20;
        uVar20 = local_20 + 1;
      } while (param_8 != local_20 + 1);
LAB_71007be09c:
      local_20 = local_20 + 1;
      uVar20 = 0;
      if (1 < uVar24) {
LAB_71007be0a8:
        uVar23 = *puVar1;
        uVar21 = 1;
        uVar14 = uVar23;
        do {
          puVar18 = puVar1 + uVar21;
          uVar21 = uVar21 + 1;
          if (*puVar18 < uVar14) {
            uVar14 = *puVar18;
          }
        } while (uVar21 < uVar24);
        uVar20 = uVar20 + 1;
        pbVar17 = (byte *)local_10[3];
        if ((byte *)local_10[2] < pbVar17) {
          local_10[2] = (long)((byte *)local_10[2] + 1);
          if (uVar20 == uVar14) {
LAB_71007be2c4:
            pbVar15 = (byte *)local_10[2];
            if (pbVar15 < pbVar17) {
              if (local_18 == (long *)0x0) {
                if (param_5 != -1) {
LAB_71007be7ec:
                  bVar6 = false;
                  local_18 = (long *)0x0;
                  goto LAB_71007be2ec;
                }
LAB_71007be73c:
                uVar16 = (uint)*pbVar15;
              }
              else {
LAB_71007be2dc:
                bVar6 = false;
                if (param_5 != -1) goto LAB_71007be2ec;
                if ((ulong)local_18[2] < (ulong)local_18[3]) {
                  bVar6 = false;
                  goto LAB_71007be2ec;
                }
                iVar11 = (**(code **)(*local_18 + 0x48))(local_18);
                if (iVar11 != -1) {
                  bVar6 = false;
                  goto LAB_71007be2ec;
                }
LAB_71007be934:
                pbVar15 = (byte *)local_10[2];
                if (pbVar15 < (byte *)local_10[3]) goto LAB_71007be73c;
                uVar10 = (**(code **)(*local_10 + 0x48))(local_10);
                uVar16 = uVar10 & 0xff;
                if (uVar10 == 0xffffffff) {
                  local_18 = (long *)0x0;
                  goto LAB_71007be968;
                }
              }
              cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,uVar16);
              if ((byte *)local_10[2] < (byte *)local_10[3]) {
                uVar16 = (uint)*(byte *)local_10[2];
                local_18 = (long *)0x0;
              }
              else {
                uVar16 = (**(code **)(*local_10 + 0x48))(local_10);
                if (uVar16 == 0xffffffff) {
                  uVar16 = 0xff;
                  local_18 = (long *)0x0;
                  local_10 = (long *)0x0;
                }
                else {
                  uVar16 = uVar16 & 0xff;
                  local_18 = (long *)0x0;
                }
              }
            }
            else {
              iVar11 = (**(code **)(*local_10 + 0x48))(local_10);
              if (iVar11 != -1) {
                if (local_18 != (long *)0x0) goto LAB_71007be2dc;
                if (param_5 != -1) goto LAB_71007be7ec;
                goto LAB_71007be934;
              }
              if (local_18 == (long *)0x0) {
                if (param_5 == -1) goto LAB_71007be9e8;
              }
              else if (((param_5 == -1) && ((ulong)local_18[3] <= (ulong)local_18[2])) &&
                      (iVar11 = (**(code **)(*local_18 + 0x48))(local_18), iVar11 == -1)) {
                local_18 = (long *)0x0;
LAB_71007be9e8:
                local_10 = (long *)0x0;
                bVar6 = false;
                goto LAB_71007be2ec;
              }
LAB_71007be968:
              cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,0xffffffff);
              uVar16 = 0xff;
              local_10 = (long *)0x0;
            }
            uVar21 = 0;
            cVar8 = (**(code **)(*plVar25 + 0x10))(plVar25,uVar16);
            do {
              if (uVar20 < puVar1[uVar21]) {
                lVar12 = *(long *)(param_7 + puVar13[uVar21] * 8);
                cVar9 = (**(code **)(*plVar25 + 0x20))(plVar25,*(undefined1 *)(lVar12 + uVar20));
                if ((cVar7 == cVar9) ||
                   (cVar9 = (**(code **)(*plVar25 + 0x10))(plVar25,*(undefined1 *)(lVar12 + uVar20))
                   , cVar8 == cVar9)) {
                  bVar6 = true;
                  goto LAB_71007be2ec;
                }
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar24);
            bVar6 = false;
LAB_71007be2ec:
            uVar21 = 0;
            do {
              if ((uVar20 == uVar23) == bVar6) {
                uVar24 = uVar24 - 1;
                puVar13[uVar21] = puVar13[uVar24];
                puVar1[uVar21] = puVar1[uVar24];
                if (uVar24 <= uVar21) goto LAB_71007be334;
              }
              else {
                uVar21 = uVar21 + 1;
                if (uVar24 <= uVar21) goto LAB_71007be334;
              }
              uVar23 = puVar1[uVar21];
            } while( true );
          }
        }
        else {
          (**(code **)(*local_10 + 0x50))(local_10);
          if (uVar20 == uVar14) {
            pbVar17 = (byte *)local_10[3];
            goto LAB_71007be2c4;
          }
        }
        if (uVar20 < uVar14) goto LAB_71007be100;
        goto LAB_71007be124;
      }
      goto LAB_71007be128;
    }
  }
LAB_71007bdf60:
  *param_10 = *param_10 | 4;
LAB_71007bdf74:
  auVar26._8_8_ = param_3 & 0xffffffff00000000 | uVar21;
  auVar26._0_8_ = local_10;
  return auVar26;
LAB_71007be334:
  if (bVar6 == false) {
    if (uVar24 != 2) {
      uVar21 = 0xffffffff;
      if (uVar24 != 1) goto LAB_71007bdf60;
      goto LAB_71007be14c;
    }
    if ((local_20 & 1) == 0) {
      uVar24 = *puVar13;
      local_20 = local_20 >> 1;
      if (local_20 <= uVar24) {
        uVar21 = 0xffffffff;
        if (uVar24 - local_20 != *(ulong *)(&stack0xffffffffffffff58 + param_8 * -0x10))
        goto LAB_71007bdf60;
        *puVar13 = uVar24 - local_20;
        puVar13[param_8] = puVar1[1];
        uVar24 = *puVar13;
        goto LAB_71007be150;
      }
      if (uVar24 + local_20 == *(ulong *)(&stack0xffffffffffffff58 + param_8 * -0x10))
      goto LAB_71007be150;
      uVar21 = 0xffffffff;
      goto LAB_71007bdf60;
    }
    goto LAB_71007be3c0;
  }
  uVar21 = *puVar1;
  if (1 < uVar24) {
    puVar18 = puVar1 + 1;
    do {
      puVar19 = puVar18 + 1;
      if (*puVar18 < uVar21) {
        uVar21 = *puVar18;
      }
      puVar18 = puVar19;
    } while (puVar19 != puVar1 + uVar24);
  }
  if (uVar21 <= uVar20) goto LAB_71007be124;
  if (local_10 == (long *)0x0) {
LAB_71007be370:
    if (local_18 == (long *)0x0) {
      if (param_5 == -1) goto LAB_71007be4e0;
      local_18 = (long *)0x0;
    }
    else if (((param_5 == -1) && ((ulong)local_18[3] <= (ulong)local_18[2])) &&
            (iVar11 = (**(code **)(*local_18 + 0x48))(local_18), iVar11 == -1)) {
LAB_71007be4e0:
      local_18 = (long *)0x0;
      local_10 = (long *)0x0;
      goto LAB_71007be124;
    }
LAB_71007be384:
    cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,0xffffffff);
    local_10 = (long *)0x0;
    cVar8 = (**(code **)(*plVar25 + 0x10))(plVar25,0xff);
  }
  else {
LAB_71007be100:
    if (((ulong)local_10[3] <= (ulong)local_10[2]) &&
       (iVar11 = (**(code **)(*local_10 + 0x48))(local_10), iVar11 == -1)) goto LAB_71007be370;
    if (local_18 == (long *)0x0) {
      if (param_5 != -1) goto LAB_71007be124;
    }
    else if (((param_5 != -1) || ((ulong)local_18[2] < (ulong)local_18[3])) ||
            (iVar11 = (**(code **)(*local_18 + 0x48))(local_18), iVar11 != -1)) goto LAB_71007be124;
    if ((byte *)local_10[3] <= (byte *)local_10[2]) {
      uVar10 = (**(code **)(*local_10 + 0x48))(local_10);
      uVar16 = uVar10 & 0xff;
      if (uVar10 != 0xffffffff) goto LAB_71007be3e8;
      local_18 = (long *)0x0;
      goto LAB_71007be384;
    }
    uVar16 = (uint)*(byte *)local_10[2];
LAB_71007be3e8:
    cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,uVar16);
    if ((byte *)local_10[2] < (byte *)local_10[3]) {
      uVar16 = (uint)*(byte *)local_10[2];
    }
    else {
      uVar16 = (**(code **)(*local_10 + 0x48))(local_10);
      if (uVar16 == 0xffffffff) {
        uVar16 = 0xff;
        local_10 = (long *)0x0;
      }
      else {
        uVar16 = uVar16 & 0xff;
      }
    }
    local_18 = (long *)0x0;
    cVar8 = (**(code **)(*plVar25 + 0x10))(plVar25,uVar16);
  }
  if (uVar24 != 0) {
    uVar21 = 0;
    do {
      while( true ) {
        lVar12 = *(long *)(param_7 + puVar13[uVar21] * 8);
        cVar9 = (**(code **)(*plVar25 + 0x20))(plVar25,*(undefined1 *)(lVar12 + uVar20));
        if ((cVar7 != cVar9) &&
           (cVar9 = (**(code **)(*plVar25 + 0x10))(plVar25,*(undefined1 *)(lVar12 + uVar20)),
           cVar8 != cVar9)) break;
        uVar21 = uVar21 + 1;
        if (uVar24 <= uVar21) goto LAB_71007be4a8;
      }
      uVar24 = uVar24 - 1;
      puVar13[uVar21] = puVar13[uVar24];
      puVar1[uVar21] = puVar1[uVar24];
    } while (uVar21 < uVar24);
LAB_71007be4a8:
    if (uVar24 < 2) goto LAB_71007be124;
    goto LAB_71007be0a8;
  }
LAB_71007be3c0:
  uVar21 = 0xffffffff;
  goto LAB_71007bdf60;
LAB_71007be124:
  uVar21 = 0xffffffff;
LAB_71007be128:
  if (uVar24 == 1) {
    if ((ulong)local_10[2] < (ulong)local_10[3]) {
      uVar20 = uVar20 + 1;
      local_10[2] = local_10[2] + 1;
    }
    else {
      uVar20 = uVar20 + 1;
      (**(code **)(*local_10 + 0x50))(local_10);
    }
LAB_71007be14c:
    uVar24 = *puVar13;
LAB_71007be150:
    uVar14 = puVar13[param_8];
    if (uVar20 < uVar14) {
      puVar22 = (undefined1 *)(*(long *)(param_7 + uVar24 * 8) + uVar20);
      if (local_10 != (long *)0x0) goto LAB_71007be230;
      if (local_18 != (long *)0x0 && bVar4) {
        if ((ulong)local_18[3] <= (ulong)local_18[2]) goto LAB_71007be5e8;
      }
      else if (param_5 == -1) {
        uVar21 = 0xffffffff;
        goto LAB_71007bdf60;
      }
LAB_71007be190:
      do {
        do {
          cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,*puVar22);
          uVar16 = 0xff;
          local_10 = (long *)0x0;
LAB_71007be1b0:
          cVar8 = (**(code **)(*plVar25 + 0x20))(plVar25,uVar16);
          if (cVar7 != cVar8) {
            cVar7 = (**(code **)(*plVar25 + 0x10))(plVar25,*puVar22);
            if (local_10 == (long *)0x0) {
LAB_71007be1e8:
              uVar16 = 0xff;
              local_10 = (long *)0x0;
            }
            else {
              if ((undefined1 *)local_10[2] < (undefined1 *)local_10[3]) {
                cVar8 = (**(code **)(*plVar25 + 0x10))(plVar25,*(undefined1 *)local_10[2]);
                if (cVar7 == cVar8) goto LAB_71007be208;
                goto LAB_71007be254;
              }
              uVar16 = (**(code **)(*local_10 + 0x48))(local_10);
              if (uVar16 == 0xffffffff) goto LAB_71007be1e8;
              uVar16 = uVar16 & 0xff;
            }
            cVar8 = (**(code **)(*plVar25 + 0x10))(plVar25,uVar16);
            if (cVar7 != cVar8) goto LAB_71007be254;
          }
LAB_71007be208:
          if ((ulong)local_10[2] < (ulong)local_10[3]) {
            uVar20 = uVar20 + 1;
            local_10[2] = local_10[2] + 1;
            if (uVar14 == uVar20) goto LAB_71007be260;
            puVar22 = puVar22 + 1;
          }
          else {
            uVar20 = uVar20 + 1;
            (**(code **)(*local_10 + 0x50))(local_10);
            if (uVar20 == uVar14) goto LAB_71007be260;
            puVar22 = puVar22 + 1;
          }
LAB_71007be230:
          if (((ulong)local_10[2] < (ulong)local_10[3]) ||
             (iVar11 = (**(code **)(*local_10 + 0x48))(local_10), iVar11 != -1)) {
            if (local_18 == (long *)0x0) {
              if (param_5 != -1) goto LAB_71007be254;
            }
            else if (((param_5 != -1) || ((ulong)local_18[2] < (ulong)local_18[3])) ||
                    (iVar11 = (**(code **)(*local_18 + 0x48))(local_18), iVar11 != -1))
            goto LAB_71007be254;
            cVar7 = (**(code **)(*plVar25 + 0x20))(plVar25,*puVar22);
            if ((byte *)local_10[2] < (byte *)local_10[3]) {
              uVar16 = (uint)*(byte *)local_10[2];
              local_18 = (long *)0x0;
            }
            else {
              uVar16 = (**(code **)(*local_10 + 0x48))(local_10);
              if (uVar16 == 0xffffffff) {
                uVar16 = 0xff;
                local_18 = (long *)0x0;
                local_10 = (long *)0x0;
              }
              else {
                uVar16 = uVar16 & 0xff;
                local_18 = (long *)0x0;
              }
            }
            goto LAB_71007be1b0;
          }
          if (local_18 == (long *)0x0) {
            if (param_5 == -1) {
              local_10 = (long *)0x0;
              goto LAB_71007be254;
            }
            goto LAB_71007be190;
          }
        } while ((param_5 != -1) || ((ulong)local_18[2] < (ulong)local_18[3]));
LAB_71007be5e8:
        iVar11 = (**(code **)(*local_18 + 0x48))(local_18);
      } while (iVar11 != -1);
      local_10 = (long *)0x0;
    }
LAB_71007be254:
    uVar21 = 0xffffffff;
    if (uVar14 == uVar20) {
LAB_71007be260:
      uVar21 = 0xffffffff;
      *param_6 = (int)uVar24;
      goto LAB_71007bdf74;
    }
  }
  goto LAB_71007bdf60;
}



// ===== FUN_71007beaa0 @ 71007beaa0 (size=1460) =====

undefined1  [16]
FUN_71007beaa0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
              ,long param_7,ulong param_8,long param_9,uint *param_10)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  
  uVar19 = param_3 & 0xffffffff;
  lVar9 = FUN_71007b00e0(&DAT_7100d21120);
  plVar17 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar9 * 8);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  uVar8 = (uint)param_3;
  bVar2 = uVar8 == 0xffffffff;
  bVar3 = param_2 != (long *)0x0;
  lVar9 = -(param_8 * 8 + 0xf & 0xfffffffffffffff0);
  bVar12 = bVar2;
  if (bVar3 && bVar2) {
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      bVar12 = false;
    }
    else {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      if (iVar7 == -1) {
        param_2 = (long *)0x0;
      }
      bVar12 = iVar7 == -1 && (bVar3 && bVar2);
    }
  }
  bVar4 = param_5 == -1;
  bVar5 = param_4 != (long *)0x0;
  bVar3 = bVar4;
  if (bVar5 && bVar4) {
    if ((ulong)param_4[2] < (ulong)param_4[3]) {
      bVar3 = false;
    }
    else {
      iVar7 = (**(code **)(*param_4 + 0x48))(param_4);
      if (iVar7 == -1) {
        param_4 = (long *)0x0;
      }
      bVar3 = iVar7 == -1 && (bVar5 && bVar4);
    }
  }
  if (bVar3 == bVar12) {
LAB_71007beb5c:
    if (param_2 == (long *)0x0) goto LAB_71007beb60;
LAB_71007bee30:
    if (uVar8 == 0xffffffff) {
      uVar16 = 0;
      uVar20 = 0;
      puVar18 = (ulong *)0x0;
      goto LAB_71007bec80;
    }
    if ((((param_4 == (long *)0x0) || (param_5 != -1)) || ((ulong)param_4[2] < (ulong)param_4[3]))
       || (iVar7 = (**(code **)(*param_4 + 0x48))(param_4), iVar7 != -1)) goto LAB_71007beb70;
LAB_71007bee68:
    uVar8 = uVar8 & 0xff;
    puVar18 = (ulong *)0x0;
    param_4 = (long *)0x0;
    uVar20 = 0;
    uVar16 = 0;
  }
  else {
    if (param_2 == (long *)0x0 || !bVar2) {
      if ((param_8 & 0x7fffffffffffffff) != 0) {
        uVar13 = uVar8 & 0xff;
        goto LAB_71007bebcc;
      }
      goto LAB_71007beb5c;
    }
    if ((byte *)param_2[2] < (byte *)param_2[3]) {
      if ((param_8 & 0x7fffffffffffffff) != 0) {
        uVar13 = (uint)*(byte *)param_2[2];
        goto LAB_71007bebcc;
      }
      goto LAB_71007bee30;
    }
    uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
    if (uVar13 != 0xffffffff) {
      uVar13 = uVar13 & 0xff;
      if ((param_8 & 0x7fffffffffffffff) == 0) goto LAB_71007bee30;
LAB_71007bebcc:
      lVar15 = 0;
      uVar20 = 0;
      do {
        while ((**(byte **)(param_7 + lVar15 * 8) != uVar13 &&
               (bVar6 = (**(code **)(*plVar17 + 0x10))(plVar17), uVar13 != bVar6))) {
          lVar15 = lVar15 + 1;
          if (lVar15 == param_8 << 1) goto LAB_71007bec30;
        }
        *(int *)(&stack0xffffffffffffff70 + uVar20 * 4 + lVar9) = (int)lVar15;
        lVar15 = lVar15 + 1;
        uVar20 = uVar20 + 1;
      } while (lVar15 != param_8 << 1);
LAB_71007bec30:
      if (uVar20 != 0) {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 1;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        uVar16 = 0;
        lVar15 = -(uVar20 * 8 + 0xf & 0xfffffffffffffff0);
        puVar18 = (ulong *)(&stack0xffffffffffffff70 + lVar15 + lVar9);
        do {
          uVar10 = FUN_710081ce00(*(undefined8 *)
                                   (param_7 +
                                   (long)*(int *)(&stack0xffffffffffffff70 + uVar16 * 4 + lVar9) * 8
                                   ));
          *(undefined8 *)(&stack0xffffffffffffff70 + uVar16 * 8 + lVar15 + lVar9) = uVar10;
          uVar16 = uVar16 + 1;
        } while (uVar20 != uVar16);
        uVar20 = 1;
        goto LAB_71007bec80;
      }
      goto LAB_71007beb5c;
    }
    if ((param_8 & 0x7fffffffffffffff) != 0) {
      uVar13 = 0xff;
      param_2 = (long *)0x0;
      goto LAB_71007bebcc;
    }
LAB_71007beb60:
    if (param_4 == (long *)0x0 || !bVar4) {
LAB_71007beb6c:
      param_2 = (long *)0x0;
LAB_71007beb70:
      *param_10 = *param_10 | 4;
LAB_71007beb84:
      auVar21._8_8_ = param_3 & 0xffffffff00000000 | uVar19;
      auVar21._0_8_ = param_2;
      return auVar21;
    }
    param_2 = (long *)0x0;
    if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007beb70;
    iVar7 = (**(code **)(*param_4 + 0x48))(param_4);
    if (iVar7 == -1) {
      if (uVar8 == 0xffffffff) goto LAB_71007beb70;
      goto LAB_71007bee68;
    }
    if (uVar8 != 0xffffffff) goto LAB_71007beb6c;
    uVar8 = 0xff;
    puVar18 = (ulong *)0x0;
    uVar20 = 0;
    uVar16 = 0;
  }
LAB_71007bed0c:
  if (uVar16 == 0) goto LAB_71007beb70;
  uVar11 = 0;
  uVar14 = 0;
LAB_71007bed2c:
  do {
    if (uVar20 < puVar18[uVar11]) {
      if (*(byte *)(*(long *)(param_7 +
                             (long)*(int *)(&stack0xffffffffffffff70 + uVar11 * 4 + lVar9) * 8) +
                   uVar20) != uVar8) {
        uVar16 = uVar16 - 1;
        *(undefined4 *)(&stack0xffffffffffffff70 + uVar11 * 4 + lVar9) =
             *(undefined4 *)(&stack0xffffffffffffff70 + uVar16 * 4 + lVar9);
        puVar18[uVar11] = puVar18[uVar16];
        if (uVar16 <= uVar11) break;
        goto LAB_71007bed2c;
      }
    }
    else {
      uVar14 = uVar14 + 1;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar16);
  if (uVar16 != uVar14) {
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      param_2[2] = param_2[2] + 1;
      uVar20 = uVar20 + 1;
      if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007bed9c:
        uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar19 = (ulong)uVar8;
        if (uVar8 == 0xffffffff) {
          if (param_4 == (long *)0x0) {
            param_2 = (long *)0x0;
            if (param_5 == -1) goto LAB_71007bec9c;
            uVar8 = 0xff;
            goto LAB_71007bed0c;
          }
          uVar8 = 0xff;
          param_2 = (long *)0x0;
          if ((param_5 != -1) || ((ulong)param_4[2] < (ulong)param_4[3])) goto LAB_71007bed0c;
          uVar8 = (**(code **)(*param_4 + 0x48))(param_4);
          uVar19 = (ulong)uVar8;
          if (uVar8 != 0xffffffff) {
            uVar19 = 0xffffffff;
            uVar8 = 0xff;
            goto LAB_71007bed0c;
          }
          goto LAB_71007bec9c;
        }
      }
    }
    else {
      uVar20 = uVar20 + 1;
      (**(code **)(*param_2 + 0x50))(param_2);
LAB_71007bec80:
      if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007bed9c;
    }
    if (param_4 != (long *)0x0) {
      uVar19 = 0xffffffff;
      if ((param_5 == -1) && (uVar19 = 0xffffffff, (ulong)param_4[3] <= (ulong)param_4[2])) {
        iVar7 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar7 == -1) goto LAB_71007beea8;
        goto LAB_71007bef10;
      }
      goto LAB_71007bec9c;
    }
    if (param_5 != -1) {
LAB_71007bef10:
      uVar19 = 0xffffffff;
      goto LAB_71007bec9c;
    }
LAB_71007beea8:
    if ((byte *)param_2[2] < (byte *)param_2[3]) {
      uVar8 = (uint)*(byte *)param_2[2];
      uVar19 = 0xffffffff;
      param_4 = (long *)0x0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar19 = (ulong)uVar8;
      if (uVar8 == 0xffffffff) {
        uVar8 = 0xff;
        param_4 = (long *)0x0;
        param_2 = (long *)0x0;
      }
      else {
        uVar8 = uVar8 & 0xff;
        uVar19 = 0xffffffff;
        param_4 = (long *)0x0;
      }
    }
    goto LAB_71007bed0c;
  }
LAB_71007bec9c:
  if (uVar16 == 1) {
    uVar16 = *puVar18;
joined_r0x0071007beee0:
    if (uVar16 != uVar20) goto LAB_71007beb70;
  }
  else {
    if (uVar16 != 2) goto LAB_71007beb70;
    if (*puVar18 != uVar20) {
      uVar16 = puVar18[1];
      goto joined_r0x0071007beee0;
    }
  }
  iVar1 = *(int *)(&stack0xffffffffffffff70 + lVar9);
  iVar7 = iVar1 - (int)param_8;
  if (iVar1 < (int)param_8) {
    iVar7 = iVar1;
  }
  *param_6 = iVar7;
  goto LAB_71007beb84;
}



// ===== FUN_71007bf4a0 @ 71007bf4a0 (size=64) =====

void FUN_71007bf4a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aed2d8;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007bf500 @ 71007bf500 (size=48) =====

ulong FUN_71007bf500(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0 || *(uint *)(param_1 + 1) != 0xffffffff) {
    return (ulong)*(uint *)(param_1 + 1);
  }
  if ((byte *)plVar2[2] < (byte *)plVar2[3]) {
    return (ulong)*(byte *)plVar2[2];
  }
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  if ((int)uVar1 == -1) {
    *param_1 = 0;
  }
  return uVar1;
}



// ===== FUN_71007bf530 @ 71007bf530 (size=56) =====

void FUN_71007bf530(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  if (iVar1 == -1) {
    *param_2 = 0;
  }
  return;
}



// ===== FUN_71007bf580 @ 71007bf580 (size=7580) =====

undefined1  [16]
FUN_71007bf580(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,uint *param_8,long param_9,uint *param_10)

{
  byte bVar1;
  undefined1 auVar2 [12];
  ulong uVar3;
  long *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar10;
  uint uVar11;
  char cVar9;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  bool bVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  uint local_1c0;
  undefined1 local_170 [12];
  undefined4 uStack_164;
  uint local_158;
  uint local_154;
  undefined8 local_150;
  char local_148;
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
  
  local_170._8_4_ = (undefined4)param_3;
  uStack_164 = (undefined4)(param_3 >> 0x20);
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
      local_1c0 = (uint)param_5;
      uVar12 = 0;
      local_158 = 0;
      uVar24 = param_3 & 0xffffffff;
      uVar25 = local_1c0;
LAB_71007bf64c:
      bVar5 = (int)uVar24 == -1;
      bVar23 = bVar5;
      if (param_2 != (long *)0x0 && bVar5) goto LAB_71007bf790;
LAB_71007bf664:
      do {
        bVar6 = uVar25 == 0xffffffff;
        bVar7 = param_4 == (long *)0x0 || !bVar6;
        if (param_4 != (long *)0x0 && bVar6) goto LAB_71007bf808;
LAB_71007bf678:
        bVar5 = (bool)(bVar6 ^ bVar5);
        bVar7 = bVar23;
LAB_71007bf680:
        bVar23 = bVar6;
        uVar19 = (uint)uVar24;
        bVar6 = bVar5 != false;
        bVar5 = (bVar6 && uVar12 <= uVar15) && (bVar5 == false || uVar15 != uVar12);
        if (!bVar6 || (uVar12 > uVar15 || uVar15 == uVar12)) {
          if (local_158 == 0 && uVar15 == uVar12) goto LAB_71007bf8e0;
LAB_71007bf8d0:
          *param_7 = *param_7 | 4;
LAB_71007bf8e0:
          auVar27._8_4_ = uVar19;
          auVar27._0_8_ = param_2;
          auVar27._12_4_ = uStack_164;
          return auVar27;
        }
        if (local_158 != 0) goto LAB_71007bf8d0;
        uVar20 = (ulong)*(byte *)(param_9 + uVar12);
        pbVar22 = (byte *)(param_9 + uVar12);
        bVar1 = *(byte *)((long)plVar26 + uVar20 + 0x139);
        uVar18 = (uint)bVar1;
        if (bVar1 != 0) {
LAB_71007bf6d4:
          if (uVar18 != 0x25) goto LAB_71007bf6dc;
          uVar20 = uVar12 + 1;
          uVar21 = (ulong)*(byte *)(param_9 + uVar20);
          bVar1 = *(byte *)((long)plVar26 + uVar21 + 0x139);
          uVar18 = (uint)bVar1;
          if (bVar1 == 0) {
            uVar18 = (uint)*(byte *)(param_9 + uVar20);
            uVar3 = uVar21;
            if (*(code **)(*plVar26 + 0x40) != (code *)&LAB_71000a0220) {
              uVar11 = (**(code **)(*plVar26 + 0x40))(plVar26,uVar21,0);
              uVar21 = (ulong)(uVar11 & 0xff);
              uVar3 = (ulong)uVar18;
              uVar18 = uVar11 & 0xff;
            }
            if (uVar18 != 0) {
              uVar18 = (uint)uVar21;
              *(char *)((long)plVar26 + uVar3 + 0x139) = (char)uVar21;
              goto LAB_71007bf94c;
            }
            goto switchD_71007bf984_caseD_26;
          }
LAB_71007bf94c:
          local_154 = 0;
          if (uVar18 == 0x45 || uVar18 == 0x4f) {
            uVar20 = uVar12 + 2;
            uVar12 = (ulong)*(byte *)(param_9 + uVar20);
            bVar1 = *(byte *)((long)plVar26 + uVar12 + 0x139);
            uVar18 = (uint)bVar1;
            if (bVar1 == 0) {
              uVar21 = uVar12;
              if (*(code **)(*plVar26 + 0x40) != (code *)&LAB_71000a0220) {
                uVar18 = (**(code **)(*plVar26 + 0x40))(plVar26,uVar12,0);
                uVar21 = (ulong)(uVar18 & 0xff);
              }
              uVar18 = (uint)uVar21;
              if (uVar18 == 0) goto switchD_71007bf984_caseD_26;
              *(char *)((long)plVar26 + uVar12 + 0x139) = (char)uVar21;
            }
          }
          local_170._8_4_ = uVar19;
          local_170._0_8_ = param_2;
          switch(uVar18) {
          case 0x25:
            if (param_2 == (long *)0x0 || bVar7 == false) {
              uVar19 = uVar19 & 0xff;
            }
            else if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar19 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar19 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar19 == 0xffffffff) {
                uVar19 = 0xff;
                param_2 = (long *)0x0;
              }
              else {
                uVar19 = uVar19 & 0xff;
              }
            }
            if ((char)plVar26[7] == '\0') {
              FUN_71007b8240(plVar26);
              if (*(code **)(*plVar26 + 0x30) != (code *)&LAB_71000a0210) {
                uVar18 = (**(code **)(*plVar26 + 0x30))(plVar26,0x25);
                uVar18 = uVar18 & 0xff;
              }
            }
            else {
              uVar18 = (uint)*(byte *)((long)plVar26 + 0x5e);
            }
            if (uVar18 != uVar19) goto switchD_71007bf984_caseD_26;
            if ((ulong)param_2[2] < (ulong)param_2[3]) {
              param_2[2] = param_2[2] + 1;
            }
            else {
              (**(code **)(*param_2 + 0x50))(param_2);
            }
            goto LAB_71007bfc58;
          default:
switchD_71007bf984_caseD_26:
            local_158 = local_158 | 4;
            break;
          case 0x41:
          case 0x61:
            lVar14 = *(long *)(lVar13 + 0x10);
            uStack_e8 = *(undefined8 *)(lVar14 + 0xa0);
            local_f0 = *(undefined8 *)(lVar14 + 0x98);
            uStack_128 = *(undefined8 *)(lVar14 + 0x60);
            local_130 = *(undefined8 *)(lVar14 + 0x58);
            uStack_118 = *(undefined8 *)(lVar14 + 0x70);
            uStack_120 = *(undefined8 *)(lVar14 + 0x68);
            uStack_108 = *(undefined8 *)(lVar14 + 0x80);
            local_110 = *(undefined8 *)(lVar14 + 0x78);
            uStack_f8 = *(undefined8 *)(lVar14 + 0x90);
            uStack_100 = *(undefined8 *)(lVar14 + 0x88);
            uStack_d8 = *(undefined8 *)(lVar14 + 0xb0);
            uStack_e0 = *(undefined8 *)(lVar14 + 0xa8);
            local_d0 = *(undefined8 *)(lVar14 + 0xb8);
            uStack_c8 = *(undefined8 *)(lVar14 + 0xc0);
            auVar27 = FUN_71007bdea0(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,&local_130,0xe,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar19 = (int)local_154 % 7;
LAB_71007bfee0:
              uVar12 = uVar20 + 1;
              param_8[6] = uVar19;
              *param_10 = *param_10 | 2;
              goto LAB_71007bf64c;
            }
            break;
          case 0x42:
          case 0x62:
          case 0x68:
            lVar14 = *(long *)(lVar13 + 0x10);
            uStack_78 = *(undefined8 *)(lVar14 + 0x110);
            local_80 = *(undefined8 *)(lVar14 + 0x108);
            uStack_68 = *(undefined8 *)(lVar14 + 0x120);
            uStack_70 = *(undefined8 *)(lVar14 + 0x118);
            uStack_58 = *(undefined8 *)(lVar14 + 0x130);
            local_60 = *(undefined8 *)(lVar14 + 0x128);
            uStack_48 = *(undefined8 *)(lVar14 + 0x140);
            uStack_50 = *(undefined8 *)(lVar14 + 0x138);
            uStack_38 = *(undefined8 *)(lVar14 + 0x150);
            local_40 = *(undefined8 *)(lVar14 + 0x148);
            uStack_28 = *(undefined8 *)(lVar14 + 0x160);
            uStack_30 = *(undefined8 *)(lVar14 + 0x158);
            uStack_18 = *(undefined8 *)(lVar14 + 0x170);
            local_20 = *(undefined8 *)(lVar14 + 0x168);
            uStack_10 = *(undefined8 *)(lVar14 + 0x178);
            uStack_8 = *(undefined8 *)(lVar14 + 0x180);
            uStack_b8 = *(undefined8 *)(lVar14 + 0xd0);
            local_c0 = *(undefined8 *)(lVar14 + 200);
            uStack_a8 = *(undefined8 *)(lVar14 + 0xe0);
            uStack_b0 = *(undefined8 *)(lVar14 + 0xd8);
            uStack_98 = *(undefined8 *)(lVar14 + 0xf0);
            local_a0 = *(undefined8 *)(lVar14 + 0xe8);
            uStack_88 = *(undefined8 *)(lVar14 + 0x100);
            uStack_90 = *(undefined8 *)(lVar14 + 0xf8);
            auVar27 = FUN_71007bdea0(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,&local_c0,0x18,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[4] = (int)local_154 % 0xc;
              *(ushort *)param_10 = (ushort)*param_10 | 0x408;
              goto LAB_71007bf64c;
            }
            break;
          case 0x43:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,99,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_10[1] = local_154;
              *(ushort *)param_10 = (ushort)*param_10 | 0x480;
              goto LAB_71007bf64c;
            }
            break;
          case 0x44:
            if ((char)plVar26[7] == '\x01') {
LAB_71007c06c4:
              local_150._0_1_ = '%';
              local_150._1_1_ = 'm';
              local_150._2_1_ = '/';
              local_150._3_1_ = '%';
              local_150._4_1_ = 'd';
              local_150._5_1_ = '/';
              local_150._6_1_ = '%';
              local_150._7_1_ = 'y';
              local_148 = '\0';
            }
            else {
              if ((char)plVar26[7] == '\0') {
                FUN_71007b8240(plVar26);
              }
              if (*(code **)(*plVar26 + 0x38) == FUN_71007b8200) goto LAB_71007c06c4;
              (**(code **)(*plVar26 + 0x38))(plVar26,"%m/%d/%y",&DAT_7100856159,&local_150);
            }
            puVar17 = &local_150;
            goto LAB_71007c03f8;
          case 0x48:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,0x17,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[2] = local_154;
              *param_10 = *param_10 & 0xfffffffe;
              goto LAB_71007bf64c;
            }
            break;
          case 0x49:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,1,0xc,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[2] = (int)local_154 % 0xc;
              *param_10 = *param_10 | 1;
              goto LAB_71007bf64c;
            }
            break;
          case 0x4d:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,0x3b,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[1] = local_154;
              goto LAB_71007bf64c;
            }
            break;
          case 0x52:
            if ((char)plVar26[7] != '\x01') {
              if ((char)plVar26[7] == '\0') {
                FUN_71007b8240(plVar26);
              }
              if (*(code **)(*plVar26 + 0x38) != FUN_71007b8200) {
                (**(code **)(*plVar26 + 0x38))(plVar26,&DAT_7100856160,&DAT_7100856166,&local_150);
                goto LAB_71007c0058;
              }
            }
            local_150._0_6_ = 0x4d253a4825;
            goto LAB_71007c0058;
          case 0x53:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,0x3d,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              *param_8 = local_154;
              goto LAB_71007bf64c;
            }
            break;
          case 0x54:
            if ((char)plVar26[7] != '\x01') {
              if ((char)plVar26[7] == '\0') {
                FUN_71007b8240(plVar26);
              }
              if (*(code **)(*plVar26 + 0x38) != FUN_71007b8200) {
                (**(code **)(*plVar26 + 0x38))(plVar26,"%H:%M:%S",&DAT_7100856171,&local_150);
                goto LAB_71007c0058;
              }
            }
            local_150._0_1_ = '%';
            local_150._1_1_ = 'H';
            local_150._2_1_ = ':';
            local_150._3_1_ = '%';
            local_150._4_1_ = 'M';
            local_150._5_1_ = ':';
            local_150._6_1_ = '%';
            local_150._7_1_ = 'S';
            local_148 = '\0';
LAB_71007c0058:
            puVar17 = &local_150;
            goto LAB_71007bff60;
          case 0x55:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,0x35,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar11 = 0xffdf;
              uVar19 = *param_10;
              uVar18 = (local_154 & 0x3f) << 0x10 | 0x20;
LAB_71007c0178:
              uVar12 = uVar20 + 1;
              *param_10 = uVar18 | uVar19 & (uVar11 | 0xffc00000);
              goto LAB_71007bf64c;
            }
            break;
          case 0x57:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,0x35,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar11 = 0xffbf;
              uVar19 = *param_10;
              uVar18 = (local_154 & 0x3f) << 0x10 | 0x40;
              goto LAB_71007c0178;
            }
            break;
          case 0x58:
            puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x10) + 0x20);
            goto LAB_71007bff60;
          case 0x59:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,9999,4,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[5] = local_154 - 0x76c;
              *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) & 0xf9 | 4;
              goto LAB_71007bf64c;
            }
            break;
          case 0x5a:
            if (param_2 == (long *)0x0 || bVar7 == false) {
              uVar18 = uVar19 & 0xff;
            }
            else if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar18 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar18 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar18 == 0xffffffff) {
                uVar18 = 0xff;
                param_2 = (long *)0x0;
              }
              else {
                uVar18 = uVar18 & 0xff;
              }
            }
            if ((*(byte *)(plVar26[6] + (long)(int)uVar18) & 1) == 0)
            goto switchD_71007bf984_caseD_26;
            local_170._0_8_ = param_2;
            local_170._8_4_ = uVar19;
            auVar27 = FUN_71007bdea0(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_c0,&PTR_DAT_7100af4818,0xe,param_6,&local_158);
            auVar2._8_4_ = local_170._8_4_;
            auVar2._0_8_ = local_170._0_8_;
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            bVar7 = auVar27._8_4_ == 0xffffffff;
            bVar6 = bVar23;
            if (param_2 == (long *)0x0) {
              bVar5 = param_4 != (long *)0x0;
              if ((bVar5 && bVar23 != false) &&
                 (bVar6 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
                iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                bVar6 = false;
                if (iVar10 == -1) {
                  param_4 = (long *)0x0;
                  bVar6 = bVar5 && bVar23 != false;
                }
              }
LAB_71007c0ba0:
              if (bVar7 == bVar6) {
                uVar12 = uVar20 + 1;
                goto LAB_71007bf64c;
              }
LAB_71007c05bc:
              if (local_158 == 0 && (int)local_c0 == 0) {
                local_170._0_8_ = param_2;
                local_170._8_4_ = auVar27._8_4_;
                cVar8 = FUN_71007bf500(local_170);
                uVar19 = local_170._8_4_;
                param_2 = (long *)local_170._0_8_;
                if ((char)plVar26[7] == '\0') {
                  FUN_71007b8240(plVar26);
                  if (*(code **)(*plVar26 + 0x30) == (code *)&LAB_71000a0210) {
                    cVar9 = '-';
                  }
                  else {
                    cVar9 = (**(code **)(*plVar26 + 0x30))(plVar26,0x2d);
                  }
                }
                else {
                  cVar9 = *(char *)((long)plVar26 + 0x66);
                }
                if (cVar8 != cVar9) {
                  cVar8 = FUN_71007bf500(local_170);
                  uVar19 = local_170._8_4_;
                  param_2 = (long *)local_170._0_8_;
                  uVar24 = (ulong)(uint)local_170._8_4_;
                  if ((char)plVar26[7] == '\0') {
                    FUN_71007b8240(plVar26);
                    if (*(code **)(*plVar26 + 0x30) == (code *)&LAB_71000a0210) {
                      cVar9 = '+';
                    }
                    else {
                      cVar9 = (**(code **)(*plVar26 + 0x30))(plVar26,0x2b);
                    }
                  }
                  else {
                    cVar9 = *(char *)((long)plVar26 + 100);
                  }
                  if (cVar8 != cVar9) break;
                }
                uVar12 = uVar20 + 1;
                local_170._0_8_ = param_2;
                local_170._8_4_ = uVar19;
                local_170 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,
                                           param_5,&local_c0,0,0x17,2,param_6,&local_158);
                auVar27 = FUN_71007bd340(param_1,local_170._0_8_,
                                         CONCAT44(uStack_164,local_170._8_4_),param_4,param_5,
                                         &local_c0,0,0x3b,2,param_6,&local_158);
                param_2 = auVar27._0_8_;
                uVar24 = auVar27._8_8_ & 0xffffffff;
                goto LAB_71007bf64c;
              }
            }
            else if (bVar7) {
              if (((ulong)param_2[3] <= (ulong)param_2[2]) &&
                 (iVar10 = (**(code **)(*param_2 + 0x48))(), iVar10 == -1)) {
                if (param_4 == (long *)0x0) {
                  param_2 = (long *)0x0;
                  bVar7 = bVar5;
                  goto LAB_71007c0ba0;
                }
                if ((bVar23 != false) && ((ulong)param_4[3] <= (ulong)param_4[2])) {
                  iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                  if (iVar10 == -1) {
                    uVar12 = uVar20 + 1;
                    param_4 = (long *)0x0;
                    param_2 = (long *)0x0;
                    goto LAB_71007bf64c;
                  }
                }
                param_2 = (long *)0x0;
                goto LAB_71007c05bc;
              }
              if (param_4 == (long *)0x0) goto LAB_71007c0d48;
              if (bVar23 != false) {
                if ((ulong)param_4[3] <= (ulong)param_4[2]) goto LAB_71007c05a0;
                uVar12 = uVar20 + 1;
                goto LAB_71007bf64c;
              }
            }
            else {
              if (param_4 == (long *)0x0) {
LAB_71007c0d48:
                bVar7 = false;
                goto LAB_71007c0ba0;
              }
              if ((bVar23 != false) && (local_170 = auVar2, (ulong)param_4[3] <= (ulong)param_4[2]))
              {
LAB_71007c05a0:
                iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                if (iVar10 == -1) {
                  param_4 = (long *)0x0;
                  goto LAB_71007c05bc;
                }
              }
            }
            break;
          case 99:
            puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x10) + 0x30);
LAB_71007c03f8:
            local_170._0_8_ = param_2;
            local_170._8_4_ = uVar19;
            auVar27 = FUN_71007bf580(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     param_6,&local_158,param_8,puVar17,param_10);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              *param_10 = *param_10 | 0x400;
              goto LAB_71007bf64c;
            }
            break;
          case 100:
          case 0x65:
            uVar18 = uVar19;
            if (param_2 == (long *)0x0 || bVar7 == false) {
LAB_71007bfdcc:
              if ((*(byte *)(plVar26[6] + (long)(int)(uVar18 & 0xff)) >> 3 & 1) != 0) {
                pbVar22 = (byte *)param_2[2];
                if (pbVar22 < (byte *)param_2[3]) {
LAB_71007c0a38:
                  uVar19 = 0xffffffff;
                  param_2[2] = (long)(pbVar22 + 1);
                }
                else {
                  uVar19 = 0xffffffff;
                  (**(code **)(*param_2 + 0x50))(param_2);
                }
              }
            }
            else {
              pbVar22 = (byte *)param_2[2];
              if ((byte *)param_2[3] <= pbVar22) {
                uVar18 = (**(code **)(*param_2 + 0x48))(param_2);
                if (uVar18 == 0xffffffff) {
                  param_2 = (long *)0x0;
                }
                goto LAB_71007bfdcc;
              }
              if ((*(byte *)(plVar26[6] + (ulong)*pbVar22) >> 3 & 1) != 0) goto LAB_71007c0a38;
            }
            local_170._0_8_ = param_2;
            local_170._8_4_ = uVar19;
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,1,0x1f,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[3] = local_154;
              *(ushort *)param_10 = (ushort)*param_10 | 0x410;
              goto LAB_71007bf64c;
            }
            break;
          case 0x6a:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,1,0x16e,3,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[7] = local_154 - 1;
              *param_10 = *param_10 | 4;
              goto LAB_71007bf64c;
            }
            break;
          case 0x6d:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,1,0xc,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              uVar12 = uVar20 + 1;
              param_8[4] = local_154 - 1;
              *param_10 = *param_10 | 8;
              goto LAB_71007bf64c;
            }
            break;
          case 0x6e:
          case 0x74:
            bVar6 = uVar19 == 0xffffffff;
            uVar12 = uVar24;
            bVar5 = bVar23;
            if (param_2 == (long *)0x0) {
              if ((param_4 != (long *)0x0 && bVar23 != false) &&
                 (bVar5 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
                iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                if (iVar10 == -1) {
                  param_4 = param_2;
                  if (uVar19 == 0xffffffff) goto LAB_71007c0f1c;
LAB_71007c0f38:
                  param_4 = (long *)0x0;
                }
                else if (uVar19 != 0xffffffff) goto LAB_71007c0f1c;
                goto LAB_71007bfd74;
              }
            }
            else {
              if (bVar6) {
                pbVar22 = (byte *)param_2[3];
                goto LAB_71007bfd98;
              }
              if (param_4 != (long *)0x0) {
                if ((bVar23 != false) && ((ulong)param_4[3] <= (ulong)param_4[2])) {
                  iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                  if (iVar10 == -1) goto LAB_71007c0f38;
                }
                goto LAB_71007bfa44;
              }
              bVar6 = false;
            }
            if (bVar5 == bVar6) goto LAB_71007bfa44;
            goto LAB_71007bfd74;
          case 0x70:
            local_140 = *(char **)(*(long *)(lVar13 + 0x10) + 0x40);
            pcStack_138 = *(char **)(*(long *)(lVar13 + 0x10) + 0x48);
            if ((*local_140 != '\0') && (*pcStack_138 != '\0')) {
              auVar27 = FUN_71007bdea0(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                       &local_154,&local_140,2,param_6,&local_158);
              param_2 = auVar27._0_8_;
              uVar24 = auVar27._8_8_ & 0xffffffff;
              if ((local_158 == 0) && (local_154 != 0)) {
                uVar12 = uVar20 + 1;
                *param_10 = *param_10 | 0x100;
                goto LAB_71007bf64c;
              }
            }
            break;
          case 0x72:
            puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x10) + 0x50);
            goto LAB_71007bff60;
          case 0x77:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,6,1,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            uVar19 = local_154;
            if (local_158 == 0) goto LAB_71007bfee0;
            break;
          case 0x78:
            puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x10) + 0x10);
LAB_71007bff60:
            uVar12 = uVar20 + 1;
            local_170._0_8_ = param_2;
            local_170._8_4_ = uVar19;
            auVar27 = FUN_71007bf580(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     param_6,&local_158,param_8,puVar17,param_10);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            goto LAB_71007bf64c;
          case 0x79:
            auVar27 = FUN_71007bd340(param_1,param_2,CONCAT44(uStack_164,uVar19),param_4,param_5,
                                     &local_154,0,99,2,param_6,&local_158);
            param_2 = auVar27._0_8_;
            uVar24 = auVar27._8_8_ & 0xffffffff;
            if (local_158 == 0) {
              bVar6 = auVar27._8_4_ == -1;
              *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) | 6;
              bVar7 = bVar23;
              if (param_2 == (long *)0x0) {
                if ((param_4 != (long *)0x0 && bVar23 != false) &&
                   (bVar7 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
LAB_71007c0e44:
                  iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                  if (iVar10 == -1) {
                    if (bVar6 == false) {
                      param_4 = (long *)0x0;
                      param_2 = (long *)0x0;
                      uVar12 = uVar24;
                      goto LAB_71007c0bf8;
                    }
LAB_71007c0fc8:
                    param_4 = (long *)0x0;
                    param_2 = (long *)0x0;
                  }
                  else {
                    param_2 = (long *)0x0;
                    uVar12 = uVar24;
                    if (bVar6 != false) goto LAB_71007c0e78;
                  }
                  goto LAB_71007c04cc;
                }
LAB_71007c0bec:
                uVar12 = uVar24;
                if (bVar7 == bVar6) goto LAB_71007c04cc;
LAB_71007c0bf8:
                bVar1 = *(byte *)((long)plVar26 + (uVar12 & 0xff) + 0x139);
                uVar19 = (uint)bVar1;
                if (bVar1 == 0) {
                  uVar19 = (uint)uVar12 & 0xff;
                  if (*(code **)(*plVar26 + 0x40) != (code *)&LAB_71000a0220) {
                    uVar19 = (**(code **)(*plVar26 + 0x40))(plVar26,uVar19,0x2a);
                    uVar19 = uVar19 & 0xff;
                  }
                  if (uVar19 == 0x2a) goto LAB_71007c04cc;
                  *(char *)((long)plVar26 + (uVar12 & 0xff) + 0x139) = (char)uVar19;
                }
                if (9 < (uVar19 - 0x30 & 0xff)) goto LAB_71007c04cc;
                uVar12 = param_2[3];
                if ((ulong)param_2[2] < uVar12) {
                  param_2[2] = param_2[2] + 1;
                }
                else {
                  (**(code **)(*param_2 + 0x50))(param_2);
                  uVar12 = param_2[3];
                }
                local_154 = (uVar19 - 0x30) + local_154 * 10;
                uVar19 = uVar25;
                if (((ulong)param_2[2] < uVar12) ||
                   (iVar10 = (**(code **)(*param_2 + 0x48))(param_2), iVar10 != -1)) {
                  if (param_4 == (long *)0x0) {
                    bVar5 = false;
                    goto LAB_71007c1178;
                  }
                  if (bVar23 != false) {
                    bVar23 = false;
                    goto LAB_71007c1168;
                  }
LAB_71007c0c7c:
                  uVar24 = 0xffffffff;
                }
                else {
                  if (param_4 == (long *)0x0) {
                    param_2 = (long *)0x0;
LAB_71007c1178:
                    if ((uVar19 == 0xffffffff) == bVar5) goto LAB_71007c0c7c;
                  }
                  else {
                    if (bVar23 != false) {
                      param_2 = (long *)0x0;
LAB_71007c1168:
                      bVar5 = bVar23;
                      if ((byte *)param_4[2] < (byte *)param_4[3]) {
                        uVar19 = (uint)*(byte *)param_4[2];
                      }
                      else {
                        uVar19 = (**(code **)(*param_4 + 0x48))(param_4);
                        if (uVar19 == 0xffffffff) {
                          param_4 = (long *)0x0;
                        }
                      }
                      goto LAB_71007c1178;
                    }
                    param_2 = (long *)0x0;
                  }
                  local_170._8_4_ = 0xffffffff;
                  local_170._0_8_ = param_2;
                  uVar12 = FUN_71007bf500(local_170);
                  param_2 = (long *)local_170._0_8_;
                  uVar24 = (ulong)(uint)local_170._8_4_;
                  bVar1 = *(byte *)((long)plVar26 + (uVar12 & 0xff) + 0x139);
                  uVar19 = (uint)bVar1;
                  if (bVar1 == 0) {
                    uVar19 = (uint)uVar12 & 0xff;
                    if (*(code **)(*plVar26 + 0x40) != (code *)&LAB_71000a0220) {
                      uVar19 = (**(code **)(*plVar26 + 0x40))(plVar26,uVar19,0x2a);
                      uVar19 = uVar19 & 0xff;
                    }
                    if (uVar19 == 0x2a) goto LAB_71007c0c84;
                    *(char *)((long)plVar26 + (uVar12 & 0xff) + 0x139) = (char)uVar19;
                  }
                  if ((uVar19 - 0x30 & 0xff) < 10) {
                    if (*(ulong *)((undefined8)param_2 + 2) < *(ulong *)((undefined8)param_2 + 3)) {
                      *(ulong *)((undefined8)param_2 + 2) = *(ulong *)((undefined8)param_2 + 2) + 1;
                    }
                    else {
                      (**(code **)(*param_2 + 0x50))(param_2);
                    }
                    uVar24 = 0xffffffff;
                    local_154 = (uVar19 - 0x30) + local_154 * 10;
                  }
                }
LAB_71007c0c84:
                *param_10 = *param_10 & 0xfffffdff;
                uVar19 = local_154 - 0x76c;
              }
              else {
                if (bVar6) {
                  if (((ulong)param_2[3] <= (ulong)param_2[2]) &&
                     (uVar12 = (**(code **)(*param_2 + 0x48))(), (int)uVar12 == -1)) {
                    if (param_4 == (long *)0x0) {
                      if (bVar23 != false) goto LAB_71007c0fc8;
                    }
                    else if (bVar23 != false) {
                      param_2 = (long *)0x0;
                      bVar6 = bVar23;
                      if ((ulong)param_4[3] <= (ulong)param_4[2]) goto LAB_71007c0e44;
                      goto LAB_71007c0bf8;
                    }
LAB_71007c0e78:
                    param_2 = (long *)0x0;
                    goto LAB_71007c0bf8;
                  }
                  if (param_4 == (long *)0x0) {
                    if (uVar25 == 0xffffffff) goto LAB_71007c0cfc;
                  }
                  else if ((bVar23 != false) && ((ulong)param_4[3] <= (ulong)param_4[2]))
                  goto LAB_71007c0ccc;
                }
                else {
                  if (param_4 == (long *)0x0) {
                    bVar6 = false;
                    goto LAB_71007c0bec;
                  }
                  if ((bVar23 != false) && ((ulong)param_4[3] <= (ulong)param_4[2])) {
LAB_71007c0ccc:
                    iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                    if (iVar10 == -1) {
                      if (auVar27._8_4_ != -1) {
                        param_4 = (long *)0x0;
                        uVar12 = uVar24;
                        goto LAB_71007c0bf8;
                      }
LAB_71007c0cfc:
                      if ((byte *)param_2[2] < (byte *)param_2[3]) {
                        param_4 = (long *)0x0;
                        uVar12 = (ulong)*(byte *)param_2[2];
                      }
                      else {
                        param_4 = (long *)0x0;
                        uVar12 = (**(code **)(*param_2 + 0x48))(param_2);
                        if ((int)uVar12 == -1) {
                          param_2 = (long *)0x0;
                        }
                      }
                      goto LAB_71007c0bf8;
                    }
                  }
                }
LAB_71007c04cc:
                uVar19 = local_154 + 100;
                if (0x44 < (int)local_154) {
                  uVar19 = local_154;
                }
              }
              uVar12 = uVar20 + 1;
              param_8[5] = uVar19;
              goto LAB_71007bf64c;
            }
          }
          uVar12 = uVar20 + 1;
          goto LAB_71007bf64c;
        }
        uVar21 = uVar20;
        if (*(code **)(*plVar26 + 0x40) != (code *)&LAB_71000a0220) {
          uVar18 = (**(code **)(*plVar26 + 0x40))(plVar26,uVar20,0);
          uVar21 = (ulong)(uVar18 & 0xff);
        }
        uVar18 = (uint)uVar21;
        if (uVar18 != 0) {
          *(char *)((long)plVar26 + uVar20 + 0x139) = (char)uVar21;
          goto LAB_71007bf6d4;
        }
LAB_71007bf6dc:
        lVar14 = plVar26[6];
        uVar20 = uVar12;
        if ((*(byte *)(lVar14 + (ulong)*pbVar22) >> 3 & 1) != 0) {
          bVar6 = uVar19 == 0xffffffff;
          bVar5 = bVar23;
          if (param_2 != (long *)0x0) {
            if (bVar6) goto LAB_71007bf898;
            if (param_4 == (long *)0x0) {
              bVar6 = false;
              goto LAB_71007bf870;
            }
            if (bVar23 != false) {
              if ((ulong)param_4[2] < (ulong)param_4[3]) {
                uVar12 = uVar12 + 1;
                bVar5 = false;
                uVar25 = local_1c0;
                bVar23 = false;
                goto LAB_71007bf664;
              }
              iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
              if (iVar10 != -1) goto LAB_71007bfa44;
              param_4 = (long *)0x0;
              goto LAB_71007bfc44;
            }
            bVar23 = false;
            bVar5 = false;
            uVar12 = uVar12 + 1;
            bVar6 = local_1c0 == 0xffffffff;
            bVar7 = param_4 == (long *)0x0 || !bVar6;
            uVar25 = local_1c0;
            if (param_4 != (long *)0x0 && bVar6) goto LAB_71007bf808;
            goto LAB_71007bf678;
          }
          if ((param_4 == (long *)0x0 || bVar23 == false) ||
             (bVar5 = false, (ulong)param_4[2] < (ulong)param_4[3])) {
LAB_71007bf870:
            if (bVar5 != bVar6) goto LAB_71007bf878;
            goto LAB_71007bfa44;
          }
          iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
          plVar4 = param_4;
          if (iVar10 == -1) {
            param_4 = (long *)0x0;
            plVar4 = param_2;
          }
          if (uVar19 == 0xffffffff) {
LAB_71007bfc44:
            do {
              lVar14 = plVar26[6];
              uVar21 = uVar24 & 0xff;
LAB_71007bf87c:
              if ((*(byte *)(lVar14 + uVar21) >> 3 & 1) == 0) goto LAB_71007bfa44;
              if ((ulong)param_2[2] < (ulong)param_2[3]) {
                param_2[2] = param_2[2] + 1;
              }
              else {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
LAB_71007bf898:
              if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007bfba0;
              do {
                if (param_4 == (long *)0x0) goto LAB_71007bfacc;
                if ((bVar23 == false) || ((ulong)param_4[2] < (ulong)param_4[3])) {
                  uVar12 = uVar12 + 1;
                  uVar25 = local_1c0;
                  goto LAB_71007bf790;
                }
                iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
                if (iVar10 != -1) {
                  uVar24 = 0xffffffff;
                  goto LAB_71007bfa44;
                }
                while( true ) {
                  pbVar22 = (byte *)param_2[2];
                  if ((byte *)param_2[3] <= pbVar22) {
                    uVar21 = (**(code **)(*param_2 + 0x48))(param_2);
                    if ((int)uVar21 == -1) goto LAB_71007c0a14;
                    uVar21 = uVar21 & 0xff;
                    uVar24 = 0xffffffff;
                    lVar14 = plVar26[6];
                    param_4 = (long *)0x0;
                    goto LAB_71007bf87c;
                  }
                  if ((*(byte *)(plVar26[6] + (ulong)*pbVar22) >> 3 & 1) == 0) {
                    param_4 = (long *)0x0;
                    goto LAB_71007bfc58;
                  }
                  param_2[2] = (long)(pbVar22 + 1);
                  param_4 = (long *)0x0;
                  if ((byte *)param_2[3] <= pbVar22 + 1) break;
LAB_71007bfacc:
                  if (uVar25 != 0xffffffff) {
                    uVar12 = uVar12 + 1;
                    param_4 = (long *)0x0;
                    uVar25 = local_1c0;
                    goto LAB_71007bf790;
                  }
                }
LAB_71007bfba0:
                uVar21 = (**(code **)(*param_2 + 0x48))(param_2);
                uVar24 = uVar21 & 0xffffffff;
              } while ((int)uVar21 != -1);
              if (param_4 == (long *)0x0) {
                if (bVar23 != false) {
                  uVar12 = uVar12 + 1;
                  bVar6 = local_1c0 == 0xffffffff;
                  param_2 = (long *)0x0;
                  uVar25 = local_1c0;
                  bVar5 = bVar23;
                  goto LAB_71007bf678;
                }
LAB_71007c0a14:
                lVar14 = plVar26[6];
                uVar24 = 0xffffffff;
                uVar21 = 0xff;
                param_4 = (long *)0x0;
                param_2 = (long *)0x0;
                goto LAB_71007bf87c;
              }
              if (bVar23 == false) {
                lVar14 = plVar26[6];
                uVar21 = 0xff;
                param_2 = (long *)0x0;
                goto LAB_71007bf87c;
              }
              if ((ulong)param_4[2] < (ulong)param_4[3]) {
                lVar14 = plVar26[6];
                param_2 = (long *)0x0;
LAB_71007bf878:
                uVar21 = uVar24 & 0xff;
                goto LAB_71007bf87c;
              }
              param_2 = (long *)0x0;
              iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
              plVar4 = param_2;
            } while (iVar10 != -1);
          }
          param_4 = plVar4;
          bVar5 = (int)uVar24 == -1;
          uVar12 = uVar12 + 1;
          param_2 = (long *)0x0;
          uVar25 = local_1c0;
          bVar23 = bVar5;
          goto LAB_71007bf664;
        }
        cVar8 = (**(code **)(*plVar26 + 0x20))(plVar26);
        uVar21 = uVar24;
        if (param_2 == (long *)0x0 || bVar7 == false) {
LAB_71007bf718:
          cVar9 = (**(code **)(*plVar26 + 0x20))(plVar26,uVar21);
          if (cVar8 != cVar9) {
            cVar8 = (**(code **)(*plVar26 + 0x10))(plVar26,*pbVar22);
            uVar19 = uVar19 & 0xff;
LAB_71007bf74c:
            cVar9 = (**(code **)(*plVar26 + 0x10))(plVar26,uVar19);
            if (cVar8 != cVar9) goto switchD_71007bf984_caseD_26;
          }
        }
        else {
          if ((byte *)param_2[2] < (byte *)param_2[3]) {
            uVar18 = (uint)*(byte *)param_2[2];
          }
          else {
            uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            uVar18 = uVar11 & 0xff;
            if (uVar11 == 0xffffffff) {
              param_2 = (long *)0x0;
              uVar21 = 0xff;
              goto LAB_71007bf718;
            }
          }
          cVar9 = (**(code **)(*plVar26 + 0x20))(plVar26,uVar18);
          if (cVar8 != cVar9) {
            cVar8 = (**(code **)(*plVar26 + 0x10))(plVar26,*pbVar22);
            if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar19 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar19 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar19 == 0xffffffff) {
                uVar19 = 0xff;
                param_2 = (long *)0x0;
              }
              else {
                uVar19 = uVar19 & 0xff;
              }
            }
            goto LAB_71007bf74c;
          }
        }
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar12 = uVar12 + 1;
          param_2[2] = param_2[2] + 1;
        }
        else {
          uVar12 = uVar12 + 1;
          (**(code **)(*param_2 + 0x50))(param_2);
        }
LAB_71007bf790:
        if ((ulong)param_2[3] <= (ulong)param_2[2]) {
          uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
          uVar24 = uVar20 & 0xffffffff;
          if ((int)uVar20 == -1) {
            param_2 = (long *)0x0;
            bVar5 = true;
            bVar23 = true;
            goto LAB_71007bf664;
          }
        }
        uVar24 = 0xffffffff;
        bVar5 = false;
        bVar23 = true;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
LAB_71007bfd74:
  if ((*(byte *)(plVar26[6] + (long)(int)((uint)uVar12 & 0xff)) >> 3 & 1) == 0) goto LAB_71007c0994;
  pbVar16 = (byte *)param_2[2];
  pbVar22 = (byte *)param_2[3];
  if (pbVar22 <= pbVar16) {
    (**(code **)(*param_2 + 0x50))(param_2);
    pbVar22 = (byte *)param_2[3];
    goto LAB_71007bfd98;
  }
LAB_71007bfd90:
  param_2[2] = (long)(pbVar16 + 1);
LAB_71007bfd98:
  if (pbVar22 <= (byte *)param_2[2]) {
    uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
    uVar12 = uVar24 & 0xffffffff;
    if ((int)uVar24 == -1) {
      uVar24 = uVar12;
      if (param_4 == (long *)0x0) {
        if (bVar23 != false) {
          uVar12 = uVar20 + 1;
          param_2 = (long *)0x0;
          uVar25 = local_1c0;
          goto LAB_71007bf64c;
        }
      }
      else if ((bVar23 != false) && ((ulong)param_4[3] <= (ulong)param_4[2])) {
        iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar10 != -1) goto LAB_71007c08ec;
        param_4 = (long *)0x0;
LAB_71007c0f1c:
        uVar12 = uVar20 + 1;
        param_2 = (long *)0x0;
        uVar25 = local_1c0;
        goto LAB_71007bf64c;
      }
LAB_71007c08ec:
      uVar24 = 0xffffffff;
      param_2 = (long *)0x0;
      goto LAB_71007bfd74;
    }
  }
  if (param_4 == (long *)0x0) {
    if (uVar25 != 0xffffffff) goto LAB_71007bfdac;
  }
  else {
    if ((bVar23 == false) || ((ulong)param_4[2] < (ulong)param_4[3])) {
LAB_71007bfdac:
      uVar12 = uVar20 + 1;
      uVar24 = 0xffffffff;
      uVar25 = local_1c0;
      goto LAB_71007bf64c;
    }
    iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
    if (iVar10 != -1) {
      uVar24 = 0xffffffff;
LAB_71007bfa44:
      uVar12 = uVar20 + 1;
      uVar25 = local_1c0;
      goto LAB_71007bf64c;
    }
  }
  pbVar16 = (byte *)param_2[2];
  pbVar22 = (byte *)param_2[3];
  if (pbVar22 <= pbVar16) goto LAB_71007c0b5c;
  param_4 = (long *)0x0;
  if ((*(byte *)(plVar26[6] + (ulong)*pbVar16) >> 3 & 1) == 0) goto LAB_71007bfc58;
  goto LAB_71007bfd90;
LAB_71007c0994:
  uVar12 = uVar20 + 1;
  uVar25 = local_1c0;
  goto LAB_71007bf64c;
LAB_71007c0b5c:
  param_4 = (long *)0x0;
  uVar21 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar12 = uVar21 & 0xffffffff;
  uVar24 = 0xffffffff;
  if ((int)uVar21 == -1) {
    param_2 = (long *)0x0;
  }
  goto LAB_71007bfd74;
LAB_71007bf808:
  bVar6 = !bVar7;
  uVar25 = 0xffffffff;
  bVar7 = bVar23;
  if ((ulong)param_4[3] <= (ulong)param_4[2]) {
    iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar5 = (bool)(bVar5 ^ iVar10 == -1);
    if (iVar10 == -1) {
      param_4 = (long *)0x0;
      uVar25 = 0xffffffff;
    }
    else {
      uVar25 = 0xffffffff;
    }
  }
  goto LAB_71007bf680;
LAB_71007bfc58:
  uVar12 = uVar20 + 1;
  uVar24 = 0xffffffff;
  goto LAB_71007bf64c;
}



