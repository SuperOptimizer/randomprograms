/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3720073527
Invocation: ./yarpgen --std=c -o out/308
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
void test(unsigned char var_3, unsigned long long int var_4, long long int var_6, int var_7, short var_8, _Bool var_9, short var_10, long long int var_11, short var_12, unsigned char var_13, signed char var_14, int zero) {
    var_15 = ((/* implicit */unsigned int) -7157107171779775543LL);
    var_16 = ((/* implicit */short) min((var_16), (var_12)));
    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-94))));
    if ((_Bool)1)
    {
        var_18 = ((/* implicit */_Bool) var_12);
        if (((/* implicit */_Bool) var_10))
        {
            var_19 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_11))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
            var_20 = ((/* implicit */signed char) var_8);
            if (((/* implicit */_Bool) var_7))
            {
                var_21 = ((min((var_4), (((/* implicit */unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((var_6) % (((/* implicit */long long int) -24)))) : (((long long int) var_7))))));
                var_22 |= ((/* implicit */int) var_14);
            }

        }

        var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned char)246)))))))));
    }

}
