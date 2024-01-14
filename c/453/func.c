/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1755891836
Invocation: ./yarpgen --std=c -o out/453
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
void test(signed char var_0, unsigned long long int var_3, long long int var_5, unsigned long long int var_7, unsigned long long int var_8, unsigned char var_9, int zero) {
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))))))))));
    var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (var_8)));
}
