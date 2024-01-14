/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 669286878
Invocation: ./yarpgen --std=c -o out/91
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
void test(signed char var_0, signed char var_5, signed char var_7, signed char var_9, signed char var_10, signed char var_12, signed char var_14, int zero) {
    var_17 = min(((signed char)16), (max((var_12), (var_14))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
    var_19 = var_10;
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
}
