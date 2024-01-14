/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 382312219
Invocation: ./yarpgen --std=c -o out/600
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
void test(unsigned long long int var_0, _Bool var_3, unsigned long long int var_4, long long int var_5, signed char var_7, signed char var_8, _Bool var_9, unsigned long long int var_10, int zero, unsigned long long int arr_0 [18] , _Bool arr_3 [18] [18] [18] , _Bool arr_6 [18] [18] [18] [18] , signed char arr_7 [18] [18] [18] ) {
    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_8))))) ? (min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)12)))), ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max((var_7), (((/* implicit */signed char) (_Bool)0)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_5)) - (10385881087709200217ULL))/*2*/; i_0 < ((((/* implicit */unsigned long long int) var_5)) - (10385881087709200202ULL))/*17*/; i_0 += (((-((((+(var_4))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))))) - (1848407109873038282ULL))/*3*/) 
    {
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_7)) - (18446744073709551597ULL))/*1*/; i_1 < 15ULL/*15*/; i_1 += ((var_10) - (10868852008069608432ULL))/*3*/) 
        {
            for (long long int i_2 = 3LL/*3*/; i_2 < ((((/* implicit */long long int) var_9)) + (16LL))/*16*/; i_2 += ((((/* implicit */long long int) var_0)) - (9172565147024918268LL))/*4*/) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_1 + 1]) : (min((((24ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_8))))) ^ (((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (6886500363448065997LL))))));
                }
            } 
        } 
    } 
}
