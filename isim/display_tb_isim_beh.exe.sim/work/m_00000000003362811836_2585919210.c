/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/Downloads/m152a-lab3-patch-2/display_time.v";
static int ng1[] = {0, 0};
static int ng2[] = {15, 0};
static int ng3[] = {255, 0};
static int ng4[] = {1, 0};
static int ng5[] = {14, 0};
static int ng6[] = {192, 0};
static int ng7[] = {249, 0};
static int ng8[] = {2, 0};
static int ng9[] = {164, 0};
static int ng10[] = {3, 0};
static int ng11[] = {176, 0};
static int ng12[] = {4, 0};
static int ng13[] = {153, 0};
static int ng14[] = {5, 0};
static int ng15[] = {146, 0};
static int ng16[] = {6, 0};
static int ng17[] = {130, 0};
static int ng18[] = {7, 0};
static int ng19[] = {248, 0};
static int ng20[] = {8, 0};
static int ng21[] = {128, 0};
static int ng22[] = {9, 0};
static int ng23[] = {144, 0};
static int ng24[] = {13, 0};
static int ng25[] = {11, 0};



static void Always_33_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t5, 32, t6, 32);
    t7 = (t8 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB12:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t5, 32, t6, 32);
    t7 = (t8 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng12)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2408);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng16)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t9, 32);
    t15 = (t8 + 4);
    t10 = *((unsigned int *)t15);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB96;

LAB97:
LAB98:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2408);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng18)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t9, 32);
    t15 = (t8 + 4);
    t10 = *((unsigned int *)t15);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB100;

LAB101:
LAB102:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2408);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t15 = ((char*)((ng20)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t9, 32, t15, 32);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB126;

LAB127:
LAB128:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2408);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t15 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t15, 32);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t7 = ((char*)((ng5)));
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng18)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng20)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng22)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB12;

LAB15:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB17:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB19:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB21:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB23:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB25:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB27:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB29:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB31:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB33:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng23)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB35;

LAB36:    xsi_set_current_line(58, ng0);

LAB39:    xsi_set_current_line(59, ng0);
    t9 = ((char*)((ng2)));
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB38;

LAB40:    xsi_set_current_line(65, ng0);

LAB43:    xsi_set_current_line(66, ng0);
    t9 = ((char*)((ng24)));
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);

LAB44:    t2 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng16)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng18)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng20)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng22)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t17 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB42;

LAB45:    xsi_set_current_line(68, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB47:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB49:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB51:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB53:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB55:    xsi_set_current_line(73, ng0);
    t5 = ((char*)((ng15)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB57:    xsi_set_current_line(74, ng0);
    t5 = ((char*)((ng17)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB59:    xsi_set_current_line(75, ng0);
    t5 = ((char*)((ng19)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB61:    xsi_set_current_line(76, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB63:    xsi_set_current_line(77, ng0);
    t5 = ((char*)((ng23)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB65;

LAB66:    xsi_set_current_line(81, ng0);

LAB69:    xsi_set_current_line(82, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB68;

LAB70:    xsi_set_current_line(88, ng0);

LAB73:    xsi_set_current_line(89, ng0);
    t15 = ((char*)((ng25)));
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);

LAB74:    t2 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng16)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng18)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng20)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng22)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t17 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB72;

LAB75:    xsi_set_current_line(91, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB77:    xsi_set_current_line(92, ng0);
    t6 = ((char*)((ng7)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB79:    xsi_set_current_line(93, ng0);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB81:    xsi_set_current_line(94, ng0);
    t6 = ((char*)((ng11)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB83:    xsi_set_current_line(95, ng0);
    t6 = ((char*)((ng13)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB85:    xsi_set_current_line(96, ng0);
    t6 = ((char*)((ng15)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB87:    xsi_set_current_line(97, ng0);
    t6 = ((char*)((ng17)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB89:    xsi_set_current_line(98, ng0);
    t6 = ((char*)((ng19)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB91:    xsi_set_current_line(99, ng0);
    t6 = ((char*)((ng21)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB93:    xsi_set_current_line(100, ng0);
    t6 = ((char*)((ng23)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB95;

LAB96:    xsi_set_current_line(104, ng0);

LAB99:    xsi_set_current_line(105, ng0);
    t16 = ((char*)((ng2)));
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);
    goto LAB98;

LAB100:    xsi_set_current_line(112, ng0);

LAB103:    xsi_set_current_line(113, ng0);
    t16 = ((char*)((ng18)));
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);

LAB104:    t2 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng16)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng18)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng20)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng22)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t17 == 1)
        goto LAB123;

LAB124:
LAB125:    goto LAB102;

LAB105:    xsi_set_current_line(115, ng0);
    t7 = ((char*)((ng6)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB107:    xsi_set_current_line(116, ng0);
    t7 = ((char*)((ng7)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB109:    xsi_set_current_line(117, ng0);
    t7 = ((char*)((ng9)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB111:    xsi_set_current_line(118, ng0);
    t7 = ((char*)((ng11)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB113:    xsi_set_current_line(119, ng0);
    t7 = ((char*)((ng13)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB115:    xsi_set_current_line(120, ng0);
    t7 = ((char*)((ng15)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB117:    xsi_set_current_line(121, ng0);
    t7 = ((char*)((ng17)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB119:    xsi_set_current_line(122, ng0);
    t7 = ((char*)((ng19)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB121:    xsi_set_current_line(123, ng0);
    t7 = ((char*)((ng21)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB123:    xsi_set_current_line(124, ng0);
    t7 = ((char*)((ng23)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB125;

LAB126:    xsi_set_current_line(128, ng0);

LAB129:    xsi_set_current_line(129, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_unary_minus(t8, 32, t2, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB128;

}


extern void work_m_00000000003362811836_2585919210_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000003362811836_2585919210", "isim/display_tb_isim_beh.exe.sim/work/m_00000000003362811836_2585919210.didat");
	xsi_register_executes(pe);
}
