/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2286615694
Invocation: ./yarpgen --std=c -o out/225
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
void test(unsigned long long int var_1, unsigned int var_2, unsigned int var_12, unsigned int var_13, unsigned int var_14, int zero, int arr_0 [11] , unsigned short arr_1 [11] [11] ) {
    var_16 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < 11ULL/*11*/; i_0 += 1ULL/*1*/) 
    {
        for (unsigned long long int i_1 = 2ULL/*2*/; i_1 < 8ULL/*8*/; i_1 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1959394300U), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (var_14))))) : (((1959394300U) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_2)))))))/*1*/) 
        {
            for (short i_2 = ((((/* implicit */int) ((/* implicit */short) (((-((~(var_12))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((2865295505U) != (((((/* implicit */_Bool) var_1)) ? (2311033205U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))))))) + (9035))/*0*/; i_2 < (short)11/*11*/; i_2 += (short)2/*2*/) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((2335572996U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-30441)))))));
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((2865295518U) << (((((/* implicit */int) (unsigned short)63091)) - (63074))))))));
                }
            } 
        } 
    } 
}
