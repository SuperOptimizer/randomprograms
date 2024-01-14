/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3757587786
Invocation: ./yarpgen --std=c -o out/65
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
void test(unsigned int var_0, long long int var_5, short var_7, unsigned char var_9, unsigned char var_12, _Bool var_13, int zero) {
    var_17 |= ((/* implicit */unsigned int) var_13);
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_5), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) var_12))))));
    var_19 &= ((/* implicit */_Bool) var_9);
}
