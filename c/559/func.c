/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3913971130
Invocation: ./yarpgen --std=c -o out/559
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(unsigned char var_0, long long int var_1, unsigned short var_2, long long int var_3, _Bool var_6, unsigned short var_7, unsigned long long int var_8, signed char var_9, signed char var_10, _Bool var_11, int zero, int arr_0 [24] , _Bool arr_1 [24] , _Bool arr_2 [24] , unsigned short arr_3 [24] [24] [24] , long long int arr_4 [24] [24] , _Bool arr_5 [24] [24] [24] , _Bool arr_6 [24] , _Bool arr_7 [24] [24] , unsigned short arr_12 [24] [24] [24] [24] [24] , _Bool arr_13 [24] [24] [24] , long long int arr_14 [24] [24] , unsigned long long int arr_17 [24] , unsigned char arr_19 [24] [24] [24] [24] [24] [24] , _Bool arr_20 [24] [24] [24] [24] , unsigned char arr_21 [24] [24] [24] [24] [24] [24] [24] , signed char arr_26 [24] , unsigned char arr_27 [24] [24] [24] , unsigned long long int arr_29 [24] [24] [24] [24] , unsigned char arr_30 [24] [24] [24] [24] [24] , unsigned long long int arr_32 [24] [24] [24] [24] , unsigned char arr_33 [24] [24] [24] , unsigned char arr_35 [24] [24] , unsigned long long int arr_36 [24] [24] [24] [24] [24] , int arr_37 [24] [24] [24] [24] [24] , int arr_38 [24] [24] [24] [24] [24] [24] [24] , unsigned char arr_40 [24] [24] [24] [24] [24] , int arr_41 [24] , signed char arr_42 [24] , _Bool arr_47 [24] [24] [24] , long long int arr_50 [24] [24] [24] , _Bool arr_52 [24] [24] [24] , unsigned char arr_57 [13] , unsigned short arr_59 [13] [13] [13] , unsigned long long int arr_60 [13] , _Bool arr_63 [13] [13] , unsigned short arr_66 [13] [13] [13] [13] [13] [13] , signed char arr_68 [13] [13] [13] [13] [13] [13] , unsigned long long int arr_76 [13] [13] [13] [13] [13] [13] ) {
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = ((((/* implicit */int) var_0)) - (16))/*1*/; i_0 < (unsigned char)20/*20*/; i_0 += (unsigned char)1/*1*/) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = (unsigned char)1/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (96))/*21*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (92))/*3*/) 
        {
            for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) - (99))/*2*/; i_2 < (signed char)20/*20*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_0))) - (14))/*3*/) 
            {
                {
                    if ((!(((/* implicit */_Bool) arr_4 [i_0 + 3] [i_1 - 1]))))
                    {
                        arr_8 [i_0 + 1] [(unsigned short)8] [i_2 + 4] = ((/* implicit */int) ((signed char) arr_0 [i_2 - 2]));
                        arr_9 [(unsigned short)20] [i_1] [i_1] = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_2])) : (((/* implicit */int) arr_1 [i_2 - 1]))))));
                        arr_10 [(signed char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 4] [i_0 + 4])) ? (((/* implicit */int) arr_5 [i_0 + 3] [(_Bool)1] [i_2 + 3])) : (((/* implicit */int) arr_7 [(unsigned short)6] [(unsigned short)6]))))) ? (((arr_6 [i_1 + 3]) ? (arr_4 [i_1 + 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [0ULL] [0ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 + 3] [i_2 + 3])))));
                    }

                    /* LoopNest 2 */
                    for (signed char i_3 = (signed char)0/*0*/; i_3 < (signed char)24/*24*/; i_3 += (signed char)3/*3*/) 
                    {
                        for (unsigned short i_4 = (unsigned short)4/*4*/; i_4 < (unsigned short)23/*23*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned short) var_9))) - (65430))/*2*/) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((signed char) arr_2 [i_0 + 3]));
                                arr_16 [i_0 + 4] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_1 + 3] [i_1 + 1]) ? (((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = (unsigned short)0/*0*/; i_5 < (unsigned short)24/*24*/; i_5 += (unsigned short)1/*1*/) 
                    {
                        for (short i_6 = (short)3/*3*/; i_6 < (short)23/*23*/; i_6 += (short)4/*4*/) 
                        {
                            {
                                arr_22 [i_5] [i_1] [i_0 + 3] [i_5] [i_6] = ((/* implicit */_Bool) (+(arr_14 [i_6 + 1] [i_6 - 1])));
                                var_13 *= ((/* implicit */_Bool) ((arr_5 [i_0] [i_6 + 1] [i_1 + 3]) ? ((~(((/* implicit */int) arr_7 [i_2] [i_2])))) : (((arr_7 [i_0] [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_6 + 1])) : (((/* implicit */int) arr_6 [i_0]))))));
                                arr_23 [i_0 + 1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_21 [i_2] [16ULL] [i_6 - 2] [16ULL] [i_6] [i_6 - 2] [i_6]));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0 + 4] [i_0 + 4]);
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 1] [i_1 + 2])))))));
                }
            } 
        } 
        arr_25 [i_0] [i_0] = ((/* implicit */signed char) arr_19 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0 - 1] [i_0 + 3]);
        /* LoopNest 3 */
        for (long long int i_7 = 0LL/*0*/; i_7 < 24LL/*24*/; i_7 += 3LL/*3*/) 
        {
            for (_Bool i_8 = (_Bool)0/*0*/; i_8 < (_Bool)1/*1*/; i_8 += (_Bool)1/*1*/) 
            {
                for (signed char i_9 = (signed char)1/*1*/; i_9 < (signed char)22/*22*/; i_9 += (signed char)3/*3*/) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 1ULL/*1*/; i_10 < ((var_8) - (5654327646756361824ULL))/*21*/; i_10 += 3ULL/*3*/) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_9 + 2] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10] [i_7]))) : (arr_29 [i_10 + 2] [i_10 + 3] [i_10] [i_10 - 1])));
                            var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_9 + 1] [i_7] [(signed char)20] [(_Bool)1])) ? (arr_14 [i_10 - 1] [i_9 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_8] [i_7] [i_8])))))));
                        }
                        for (long long int i_11 = 1LL/*1*/; i_11 < 22LL/*22*/; i_11 += ((var_3) + (2732936409461963664LL))/*2*/) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (signed char)33)))))));
                            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_0 + 4] [i_7] [i_7] [i_9] [i_0 + 2] [i_0 + 2]))));
                            var_19 = arr_37 [i_11] [i_11] [i_11] [i_11 + 2] [i_11];
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_3 [i_0 + 3] [i_9 + 1] [i_9 + 2]))));
                            arr_39 [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 - 1] [6] [i_0 + 4])) ? (((/* implicit */int) arr_12 [i_0 + 2] [i_7] [i_7] [i_8] [i_11])) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_11 + 2]))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_12 [i_9 + 1] [i_7] [i_11 - 1] [i_9 + 2] [i_0 + 1]))));
                        }
                        for (int i_12 = 2/*2*/; i_12 < 22/*22*/; i_12 += 1/*1*/) 
                        {
                            if (((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_12 + 1] [(_Bool)1])))))
                            {
                                arr_43 [i_0] [i_7] [i_9] [19ULL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_0 + 3] [i_9])) ? (((/* implicit */int) arr_35 [i_0 + 3] [i_9])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_9 + 1] [i_12 + 1]))));
                                arr_44 [i_9] = ((/* implicit */signed char) ((short) arr_0 [i_9 + 1]));
                                var_21 = ((/* implicit */long long int) ((signed char) arr_17 [i_12 - 2]));
                                arr_45 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_7] [i_7])) ? (((/* implicit */int) ((signed char) arr_19 [i_12] [i_12 + 1] [(signed char)4] [i_8] [(signed char)4] [(_Bool)1]))) : (((/* implicit */int) arr_2 [i_7]))));
                            }

                            arr_46 [i_9] = ((/* implicit */unsigned short) arr_20 [i_0 + 3] [i_12 + 2] [i_8] [i_12 + 2]);
                        }
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_9] [(signed char)6] [(signed char)4]) ? (((/* implicit */int) arr_21 [i_0 + 2] [i_7] [i_7] [i_0 + 2] [i_7] [i_0] [i_8])) : (((/* implicit */int) arr_13 [i_9 - 1] [i_0 + 4] [i_0 + 4]))))) ? (((/* implicit */int) arr_1 [i_8])) : (((arr_20 [i_0] [i_7] [i_7] [i_9 + 1]) ? (((/* implicit */int) arr_26 [i_9])) : (((/* implicit */int) arr_3 [i_8] [i_7] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_13 = (short)1/*1*/; i_13 < (short)20/*20*/; i_13 += (short)3/*3*/) 
        {
            for (unsigned short i_14 = (unsigned short)4/*4*/; i_14 < (unsigned short)20/*20*/; i_14 += ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) + (2))/*3*/) 
            {
                {
                    if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_47 [(unsigned char)21] [i_13 + 3] [i_14 + 4]) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_50 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) : (((arr_13 [i_0] [i_13] [(unsigned short)10]) ? (((/* implicit */unsigned long long int) arr_14 [(unsigned short)19] [(unsigned short)19])) : (arr_32 [i_0] [i_0] [i_14] [i_14]))))))
                    {
                        arr_53 [i_0] [i_0 + 4] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_19 [i_14 - 3] [i_14 - 4] [i_14 - 4] [i_14] [i_13 + 4] [i_0]));
                        var_23 = ((/* implicit */unsigned long long int) arr_20 [i_0] [19LL] [i_0] [i_0]);
                        var_24 = ((/* implicit */_Bool) ((signed char) arr_38 [i_0 + 3] [i_0] [i_13 + 3] [i_13 + 4] [i_14] [(_Bool)1] [i_14 - 1]));
                    }

                    arr_54 [i_0] [i_13 + 4] [i_0] = ((/* implicit */unsigned short) ((arr_52 [i_14 + 1] [i_13 + 2] [i_0 + 2]) ? (((/* implicit */int) arr_52 [i_14 - 4] [i_13 + 4] [i_0 + 3])) : (((/* implicit */int) arr_52 [i_14 - 2] [i_13 + 3] [i_0 + 1]))));
                    arr_55 [i_14 + 1] [i_13] [i_0] [i_0] &= ((/* implicit */unsigned char) (~((~(arr_41 [6])))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_15 = 0ULL/*0*/; i_15 < ((((/* implicit */unsigned long long int) var_11)) + (12ULL))/*13*/; i_15 += ((((/* implicit */unsigned long long int) var_1)) - (16357158604924573284ULL))/*1*/) 
    {
        /* LoopNest 2 */
        for (short i_16 = (short)1/*1*/; i_16 < (short)11/*11*/; i_16 += ((((/* implicit */int) ((/* implicit */short) arr_29 [i_15] [i_15] [i_15] [i_15]))) + (771))/*1*/) 
        {
            for (int i_17 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27034))) : (7682059667233385382ULL)))) ? (arr_50 [i_16 + 2] [i_16 + 1] [i_16 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_15])) ? (((/* implicit */int) arr_19 [i_15] [(_Bool)1] [(_Bool)1] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_42 [i_15])))))))) + (897382712))/*0*/; i_17 < ((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_16 + 2] [(signed char)20])) ? (arr_36 [i_16 + 1] [i_16 - 1] [i_16 + 2] [i_16] [(_Bool)1]) : (arr_36 [i_16 - 1] [i_16] [i_16 - 1] [i_16] [(signed char)16])))) + (1630770362))/*13*/; i_17 += 1/*1*/) 
            {
                {
                    arr_64 [i_15] [i_15] [i_16] = (!(((/* implicit */_Bool) arr_17 [i_17])));
                    /* LoopNest 2 */
                    for (_Bool i_18 = ((/* implicit */int) ((/* implicit */_Bool) ((unsigned short) arr_63 [i_16 + 2] [i_16 + 1])))/*1*/; i_18 < (_Bool)1/*1*/; i_18 += (_Bool)1/*1*/) 
                    {
                        for (unsigned short i_19 = (unsigned short)2/*2*/; i_19 < (unsigned short)10/*10*/; i_19 += (unsigned short)3/*3*/) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_50 [i_16] [i_17] [i_18 - 1])))) ? (((((/* implicit */_Bool) arr_42 [(short)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_16 + 2]))) : (arr_60 [i_15]))) : (((/* implicit */unsigned long long int) ((arr_47 [i_16 + 2] [i_17] [i_19]) ? (arr_4 [i_15] [i_19 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_15] [(signed char)8] [i_17] [i_18 - 1] [(signed char)8] [i_18 - 1])))))))))));
                                arr_69 [i_15] [i_15] [(signed char)9] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_16 + 2] [i_18 - 1])) ? (((/* implicit */int) arr_20 [i_16 + 2] [i_18 - 1] [i_19 + 2] [i_19])) : (((/* implicit */int) arr_20 [i_16 + 2] [i_18 - 1] [i_19 + 2] [i_19]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_20 = (signed char)2/*2*/; i_20 < ((((/* implicit */int) ((signed char) (unsigned char)246))) + (20))/*10*/; i_20 += ((((/* implicit */int) ((/* implicit */signed char) var_3))) - (113))/*1*/) 
        {
            arr_72 [i_15] = ((/* implicit */unsigned short) ((unsigned char) 8190LL));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_36 [i_20 - 1] [i_20] [i_20 + 2] [i_20 + 2] [(unsigned short)8]))));
            /* LoopNest 2 */
            for (signed char i_21 = ((((/* implicit */int) ((signed char) arr_59 [(signed char)12] [i_20 + 3] [i_20 - 1]))) - (18))/*3*/; i_21 < (signed char)12/*12*/; i_21 += (signed char)2/*2*/) 
            {
                for (_Bool i_22 = (_Bool)0/*0*/; i_22 < (_Bool)1/*1*/; i_22 += (_Bool)1/*1*/) 
                {
                    {
                        arr_79 [i_15] [i_15] [(_Bool)1] [i_15] [(signed char)5] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_20 - 1] [(_Bool)1] [i_20] [(_Bool)1] [i_20]))))) ? (arr_76 [i_15] [i_20] [i_20 + 3] [i_15] [i_15] [i_21 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_15] [i_15] [6] [i_15] [i_20] [i_22])))));
                        arr_80 [i_15] [i_15] [i_20 - 2] [i_15] = ((/* implicit */_Bool) arr_0 [i_15]);
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_20 - 1] [i_20 - 2] [i_20 + 2] [(_Bool)1])) ? (((/* implicit */int) arr_30 [18ULL] [i_20 - 1] [i_20 - 2] [i_20 + 2] [18ULL])) : (((/* implicit */int) arr_30 [(unsigned char)2] [i_20 - 1] [i_20 - 2] [i_20 + 2] [(unsigned char)2])))))));
            var_28 &= ((/* implicit */signed char) (~(arr_76 [i_15] [i_20 + 1] [i_15] [i_20 + 1] [11LL] [11LL])));
        }
        for (signed char i_23 = (signed char)3/*3*/; i_23 < ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_15] [i_15] [(unsigned short)8] [i_15])) ? (arr_32 [i_15] [i_15] [i_15] [i_15]) : (arr_32 [i_15] [i_15] [i_15] [i_15]))))) + (116))/*11*/; i_23 += (signed char)3/*3*/) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) ((arr_20 [i_23 - 1] [i_23 + 2] [i_23 - 3] [i_23 - 1]) ? ((+(((/* implicit */int) arr_6 [i_15])))) : (((/* implicit */int) arr_27 [i_23] [i_23 - 3] [i_23 + 2]))));
            arr_85 [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [21LL] [i_23 - 1] [i_15] [i_23 - 1] [i_23 - 3]))));
        }
        for (signed char i_24 = (signed char)3/*3*/; i_24 < ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_15] [i_15] [(unsigned short)8] [i_15])) ? (arr_32 [i_15] [i_15] [i_15] [i_15]) : (arr_32 [i_15] [i_15] [i_15] [i_15]))))) + (116))/*11*/; i_24 += (signed char)3/*3*/) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_25 = (unsigned short)0/*0*/; i_25 < (unsigned short)13/*13*/; i_25 += (unsigned short)4/*4*/) 
            {
                for (signed char i_26 = (signed char)2/*2*/; i_26 < (signed char)10/*10*/; i_26 += (signed char)1/*1*/) 
                {
                    for (long long int i_27 = 1LL/*1*/; i_27 < ((((((/* implicit */_Bool) arr_50 [i_24 - 3] [i_24 + 2] [i_26 - 2])) ? (arr_50 [i_24 - 2] [i_25] [i_26 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_26 + 3] [i_26 - 1]))))) + (6348649885649926468LL))/*12*/; i_27 += 4LL/*4*/) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (arr_5 [i_26 + 2] [(signed char)20] [i_15])));
                            var_31 = ((/* implicit */unsigned char) ((long long int) arr_5 [i_24 - 3] [i_24 + 2] [i_24 + 2]));
                        }
                    } 
                } 
            } 
            arr_95 [i_24] = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_15] [i_15] [20LL] [i_15] [i_24] [i_15] [i_24 - 3]))));
        }
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) -1604984526)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((var_11) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(var_8))))))));
}
