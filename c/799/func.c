/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3778937404
Invocation: ./yarpgen --std=c -o out/799
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
void test(unsigned long long int var_9, unsigned long long int var_10, int var_12, int zero) {
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((var_9), (((/* implicit */unsigned long long int) ((long long int) var_12))))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) var_12)))))));
}
