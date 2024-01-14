/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1770055831
Invocation: ./yarpgen --std=c -o out/537
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
void test(short var_8, unsigned long long int var_9, short var_10, int zero) {
    var_11 = ((/* implicit */unsigned short) (~(1732119724)));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) ((signed char) (-2147483647 - 1)))))))) : (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (short)-32634)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_9)))))));
}
