/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3275661644
Invocation: ./yarpgen --std=c -o out/319
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
void test(unsigned short var_0, unsigned short var_1, signed char var_5, signed char var_7, long long int var_10, unsigned short var_12, signed char var_13, int var_14, int zero, signed char arr_1 [11] [11] , unsigned long long int arr_4 [11] [11] [11] , int arr_8 [11] , int arr_10 [11] ) {
    var_15 = ((/* implicit */int) max((var_15), (max((((/* implicit */int) var_5)), (508448345)))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) min((var_0), (var_12)))) - (14852)))))) : (((unsigned int) max((((/* implicit */int) var_13)), (var_14)))))))));
    /* LoopSeq 1 */
    for (int i_0 = ((((/* implicit */int) var_13)) + (84))/*0*/; i_0 < ((((/* implicit */int) (unsigned short)10366)) - (10355))/*11*/; i_0 += ((((/* implicit */int) var_1)) - (13970))/*2*/) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = ((((/* implicit */long long int) var_5)) + (41LL))/*2*/; i_1 < ((((/* implicit */long long int) var_0)) - (14859LL))/*9*/; i_1 += 2LL/*2*/) 
        {
            for (int i_2 = ((var_14) - (643922601))/*0*/; i_2 < ((((/* implicit */int) var_10)) + (2104264949))/*11*/; i_2 += ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)10366)) : (((/* implicit */int) (unsigned short)54695)))) - (10365))/*1*/) 
            {
                for (unsigned short i_3 = (unsigned short)2/*2*/; i_3 < (unsigned short)9/*9*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned short) max((((159169211611978279ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 2] [i_1])) - (((/* implicit */int) var_7))))))))) - (39462))/*1*/) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) ((unsigned short) 159169211611978279ULL))) ? (arr_10 [i_1 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_14))))))));
                        arr_11 [i_0] [i_2] [10LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_14)), (159169211611978279ULL)));
                        var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_4 [i_1 + 1] [5LL] [i_1 + 1])))));
                        var_19 += ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)55169))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)10364))))))) : (arr_4 [i_0] [2U] [2ULL]));
                        var_20 = ((/* implicit */long long int) arr_8 [i_2]);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) var_13);
    }
}
