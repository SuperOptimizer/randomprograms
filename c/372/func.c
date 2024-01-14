/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3158372981
Invocation: ./yarpgen --std=c -o out/372
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
void test(_Bool var_0, unsigned short var_1, _Bool var_4, signed char var_7, unsigned short var_12, short var_14, _Bool var_16, int zero, unsigned long long int arr_1 [23] , signed char arr_2 [23] [23] ) {
    var_17 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (short)19831)))))) - (1))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_12))) - (32064))/*23*/; i_0 += ((((/* implicit */int) ((/* implicit */short) (_Bool)1))) + (1))/*2*/) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) min(((unsigned short)30720), (((/* implicit */unsigned short) var_16))))))) ? ((~((((_Bool)1) ? (10333476284424680289ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (2097151ULL)));
        arr_3 [i_0] |= ((/* implicit */short) ((((((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) << (((((((/* implicit */int) var_4)) + (((/* implicit */int) (short)7034)))) - (7025))))) ^ (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
}
