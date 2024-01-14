/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2233847209
Invocation: ./yarpgen --std=c -o out/714
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
void test(signed char var_0, signed char var_3, signed char var_7, signed char var_8, signed char var_11, signed char var_12, int zero) {
    var_13 = max((max(((signed char)-22), ((signed char)-81))), (var_12));
    var_14 &= ((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */int) max((var_12), (var_7)))) ^ (((/* implicit */int) var_0))))));
    var_15 = var_8;
    var_16 = ((/* implicit */signed char) min((min((((((/* implicit */int) (signed char)-47)) | (((/* implicit */int) (signed char)-60)))), (((/* implicit */int) min((var_3), (var_11)))))), (((/* implicit */int) var_7))));
}
