/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4168694691
Invocation: ./yarpgen --std=c -o out/814
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
void test(long long int var_0, unsigned long long int var_3, signed char var_4, short var_9, int zero) {
    var_11 = ((/* implicit */int) var_0);
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((min((var_3), ((-(var_3))))), (((/* implicit */unsigned long long int) var_4)))))));
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
}
