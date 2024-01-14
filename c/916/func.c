/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2321679646
Invocation: ./yarpgen --std=c -o out/916
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
void test(unsigned long long int var_1, unsigned long long int var_3, signed char var_7, int var_9, unsigned short var_10, _Bool var_12, int var_13, int zero, unsigned int arr_0 [20] , int arr_1 [20] [20] , unsigned int arr_2 [20] [20] [20] , long long int arr_4 [20] [20] [20] , signed char arr_5 [20] [20] [20] [20] ) {
    var_20 -= ((/* implicit */long long int) ((int) var_13));
    var_21 -= ((/* implicit */int) var_1);
    var_22 *= ((/* implicit */unsigned int) var_10);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0U/*0*/; i_0 < ((((/* implicit */unsigned int) var_1)) - (3031573097U))/*20*/; i_0 += ((((/* implicit */unsigned int) (-((((_Bool)1) ? (1649046367) : (((/* implicit */int) (_Bool)1))))))) - (2645920926U))/*3*/) 
    {
        for (short i_1 = (short)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_1))) - (8809))/*20*/; i_1 += ((((/* implicit */int) ((/* implicit */short) (+(16777215))))) + (4))/*3*/) 
        {
            for (int i_2 = 0/*0*/; i_2 < ((((/* implicit */int) var_1)) + (1263394199))/*20*/; i_2 += ((((/* implicit */int) min((((long long int) ((long long int) arr_2 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2831518003U)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (_Bool)1)))))))) - (167))/*4*/) 
            {
                {
                    var_24 *= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))));
                    var_26 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2]))) : (var_3))) != (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))));
                    var_27 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((max((arr_2 [i_0] [i_1] [i_2]), (arr_2 [i_0] [i_1] [i_2]))) - (1836411301U)))));
                }
            } 
        } 
    } 
}
