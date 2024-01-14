/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2969084910
Invocation: ./yarpgen --std=c -o out/621
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
void test(int var_0, short var_2, unsigned long long int var_4, unsigned int var_6, unsigned char var_8, signed char var_10, short var_11, unsigned int var_13, unsigned int var_14, int zero, unsigned int arr_0 [21] , int arr_1 [21] [21] , unsigned int arr_2 [21] [21] , unsigned short arr_5 [21] [21] ) {
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_13))) - (47455))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (129))/*21*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) var_13))) - (47453))/*2*/) 
    {
        for (unsigned int i_1 = 2U/*2*/; i_1 < 19U/*19*/; i_1 += ((var_13) - (1004190046U))/*1*/) 
        {
            {
                var_16 *= ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)65535))))))), (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (((unsigned int) var_4))))));
                var_17 *= ((((/* implicit */_Bool) (unsigned short)21820)) ? (((((arr_2 [i_0] [i_1]) << (((arr_0 [i_1]) - (776954149U))))) >> (((-2028969621) + (2028969650))))) : (((/* implicit */unsigned int) 2028969620)));
                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) arr_1 [i_1 - 2] [i_1 - 2])) : (((((/* implicit */_Bool) 4127722202932543012ULL)) ? (var_14) : (var_6)))))) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) var_11)), (var_0)))));
            }
        } 
    } 
}
