/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 856331806
Invocation: ./yarpgen --std=c -o out/602
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
void test(unsigned char var_0, unsigned int var_3, signed char var_4, short var_5, unsigned int var_7, short var_9, unsigned int var_11, short var_14, int zero, unsigned short arr_0 [11] , short arr_2 [11] ) {
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) var_14))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48391))) & (var_11)))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1076)) : (((/* implicit */int) var_14)))) != (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)8)), (var_0))))))))));
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-25)) + (((/* implicit */int) ((short) (short)21423))))) & (((/* implicit */int) (signed char)-57))));
    /* LoopSeq 1 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_14))) + (49))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)97)), (1545114078)))) ? (((max((var_3), (((/* implicit */unsigned int) (signed char)100)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) 6800690668730489395ULL)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) - (104))/*10*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (115))/*2*/) 
    {
        if (((/* implicit */_Bool) arr_2 [i_0]))
        {
            var_18 = ((/* implicit */unsigned short) (signed char)-10);
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) - (((/* implicit */int) arr_2 [i_0]))))), (8492777810494195782ULL))))))));
        }

        var_20 = ((/* implicit */unsigned int) max((259176137), (((/* implicit */int) (signed char)4))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
}
