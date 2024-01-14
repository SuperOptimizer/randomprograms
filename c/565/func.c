/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1428376909
Invocation: ./yarpgen --std=c -o out/565
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
void test(unsigned int var_5, unsigned int var_7, unsigned int var_9, int zero, unsigned short arr_1 [23] [23] ) {
    /* LoopNest 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (113))/*0*/; i_0 < (unsigned char)23/*23*/; i_0 += (unsigned char)1/*1*/) 
    {
        for (_Bool i_1 = ((/* implicit */int) (_Bool)0)/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_9))/*1*/) 
        {
            {
                var_10 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) - (500132307U))) >= (var_5)));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (short)-11553))))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) arr_1 [i_0] [i_1]));
            }
        } 
    } 
    var_12 = (+(var_9));
}
