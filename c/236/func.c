/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4021375104
Invocation: ./yarpgen --std=c -o out/236
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
void test(unsigned short var_0, unsigned short var_1, unsigned char var_3, int var_4, _Bool var_6, unsigned char var_7, short var_8, unsigned int var_9, _Bool var_11, signed char var_12, int var_13, short var_14, unsigned long long int var_15, signed char var_16, int zero) {
    if (((/* implicit */_Bool) var_16))
    {
        var_17 |= ((/* implicit */_Bool) var_3);
        var_18 = ((/* implicit */long long int) var_11);
        if (((/* implicit */_Bool) var_9))
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? ((~(var_4))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_6))) != (min((var_13), (((/* implicit */int) (unsigned char)8)))))))));
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */short) var_7))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_8)))) > (((/* implicit */int) var_1))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)25958)) ? (((/* implicit */unsigned int) max((448586828), (448586839)))) : ((~(var_9)))));
        }

    }

    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (var_15) : (var_15))))));
}
