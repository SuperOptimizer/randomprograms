/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 260491598
Invocation: ./yarpgen --std=c -o out/852
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
void test(short var_5, signed char var_6, unsigned char var_7, long long int var_8, int var_9, _Bool var_10, signed char var_11, signed char var_12, int zero, unsigned int arr_0 [15] ) {
    /* LoopSeq 1 */
    for (long long int i_0 = ((((/* implicit */long long int) var_10)) - (1LL))/*0*/; i_0 < ((((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_11))))))) + (15LL))/*15*/; i_0 += ((((/* implicit */long long int) (signed char)-55)) + (57LL))/*2*/) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_12))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-55))))))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (18446744073709551603ULL))))))))));
    }
    var_15 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
    var_16 = ((/* implicit */_Bool) min((max((var_9), ((+(((/* implicit */int) var_7)))))), (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)183)) & (((/* implicit */int) (signed char)3))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (min(((unsigned char)183), (((/* implicit */unsigned char) (signed char)50))))))) : ((+(((/* implicit */int) var_11))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % ((~(2274519881U)))));
}
