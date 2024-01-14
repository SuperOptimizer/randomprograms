/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2919824752
Invocation: ./yarpgen --std=c -o out/447
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
void test(signed char var_0, unsigned char var_1, signed char var_6, _Bool var_9, unsigned long long int var_10, long long int var_11, signed char var_13, _Bool var_15, long long int var_16, int zero, _Bool arr_2 [20] ) {
    var_17 -= ((/* implicit */signed char) (unsigned short)1024);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_1)) - (147))))))))) >= ((~(8579649290970894358ULL)))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) min((min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) * (5374047753661866999LL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))) + (3064))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_6))) + (22))/*20*/; i_0 += ((((/* implicit */int) ((/* implicit */short) ((signed char) ((unsigned int) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_13)) + (103))))))))) + (3))/*3*/) 
    {
        for (unsigned short i_1 = (unsigned short)2/*2*/; i_1 < (unsigned short)19/*19*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_16))) - (19236))/*2*/) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_2 [i_1]))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)1028), (((/* implicit */unsigned short) var_1))))) != (((/* implicit */int) ((_Bool) var_11)))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((int) min((((/* implicit */unsigned short) var_9)), (min((((/* implicit */unsigned short) var_1)), ((unsigned short)64512))))));
}
