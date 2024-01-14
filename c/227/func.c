/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 139143494
Invocation: ./yarpgen --std=c -o out/227
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
void test(signed char var_1, _Bool var_2, signed char var_3, _Bool var_4, unsigned char var_5, long long int var_12, unsigned int var_13, long long int var_17, int zero) {
    /* LoopNest 3 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_13))) - (21))/*20*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) + (3))/*4*/) 
    {
        for (unsigned int i_1 = ((((/* implicit */unsigned int) var_5)) - (64U))/*0*/; i_1 < 20U/*20*/; i_1 += 4U/*4*/) 
        {
            for (long long int i_2 = 3LL/*3*/; i_2 < 17LL/*17*/; i_2 += 2LL/*2*/) 
            {
                {
                    var_20 += ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))));
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-((((_Bool)1) ? (var_12) : (var_12)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_3);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_12)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_17)) : (11444487207097757145ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)));
}
