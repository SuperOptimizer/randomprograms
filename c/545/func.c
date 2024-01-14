/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 107949489
Invocation: ./yarpgen --std=c -o out/545
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
void test(long long int var_0, unsigned char var_1, signed char var_3, unsigned char var_4, unsigned short var_5, unsigned int var_7, unsigned int var_10, unsigned short var_12, int var_13, unsigned int var_15, long long int var_16, int zero) {
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (var_15)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_16))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-58)), (var_1))))))) ? (var_13) : (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)65))))), (var_15)));
}
