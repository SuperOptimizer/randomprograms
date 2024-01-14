/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 299541620
Invocation: ./yarpgen --std=c -o out/541
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
void test(unsigned long long int var_0, signed char var_2, unsigned char var_4, unsigned int var_5, unsigned long long int var_11, int var_12, int zero) {
    var_13 = ((/* implicit */short) var_12);
    var_14 = ((/* implicit */signed char) var_4);
    var_15 = ((/* implicit */short) (-(var_12)));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((int) var_5))))) ? (max((min((((/* implicit */unsigned long long int) var_5)), (var_11))), (min((var_0), (((/* implicit */unsigned long long int) var_2)))))) : (min((((/* implicit */unsigned long long int) var_5)), ((-(var_0)))))));
}
