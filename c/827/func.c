/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1771635374
Invocation: ./yarpgen --std=c -o out/827
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
void test(unsigned int var_3, unsigned char var_6, unsigned int var_7, long long int var_10, unsigned int var_15, unsigned char var_18, unsigned char var_19, int zero) {
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (63U) : (var_7)));
    var_21 = var_10;
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_19)), (((long long int) var_18))))) ? (((((((/* implicit */_Bool) var_15)) ? (4294967232U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)122)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */int) (unsigned char)134)) + (((/* implicit */int) var_19)))))))));
}
