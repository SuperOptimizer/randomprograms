/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2408241471
Invocation: ./yarpgen --std=c -o out/936
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
void test(unsigned int var_2, unsigned char var_4, int var_5, long long int var_13, _Bool var_15, int zero) {
    var_17 |= ((/* implicit */int) ((_Bool) ((signed char) min((((/* implicit */long long int) var_2)), (var_13)))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)41555)))) : (((((/* implicit */int) var_15)) ^ (255))))))))));
}
