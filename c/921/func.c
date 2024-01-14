/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3920449697
Invocation: ./yarpgen --std=c -o out/921
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
void test(short var_0, long long int var_1, unsigned int var_2, long long int var_4, int var_5, _Bool var_6, short var_7, long long int var_8, unsigned char var_9, unsigned char var_10, signed char var_11, short var_12, int var_13, long long int var_18, int zero, long long int arr_0 [20] [20] , unsigned int arr_1 [20] , short arr_2 [20] , unsigned long long int arr_5 [20] [20] , short arr_6 [20] [20] [20] , unsigned long long int arr_7 [20] ) {
    var_19 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */signed char) var_6))));
    var_20 -= ((/* implicit */_Bool) var_10);
    if (((/* implicit */_Bool) var_1))
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((var_0), (((/* implicit */short) ((unsigned char) var_13))))))));
        /* LoopNest 3 */
        for (unsigned int i_0 = 0U/*0*/; i_0 < ((((/* implicit */unsigned int) var_18)) - (1874711394U))/*20*/; i_0 += ((((/* implicit */unsigned int) var_4)) - (2530495030U))/*1*/) 
        {
            for (long long int i_1 = ((((/* implicit */long long int) var_9)) - (54LL))/*0*/; i_1 < ((((/* implicit */long long int) var_2)) - (2750866235LL))/*20*/; i_1 += ((((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (short)-16223)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-9223372036854775784LL))) : (((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (-9223372036854775784LL) : (((/* implicit */long long int) arr_1 [4])))))) + (130LL))/*2*/) 
            {
                for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) max((9223372036854775783LL), ((-(9223372036854775767LL))))))) - (1))/*0*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) var_7))/*1*/; i_2 += (_Bool)1/*1*/) 
                {
                    {
                        arr_8 [(unsigned char)8] [i_1] [i_1] |= ((/* implicit */_Bool) (~(min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5))))));
                        arr_9 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)60)) ? ((+(arr_7 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (8572913024813048764LL) : (((/* implicit */long long int) var_13)))))))));
                        var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))), ((+(((/* implicit */int) arr_6 [i_0] [(unsigned char)5] [i_1]))))));
                    }
                } 
            } 
        } 
    }

}
