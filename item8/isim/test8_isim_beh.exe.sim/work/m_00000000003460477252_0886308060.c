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
static const char *ng0 = "C:/Users/fatdoge/Desktop/ise/item8/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {32, 0};
static int ng8[] = {1, 0};
static int ng9[] = {30, 0};
static int ng10[] = {31, 0};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};



static void Always_30_0(char *t0)
{
    char t10[8];
    char t42[8];
    char t53[8];
    char t59[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(108, ng0);

LAB126:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB25:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB127:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB129;

LAB128:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB129;

LAB132:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB130;

LAB131:    t15 = (t10 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB133;

LAB134:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB26:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB27;

LAB28:
LAB29:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(39, ng0);

LAB30:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB31;

LAB32:
LAB33:    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(44, ng0);

LAB34:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB35;

LAB36:
LAB37:    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB13:    xsi_set_current_line(49, ng0);

LAB38:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t42) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t42 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB39;

LAB40:
LAB41:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t42 + 4);
    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB43;

LAB42:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & 4294967295U);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(54, ng0);

LAB44:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB45:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB47;

LAB46:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB48;

LAB49:    t15 = (t10 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t14 = (t4 + 4);
    t15 = (t9 + 4);
    t23 = (t10 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 | t17);
    *((unsigned int *)t23) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB75;

LAB76:
LAB77:    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(72, ng0);

LAB78:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB80;

LAB79:    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 4294967295U);
    t8 = ((char*)((ng3)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t10, 32, t8, 32);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t42, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB81:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB83;

LAB82:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB84;

LAB85:    t15 = (t10 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t14 = (t4 + 4);
    t15 = (t9 + 4);
    t23 = (t10 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 | t17);
    *((unsigned int *)t23) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB111;

LAB112:
LAB113:    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(91, ng0);

LAB114:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB116;

LAB115:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB116;

LAB119:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB117;

LAB118:    t14 = (t10 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(97, ng0);

LAB124:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB122:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(103, ng0);

LAB125:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB29;

LAB31:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB33;

LAB35:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB37;

LAB39:    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t42) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB41;

LAB43:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t23);
    t44 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t43 | t44);
    goto LAB42;

LAB47:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t10) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(58, ng0);

LAB53:    xsi_set_current_line(59, ng0);
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = (t0 + 1008U);
    t41 = (t23 + 72U);
    t47 = *((char **)t41);
    t48 = (t0 + 3048);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_index_select_value(t42, 2, t24, t47, 2, t50, 6, 2);
    t51 = (t0 + 1208U);
    t52 = *((char **)t51);
    t51 = (t0 + 1168U);
    t54 = (t51 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 3048);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_generic_get_index_select_value(t53, 2, t52, t55, 2, t58, 6, 2);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 2, t42, 2, t53, 2);
    t60 = (t0 + 2568);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 2, t59, 2, t62, 1);
    t64 = (t0 + 2888);
    xsi_vlogvar_assign_value(t64, t63, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB57;

LAB54:    if (t22 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t10) = 1;

LAB57:    t15 = (t10 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB60:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng9)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB64;

LAB61:    if (t22 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t10) = 1;

LAB64:    t15 = (t10 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB71;

LAB68:    if (t22 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t10) = 1;

LAB71:    t15 = (t10 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 6, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 6);
    goto LAB45;

LAB56:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(61, ng0);
    t23 = ((char*)((ng8)));
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB60;

LAB63:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(65, ng0);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t41 = *((char **)t24);
    t47 = (t0 + 2248);
    xsi_vlogvar_assign_value(t47, t41, 0, 0, 1);
    goto LAB67;

LAB70:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(67, ng0);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t41 = *((char **)t24);
    t47 = (t0 + 2408);
    xsi_vlogvar_assign_value(t47, t41, 0, 0, 1);
    goto LAB74;

LAB75:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB77;

LAB80:    t13 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t16);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t17 | t18);
    goto LAB79;

