/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 455096767
Invocation: ./yarpgen --std=c -o out/125
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
void test(unsigned char var_1, unsigned int var_4, unsigned long long int var_8, int var_13, unsigned long long int var_15, int zero) {
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_1))));
    var_19 &= ((/* implicit */unsigned long long int) var_13);
    var_20 = min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_4)) ? (min((var_15), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-5583)))))));
}
