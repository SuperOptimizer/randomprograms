/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3246689992
Invocation: ./yarpgen --std=c -o out/242
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
void test(short var_3, _Bool var_4, unsigned int var_10, int zero, signed char arr_0 [13] [13] ) {
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned char)145)), (2305843009213685760ULL)))))) ? (-2682008377597362946LL) : (((/* implicit */long long int) var_10))));
    var_14 ^= ((/* implicit */unsigned int) (+(max((min((((/* implicit */unsigned long long int) 9154016665002825317LL)), (1125899906842622ULL))), (((/* implicit */unsigned long long int) (unsigned char)177))))));
    var_15 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_10))) - (14))/*1*/; i_0 < (signed char)10/*10*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_3))) - (50))/*3*/) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0 + 2] [i_0])), (-9223372036854775786LL))))));
        var_16 = ((/* implicit */short) max((min((1660242125), (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((9117763926476910022LL), (((/* implicit */long long int) (signed char)6))))))))));
    }
}
