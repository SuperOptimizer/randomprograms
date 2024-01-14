/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1649782332
Invocation: ./yarpgen --std=c -o out/891
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
void test(unsigned char var_2, long long int var_4, _Bool var_5, _Bool var_7, long long int var_8, unsigned short var_11, short var_13, int zero) {
    var_16 = ((unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (short)11706))))), (var_8)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : ((~(var_4)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) : (4294967295U)));
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)245))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned char)0))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (min((min((var_8), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((_Bool) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
