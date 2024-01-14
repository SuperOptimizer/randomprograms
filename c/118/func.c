/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 91538788
Invocation: ./yarpgen --std=c -o out/118
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
void test(long long int var_1, unsigned int var_8, signed char var_10, unsigned char var_11, int var_15, int zero, long long int arr_0 [19] [19] , int arr_1 [19] [19] , int arr_2 [19] , unsigned short arr_4 [19] [19] [19] ) {
    /* LoopNest 2 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_10)) - (4294967261U))/*0*/; i_0 < ((var_8) - (3590933572U))/*19*/; i_0 += ((268435455U) - (268435453U))/*2*/) 
    {
        for (long long int i_1 = 1LL/*1*/; i_1 < 17LL/*17*/; i_1 += ((((/* implicit */long long int) (((~(arr_0 [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [(unsigned char)7] [(short)18]), (arr_1 [10ULL] [13ULL]))))))))))) + (1LL))/*2*/) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (((+(max((arr_1 [10ULL] [(signed char)2]), (((/* implicit */int) arr_4 [(short)5] [4ULL] [(_Bool)1])))))) >= (max(((+(((/* implicit */int) (unsigned char)75)))), (((/* implicit */int) ((arr_0 [7LL] [12]) <= (((/* implicit */long long int) var_15)))))))));
                arr_5 [13ULL] = ((/* implicit */signed char) max((max((((/* implicit */int) (signed char)-73)), (arr_2 [i_1 - 1]))), (min((arr_2 [i_0]), (arr_2 [i_1 + 2])))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_2 [(signed char)18]))));
                arr_6 [(short)3] [(unsigned short)0] [(unsigned char)6] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) -810881810721828708LL)) ? (((/* implicit */long long int) arr_1 [(signed char)5] [18U])) : (31LL))))))));
            }
        } 
    } 
    var_18 = ((min((((/* implicit */long long int) min((((/* implicit */int) var_11)), (var_15)))), (max((((/* implicit */long long int) var_8)), (var_1))))) >= ((+(((long long int) var_11)))));
}
