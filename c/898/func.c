/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3757168606
Invocation: ./yarpgen --std=c -o out/898
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
void test(_Bool var_0, short var_1, unsigned short var_2, _Bool var_5, long long int var_8, unsigned char var_13, signed char var_15, int zero, int arr_1 [21] [21] , int arr_2 [21] , unsigned long long int arr_3 [21] [21] [21] , _Bool arr_4 [21] [21] [21] ) {
    var_17 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_15)) - (80ULL))/*21*/; i_0 += 1ULL/*1*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) var_15))) - (99))/*2*/; i_1 < (short)17/*17*/; i_1 += (short)3/*3*/) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)1]))) ^ (((unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1412926135996021914LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36283))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 1]))) & (((arr_4 [i_1 - 2] [i_1 + 2] [i_1 - 1]) ? (arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 3]) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 3] [i_1 + 1])))))))));
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))))), (3532665309U)));
                var_21 &= ((/* implicit */short) (-(max(((+(((/* implicit */int) (unsigned char)23)))), (((/* implicit */int) (short)17504))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (((((/* implicit */int) min((var_0), (var_0)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (var_5))))))));
    var_23 = ((/* implicit */unsigned char) (unsigned short)16863);
}
