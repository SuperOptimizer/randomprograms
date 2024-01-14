/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1441564780
Invocation: ./yarpgen --std=c -o out/866
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
void test(unsigned int var_2, long long int var_3, int var_7, unsigned char var_8, signed char var_9, int zero) {
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_2)))))))));
    var_11 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_7) | (((/* implicit */int) var_8))))) ? (max((((/* implicit */long long int) var_7)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3)))))))));
}
