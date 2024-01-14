/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2634035523
Invocation: ./yarpgen --std=c -o out/89
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
void test(unsigned int var_0, unsigned char var_2, unsigned short var_3, signed char var_5, _Bool var_8, unsigned short var_12, int zero, int arr_1 [11] [11] ) {
    /* LoopNest 2 */
    for (short i_0 = (short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) (-(var_0))))) - (30143))/*11*/; i_0 += ((/* implicit */int) ((/* implicit */short) var_8))/*1*/) 
    {
        for (unsigned long long int i_1 = 0ULL/*0*/; i_1 < ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))))) > (min((((/* implicit */int) var_5)), (((((/* implicit */int) (signed char)71)) >> (((((/* implicit */int) var_3)) - (63857)))))))))) + (10ULL))/*11*/; i_1 += 3ULL/*3*/) 
        {
            {
                arr_5 [i_0] [(signed char)1] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                /* LoopSeq 1 */
                for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) var_0))) - (52))/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) ((short) -540267763)))) - (4))/*9*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) 1603310618))) - (24))/*2*/) 
                {
                    var_18 = ((/* implicit */signed char) 4294967295U);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14301)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-14302))))) : (29U)));
                }
                arr_10 [i_1] = var_12;
                var_19 = ((/* implicit */short) 280946357U);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_2);
}
