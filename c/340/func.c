/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2488207106
Invocation: ./yarpgen --std=c -o out/340
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
void test(unsigned long long int var_0, unsigned long long int var_4, long long int var_5, _Bool var_9, unsigned short var_11, unsigned short var_12, short var_13, int zero, unsigned int arr_1 [17] [17] ) {
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_5)) - (16524371082033879975ULL))/*2*/; i_0 < ((((/* implicit */unsigned long long int) var_5)) - (16524371082033879962ULL))/*15*/; i_0 += ((((/* implicit */unsigned long long int) var_12)) - (35673ULL))/*2*/) 
    {
        var_14 += ((/* implicit */long long int) ((max((1734602349053567873ULL), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551608ULL))))) << (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_11))))));
        var_15 = ((/* implicit */signed char) var_0);
    }
    var_16 |= ((/* implicit */unsigned short) var_9);
}
