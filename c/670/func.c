/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 445505324
Invocation: ./yarpgen --std=c -o out/670
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
void test(int var_1, _Bool var_2, int var_3, long long int var_4, _Bool var_7, unsigned int var_11, unsigned int var_12, int var_13, int zero) {
    if (((min((((/* implicit */long long int) var_1)), (var_4))) > (((/* implicit */long long int) var_11))))
    {
        var_14 = ((/* implicit */unsigned long long int) var_12);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)55110)), ((((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))) : (var_11)));
        var_16 *= ((/* implicit */_Bool) ((unsigned long long int) max(((~(((/* implicit */int) (unsigned short)24097)))), (var_3))));
    }

    var_17 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12))), (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) (unsigned char)97))))))), (((/* implicit */unsigned int) var_2))));
}
