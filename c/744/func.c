/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1116080842
Invocation: ./yarpgen --std=c -o out/744
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
void test(unsigned long long int var_0, signed char var_1, unsigned int var_2, int var_3, unsigned int var_4, signed char var_5, unsigned char var_6, unsigned int var_7, unsigned char var_10, int zero, unsigned char arr_0 [25] , unsigned char arr_1 [25] , unsigned int arr_3 [25] [25] [25] ) {
    var_11 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_5)) - (109U))/*0*/; i_0 < ((((/* implicit */unsigned int) var_1)) - (84U))/*25*/; i_0 += ((var_2) - (1216956389U))/*1*/) 
    {
        for (unsigned int i_1 = ((((/* implicit */unsigned int) var_10)) - (61U))/*0*/; i_1 < ((((/* implicit */unsigned int) var_1)) - (84U))/*25*/; i_1 += 2U/*2*/) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) max(((+((+(arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_1 [22ULL]))));
                arr_5 [14] [(signed char)0] = ((/* implicit */_Bool) max((max(((~(var_3))), (((var_3) ^ (var_3))))), ((+((+(((/* implicit */int) arr_0 [2]))))))));
                arr_6 [3] [3] [9ULL] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)(-32767 - 1)))));
                arr_7 [i_1] [(short)9] [i_1] = ((/* implicit */unsigned long long int) min((max((arr_3 [(unsigned char)16] [10LL] [i_0]), (((/* implicit */unsigned int) arr_1 [1])))), (max((max((arr_3 [(short)17] [14LL] [14LL]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)10958)) : (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_12 = max((((int) max((var_4), (((/* implicit */unsigned int) var_6))))), ((+((~(((/* implicit */int) (short)32767)))))));
    var_13 = ((/* implicit */unsigned char) var_7);
}
