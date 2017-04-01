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
static const char *ng0 = "C:/Users/JM/Xilinx/Projekty/FFT/SOURCES/ALU_convert.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2720042465_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2931867381_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3461525680_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2493981217_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 10020U);
    t4 = ieee_p_1242562249_sub_3461525680_1035706684(IEEE_P_1242562249, t1, t3, t2, 32768);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (31U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 6432);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 31U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 6272);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(31U, t7, 0);
    goto LAB6;

}

static void work_a_2493981217_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 10036U);
    t4 = ieee_p_1242562249_sub_3461525680_1035706684(IEEE_P_1242562249, t1, t3, t2, 32768);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (31U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 6496);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 31U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 6288);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(31U, t7, 0);
    goto LAB6;

}

static void work_a_2493981217_3212880686_p_2(char *t0)
{
    char t5[16];
    char t24[16];
    char t38[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 10068U);
    t3 = (t0 + 10656);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 30;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (30 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2720042465_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 1672U);
    t18 = *((char **)t17);
    t19 = (30 - 30);
    t9 = (t19 * -1);
    t20 = (1U * t9);
    t21 = (0 + t20);
    t17 = (t18 + t21);
    t22 = *((unsigned char *)t17);
    t23 = (t22 == (unsigned char)3);
    if (t23 != 0)
        goto LAB5;

LAB6:
LAB9:    t39 = (t0 + 1672U);
    t40 = *((char **)t39);
    t39 = (t0 + 10068U);
    t41 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t38, t40, t39, 1);
    t42 = (t38 + 12U);
    t43 = *((unsigned int *)t42);
    t44 = (1U * t43);
    t45 = (62U != t44);
    if (t45 == 1)
        goto LAB11;

LAB12:    t46 = (t0 + 6560);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t41, 62U);
    xsi_driver_first_trans_fast(t46);

LAB2:    t51 = (t0 + 6304);
    *((int *)t51) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 10687);
    t12 = (t0 + 6560);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 62U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t25 = (t0 + 1672U);
    t26 = *((char **)t25);
    t25 = (t0 + 10068U);
    t27 = (-(1));
    t28 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t24, t26, t25, t27);
    t29 = (t24 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (62U != t31);
    if (t32 == 1)
        goto LAB7;

LAB8:    t33 = (t0 + 6560);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 62U);
    xsi_driver_first_trans_fast(t33);
    goto LAB2;

LAB7:    xsi_size_not_matching(62U, t31, 0);
    goto LAB8;

LAB10:    goto LAB2;

LAB11:    xsi_size_not_matching(62U, t44, 0);
    goto LAB12;

}

static void work_a_2493981217_3212880686_p_3(char *t0)
{
    char t5[16];
    char t24[16];
    char t38[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 10068U);
    t3 = (t0 + 10749);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 30;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (30 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2720042465_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 1832U);
    t18 = *((char **)t17);
    t19 = (30 - 30);
    t9 = (t19 * -1);
    t20 = (1U * t9);
    t21 = (0 + t20);
    t17 = (t18 + t21);
    t22 = *((unsigned char *)t17);
    t23 = (t22 == (unsigned char)3);
    if (t23 != 0)
        goto LAB5;

LAB6:
LAB9:    t39 = (t0 + 1832U);
    t40 = *((char **)t39);
    t39 = (t0 + 10068U);
    t41 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t38, t40, t39, 1);
    t42 = (t38 + 12U);
    t43 = *((unsigned int *)t42);
    t44 = (1U * t43);
    t45 = (62U != t44);
    if (t45 == 1)
        goto LAB11;

LAB12:    t46 = (t0 + 6624);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t41, 62U);
    xsi_driver_first_trans_fast(t46);

LAB2:    t51 = (t0 + 6320);
    *((int *)t51) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 10780);
    t12 = (t0 + 6624);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 62U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t25 = (t0 + 1832U);
    t26 = *((char **)t25);
    t25 = (t0 + 10068U);
    t27 = (-(1));
    t28 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t24, t26, t25, t27);
    t29 = (t24 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (62U != t31);
    if (t32 == 1)
        goto LAB7;

LAB8:    t33 = (t0 + 6624);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 62U);
    xsi_driver_first_trans_fast(t33);
    goto LAB2;

LAB7:    xsi_size_not_matching(62U, t31, 0);
    goto LAB8;

LAB10:    goto LAB2;

LAB11:    xsi_size_not_matching(62U, t44, 0);
    goto LAB12;

}

static void work_a_2493981217_3212880686_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = (61 - 14);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t8 = (t0 + 6688);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 15U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = (61 - 14);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t4 = (t0 + 6752);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

}

static void work_a_2493981217_3212880686_p_5(char *t0)
{
    char t3[16];
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 10100U);
    t6 = (t0 + 2312U);
    t7 = *((char **)t6);
    t6 = (t0 + 10100U);
    t8 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t3, t5, t4, t7, t6);
    t9 = (t3 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    t12 = (30U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 6816);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 30U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 10100U);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 10100U);
    t7 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t3, t4, t1, t6, t5);
    t8 = (t3 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t2 = (30U != t11);
    if (t2 == 1)
        goto LAB7;

LAB8:    t9 = (t0 + 6880);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 30U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t1 = (t0 + 10148U);
    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t5 = (t0 + 10116U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t18, t4, t1, t6, t5);
    t8 = (t0 + 2632U);
    t9 = *((char **)t8);
    t8 = (t0 + 10116U);
    t13 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t3, t7, t18, t9, t8);
    t14 = (t0 + 6944);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t13, 31U);
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

LAB5:    xsi_size_not_matching(30U, t11, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(30U, t11, 0);
    goto LAB8;

}


extern void work_a_2493981217_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2493981217_3212880686_p_0,(void *)work_a_2493981217_3212880686_p_1,(void *)work_a_2493981217_3212880686_p_2,(void *)work_a_2493981217_3212880686_p_3,(void *)work_a_2493981217_3212880686_p_4,(void *)work_a_2493981217_3212880686_p_5};
	xsi_register_didat("work_a_2493981217_3212880686", "isim/TB_ALU_convert_isim_beh.exe.sim/work/a_2493981217_3212880686.didat");
	xsi_register_executes(pe);
}
