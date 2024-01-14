/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1295102891
Invocation: ./yarpgen --std=c -o out/929
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
void test(int var_6, unsigned int var_16, signed char var_17, int zero) {
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_16))));
    var_20 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) <= (max((((/* implicit */int) (unsigned char)117)), ((-(((/* implicit */int) var_17))))))));
}
