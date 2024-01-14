/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2320239210
Invocation: ./yarpgen --std=c -o out/410
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
void test(unsigned short var_0, unsigned short var_1, _Bool var_3, unsigned int var_4, unsigned int var_7, int var_9, signed char var_11, int zero, unsigned short arr_1 [22] [22] ) {
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1ULL/*1*/; i_0 < ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)248))))) - (229ULL))/*19*/; i_0 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max(((unsigned char)48), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) (unsigned char)243))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)9), (((/* implicit */unsigned char) var_11)))))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned long long int) var_11)))))))) - (5ULL))/*4*/) 
    {
        for (int i_1 = ((((/* implicit */int) var_1)) - (51660))/*1*/; i_1 < 19/*19*/; i_1 += 4/*4*/) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((+(((((/* implicit */_Bool) 10533259592217726618ULL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (_Bool)1))))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_4))))) != (((/* implicit */int) arr_1 [9ULL] [17LL])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (6ULL) : (((/* implicit */unsigned long long int) 2047)))), (((((/* implicit */_Bool) 6ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (3668975661U))))))));
}
