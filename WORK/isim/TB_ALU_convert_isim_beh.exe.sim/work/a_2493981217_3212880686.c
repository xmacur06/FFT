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
char *ieee_p_1242562249_sub_2931867381_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3273497107_1035706684(char *, char *, char *, char *, char *, char *);
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

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 8984U);
    t4 = ieee_p_1242562249_sub_3461525680_1035706684(IEEE_P_1242562249, t1, t3, t2, 32768);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (31U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5744);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 31U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5616);
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

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 9000U);
    t4 = ieee_p_1242562249_sub_3461525680_1035706684(IEEE_P_1242562249, t1, t3, t2, 32768);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (31U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5808);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 31U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5632);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(31U, t7, 0);
    goto LAB6;

}

static void work_a_2493981217_3212880686_p_2(char *t0)
{
    char t11[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5648);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = (30 - 30);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9128U);
    t4 = (t0 + 1672U);
    t12 = *((char **)t4);
    t4 = (t0 + 9032U);
    t13 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t11, t3, t1, t12, t4);
    t15 = (t11 + 12U);
    t6 = *((unsigned int *)t15);
    t7 = (1U * t6);
    t2 = (62U != t7);
    if (t2 == 1)
        goto LAB10;

LAB11:    t16 = (t0 + 5872);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 62U);
    xsi_driver_first_trans_fast(t16);

LAB6:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t5 = (30 - 30);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t3 + t8);
    t2 = *((unsigned char *)t1);
    t9 = (t2 == (unsigned char)3);
    if (t9 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9128U);
    t4 = (t0 + 1832U);
    t12 = *((char **)t4);
    t4 = (t0 + 9032U);
    t13 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t11, t3, t1, t12, t4);
    t15 = (t11 + 12U);
    t6 = *((unsigned int *)t15);
    t7 = (1U * t6);
    t2 = (62U != t7);
    if (t2 == 1)
        goto LAB17;

LAB18:    t16 = (t0 + 5936);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 62U);
    xsi_driver_first_trans_fast(t16);

LAB13:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t6 = (61 - 14);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t3 + t8);
    t4 = (t0 + 6000);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t6 = (61 - 14);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t3 + t8);
    t4 = (t0 + 6064);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t12 = (t0 + 1672U);
    t13 = *((char **)t12);
    t12 = (t0 + 9032U);
    t14 = (-(1));
    t15 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t11, t13, t12, t14);
    t16 = (t11 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (62U != t18);
    if (t19 == 1)
        goto LAB8;

LAB9:    t20 = (t0 + 5872);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 62U);
    xsi_driver_first_trans_fast(t20);
    goto LAB6;

LAB8:    xsi_size_not_matching(62U, t18, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(62U, t7, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1832U);
    t12 = *((char **)t4);
    t4 = (t0 + 9032U);
    t14 = (-(1));
    t13 = ieee_p_1242562249_sub_2931867381_1035706684(IEEE_P_1242562249, t11, t12, t4, t14);
    t15 = (t11 + 12U);
    t17 = *((unsigned int *)t15);
    t18 = (1U * t17);
    t10 = (62U != t18);
    if (t10 == 1)
        goto LAB15;

LAB16:    t16 = (t0 + 5936);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 62U);
    xsi_driver_first_trans_fast(t16);
    goto LAB13;

LAB15:    xsi_size_not_matching(62U, t18, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(62U, t7, 0);
    goto LAB18;

}

static void work_a_2493981217_3212880686_p_3(char *t0)
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
    char *t20;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5664);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 9064U);
    t6 = (t0 + 2312U);
    t7 = *((char **)t6);
    t6 = (t0 + 9064U);
    t8 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t3, t5, t4, t7, t6);
    t9 = (t3 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    t12 = (30U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 6128);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 30U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9064U);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 9064U);
    t7 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t3, t4, t1, t6, t5);
    t8 = (t3 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t2 = (30U != t11);
    if (t2 == 1)
        goto LAB7;

LAB8:    t9 = (t0 + 6192);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 30U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t1 = (t0 + 9112U);
    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t5 = (t0 + 9080U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t18, t4, t1, t6, t5);
    t8 = (t0 + 2632U);
    t9 = *((char **)t8);
    t8 = (t0 + 9080U);
    t13 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t3, t7, t18, t9, t8);
    t14 = (t3 + 12U);
    t10 = *((unsigned int *)t14);
    t11 = (1U * t10);
    t2 = (31U != t11);
    if (t2 == 1)
        goto LAB9;

LAB10:    t15 = (t0 + 6256);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t13, 31U);
    xsi_driver_first_trans_fast(t15);
    goto LAB3;

LAB5:    xsi_size_not_matching(30U, t11, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(30U, t11, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(31U, t11, 0);
    goto LAB10;

}


extern void work_a_2493981217_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2493981217_3212880686_p_0,(void *)work_a_2493981217_3212880686_p_1,(void *)work_a_2493981217_3212880686_p_2,(void *)work_a_2493981217_3212880686_p_3};
	xsi_register_didat("work_a_2493981217_3212880686", "isim/TB_ALU_convert_isim_beh.exe.sim/work/a_2493981217_3212880686.didat");
	xsi_register_executes(pe);
}
