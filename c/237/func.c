/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 87849870
Invocation: ./yarpgen --std=c -o out/237
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
void test(short var_2, int var_7, unsigned char var_12, int var_13, unsigned short var_15, int zero, _Bool arr_1 [14] , long long int arr_2 [14] [14] ) {
    var_18 = ((/* implicit */int) ((((long long int) (!(((/* implicit */_Bool) (unsigned short)6141))))) << (((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (-1381490346))))) % (((((/* implicit */_Bool) var_2)) ? (4294967283U) : (((/* implicit */unsigned int) var_7))))))));
    var_19 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2ULL/*2*/; i_0 < ((((/* implicit */unsigned long long int) var_15)) - (13940ULL))/*12*/; i_0 += ((((/* implicit */unsigned long long int) var_15)) - (13949ULL))/*3*/) 
    {
        var_20 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) arr_2 [i_0 - 2] [(unsigned short)3])));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 2]))))) : (((arr_2 [i_0 - 1] [i_0 - 2]) & (((/* implicit */long long int) -369092640)))))))));
        var_22 = ((/* implicit */short) var_12);
    }
}
