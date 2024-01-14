/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2999964317
Invocation: ./yarpgen --std=c -o out/35
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
void test(unsigned long long int var_5, unsigned long long int var_6, unsigned long long int var_9, short var_12, unsigned short var_13, unsigned short var_15, signed char var_16, unsigned short var_18, unsigned char var_19, int zero, unsigned short arr_1 [24] [24] ) {
    /* LoopSeq 1 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_18))) + (28709))/*0*/; i_0 < (short)24/*24*/; i_0 += ((((/* implicit */int) var_12)) - (32584))/*4*/) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((((-(var_5))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (var_15))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (var_6)));
        arr_4 [i_0] = ((/* implicit */signed char) max((min((((var_6) & (((/* implicit */unsigned long long int) 3568707581U)))), (var_9))), (((/* implicit */unsigned long long int) var_19))));
    }
    var_20 = ((/* implicit */short) var_16);
}
