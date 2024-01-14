/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 811865001
Invocation: ./yarpgen --std=c -o out/958
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
void test(unsigned long long int var_0, unsigned int var_1, unsigned int var_2, unsigned long long int var_3, long long int var_6, unsigned int var_8, unsigned short var_10, signed char var_11, unsigned int var_13, int var_14, long long int var_16, int zero, unsigned long long int arr_0 [16] [16] , long long int arr_2 [16] ) {
    /* LoopNest 2 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_11)) - (14U))/*0*/; i_0 < ((((/* implicit */unsigned int) var_11)) + (2U))/*16*/; i_0 += ((var_13) - (3138751304U))/*1*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_1))) - (1))/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_16))/*1*/) 
        {
            {
                if (((/* implicit */_Bool) var_10))
                {
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-1520688300969560256LL), (1520688300969560254LL))))));
                    var_18 = ((((/* implicit */_Bool) (~(-1520688300969560254LL)))) ? (var_6) : (min((((/* implicit */long long int) var_8)), (arr_2 [i_0]))));
                }

                var_19 = ((/* implicit */_Bool) 9223372036854775807LL);
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1520688300969560246LL)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */long long int) var_2)) : (-7286587724615808643LL)))) : (min((arr_0 [i_0] [15LL]), (((/* implicit */unsigned long long int) (signed char)-64))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((arr_0 [12ULL] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18442))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_8);
    var_22 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((signed char) var_14))))));
}
