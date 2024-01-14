/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2644063490
Invocation: ./yarpgen --std=c -o out/299
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
void test(short var_1, signed char var_8, unsigned int var_10, unsigned short var_17, int zero) {
    var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (unsigned char)0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_17)))) : (((/* implicit */int) var_1)))));
    var_20 = var_8;
    var_21 = ((/* implicit */signed char) var_1);
}
