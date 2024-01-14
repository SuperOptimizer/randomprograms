/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 238630380
Invocation: ./yarpgen --std=c -o out/86
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
void test(short var_0, signed char var_1, short var_2, short var_4, unsigned short var_7, signed char var_8, unsigned long long int var_9, unsigned int var_10, long long int var_11, long long int var_12, int zero) {
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)-25186), (((/* implicit */short) (_Bool)1))))) >> (((((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (49ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) var_2))));
    var_15 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) var_7)))))))));
}
