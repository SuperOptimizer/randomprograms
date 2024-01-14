/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2533286835
Invocation: ./yarpgen --std=c -o out/673
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
void test(short var_0, _Bool var_1, unsigned long long int var_2, unsigned char var_4, short var_5, short var_6, unsigned char var_8, unsigned char var_10, unsigned short var_11, int zero) {
    if (((4295433030184711453ULL) > (1073741823ULL)))
    {
        if (((/* implicit */_Bool) var_6))
        {
            var_12 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((((_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            var_13 = ((/* implicit */unsigned char) var_5);
            var_14 = var_4;
        }

        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_2))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20113)) | (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_0))))) : (var_2))))));
    }

    var_16 = ((/* implicit */unsigned char) var_11);
}
