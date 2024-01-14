/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3461767943
Invocation: ./yarpgen --std=c -o out/181
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
void test(unsigned char var_1, short var_3, unsigned char var_5, int var_6, unsigned int var_10, short var_11, _Bool var_13, unsigned char var_14, int var_15, int zero, unsigned int arr_0 [15] [15] , unsigned char arr_1 [15] , short arr_2 [15] , unsigned long long int arr_3 [15] , short arr_4 [15] ) {
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) var_15))))) : (((((/* implicit */_Bool) var_14)) ? (-264065982) : (((/* implicit */int) (short)19437)))))) : (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1/*1*/; i_0 < ((((int) var_11)) + (12461))/*11*/; i_0 += ((((/* implicit */int) (!(((((((/* implicit */_Bool) (unsigned char)229)) || (((/* implicit */_Bool) 11587536689731582991ULL)))) || (((/* implicit */_Bool) var_10))))))) + (3))/*3*/) 
    {
        for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_3))) - (94))/*0*/; i_1 < ((((/* implicit */int) var_5)) - (105))/*15*/; i_1 += (unsigned char)4/*4*/) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) & (arr_0 [(signed char)7] [i_1])))) : (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (18446744073709551615ULL)))));
                var_19 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) arr_0 [i_0 + 4] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))))));
                var_20 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((11115091069189615958ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)13]))))))) * (arr_3 [i_0 + 3]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [2ULL])) - (((/* implicit */int) arr_4 [i_0 - 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_3);
    var_22 = ((/* implicit */unsigned short) var_13);
}
