/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1538554611
Invocation: ./yarpgen --std=c -o out/322
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
void test(unsigned short var_3, int var_7, unsigned char var_8, int var_9, signed char var_10, int zero) {
    var_11 -= ((/* implicit */_Bool) ((signed char) var_3));
    if (((/* implicit */_Bool) var_8))
    {
        var_12 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_7)) : (((long long int) var_7))))));
        var_13 &= ((/* implicit */unsigned short) var_8);
    }

}
