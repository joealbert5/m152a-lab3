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
static const char *ng0 = "C:/Users/152/Downloads/m152a-lab3-patch-2/display_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1000000000, 0};
static int ng3[] = {1, 0};
static int ng4[] = {30, 0};
static int ng5[] = {10, 0};
static int ng6[] = {6, 0};



static void Initial_50_0(char *t0)
{
    char t6[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(89, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(64, ng0);

LAB9:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 2248);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t17) == 0)
        goto LAB10;

LAB12:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;

LAB13:    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    *((unsigned int *)t13) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB15;

LAB14:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t13) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(69, ng0);

LAB17:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB18:    xsi_set_current_line(71, ng0);

LAB21:    xsi_set_current_line(72, ng0);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t16, 4, t17, 32);
    t23 = (t0 + 2088);
    xsi_vlogvar_assign_value(t23, t13, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t18 = (t11 ^ t12);
    t19 = (t10 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t14);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB25;

LAB22:    if (t22 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t16 = (t6 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t18 = (t11 ^ t12);
    t19 = (t10 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t14);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB33;

LAB30:    if (t22 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t16 = (t6 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t18 = (t11 ^ t12);
    t19 = (t10 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t14);
    t22 = (t20 | t21);
    t26 = (~(t22));
    t27 = (t19 & t26);
    if (t27 != 0)
        goto LAB41;

LAB38:    if (t22 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t16 = (t6 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB20;

LAB24:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(73, ng0);

LAB29:    xsi_set_current_line(74, ng0);
    t17 = (t0 + 1928);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t24, 3, t25, 32);
    t34 = (t0 + 1928);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB28;

LAB32:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(77, ng0);

LAB37:    xsi_set_current_line(78, ng0);
    t17 = (t0 + 1768);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t24, 4, t25, 32);
    t34 = (t0 + 1768);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB36;

LAB40:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(81, ng0);

LAB45:    xsi_set_current_line(82, ng0);
    t17 = (t0 + 1608);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t24, 3, t25, 32);
    t34 = (t0 + 1608);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB44;

}


extern void work_m_00000000003139554194_3003510437_init()
{
	static char *pe[] = {(void *)Initial_50_0};
	xsi_register_didat("work_m_00000000003139554194_3003510437", "isim/display_tb_isim_beh.exe.sim/work/m_00000000003139554194_3003510437.didat");
	xsi_register_executes(pe);
}
