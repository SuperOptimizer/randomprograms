/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1663698896
Invocation: ./yarpgen --std=c -o out/9
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
void test(signed char var_2, int var_3, _Bool var_9, unsigned int var_12, int zero) {
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (var_3)))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_12))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_2))));
}
