/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1483291492
Invocation: ./yarpgen --std=c -o out/388
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
void test(unsigned char var_2, long long int var_4, unsigned int var_6, _Bool var_10, long long int var_12, _Bool var_13, short var_14, _Bool var_15, int zero, short arr_0 [24] , int arr_1 [24] , unsigned short arr_3 [24] ) {
    var_17 &= (+(var_12));
    /* LoopSeq 1 */
    for (_Bool i_0 = ((/* implicit */int) var_13)/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_6))))/*0*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_14))/*1*/) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */int) (unsigned short)32787)))))));
        arr_4 [18] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) & (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((int) ((_Bool) 16446383440000469941ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1269503132U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_0 [i_0])))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((33554416ULL), (((/* implicit */unsigned long long int) var_4))))) ? (min((max((18446744073675997199ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (33554422ULL))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (max((((/* implicit */int) (_Bool)1)), (arr_1 [i_0 + 1]))) : (((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */short) var_10)))))));
    }
    var_20 &= ((/* implicit */int) var_10);
}
