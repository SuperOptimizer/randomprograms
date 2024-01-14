/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3627218637
Invocation: ./yarpgen --std=c -o out/19
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
void test(signed char var_4, long long int var_7, unsigned char var_8, _Bool var_10, short var_11, int zero, int arr_1 [21] ) {
    var_13 = ((/* implicit */short) max((var_13), (var_11)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1U/*1*/; i_0 < 18U/*18*/; i_0 += ((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_10)), (max((var_8), (var_8)))))) + (4U))/*4*/) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_4);
        var_14 = ((/* implicit */long long int) ((_Bool) arr_1 [i_0]));
        var_15 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-71)), ((unsigned char)193))))));
    }
    var_16 -= ((/* implicit */signed char) var_7);
}
