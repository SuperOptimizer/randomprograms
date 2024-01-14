/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2907681681
Invocation: ./yarpgen --std=c -o out/592
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
void test(_Bool var_0, unsigned int var_1, _Bool var_2, unsigned char var_3, unsigned short var_8, int zero) {
    var_10 = (unsigned char)0;
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))));
    var_12 *= ((/* implicit */unsigned long long int) ((var_0) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), ((unsigned char)254))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_1)));
}
