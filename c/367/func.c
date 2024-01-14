/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1481115231
Invocation: ./yarpgen --std=c -o out/367
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
void test(unsigned long long int var_1, signed char var_5, int zero) {
    var_18 ^= ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (max((((/* implicit */unsigned int) var_5)), (4294967285U))))))));
    var_19 = ((/* implicit */unsigned int) (_Bool)1);
}
