/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 470346320
Invocation: ./yarpgen --std=c -o out/1
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
void test(unsigned char var_1, short var_2, short var_3, unsigned char var_4, _Bool var_5, unsigned long long int var_6, int zero) {
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_4))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (2147483647)))) ? (((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) var_5)))) : (((/* implicit */int) var_3))))) ? (max((min((var_6), (((/* implicit */unsigned long long int) 1885208617)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
