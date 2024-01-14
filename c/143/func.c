/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3124911260
Invocation: ./yarpgen --std=c -o out/143
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
void test(short var_1, _Bool var_2, int var_3, short var_4, signed char var_9, _Bool var_10, int zero, int arr_4 [17] [17] [17] [17] ) {
    /* LoopNest 3 */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < (_Bool)1/*1*/; i_0 += (_Bool)1/*1*/) 
    {
        for (unsigned int i_1 = ((/* implicit */unsigned int) var_2)/*0*/; i_1 < ((((/* implicit */unsigned int) var_10)) + (16U))/*17*/; i_1 += ((((/* implicit */unsigned int) var_10)) + (2U))/*3*/) 
        {
            for (_Bool i_2 = ((((/* implicit */int) var_10)) - (1))/*0*/; i_2 < (_Bool)0/*0*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) var_4))/*1*/) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((signed char) ((_Bool) var_2)));
                    var_13 = ((/* implicit */unsigned int) max((-1137760233), (((/* implicit */int) (_Bool)0))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) * (((((((/* implicit */int) var_10)) + (var_3))) - (arr_4 [i_1] [i_2] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) ((int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (-180122094))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((int) var_9)))));
}
