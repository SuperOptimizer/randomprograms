/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 707011404
Invocation: ./yarpgen --std=c -o out/725
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
void test(_Bool var_0, signed char var_2, unsigned int var_3, int var_4, long long int var_5, unsigned int var_6, long long int var_8, unsigned long long int var_11, unsigned char var_12, int zero, signed char arr_1 [17] , int arr_2 [17] [17] ) {
    if (var_0)
    {
        var_13 = ((/* implicit */unsigned char) var_2);
        var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_3)) / (min((var_11), (((/* implicit */unsigned long long int) 8061076605690355686LL)))))) / (((/* implicit */unsigned long long int) var_5))));
    }

    /* LoopSeq 1 */
    for (unsigned int i_0 = ((var_6) - (717565609U))/*0*/; i_0 < 17U/*17*/; i_0 += ((((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (var_8)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (var_11))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (short)18277))) ? (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_6))))))))) - (1399961497U))/*3*/) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((min(((~(arr_2 [i_0] [i_0]))), (((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), ((_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 510720631U)))) ? (min((arr_2 [i_0] [i_0]), (((/* implicit */int) var_0)))) : (min((((/* implicit */int) (signed char)-5)), (arr_2 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (3919341498299279365LL)));
    }
    var_15 = (+(var_8));
}
