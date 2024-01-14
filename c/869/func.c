/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4255178505
Invocation: ./yarpgen --std=c -o out/869
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
void test(unsigned char var_3, unsigned int var_8, unsigned long long int var_11, int zero) {
    var_14 = ((/* implicit */signed char) min((var_8), (((/* implicit */unsigned int) ((_Bool) max(((-2147483647 - 1)), ((-2147483647 - 1))))))));
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11)))))))));
}
