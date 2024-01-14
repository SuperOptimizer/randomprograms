/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4264072307
Invocation: ./yarpgen --std=c -o out/360
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
void test(signed char var_0, unsigned long long int var_4, long long int var_6, signed char var_10, int zero) {
    var_13 |= ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (17670403279885776811ULL))), (((/* implicit */unsigned long long int) var_0))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), ((~(min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (0U)))), (var_4)))))));
    var_15 &= ((/* implicit */int) (short)12476);
}
