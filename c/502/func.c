/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 641300249
Invocation: ./yarpgen --std=c -o out/502
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
void test(unsigned int var_0, unsigned long long int var_1, unsigned int var_2, unsigned int var_3, _Bool var_4, unsigned char var_5, unsigned char var_6, unsigned char var_7, _Bool var_8, unsigned int var_9, long long int var_10, unsigned long long int var_11, short var_13, unsigned int var_14, long long int var_15, _Bool var_16, unsigned long long int var_17, long long int var_18, int var_19, int zero, _Bool arr_0 [21] , signed char arr_1 [21] , unsigned int arr_4 [21] [21] , int arr_5 [21] [21] , unsigned char arr_6 [21] [21] , signed char arr_8 [21] [21] , short arr_9 [21] [21] [21] , unsigned int arr_11 [21] [21] [21] , unsigned char arr_12 [21] [21] [21] [21] , int arr_13 [21] [21] , unsigned char arr_15 [21] [21] , short arr_16 [21] [21] [21] , _Bool arr_19 [21] [21] , unsigned char arr_20 [21] [21] , long long int arr_21 [21] [21] [21] , long long int arr_23 [21] [21] [21] , unsigned int arr_24 [21] [21] [21] [21] , short arr_25 [21] [21] [21] , unsigned int arr_26 [21] [21] , short arr_27 [21] [21] , unsigned char arr_29 [21] [21] [21] [21] , _Bool arr_30 [21] [21] [21] [21] , long long int arr_31 [21] [21] [21] , unsigned long long int arr_32 [21] [21] [21] [21] [21] , signed char arr_34 [21] [21] [21] [21] [21] [21] [21] , long long int arr_46 [21] , short arr_47 [21] , unsigned int arr_52 [23] , _Bool arr_53 [23] [23] , short arr_54 [23] ) {
    var_20 *= ((/* implicit */unsigned long long int) min((min(((+(6151475141475193591LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) 1377794330)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((var_10), (((/* implicit */long long int) -1377794328))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_15))) - (247))/*1*/; i_0 < (unsigned char)20/*20*/; i_0 += (unsigned char)2/*2*/) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        if (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((max((((/* implicit */signed char) arr_0 [i_0])), (arr_1 [i_0]))), (max((((/* implicit */signed char) arr_0 [(signed char)9])), (arr_1 [13U])))))), (var_1))))
        {
            arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [0U]));
            /* LoopSeq 4 */
            for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) min((max((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_0]))))) * (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))))))) - (1))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_16))) + (21))/*21*/; i_1 += (short)4/*4*/) /* same iter space */
            {
                arr_7 [i_0] [i_0] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))) ? (((/* implicit */long long int) (+(((arr_5 [19LL] [i_0 + 1]) / (((/* implicit */int) var_7))))))) : (((long long int) max((arr_4 [4LL] [4LL]), (((/* implicit */unsigned int) arr_1 [10LL])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = (unsigned char)2/*2*/; i_2 < (unsigned char)18/*18*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) + (2))/*2*/) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_2 + 3])))))))));
                    arr_10 [i_0 - 1] [16LL] = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_2 - 1]);
                    var_22 += ((/* implicit */unsigned char) (-((~(var_1)))));
                }
                for (int i_3 = ((((/* implicit */int) arr_0 [i_0])) - (1))/*0*/; i_3 < ((((/* implicit */int) var_17)) + (1046018488))/*21*/; i_3 += ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) (unsigned char)184)), (1377794324)))))))) + (3))/*3*/) 
                {
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) == ((~(arr_13 [i_1] [i_1]))))))));
                    var_24 |= arr_8 [i_0] [i_0];
                }
                arr_14 [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_9 [i_0] [i_0 - 1] [3ULL])))), ((~(arr_13 [i_0 - 1] [i_1])))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned int) arr_12 [(short)18] [(short)18] [i_0] [i_0])))));
            }
            for (short i_4 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) min((max((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_0]))))) * (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))))))) - (1))/*0*/; i_4 < ((((/* implicit */int) ((/* implicit */short) var_16))) + (21))/*21*/; i_4 += (short)4/*4*/) /* same iter space */
            {
                if ((!((((-(((/* implicit */int) arr_8 [i_0] [i_4])))) != (((/* implicit */int) min((arr_9 [i_0 + 1] [i_4] [(unsigned char)13]), (((/* implicit */short) arr_8 [i_0 + 1] [i_4])))))))))
                {
                    var_26 = min((((((/* implicit */_Bool) -1091688606320484078LL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0 - 1] [19LL]))))) : (4503599627370495ULL))), (((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_4] [i_4])))))));
                    if (((/* implicit */_Bool) (-(arr_11 [i_4] [i_4] [i_4]))))
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (18442240474082181120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)0] [i_4])))))))) ? (min(((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1])) : (-1377794307))))) : (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0]))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((unsigned long long int) (~(arr_4 [i_0 + 1] [i_0 + 1])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))))))));
                        arr_18 [i_4] [i_0] = ((/* implicit */unsigned long long int) ((arr_13 [i_0 - 1] [i_4]) <= ((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_9 [(unsigned char)16] [(unsigned char)16] [(unsigned char)16]))))))));
                    }

                }

                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) max((arr_9 [i_4] [i_4] [i_0]), (((/* implicit */short) (signed char)70)))))))), (min((max((18014398509479936LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_4])))), (((/* implicit */long long int) var_14)))))))));
            }
            for (unsigned char i_5 = ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_8 [i_0 + 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0])))) ? (((/* implicit */int) min((arr_8 [i_0 + 1] [i_0]), (arr_8 [i_0 + 1] [i_0])))) : (((/* implicit */int) max((arr_8 [i_0 - 1] [i_0 + 1]), (arr_8 [i_0 + 1] [i_0])))))))) - (111))/*1*/; i_5 < (unsigned char)19/*19*/; i_5 += ((((/* implicit */int) var_6)) - (189))/*4*/) 
            {
                arr_22 [i_0] [2LL] |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_0] [i_5]))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = ((((/* implicit */int) ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_5 [i_0] [16U])), (min((min((((/* implicit */unsigned int) arr_8 [(unsigned char)8] [(unsigned char)8])), (var_3))), (((/* implicit */unsigned int) min((arr_0 [i_5]), (arr_19 [14LL] [14LL])))))))))) - (1))/*0*/; i_6 < (unsigned char)21/*21*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_0] [i_5] [i_5 - 1]), (arr_20 [i_5] [i_0])))) ? (arr_21 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0 + 1])), (arr_6 [i_5] [i_0])))))))))) + (1))/*2*/) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0ULL/*0*/; i_7 < 21ULL/*21*/; i_7 += ((((/* implicit */unsigned long long int) var_5)) - (155ULL))/*2*/) 
                    {
                        arr_28 [i_0 - 1] [i_0 - 1] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (var_2) : (var_3)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_6]))))) : (1085350220U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_5 - 1])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
                        var_29 = ((/* implicit */unsigned char) var_11);
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = (unsigned char)0/*0*/; i_8 < (unsigned char)21/*21*/; i_8 += (unsigned char)2/*2*/) 
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned char) 2637827905U)))));
                        /* LoopSeq 1 */
                        for (short i_9 = (short)0/*0*/; i_9 < ((((/* implicit */int) ((/* implicit */short) arr_12 [i_8] [i_6] [i_5] [i_0]))) - (1))/*21*/; i_9 += ((((/* implicit */int) ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_5 - 1] [i_6])) ? (arr_24 [(unsigned short)2] [(unsigned char)3] [i_6] [(unsigned char)3]) : (arr_24 [i_5] [i_6] [i_5] [(signed char)3])))))) - (792))/*3*/) 
                        {
                            if (((/* implicit */_Bool) (~(((arr_11 [i_8] [18LL] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_5 + 1]))))))))
                            {
                                var_31 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
                                arr_36 [i_0] [i_0] [i_8] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_6] [(short)15] [i_5 + 2] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]))));
                                arr_37 [i_5] = ((/* implicit */signed char) ((short) arr_29 [i_0 + 1] [i_5] [i_0 + 1] [i_0 + 1]));
                                var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_5 + 1])) ? (arr_4 [i_0 - 1] [i_5 + 1]) : (arr_4 [i_0 - 1] [i_5 + 2])));
                            }

                            arr_38 [i_5] [i_5 + 1] [i_6] = ((/* implicit */int) ((((_Bool) var_18)) ? (arr_31 [i_0 - 1] [i_5 - 1] [i_5]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_33 = (-(((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_5] [i_0] = ((/* implicit */signed char) ((arr_30 [i_0] [i_5] [i_6] [i_6]) ? (arr_23 [i_0 + 1] [i_0 + 1] [i_5]) : (arr_31 [8U] [i_6] [i_5])));
                        }
                        if (((/* implicit */_Bool) (((~(0ULL))) >> (((/* implicit */int) arr_15 [i_5 - 1] [i_8])))))
                        {
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_13 [i_5 + 1] [i_8]))))));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_4 [i_0] [8U]))));
                        }

                        arr_40 [7ULL] [i_5] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0 - 1] [i_0 - 1]))) ? (arr_4 [i_0 - 1] [19ULL]) : (((/* implicit */unsigned int) (+(971260138))))));
                    }
                    arr_41 [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_0] [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_6]))) <= (var_17))))) : (max((((/* implicit */unsigned int) 1377794330)), (var_3)))))) ? ((-(((unsigned int) 1377794327)))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_23 [10ULL] [i_5] [i_5])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0 - 1] [i_5 + 1] [i_6] [i_6])))), (((((/* implicit */int) arr_19 [i_5] [i_6])) - (((/* implicit */int) arr_20 [i_6] [i_0])))))))));
                    var_36 ^= ((/* implicit */unsigned int) (((+((-(((/* implicit */int) arr_19 [i_6] [i_6])))))) == ((~(((/* implicit */int) max((((/* implicit */short) arr_19 [i_6] [i_5])), (arr_27 [i_0] [i_5]))))))));
                    arr_42 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) min((min(((+(arr_5 [5ULL] [(unsigned char)15]))), (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_20 [i_0] [i_5 - 1])) : (((/* implicit */int) (_Bool)1)))))), (((int) arr_23 [i_0 - 1] [i_5 - 1] [i_5]))));
                }
            }
            /* vectorizable */
            for (short i_10 = ((((/* implicit */int) ((/* implicit */short) ((unsigned long long int) arr_21 [i_0] [i_0 - 1] [i_0])))) + (2225))/*3*/; i_10 < ((((/* implicit */int) ((/* implicit */short) var_6))) - (174))/*19*/; i_10 += ((((/* implicit */int) ((/* implicit */short) ((((arr_4 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((arr_0 [i_0]) ? (18014398509479936LL) : (((/* implicit */long long int) arr_11 [0LL] [i_0] [(signed char)6])))) : (((/* implicit */long long int) ((arr_24 [i_0] [i_0] [14LL] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 1])))))))))) + (2050))/*2*/) 
            {
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (-(arr_26 [i_0 + 1] [i_10 - 3]))))));
                /* LoopSeq 1 */
                for (_Bool i_11 = (_Bool)0/*0*/; i_11 < ((((/* implicit */int) ((/* implicit */_Bool) var_9))) - (1))/*0*/; i_11 += (_Bool)1/*1*/) 
                {
                    arr_49 [i_0 - 1] [6LL] [6LL] [i_11] &= ((/* implicit */unsigned char) (-(((int) (_Bool)1))));
                    arr_50 [i_11] [i_10] [i_10] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                }
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_10 - 1]))))))));
            }
            var_39 = ((/* implicit */unsigned int) min((-6676955771325390041LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [14U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [(unsigned char)0] [i_0]))) : (4294967295U)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_9) : (var_14))) : (min((4U), (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0])))))))));
            arr_51 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_0] [i_0])), (((((/* implicit */_Bool) arr_31 [2] [i_0] [2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [12U]))))))), ((~((~(18014398509479936LL)))))));
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((max((971136100U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))) * (((arr_24 [i_0] [i_0] [i_0] [19]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [10] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [(unsigned short)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0]))) : (arr_46 [(unsigned char)12])))) ? (((((/* implicit */int) arr_47 [i_0])) / (arr_5 [i_0] [i_0]))) : (((/* implicit */int) ((signed char) var_9))))))));
        }

        var_41 |= ((/* implicit */unsigned char) max((((unsigned int) var_5)), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [3])) == (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(short)2] [i_0]))) : (arr_26 [i_0 + 1] [i_0 + 1])))))));
    }
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_14), (var_0))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23691)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13)))) : (((((_Bool) var_2)) ? ((+(var_14))) : (min((((/* implicit */unsigned int) var_13)), (var_3)))))));
    if (((/* implicit */_Bool) (-(max((min((var_14), (((/* implicit */unsigned int) var_19)))), (((/* implicit */unsigned int) min((((/* implicit */short) var_16)), ((short)3)))))))))
    {
        var_43 = ((/* implicit */short) var_18);
        /* LoopSeq 1 */
        for (long long int i_12 = ((((/* implicit */long long int) var_3)) - (4035688950LL))/*2*/; i_12 < ((((/* implicit */long long int) var_17)) - (8357265685564819017LL))/*20*/; i_12 += 3LL/*3*/) 
        {
            arr_55 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_54 [i_12]))) ? (((/* implicit */int) arr_54 [i_12])) : (((/* implicit */int) max((arr_54 [i_12 + 2]), (((/* implicit */short) arr_53 [i_12 - 1] [i_12 - 2])))))));
            arr_56 [i_12 + 3] = ((/* implicit */int) arr_54 [i_12]);
            arr_57 [i_12] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_12])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_12] [8]))) : (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_12])) ? (((/* implicit */int) arr_53 [i_12] [(_Bool)1])) : (((/* implicit */int) arr_54 [i_12 - 1]))))) : ((-(arr_52 [(unsigned short)3]))))) : (min((arr_52 [i_12 - 2]), (arr_52 [i_12])))));
            arr_58 [i_12] = ((/* implicit */unsigned int) ((short) 1443926425U));
            var_44 += ((/* implicit */_Bool) min((((unsigned long long int) arr_53 [i_12] [i_12 + 1])), (min((((unsigned long long int) arr_54 [i_12])), ((-(var_11)))))));
        }
        var_45 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))));
    }
    else
    {
        var_46 = ((/* implicit */_Bool) max((var_46), ((!(((/* implicit */_Bool) min(((~(var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))))));
        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) max((((((/* implicit */_Bool) ((signed char) var_14))) ? (((4503599627370495ULL) >> (((var_1) - (4518637927165804315ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2387246641964455155LL)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_5)), (var_9))), (((/* implicit */unsigned int) var_7))))))))));
    }

    var_48 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-83)))), (-1377794322))) != (((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_16))))) >> ((((~(((/* implicit */int) var_4)))) + (19)))))));
}
