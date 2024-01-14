/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3187044104
Invocation: ./yarpgen --std=c -o out/961
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
void test(unsigned int var_0, int var_1, int var_3, long long int var_4, signed char var_5, signed char var_7, unsigned int var_8, long long int var_9, signed char var_10, int zero, int arr_1 [17] , unsigned long long int arr_3 [17] [17] [17] , signed char arr_6 [17] [17] [17] [17] ) {
    var_11 = (~(var_3));
    /* LoopNest 3 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_5))) - (65497))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_3))) - (29584))/*16*/; i_0 += (unsigned short)3/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) var_10)) + (65))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_9))) + (76))/*17*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (3))/*3*/) 
        {
            for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_3 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) 491080861))))))) ? (((((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))) & (((/* implicit */unsigned int) (+(var_1)))))) : ((+(3887305058U))))))) - (1))/*0*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) var_0))/*1*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) var_7))/*1*/) 
            {
                {
                    var_12 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_6 [12U] [i_1] [i_2] [i_2])), (max((((15413518191517006570ULL) << (((var_4) - (7005370698436979386LL))))), (((/* implicit */unsigned long long int) var_0))))));
                    var_13 -= ((/* implicit */_Bool) ((signed char) min((((((/* implicit */_Bool) 3033225882192545035ULL)) ? (3033225882192545060ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((int) arr_3 [(signed char)2] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
}
