/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1563248060
Invocation: ./yarpgen --std=c -o out/597
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
void test(unsigned short var_1, unsigned int var_2, long long int var_3, int zero) {
    var_14 = ((/* implicit */long long int) var_2);
    var_15 = ((_Bool) ((var_3) - (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_2))))));
    var_16 = ((/* implicit */unsigned short) var_3);
}
