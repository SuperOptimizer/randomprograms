/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1848709821
Invocation: ./yarpgen --std=c -o out/429
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
void test(unsigned int var_0, unsigned long long int var_1, short var_2, short var_3, signed char var_8, unsigned int var_9, unsigned char var_10, signed char var_13, signed char var_14, unsigned int var_15, int zero) {
    if (((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) (unsigned char)128)), (1364362178U))) : (4104263598U))) - (1364362171U))))))
    {
        var_16 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) var_13)), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
        var_17 = ((/* implicit */unsigned short) var_3);
    }

    var_18 = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((190703698U) == (var_0)))) < (((/* implicit */int) var_10))))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_1))) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_3)))))));
}
