/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 882275946
Invocation: ./yarpgen --std=c -o out/283
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
void test(short var_1, unsigned char var_7, int zero) {
    var_16 = ((/* implicit */unsigned char) min((var_16), (var_7)));
    var_17 = ((/* implicit */unsigned char) var_1);
}
