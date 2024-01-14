/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2649694482
Invocation: ./yarpgen --std=c -o out/241
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
void test(signed char var_1, unsigned short var_6, _Bool var_12, int zero) {
    var_20 += ((/* implicit */_Bool) var_6);
    var_21 |= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) 4294967279U)))))));
    var_22 = ((/* implicit */_Bool) min((((short) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_1))))), (((/* implicit */short) (_Bool)1))));
}
