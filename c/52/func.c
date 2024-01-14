/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 868629826
Invocation: ./yarpgen --std=c -o out/52
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
void test(long long int var_0, int var_5, unsigned short var_6, unsigned char var_8, signed char var_10, unsigned short var_12, _Bool var_16, int zero) {
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned short)30695)) / (var_5))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_8))))))) >> (min((((/* implicit */unsigned long long int) var_12)), (((var_16) ? (18014397435740160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))));
}
