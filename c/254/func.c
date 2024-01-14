/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3188330210
Invocation: ./yarpgen --std=c -o out/254
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
void test(short var_0, unsigned int var_7, unsigned long long int var_15, unsigned char var_18, int zero) {
    if (((/* implicit */_Bool) var_7))
    {
        var_19 = ((/* implicit */unsigned int) var_0);
        var_20 = ((/* implicit */unsigned short) var_18);
    }

    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_15))));
}
