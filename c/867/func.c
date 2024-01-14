/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 470200037
Invocation: ./yarpgen --std=c -o out/867
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
void test(short var_1, short var_2, _Bool var_3, int var_4, unsigned short var_10, short var_11, int var_12, unsigned long long int var_13, int zero) {
    var_16 = ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)32767)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) == (((/* implicit */unsigned long long int) var_4))));
    var_17 = max((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((var_4) << (((/* implicit */int) var_3))))))), (max((min((((/* implicit */int) (short)32767)), (2147483647))), (((/* implicit */int) var_11)))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((short) (short)-31765)))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (var_4))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65535)) : (var_12)))))) : (min((((/* implicit */unsigned int) ((int) var_3))), (max((134217728U), (((/* implicit */unsigned int) var_2)))))))))));
}
