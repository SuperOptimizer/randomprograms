/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1160904755
Invocation: ./yarpgen --std=c -o out/378
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
void test(unsigned long long int var_0, _Bool var_1, int var_2, int var_3, _Bool var_4, long long int var_5, _Bool var_7, int var_8, _Bool var_9, long long int var_10, int zero, unsigned short arr_0 [13] [13] , _Bool arr_1 [13] , _Bool arr_6 [23] ) {
    var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((int) ((((/* implicit */unsigned long long int) var_10)) - (var_0)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))))));
    var_12 = ((/* implicit */unsigned long long int) ((((int) var_5)) - (((/* implicit */int) ((var_2) != (((/* implicit */int) ((_Bool) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) 9223372036854775791LL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2LL/*2*/; i_0 < ((((/* implicit */long long int) var_1)) + (10LL))/*11*/; i_0 += 1LL/*1*/) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (((var_7) ? (var_5) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) ^ (((/* implicit */int) (unsigned char)88)))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 2])))))));
    }
    for (long long int i_1 = 2LL/*2*/; i_1 < ((((/* implicit */long long int) var_1)) + (10LL))/*11*/; i_1 += 1LL/*1*/) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((var_8) >= (((((/* implicit */int) var_4)) >> (((((/* implicit */int) (signed char)112)) - (110)))))));
        var_16 = ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (long long int i_2 = 0LL/*0*/; i_2 < 23LL/*23*/; i_2 += 2LL/*2*/) 
    {
        if (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2])))))
        {
            var_17 = ((/* implicit */int) max((var_17), (1433190819)));
            var_18 = ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
        }

        var_19 &= ((/* implicit */short) (+(((int) arr_6 [i_2]))));
    }
}
