/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1095329534
Invocation: ./yarpgen --std=c -o out/843
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
void test(_Bool var_1, unsigned int var_7, long long int var_8, _Bool var_9, int zero) {
    var_10 = ((/* implicit */signed char) var_9);
    var_11 = ((/* implicit */signed char) max(((-(var_8))), (((/* implicit */long long int) min((var_7), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_7))))))));
}
