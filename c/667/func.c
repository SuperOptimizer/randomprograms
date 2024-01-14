/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 907534998
Invocation: ./yarpgen --std=c -o out/667
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
void test(signed char var_1, short var_2, unsigned short var_3, unsigned short var_5, signed char var_8, signed char var_9, int zero, unsigned long long int arr_0 [16] [16] , signed char arr_3 [16] [16] [16] ) {
    var_12 += ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12815))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_3)) - (39947U))/*3*/; i_0 < 15U/*15*/; i_0 += (((-(4149604550U))) - (145362743U))/*3*/) 
    {
        for (_Bool i_1 = (_Bool)1/*1*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) arr_0 [i_0] [i_0]))/*1*/; i_1 += (_Bool)1/*1*/) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) 2050606252))))) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) max((((_Bool) var_1)), (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 - 1] [i_0])))))))));
                arr_6 [i_1 - 1] [i_0] = ((/* implicit */_Bool) var_5);
                arr_7 [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)10444)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-10445)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31766)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)92)) ? (3307347179U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_1)))))));
    var_15 = var_1;
}
