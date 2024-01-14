/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 656389237
Invocation: ./yarpgen --std=c -o out/375
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
void test(_Bool var_1, long long int var_2, _Bool var_3, signed char var_7, unsigned char var_8, int zero, short arr_0 [20] , unsigned long long int arr_1 [20] ) {
    var_14 += ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (((unsigned long long int) var_7)))));
    /* LoopSeq 1 */
    for (long long int i_0 = ((((/* implicit */long long int) ((int) ((long long int) (unsigned char)245)))) - (245LL))/*0*/; i_0 < 20LL/*20*/; i_0 += 4LL/*4*/) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_16 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))), (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 = ((/* implicit */short) ((arr_1 [i_0]) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [3LL])), (arr_1 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) ((arr_1 [i_0]) == (arr_1 [i_0])))))))));
    }
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) ^ (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
}
