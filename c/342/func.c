/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 919622300
Invocation: ./yarpgen --std=c -o out/342
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
void test(short var_1, _Bool var_2, signed char var_3, unsigned short var_4, unsigned int var_5, short var_11, int var_12, short var_13, int var_14, signed char var_15, long long int var_16, unsigned short var_17, int zero) {
    var_19 = ((/* implicit */signed char) ((((((int) var_2)) == (var_12))) || (((/* implicit */_Bool) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */int) ((((max((var_12), (((/* implicit */int) var_2)))) == (((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_16) != (((/* implicit */long long int) var_14)))))) : (var_16))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (9223372036854775807LL)))))));
    var_21 = ((/* implicit */int) ((unsigned short) (~((+(((/* implicit */int) var_11)))))));
    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (-9223372036854775796LL) : ((-9223372036854775807LL - 1LL)))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))))))) != ((-((+(((/* implicit */int) var_17))))))));
    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
}
