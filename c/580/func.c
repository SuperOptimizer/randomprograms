/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2008974396
Invocation: ./yarpgen --std=c -o out/580
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
void test(_Bool var_1, _Bool var_2, unsigned short var_7, unsigned int var_8, int zero) {
    var_10 = ((/* implicit */short) ((min((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_7)))), ((~(((/* implicit */int) var_2)))))) <= ((+((-(((/* implicit */int) (_Bool)1))))))));
    var_11 = ((/* implicit */_Bool) min(((~(((((/* implicit */int) var_2)) << (((var_8) - (109466417U))))))), ((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
}
