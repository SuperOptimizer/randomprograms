/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3183035145
Invocation: ./yarpgen --std=c -o out/353
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
void test(signed char var_1, int var_10, signed char var_11, int zero) {
    var_14 = ((/* implicit */signed char) ((unsigned int) var_10));
    var_15 ^= ((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((((/* implicit */int) (signed char)-105)) + (2147483647))) << (((((/* implicit */int) var_11)) - (70)))))));
}
