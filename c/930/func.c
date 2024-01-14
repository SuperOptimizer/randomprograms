/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3762133327
Invocation: ./yarpgen --std=c -o out/930
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
void test(long long int var_2, unsigned int var_6, unsigned char var_8, unsigned short var_11, int var_13, unsigned char var_14, int zero, unsigned int arr_0 [12] , unsigned char arr_1 [12] , long long int arr_2 [12] ) {
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) 803898207)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)37015)))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0LL/*0*/; i_0 < 12LL/*12*/; i_0 += 3LL/*3*/) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (var_14)));
        if ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [(unsigned char)5])))))))
        {
            var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) arr_0 [i_0])) : (-7626756945674907838LL)))) || (((/* implicit */_Bool) arr_1 [i_0]))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_8))));
        }

        var_20 &= ((/* implicit */int) arr_2 [i_0]);
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_13)), (var_2))), (((/* implicit */long long int) (unsigned char)25)))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_8))));
}
