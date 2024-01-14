/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1740887041
Invocation: ./yarpgen --std=c -o out/626
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
void test(int zero) {
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 16383ULL))));
    var_14 ^= ((/* implicit */unsigned short) max((7664689201710705602ULL), (((/* implicit */unsigned long long int) -3265475860300715579LL))));
}
