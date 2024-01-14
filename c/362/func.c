/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3261676663
Invocation: ./yarpgen --std=c -o out/362
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
void test(_Bool var_0, short var_6, unsigned short var_9, long long int var_12, unsigned short var_13, int zero, unsigned short arr_1 [15] [15] , _Bool arr_3 [15] [15] [15] , unsigned long long int arr_6 [15] [15] [15] [15] ) {
    var_14 = (-(((/* implicit */int) var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0/*0*/; i_0 < (((+(((/* implicit */int) (short)32568)))) - (32553))/*15*/; i_0 += 4/*4*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) var_13)) - (41614))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) - (50783))/*15*/; i_1 += (unsigned short)3/*3*/) 
        {
            for (int i_2 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((_Bool) 133693440U))))) - (61939))/*0*/; i_2 < ((((/* implicit */int) ((unsigned long long int) var_12))) + (1393732563))/*15*/; i_2 += ((((/* implicit */int) var_0)) + (2))/*2*/) 
            {
                {
                    var_15 -= ((/* implicit */_Bool) ((signed char) 1431056459U));
                    var_16 = ((/* implicit */signed char) ((arr_6 [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) (!(((/* implicit */_Bool) 75978290U)))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2]);
                    arr_9 [i_1] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) 1431056472U)) ? ((-(2863910819U))) : (((((/* implicit */unsigned int) -2147483646)) - (1431056449U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (1431056459U))))));
                }
            } 
        } 
    } 
}
