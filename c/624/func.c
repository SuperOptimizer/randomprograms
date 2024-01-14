/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 242506916
Invocation: ./yarpgen --std=c -o out/624
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
void test(unsigned char var_1, _Bool var_3, _Bool var_4, int var_8, int zero, signed char arr_0 [20] [20] , unsigned char arr_1 [20] , signed char arr_2 [20] , long long int arr_3 [20] [20] , unsigned short arr_4 [20] ) {
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_8))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(4752271189042658772ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = ((/* implicit */int) ((/* implicit */unsigned char) max((min((((/* implicit */short) (unsigned char)43)), ((short)-18857))), (((/* implicit */short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_1))))))))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)1))))), (var_8)))))))) + (16))/*16*/; i_0 += ((((/* implicit */int) var_1)) - (137))/*4*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) 1689305234)) - (1689305234LL))/*0*/; i_1 < 20LL/*20*/; i_1 += ((((/* implicit */long long int) ((((((/* implicit */int) ((unsigned char) arr_2 [i_0]))) % (((/* implicit */int) arr_1 [i_0 + 3])))) + (((/* implicit */int) var_4))))) - (49LL))/*3*/) 
        {
            {
                var_13 |= ((/* implicit */short) (+(arr_3 [i_0 - 1] [i_1])));
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 1])))))));
                var_15 = ((/* implicit */short) (-(((/* implicit */int) min((((unsigned char) arr_4 [i_0])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)81)) && (((/* implicit */_Bool) (unsigned char)200))))))))));
            }
        } 
    } 
}
