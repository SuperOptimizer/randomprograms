/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3812576741
Invocation: ./yarpgen --std=c -o out/389
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
void test(unsigned int var_2, int var_10, short var_13, unsigned char var_16, int zero) {
    var_17 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) var_13)))));
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) var_13))))) << (((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551594ULL))) - (18446744073709551584ULL)))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_10)) : (var_2)))));
}
