/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3144174824
Invocation: ./yarpgen --std=c -o out/980
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
void test(long long int var_7, unsigned int var_8, unsigned long long int var_11, int zero, short arr_2 [19] ) {
    /* LoopNest 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_11))) - (190))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (178))/*18*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (186))/*4*/) 
    {
        for (unsigned long long int i_1 = 0ULL/*0*/; i_1 < 19ULL/*19*/; i_1 += 4ULL/*4*/) 
        {
            {
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (unsigned char)87))));
                arr_8 [i_0 - 2] [i_0 - 1] [i_1] = ((/* implicit */int) (unsigned char)136);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((var_8) == (1219534199U)));
    var_14 = ((/* implicit */unsigned char) (unsigned short)7846);
}
