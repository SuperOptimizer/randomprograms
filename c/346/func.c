/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1602589128
Invocation: ./yarpgen --std=c -o out/346
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
void test(int var_1, _Bool var_2, unsigned short var_4, short var_5, _Bool var_11, int zero, int arr_2 [17] , unsigned short arr_3 [17] [17] ) {
    var_12 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((int) var_1)) : (((/* implicit */int) ((-1410473271) != (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 1/*1*/; i_0 < ((((/* implicit */int) var_2)) + (16))/*16*/; i_0 += ((((/* implicit */int) var_4)) - (40985))/*2*/) 
    {
        for (int i_1 = ((/* implicit */int) (!(((arr_2 [i_0]) >= (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))))/*0*/; i_1 < ((((/* implicit */int) var_11)) + (16))/*17*/; i_1 += 3/*3*/) 
        {
            {
                var_13 = (-(2));
                arr_7 [i_0 - 1] = ((/* implicit */_Bool) ((arr_2 [i_0 + 1]) / (min((arr_2 [i_0 + 1]), (854430672)))));
            }
        } 
    } 
}
