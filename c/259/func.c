/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3394254591
Invocation: ./yarpgen --std=c -o out/259
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
void test(unsigned int var_0, _Bool var_7, _Bool var_9, _Bool var_10, unsigned long long int var_12, _Bool var_16, unsigned short var_17, int zero, unsigned short arr_0 [16] , _Bool arr_2 [16] ) {
    var_18 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned short)22612)), (((int) (unsigned short)22612)))) >= (((/* implicit */int) (signed char)-17))));
    var_19 ^= ((/* implicit */unsigned short) max((((unsigned long long int) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (((/* implicit */unsigned long long int) ((var_7) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))))))));
    /* LoopSeq 1 */
    for (short i_0 = (short)0/*0*/; i_0 < (short)16/*16*/; i_0 += ((((/* implicit */int) ((/* implicit */short) (unsigned short)42923))) + (22617))/*4*/) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((long long int) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_2 [i_0])))));
        var_20 = ((/* implicit */long long int) min((((/* implicit */int) var_10)), ((-(((/* implicit */int) (!(var_16))))))));
    }
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
}
