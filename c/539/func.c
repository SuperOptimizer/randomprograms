/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 918945220
Invocation: ./yarpgen --std=c -o out/539
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
void test(unsigned int var_5, int var_6, unsigned char var_7, short var_9, unsigned int var_11, unsigned int var_12, unsigned short var_13, short var_14, unsigned char var_17, int zero) {
    var_18 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((int) var_5))) : (((var_5) >> (((/* implicit */int) var_17))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) var_9)) == (((/* implicit */int) (short)-11315))))));
    if (((/* implicit */_Bool) (~(var_6))))
    {
        var_20 = ((/* implicit */unsigned int) var_13);
        var_21 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_6));
    }

    var_22 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
}
