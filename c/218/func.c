/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3196619261
Invocation: ./yarpgen --std=c -o out/218
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
void test(unsigned short var_1, long long int var_2, unsigned int var_7, int var_8, int zero) {
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_14 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_2)))))) : (var_7)));
}