LAB83:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB85;

LAB84:    *((unsigned int *)t10) = 1;
    goto LAB85;

LAB87:    xsi_set_current_line(77, ng0);

LAB89:    xsi_set_current_line(78, ng0);
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = (t0 + 1008U);
    t41 = (t23 + 72U);
    t47 = *((char **)t41);
    t48 = (t0 + 3048);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_index_select_value(t42, 2, t24, t47, 2, t50, 6, 2);
    t51 = (t0 + 3208);
    t52 = (t51 + 56U);
    t54 = *((char **)t52);
    t55 = (t0 + 3208);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 3048);
    t60 = (t58 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_get_index_select_value(t53, 2, t54, t57, 2, t61, 6, 2);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 2, t42, 2, t53, 2);
    t62 = (t0 + 2568);
    t64 = (t62 + 56U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 2, t59, 2, t65, 1);
    t66 = (t0 + 2888);
    xsi_vlogvar_assign_value(t66, t63, 0, 0, 2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB93;

LAB90:    if (t22 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t10) = 1;

LAB93:    t15 = (t10 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB96:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng9)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB100;

LAB97:    if (t22 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t10) = 1;

LAB100:    t15 = (t10 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB101;

LAB102:
LAB103:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB107;

LAB104:    if (t22 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t10) = 1;

LAB107:    t15 = (t10 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB108;

LAB109:
LAB110:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 6, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 6);
    goto LAB81;

LAB92:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(80, ng0);
    t23 = ((char*)((ng8)));
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB96;

LAB99:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(84, ng0);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t41 = *((char **)t24);
    t47 = (t0 + 2248);
    xsi_vlogvar_assign_value(t47, t41, 0, 0, 1);
    goto LAB103;

LAB106:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(86, ng0);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t41 = *((char **)t24);
    t47 = (t0 + 2408);
    xsi_vlogvar_assign_value(t47, t41, 0, 0, 1);
    goto LAB110;

LAB111:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB113;

LAB116:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB118;

LAB117:    *((unsigned int *)t10) = 1;
    goto LAB118;

LAB120:    xsi_set_current_line(93, ng0);

LAB123:    xsi_set_current_line(94, ng0);
    t15 = ((char*)((ng3)));
    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t15, 0, 0, 32);
    goto LAB122;

LAB129:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB131;

LAB130:    *((unsigned int *)t10) = 1;
    goto LAB131;

LAB133:    xsi_set_current_line(116, ng0);

LAB135:    xsi_set_current_line(117, ng0);
    t23 = (t0 + 1768);
    t24 = (t23 + 56U);
    t41 = *((char **)t24);
    t47 = (t0 + 1768);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 3048);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_index_select_value(t42, 32, t41, t49, 2, t52, 6, 2);
    t54 = ((char*)((ng8)));
    memset(t53, 0, 8);
    t55 = (t42 + 4);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t42);
    t19 = *((unsigned int *)t54);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t55);
    t22 = *((unsigned int *)t56);
    t25 = (t21 ^ t22);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t55);
    t28 = *((unsigned int *)t56);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB139;

LAB136:    if (t29 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t53) = 1;

LAB139:    t58 = (t53 + 4);
    t32 = *((unsigned int *)t58);
    t35 = (~(t32));
    t36 = *((unsigned int *)t53);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB140;

LAB141:
LAB142:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 6, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 6);
    goto LAB127;

LAB138:    t57 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB139;

LAB140:    xsi_set_current_line(118, ng0);
    t60 = ((char*)((ng2)));
    t61 = (t0 + 1928);
    xsi_vlogvar_assign_value(t61, t60, 0, 0, 1);
    goto LAB142;

}


extern void work_m_00000000003460477252_0886308060_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000003460477252_0886308060", "isim/test8_isim_beh.exe.sim/work/m_00000000003460477252_0886308060.didat");
	xsi_register_executes(pe);
}
