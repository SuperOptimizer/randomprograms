/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 779883643
Invocation: ./yarpgen --std=c -o out/645
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
void test(int var_7, unsigned short var_8, int zero) {
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((max((((4294967295U) + (4294967278U))), (((/* implicit */unsigned int) (short)-14404)))), (((/* implicit */unsigned int) min((var_7), (var_7)))))))));
    var_12 &= ((/* implicit */int) ((max((((/* implicit */int) var_8)), (2147483647))) > (var_7)));
}
