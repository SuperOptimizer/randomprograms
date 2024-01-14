/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2295330463
Invocation: ./yarpgen --std=c -o out/687
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
void test(unsigned int var_1, int var_2, unsigned short var_5, signed char var_6, int var_7, signed char var_11, int zero) {
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-64))))) && ((((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) var_1))))));
    var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208)))))))));
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 139349828)) ? (((/* implicit */int) (unsigned short)58775)) : (var_2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (21U))), (((/* implicit */unsigned int) (unsigned short)37012))));
    var_15 *= ((/* implicit */unsigned short) var_7);
    var_16 ^= ((/* implicit */signed char) (~(max((5776020876311499931LL), (((/* implicit */long long int) (unsigned short)65535))))));
}
