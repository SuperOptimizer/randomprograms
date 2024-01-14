/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3172405956
Invocation: ./yarpgen --std=c -o out/224
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
void test(_Bool var_0, unsigned long long int var_2, long long int var_3, unsigned long long int var_4, unsigned long long int var_5, long long int var_6, unsigned short var_7, unsigned long long int var_10, _Bool var_11, unsigned int var_12, unsigned long long int var_13, unsigned char var_14, int zero, signed char arr_2 [13] [13] , long long int arr_6 [13] ) {
    var_15 = (((!(((((/* implicit */long long int) ((/* implicit */int) var_11))) < (var_6))))) ? (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (var_10) : (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (max((1048575ULL), (((/* implicit */unsigned long long int) ((_Bool) var_0))))));
    var_16 = ((var_11) ? (((((/* implicit */unsigned long long int) ((unsigned int) var_13))) ^ (min((var_5), (var_2))))) : (var_4));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((var_4), (7395431326305229079ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) var_14))) : (((((/* implicit */_Bool) 3888462478374416762ULL)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))))) : (var_4)));
    var_18 -= ((/* implicit */signed char) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3ULL/*3*/; i_0 < ((var_2) - (11694026077080028157ULL))/*12*/; i_0 += 3ULL/*3*/) 
    {
        for (signed char i_1 = ((/* implicit */int) ((/* implicit */signed char) var_0))/*0*/; i_1 < (signed char)13/*13*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (8))/*1*/) 
        {
            for (unsigned int i_2 = ((var_12) - (1526324275U))/*1*/; i_2 < ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)158))))) - (4294967126U))/*11*/; i_2 += 3U/*3*/) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((9462161393793931771ULL) >= (((unsigned long long int) (_Bool)1))))) != (((/* implicit */int) min((arr_2 [i_2 - 1] [i_0 - 1]), (((/* implicit */signed char) var_11)))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1])))))))), (((/* implicit */unsigned long long int) max((arr_6 [i_2 + 1]), (arr_6 [i_2 + 2])))))))));
                    var_21 = ((/* implicit */long long int) arr_2 [i_0 - 2] [i_1]);
                }
            } 
        } 
    } 
}
