/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4265022271
Invocation: ./yarpgen --std=c -o out/803
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
void test(short var_1, short var_9, signed char var_11, int zero) {
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)960)))))))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned int) var_11)))));
}
