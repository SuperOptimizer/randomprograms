/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3073664652
Invocation: ./yarpgen --std=c -o out/743
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
void test(unsigned long long int var_0, unsigned int var_2, long long int var_3, unsigned long long int var_7, unsigned long long int var_8, unsigned char var_9, unsigned short var_10, int zero) {
    var_11 = ((/* implicit */short) min((((/* implicit */int) var_10)), (((((/* implicit */int) ((short) var_7))) % (((/* implicit */int) ((unsigned short) var_2)))))));
    var_12 = var_8;
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_0)))) ? (var_7) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
}
