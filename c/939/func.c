/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3278189173
Invocation: ./yarpgen --std=c -o out/939
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
void test(unsigned char var_0, _Bool var_1, signed char var_2, _Bool var_3, long long int var_4, int var_5, long long int var_6, short var_7, long long int var_8, unsigned short var_9, int var_11, int zero, unsigned char arr_1 [17] [17] , unsigned int arr_4 [17] , short arr_7 [17] [17] , unsigned short arr_8 [17] [17] [17] [17] , unsigned short arr_10 [17] [17] [17] [17] [17] , long long int arr_11 [17] [17] [17] [17] [17] [17] [17] , short arr_16 [17] [17] [17] [17] [17] , long long int arr_20 [17] [17] [17] [17] [17] [17] [17] ) {
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < (unsigned char)17/*17*/; i_0 += (unsigned char)2/*2*/) 
    {
        var_12 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)0)))) + (((/* implicit */int) ((var_6) < (var_6))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
    }
    if (((/* implicit */_Bool) (+(var_8))))
    {
        var_13 = ((/* implicit */unsigned int) ((var_4) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)0))))) ? (((unsigned int) 0U)) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        /* LoopNest 3 */
        for (short i_1 = (short)0/*0*/; i_1 < (short)17/*17*/; i_1 += (short)2/*2*/) 
        {
            for (short i_2 = ((((/* implicit */int) var_7)) + (5880))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */short) 4294967292U))) + (21))/*17*/; i_2 += (short)2/*2*/) 
            {
                for (unsigned short i_3 = (unsigned short)4/*4*/; i_3 < ((((/* implicit */int) var_9)) - (36134))/*16*/; i_3 += (unsigned short)2/*2*/) 
                {
                    {
                        /* LoopNest 2 */
                        for (_Bool i_4 = ((((/* implicit */int) ((/* implicit */_Bool) var_11))) - (1))/*0*/; i_4 < (_Bool)1/*1*/; i_4 += ((/* implicit */int) ((/* implicit */_Bool) var_4))/*1*/) 
                        {
                            for (long long int i_5 = 0LL/*0*/; i_5 < 17LL/*17*/; i_5 += 2LL/*2*/) 
                            {
                                {
                                    if (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [(signed char)14] [i_3 - 3] [i_3 - 3] [i_3])) ? (((/* implicit */int) arr_10 [i_1] [i_5] [i_3 - 4] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_3 - 1] [i_4] [i_2]))))), (((((/* implicit */_Bool) 0U)) ? (4294967270U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))
                                    {
                                        var_14 = (short)0;
                                        if (((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : ((~(((/* implicit */int) max(((short)-1), (arr_7 [i_1] [i_1])))))))))
                                        {
                                            var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (short)-15)))) ? (min((((((/* implicit */_Bool) (short)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), ((+(15LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (arr_4 [(signed char)16]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) && (((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 4] [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 2] [(unsigned char)10]))))))));
                                            arr_13 [i_1] [i_1] [i_3] [i_1] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_8 [i_3 - 4] [(signed char)4] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2])))) : ((+(((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0))))))));
                                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (0ULL)));
                                        }

                                        var_17 += ((/* implicit */unsigned short) -5LL);
                                        arr_14 [7U] [i_2] [i_2] [i_3 - 3] [i_5] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)0)) : (4)))) % ((+(18446744073709551615ULL)))))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (var_4) : (0LL)))) ? (((long long int) (signed char)0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_3] [i_4])))))))));
                                    }

                                    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) arr_8 [i_3 - 4] [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                                    var_19 &= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) var_4))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))));
                                }
                            } 
                        } 
                        /* LoopNest 2 */
                        for (unsigned int i_6 = 0U/*0*/; i_6 < 17U/*17*/; i_6 += 2U/*2*/) 
                        {
                            for (unsigned short i_7 = (unsigned short)0/*0*/; i_7 < (unsigned short)17/*17*/; i_7 += (unsigned short)3/*3*/) 
                            {
                                {
                                    arr_21 [i_3 - 4] [i_7] [i_6] [i_3 - 4] [12LL] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)0))))) ? (min((0LL), (((/* implicit */long long int) (signed char)0)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (max((0U), (((/* implicit */unsigned int) (signed char)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_7]))))))));
                                }
                            } 
                        } 
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_2] [i_1])), (arr_20 [i_1] [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_3 - 4] [i_3] [i_3 + 1])))) ? (((var_6) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_16 [i_1] [i_3 - 1] [i_3] [i_1] [i_3 - 3])), (((((/* implicit */_Bool) (unsigned short)0)) ? (0U) : (4294967286U))))))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned char) ((0) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
    }

}
