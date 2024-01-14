/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3302050405
Invocation: ./yarpgen --std=c -o out/396
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
void test(_Bool var_1, _Bool var_2, unsigned short var_5, unsigned int var_6, short var_8, unsigned char var_9, unsigned int var_10, unsigned char var_12, unsigned short var_14, long long int var_15, short var_18, int zero, unsigned int arr_0 [13] , int arr_1 [13] , short arr_4 [23] [23] ) {
    var_19 = ((/* implicit */unsigned char) var_8);
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(var_10))), (((/* implicit */unsigned int) var_12))))) ? (min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), ((~(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = (unsigned char)3/*3*/; i_0 < (unsigned char)9/*9*/; i_0 += (unsigned char)4/*4*/) 
    {
        arr_2 [(unsigned char)3] = ((/* implicit */long long int) (~(arr_0 [i_0])));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (arr_1 [i_0 + 4])));
        if (((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL)))))
        {
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) -1))));
            if (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65524)))))
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22909)) ? (((/* implicit */int) var_2)) : (arr_1 [i_0 - 1])));
                var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3]))));
                if (((/* implicit */_Bool) (~(arr_0 [i_0 + 2]))))
                {
                    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
                    var_26 &= (-(8784034290669545956LL));
                }

            }

            var_27 -= ((/* implicit */unsigned long long int) (-(arr_0 [i_0 - 3])));
            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))));
        }

        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -4544774559991625637LL))));
    }
    for (short i_1 = ((((/* implicit */int) var_18)) + (4873))/*2*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_15))) + (13985))/*20*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_5))) - (5657))/*4*/) 
    {
        var_30 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_8))))));
        arr_5 [i_1] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])), (((var_1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))))));
    }
}
