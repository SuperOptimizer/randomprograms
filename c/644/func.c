/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1398431475
Invocation: ./yarpgen --std=c -o out/644
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
void test(int var_0, unsigned short var_1, short var_2, unsigned short var_3, unsigned int var_4, int var_5, unsigned long long int var_6, int var_8, unsigned int var_10, unsigned char var_11, unsigned char var_13, short var_15, unsigned int var_18, unsigned char var_19, int zero) {
    /* LoopNest 2 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_11))) + (13))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) var_5))) + (50))/*16*/; i_0 += (signed char)2/*2*/) 
    {
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_15)) - (2658ULL))/*3*/; i_1 < ((((/* implicit */unsigned long long int) var_1)) - (13497ULL))/*15*/; i_1 += 1ULL/*1*/) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_2))))) ? (((unsigned long long int) ((unsigned short) var_6))) : (((/* implicit */unsigned long long int) var_8))));
                if (((/* implicit */_Bool) var_10))
                {
                    arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)28873)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) : (var_4)));
                    arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (var_18) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))), (max((((/* implicit */unsigned long long int) var_4)), (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                }

            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_19);
}
