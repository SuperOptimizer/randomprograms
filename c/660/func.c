/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1340844511
Invocation: ./yarpgen --std=c -o out/660
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
void test(signed char var_1, unsigned short var_2, unsigned int var_4, long long int var_5, unsigned short var_7, unsigned char var_9, long long int var_10, int zero) {
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (unsigned short)25183)))) : (((/* implicit */int) var_7)))) == (((/* implicit */int) var_2))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max(((unsigned char)11), (var_9))))));
    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) max((1442266529), (((/* implicit */int) var_1)))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_5))));
}
