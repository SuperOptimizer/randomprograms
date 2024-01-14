/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2653945038
Invocation: ./yarpgen --std=c -o out/344
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
void test(short var_2, _Bool var_4, long long int var_5, _Bool var_6, long long int var_7, short var_8, short var_9, _Bool var_10, short var_11, _Bool var_15, long long int var_17, long long int var_19, int zero) {
    /* LoopNest 2 */
    for (long long int i_0 = 0LL/*0*/; i_0 < 19LL/*19*/; i_0 += ((/* implicit */long long int) var_15)/*1*/) 
    {
        for (long long int i_1 = ((var_5) - (792229660397801707LL))/*0*/; i_1 < 19LL/*19*/; i_1 += ((((/* implicit */long long int) (_Bool)1)) + (1LL))/*2*/) 
        {
            {
                var_20 = var_6;
                /* LoopNest 2 */
                for (_Bool i_2 = (_Bool)1/*1*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) var_11))/*1*/; i_2 += ((((/* implicit */int) var_4)) + (1))/*1*/) 
                {
                    for (short i_3 = (short)3/*3*/; i_3 < ((((/* implicit */int) ((/* implicit */short) (((_Bool)1) ? ((((_Bool)1) ? (((((/* implicit */_Bool) 7150418454331267396LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1732404041123431538LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) : (var_7))))) + (13672))/*17*/; i_3 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_19) : (((((/* implicit */_Bool) var_19)) ? (-4847507138570167466LL) : (628328032742184021LL))))))) - (28566))/*3*/) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (var_10)));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7150418454331267396LL)) ? (-6142646418734378496LL) : (-3329712578747414126LL)))) ? ((((_Bool)0) ? (7150418454331267390LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4088))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-5366)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4847507138570167466LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_17);
    var_24 = ((/* implicit */_Bool) var_11);
}
