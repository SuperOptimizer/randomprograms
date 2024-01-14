/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 867566117
Invocation: ./yarpgen --std=c -o out/636
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
void test(signed char var_4, long long int var_7, short var_10, int var_11, unsigned int var_12, long long int var_15, signed char var_16, int zero) {
    if (((/* implicit */_Bool) var_12))
    {
        var_19 &= ((((/* implicit */long long int) ((/* implicit */int) ((((_Bool) var_12)) || (((/* implicit */_Bool) var_16)))))) >= (var_15));
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)8362)), (var_7)));
    }

    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_4))))) ? (1038749344205217382ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (var_10)))) ? (var_7) : (((/* implicit */long long int) var_11))))))))));
}
