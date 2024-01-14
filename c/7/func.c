/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1386303068
Invocation: ./yarpgen --std=c -o out/7
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
void test(unsigned char var_2, unsigned int var_3, signed char var_8, long long int var_11, unsigned char var_13, unsigned short var_15, _Bool var_16, int zero) {
    var_17 = ((/* implicit */signed char) var_16);
    var_18 ^= ((/* implicit */signed char) var_2);
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (var_11) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
}
