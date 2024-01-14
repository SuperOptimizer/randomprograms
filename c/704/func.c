/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3050060926
Invocation: ./yarpgen --std=c -o out/704
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
void test(unsigned long long int var_1, int var_2, short var_3, unsigned int var_4, unsigned int var_5, unsigned int var_6, signed char var_7, signed char var_9, unsigned char var_10, unsigned short var_11, unsigned short var_12, unsigned int var_13, int zero) {
    /* LoopNest 3 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_1))) - (5012))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_7))) - (93))/*16*/; i_0 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))))))))) + (1))/*1*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) - (50236))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) + (var_1)))))))) + (16))/*16*/; i_1 += (unsigned short)2/*2*/) 
        {
            for (unsigned short i_2 = (unsigned short)2/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned short) var_5))) - (26955))/*13*/; i_2 += (unsigned short)1/*1*/) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_16 -= ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)237))) : (((unsigned long long int) var_4))))));
}
