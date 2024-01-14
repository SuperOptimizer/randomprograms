/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1376258359
Invocation: ./yarpgen --std=c -o out/607
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
void test(int var_0, unsigned int var_1, unsigned int var_3, int var_5, int var_7, unsigned int var_8, unsigned long long int var_9, unsigned char var_11, unsigned char var_14, int zero, unsigned char arr_0 [21] , _Bool arr_1 [21] , unsigned int arr_2 [21] [21] [21] , _Bool arr_3 [21] [21] , unsigned short arr_4 [21] [21] [21] [21] , _Bool arr_5 [21] [21] [21] [21] , int arr_8 [21] , _Bool arr_9 [21] [21] [21] [21] [21] [21] , _Bool arr_12 [21] [21] [21] [21] , long long int arr_17 [21] [21] [21] [21] [21] [21] [21] , short arr_21 [21] , unsigned int arr_22 [21] ) {
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_1))) + (26307))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_11))) - (13))/*21*/; i_0 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned int) var_8))))) ? (((((1U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) var_0)))))) + (1))/*1*/) 
    {
        for (_Bool i_1 = ((/* implicit */int) ((/* implicit */_Bool) (~(((unsigned int) -1LL)))))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */_Bool) var_3))) - (1))/*0*/; i_1 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (arr_1 [i_0]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (0U))))))/*1*/) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2/*2*/; i_2 < 20/*20*/; i_2 += 3/*3*/) 
                {
                    for (signed char i_3 = (signed char)3/*3*/; i_3 < ((((/* implicit */int) ((/* implicit */signed char) arr_0 [i_0]))) + (124))/*17*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) var_9))) + (110))/*2*/) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */unsigned short) -852931682);
                            if (arr_9 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_2 - 1] [i_3] [i_3 + 1])
                            {
                                var_16 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned char) var_5)))));
                                arr_11 [(signed char)20] = ((/* implicit */signed char) 1LL);
                            }
                            else
                            {
                                /* LoopSeq 2 */
                                /* vectorizable */
                                for (short i_4 = ((((/* implicit */int) ((/* implicit */short) var_11))) - (34))/*0*/; i_4 < (short)21/*21*/; i_4 += (short)2/*2*/) 
                                {
                                    arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3 + 3] [i_4] = ((/* implicit */unsigned char) ((signed char) arr_2 [i_1 + 1] [i_2 - 1] [i_3 + 4]));
                                    arr_15 [i_0] [i_1 + 1] [19LL] = (~(((/* implicit */int) (unsigned short)65535)));
                                }
                                /* vectorizable */
                                for (unsigned long long int i_5 = 0ULL/*0*/; i_5 < 21ULL/*21*/; i_5 += 3ULL/*3*/) 
                                {
                                    if (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_2 + 1] [i_3 - 2])))))
                                    {
                                        arr_18 [18U] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_2] [i_2])) <= (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1]))));
                                        arr_19 [i_0] = ((/* implicit */unsigned char) (~(4294967295U)));
                                        var_17 = ((long long int) arr_3 [i_2] [i_5]);
                                    }

                                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) var_7)))));
                                }
                                arr_20 [i_0] [i_2] = ((/* implicit */unsigned int) (~(arr_17 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_1 + 1] [19U])));
                            }

                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0U/*0*/; i_6 < ((2463059006U) - (2463058985U))/*21*/; i_6 += ((((/* implicit */unsigned int) var_14)) - (2U))/*3*/) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6]))) * (arr_22 [i_6])));
                    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1 + 1] [i_0])))) ? (((/* implicit */long long int) arr_8 [i_0])) : (((long long int) arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(4294967277U))))));
                }
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 547727765))));
                var_23 *= ((_Bool) -852931685);
                arr_25 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(_Bool)1]))) ? (((/* implicit */unsigned int) (+((-2147483647 - 1))))) : (1831908294U)));
            }
        } 
    } 
}
