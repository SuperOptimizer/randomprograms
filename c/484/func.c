/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 684979746
Invocation: ./yarpgen --std=c -o out/484
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
void test(unsigned long long int var_3, long long int var_4, unsigned int var_5, short var_10, long long int var_12, int zero) {
    var_13 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) var_5)))))) + (var_4)))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */long long int) 2039922132)) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)));
    var_15 ^= ((var_4) <= (var_12));
}
