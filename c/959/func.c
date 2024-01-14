/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2482278361
Invocation: ./yarpgen --std=c -o out/959
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
void test(int var_1, unsigned int var_3, unsigned short var_4, signed char var_5, unsigned long long int var_6, signed char var_7, _Bool var_9, signed char var_11, int zero, short arr_0 [22] [22] , short arr_1 [22] [22] , signed char arr_2 [22] ) {
    if (((/* implicit */_Bool) var_1))
    {
        var_12 = ((/* implicit */_Bool) var_5);
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_4))))), (min((var_3), (((/* implicit */unsigned int) var_7))))))))))));
    }

    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < (unsigned short)22/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) - (15980))/*4*/) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = (signed char)0/*0*/; i_1 < (signed char)22/*22*/; i_1 += (signed char)4/*4*/) 
        {
            var_14 = ((/* implicit */int) ((long long int) arr_2 [i_1]));
            var_15 = ((/* implicit */int) var_11);
        }
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */int) var_9)) - (((/* implicit */int) var_11))))));
    }
    var_17 = ((/* implicit */int) var_7);
}
