/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2611279420
Invocation: ./yarpgen --std=c -o out/700
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
void test(unsigned int var_2, unsigned int var_5, unsigned int var_9, unsigned int var_13, unsigned int var_15, int zero) {
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (min((((((/* implicit */_Bool) ((var_13) ^ (var_15)))) ? ((+(4294967286U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4U)))))))), (max((((((/* implicit */_Bool) var_9)) ? (var_13) : (var_5))), (var_2)))))));
}
