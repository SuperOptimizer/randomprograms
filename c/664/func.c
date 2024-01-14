/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1742414966
Invocation: ./yarpgen --std=c -o out/664
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
void test(_Bool var_0, int var_2, unsigned char var_5, unsigned int var_6, unsigned int var_8, _Bool var_9, int zero, _Bool arr_0 [23] [23] , signed char arr_1 [23] [23] , unsigned int arr_2 [23] , _Bool arr_8 [23] ) {
    /* LoopSeq 3 */
    for (unsigned int i_0 = ((var_6) - (2492804173U))/*3*/; i_0 < ((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))) + (19U))/*19*/; i_0 += ((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_2)))))) + (3U))/*4*/) 
    {
        var_10 = ((unsigned char) arr_0 [i_0] [i_0]);
        var_11 += (-((+(18446744073709551613ULL))));
    }
    for (unsigned int i_1 = ((/* implicit */unsigned int) var_0)/*0*/; i_1 < ((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967295U)) * (18446744073709551609ULL)))) + (13U))/*20*/; i_1 += 3U/*3*/) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) arr_1 [(unsigned char)22] [i_1]))))) ? (1038497374) : (((/* implicit */int) max((var_9), (var_9))))));
        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_1 [(unsigned short)18] [i_1]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)145))))) ? (var_8) : (var_8)))));
        var_13 += ((/* implicit */unsigned char) var_2);
        arr_6 [i_1] = var_2;
    }
    for (unsigned char i_2 = ((((/* implicit */int) var_5)) - (31))/*4*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_6))) - (58))/*22*/; i_2 += (unsigned char)2/*2*/) 
    {
        var_14 |= ((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_2] [i_2])), (var_2)))) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) 3787582150U))));
        var_15 += ((/* implicit */unsigned long long int) min((min((min((((/* implicit */int) arr_8 [i_2])), (-1))), (((/* implicit */int) var_0)))), (((/* implicit */int) arr_8 [i_2]))));
    }
    var_16 = ((/* implicit */int) min((var_16), (var_2)));
}
