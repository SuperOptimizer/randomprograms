/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2416915306
Invocation: ./yarpgen --std=c -o out/998
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
void test(unsigned short var_1, short var_2, short var_3, unsigned short var_4, unsigned short var_5, short var_6, short var_8, short var_9, _Bool var_10, unsigned short var_11, unsigned short var_12, unsigned short var_14, short var_15, unsigned short var_16, unsigned char var_17, short var_18, int zero, signed char arr_0 [16] , short arr_1 [16] [16] , short arr_2 [16] [16] , short arr_3 [16] [16] [16] , unsigned short arr_4 [16] [16] , unsigned short arr_5 [16] , unsigned char arr_6 [16] , _Bool arr_7 [16] [16] [16] , short arr_8 [16] [16] [16] [16] , signed char arr_9 [16] [16] [16] [16] , _Bool arr_10 [16] [16] , signed char arr_11 [16] [16] [16] [16] [16] , signed char arr_12 [16] [16] [16] [16] [16] , short arr_13 [16] [16] [16] [16] [16] , unsigned short arr_14 [16] [16] [16] [16] , signed char arr_15 [16] [16] [16] [16] [16] ) {
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) (unsigned short)48368)) - (48368ULL))/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_10)) + (16ULL))/*16*/; i_0 += 2ULL/*2*/) 
    {
        if (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))))
        {
            var_19 *= ((/* implicit */short) var_17);
            /* LoopSeq 1 */
            for (unsigned int i_1 = ((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)61472), ((unsigned short)17182))))) == (max((3810904255U), (3810904255U)))))) + (1U))/*1*/; i_1 < ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) + (14U))/*14*/; i_1 += ((((/* implicit */unsigned int) var_5)) - (22536U))/*4*/) 
            {
                var_20 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_1 [i_1 - 1] [(short)4]))))));
                /* LoopNest 2 */
                for (long long int i_2 = ((((/* implicit */long long int) var_9)) + (728LL))/*0*/; i_2 < ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65280))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0])) / (((/* implicit */int) arr_4 [i_0] [i_0])))) : (min(((((_Bool)1) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_3)))), ((+(((/* implicit */int) arr_0 [i_1]))))))))) + (15LL))/*16*/; i_2 += ((((/* implicit */long long int) var_4)) - (64108LL))/*1*/) 
                {
                    for (_Bool i_3 = ((((/* implicit */int) ((/* implicit */_Bool) var_12))) - (1))/*0*/; i_3 < ((/* implicit */int) ((/* implicit */_Bool) var_9))/*1*/; i_3 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = ((((/* implicit */int) ((/* implicit */unsigned short) ((unsigned char) (unsigned char)31)))) - (31))/*0*/; i_4 < (unsigned short)16/*16*/; i_4 += (unsigned short)3/*3*/) 
                            {
                                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) max(((unsigned short)48365), (((/* implicit */unsigned short) (unsigned char)225))))) : (((/* implicit */int) arr_10 [i_0] [i_4]))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))))));
                                var_22 = arr_8 [i_1] [i_2] [i_3] [i_4];
                                var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_2] [(unsigned short)5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_2])) || (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_1])))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48360)) ? (10364668838167708781ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17148)))))) || (((/* implicit */_Bool) ((16732259849563248615ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) & (((/* implicit */int) arr_5 [i_0])))))))))))));
                            }
                            for (short i_5 = ((((/* implicit */int) ((/* implicit */short) var_11))) - (19099))/*0*/; i_5 < (short)16/*16*/; i_5 += ((((/* implicit */int) ((/* implicit */short) ((((arr_7 [i_0] [i_0] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2811))) : (3810904236U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [8ULL] [6LL] [i_2]))))))) + (4))/*4*/) 
                            {
                                if (((/* implicit */_Bool) arr_12 [i_5] [i_1] [i_2] [i_2] [i_5]))
                                {
                                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) arr_12 [i_0] [i_3] [(unsigned char)0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_6 [i_5])) : ((~(((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3]))))))))));
                                    arr_16 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)0))));
                                    if (((/* implicit */_Bool) (unsigned short)48368))
                                    {
                                        arr_17 [i_3] [i_5] [i_2] [i_3] [(unsigned short)3] [i_1] = var_3;
                                        var_26 = ((/* implicit */short) arr_6 [i_1]);
                                        arr_18 [i_1] [i_1] [i_1] [i_1] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_5] [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))))) : (((/* implicit */int) var_6))));
                                    }
                                    else
                                    {
                                        var_27 ^= ((/* implicit */short) ((((/* implicit */int) (short)13177)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 3810904255U)))))));
                                        var_28 = ((/* implicit */unsigned int) ((((arr_7 [i_0] [i_0] [i_1 + 1]) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */int) arr_7 [15LL] [i_0] [i_1 + 2])) ^ (((/* implicit */int) arr_1 [i_0] [i_1])))) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1]))))));
                                    }

                                }

                                var_29 = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_2] [9ULL] [i_5]);
                                if (((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((((arr_10 [i_0] [i_0]) ? (max((((/* implicit */unsigned int) (unsigned char)7)), (484063041U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)26061), (((/* implicit */short) arr_11 [i_5] [i_5] [i_5] [(unsigned char)8] [i_5])))))))) - (26035U))))))
                                {
                                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (unsigned char)63)) : (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32774))))))))));
                                    var_31 = ((/* implicit */long long int) ((short) ((unsigned long long int) arr_11 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                                    var_32 = ((/* implicit */short) min((var_32), (var_15)));
                                }
                                else
                                {
                                    var_33 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_5])), (min((((/* implicit */unsigned long long int) var_16)), (10364668838167708781ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-26079)))))));
                                    var_34 *= ((/* implicit */unsigned long long int) (-(-2250312493494832495LL)));
                                }

                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (unsigned short)33334)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535))))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) min((arr_2 [i_1] [i_1]), (((/* implicit */short) ((signed char) var_10))))))));
                                if (((/* implicit */_Bool) (~(((((/* implicit */int) arr_13 [i_1] [(_Bool)1] [i_1 - 1] [i_1] [i_3])) + (((/* implicit */int) arr_10 [i_0] [i_0])))))))
                                {
                                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((short) (signed char)0)))) / (((/* implicit */int) ((signed char) arr_6 [i_1])))));
                                    var_37 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                                }
                                else
                                {
                                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_4 [i_1] [i_5]))));
                                    var_39 = ((/* implicit */unsigned int) var_5);
                                }

                            }
                            var_40 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned short) (unsigned char)31))))), ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))))) < (((unsigned int) (~(2303591209400008704LL))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) arr_0 [i_1 + 2]))))) ? (((/* implicit */int) min(((unsigned short)23856), (((/* implicit */unsigned short) (unsigned char)2))))) : ((~(((/* implicit */int) (_Bool)1))))));
            }
        }

        if (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0]))))) : (((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))))) ^ (1U))))
        {
            var_43 = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) (short)-26206)))))) <= (((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_0]))))));
            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0] [i_0])))))));
        }

        var_45 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) max(((short)3316), ((short)-20932)))) : (((/* implicit */int) var_10))))));
    }
    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) var_5))));
}
