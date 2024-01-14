/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3370317257
Invocation: ./yarpgen --std=c -o out/210
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
void test(signed char var_1, unsigned char var_9, signed char var_10, signed char var_11, unsigned long long int var_12, unsigned long long int var_16, int zero, unsigned char arr_1 [12] ) {
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2ULL/*2*/; i_0 < ((((/* implicit */unsigned long long int) var_10)) - (18446744073709551558ULL))/*11*/; i_0 += ((((/* implicit */unsigned long long int) var_1)) - (18446744073709551550ULL))/*3*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) var_9)) - (96LL))/*1*/; i_1 < ((((/* implicit */long long int) var_16)) + (733672461628109230LL))/*8*/; i_1 += 1LL/*1*/) 
        {
            {
                var_20 |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_21 = ((/* implicit */long long int) (signed char)-26);
                var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)-60))));
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) var_12);
    var_24 = var_11;
    var_25 = ((/* implicit */long long int) (signed char)-65);
    var_26 *= ((/* implicit */signed char) max((0ULL), (((/* implicit */unsigned long long int) max(((signed char)65), ((signed char)127))))));
}
