/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 159891124
Invocation: ./yarpgen --std=c -o out/982
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
void test(unsigned int var_1, int var_2, signed char var_3, unsigned short var_5, int var_6, signed char var_7, int var_9, int zero, unsigned short arr_2 [20] , int arr_3 [20] [20] , int arr_4 [20] [20] , int arr_5 [20] [20] ) {
    var_10 = var_1;
    var_11 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_3))) - (65427))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_9))) - (18079))/*19*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) var_9))) - (18096))/*2*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) var_2))) + (78))/*2*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) min((arr_2 [i_0]), ((unsigned short)2767))))), (11U))))) + (66))/*17*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_5))) + (114))/*4*/) 
        {
            {
                var_12 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64374))) : (1879048192U)))) ? (((/* implicit */int) (unsigned short)62768)) : (((/* implicit */int) (signed char)112)))), (((((((/* implicit */_Bool) (unsigned short)36990)) ? (((/* implicit */int) (unsigned short)124)) : (((/* implicit */int) (unsigned short)2767)))) << (((((arr_4 [i_1 + 3] [i_0 - 1]) + (365666359))) - (23)))))));
                var_13 = ((/* implicit */int) max((min((8U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4174912523U)) ? (((/* implicit */int) (unsigned short)7316)) : (arr_5 [i_0] [i_1])))))), (((/* implicit */unsigned int) (unsigned short)65411))));
            }
        } 
    } 
    var_14 = var_7;
}
