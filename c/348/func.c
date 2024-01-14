/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2350588489
Invocation: ./yarpgen --std=c -o out/348
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
void test(long long int var_5, unsigned long long int var_8, unsigned long long int var_10, int zero, _Bool arr_4 [22] [22] [22] [22] , signed char arr_6 [22] [22] [22] [22] ) {
    /* LoopNest 3 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (164))/*22*/; i_0 += (unsigned char)3/*3*/) 
    {
        for (unsigned long long int i_1 = 0ULL/*0*/; i_1 < 22ULL/*22*/; i_1 += 4ULL/*4*/) 
        {
            for (unsigned long long int i_2 = 3ULL/*3*/; i_2 < 19ULL/*19*/; i_2 += ((((/* implicit */unsigned long long int) var_5)) - (9427380047195083627ULL))/*1*/) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)119)))), (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2 - 2]))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)14)))), (((/* implicit */int) (unsigned char)119))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (((_Bool) (short)-20301)))))) * (var_10)))));
}
