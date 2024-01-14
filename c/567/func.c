/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1424193681
Invocation: ./yarpgen --std=c -o out/567
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
void test(_Bool var_0, unsigned short var_2, unsigned short var_3, _Bool var_4, short var_7, unsigned int var_8, unsigned short var_12, int zero) {
    var_14 += ((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (_Bool)1))));
    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (signed char)-98)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_7)))))))));
}
