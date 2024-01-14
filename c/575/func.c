/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2073897020
Invocation: ./yarpgen --std=c -o out/575
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
void test(unsigned char var_0, _Bool var_1, unsigned short var_5, unsigned short var_6, long long int var_7, unsigned long long int var_9, unsigned char var_10, int zero, signed char arr_1 [12] ) {
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0U/*0*/; i_0 < ((((/* implicit */unsigned int) var_1)) + (11U))/*12*/; i_0 += ((((/* implicit */unsigned int) var_7)) - (2608368491U))/*2*/) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) max(((unsigned short)44653), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) arr_1 [i_0]))))) ? (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)44653)))) : (((/* implicit */int) (unsigned short)7680))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)57856))));
        var_11 *= ((/* implicit */_Bool) (-2147483647 - 1));
    }
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))));
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((/* implicit */unsigned short) var_9);
}
