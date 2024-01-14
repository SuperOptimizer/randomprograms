/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1417613904
Invocation: ./yarpgen --std=c -o out/115
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
void test(signed char var_0, unsigned int var_1, long long int var_3, unsigned char var_5, unsigned char var_6, unsigned long long int var_9, short var_10, _Bool var_14, unsigned short var_16, int zero, short arr_0 [16] [16] , unsigned char arr_1 [16] , int arr_2 [16] , unsigned long long int arr_5 [16] [16] , unsigned char arr_8 [16] [16] [16] [16] , long long int arr_12 [16] [16] [16] [16] [16] ) {
    var_17 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) var_5)), (var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) == (2147483636))))) + (4))/*4*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (95))/*14*/; i_0 += (unsigned char)3/*3*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) var_9))) - (27757))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) (signed char)35))) - (19))/*16*/; i_1 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */int) var_6)) == (max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (short)-6666)), (1432921651))))))))) + (2))/*2*/) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                if (((/* implicit */_Bool) arr_1 [i_1]))
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)15888));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min((var_10), (arr_0 [i_0] [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_2 = 0LL/*0*/; i_2 < 16LL/*16*/; i_2 += 2LL/*2*/) 
                    {
                        for (unsigned int i_3 = ((/* implicit */unsigned int) var_14)/*1*/; i_3 < ((((/* implicit */unsigned int) var_6)) - (97U))/*12*/; i_3 += ((((/* implicit */unsigned int) (((~(((((/* implicit */unsigned long long int) var_3)) ^ (arr_5 [i_1] [(unsigned short)12]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) var_0)), (arr_8 [(unsigned short)12] [i_0 + 1] [i_1] [(unsigned short)12]))))))))) - (1846000231U))/*2*/) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) 3679212061005723060LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 3621891768701284441LL))))) % (((/* implicit */int) arr_1 [i_1]))))) : (min((var_1), (((/* implicit */unsigned int) arr_2 [i_2]))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((signed char) max(((unsigned short)52350), ((unsigned short)14293)))))));
                                var_22 = ((/* implicit */unsigned int) arr_12 [i_3] [i_0] [i_2] [i_0] [i_0]);
                            }
                        } 
                    } 
                }

            }
        } 
    } 
}
