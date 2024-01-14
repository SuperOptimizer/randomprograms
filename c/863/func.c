/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1442353752
Invocation: ./yarpgen --std=c -o out/863
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
void test(_Bool var_2, _Bool var_3, signed char var_5, _Bool var_6, unsigned short var_8, int var_9, unsigned char var_10, unsigned int var_11, unsigned char var_12, unsigned int var_13, int var_14, int var_15, int zero) {
    if (((/* implicit */_Bool) min((((/* implicit */unsigned char) min((min((var_5), ((signed char)35))), (((/* implicit */signed char) var_2))))), (var_10))))
    {
        var_17 = ((/* implicit */signed char) min((((var_13) - (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((min((((/* implicit */int) (signed char)1)), (var_14))) == (max((var_14), (((/* implicit */int) (signed char)-34)))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_2))));
    }

    var_19 = ((/* implicit */signed char) ((min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_8)))) / ((~(((/* implicit */int) ((((/* implicit */_Bool) -1052826648374562499LL)) && (((/* implicit */_Bool) var_13)))))))));
    var_20 = min((((((/* implicit */long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_12)))))) | (((long long int) var_15)))), (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65524))))) : (min((var_11), (((/* implicit */unsigned int) var_10))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_15), ((~(max((((/* implicit */int) var_6)), (var_9)))))));
}
