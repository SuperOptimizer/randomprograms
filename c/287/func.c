/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 970361585
Invocation: ./yarpgen --std=c -o out/287
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
void test(unsigned char var_0, long long int var_3, _Bool var_4, short var_5, unsigned int var_6, signed char var_7, int zero, unsigned short arr_0 [20] [20] , short arr_3 [20] [20] , unsigned char arr_6 [20] [20] , unsigned short arr_7 [20] [20] [20] [20] , long long int arr_10 [20] [20] [20] , unsigned int arr_12 [20] [20] [20] [20] [20] [20] ) {
    var_12 |= ((/* implicit */int) var_5);
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) 4773520905910015831LL)) - (78305111U))/*0*/; i_0 < ((var_6) - (1581005574U))/*20*/; i_0 += 2U/*2*/) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2U/*2*/; i_1 < ((((/* implicit */unsigned int) var_7)) + (10U))/*19*/; i_1 += 1U/*1*/) 
        {
            for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (7))/*2*/; i_2 < (unsigned char)17/*17*/; i_2 += (unsigned char)4/*4*/) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = (_Bool)0/*0*/; i_3 < (_Bool)1/*1*/; i_3 += (_Bool)1/*1*/) 
                    {
                        for (unsigned char i_4 = (unsigned char)2/*2*/; i_4 < (unsigned char)17/*17*/; i_4 += (unsigned char)4/*4*/) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
                                arr_14 [i_1 + 1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */_Bool) (-(arr_12 [i_0] [i_1] [i_4] [i_3] [(_Bool)1] [i_0])));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1]))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_10 [i_0] [i_1 + 1] [(_Bool)1]))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((short) arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_5 = ((((/* implicit */unsigned int) 4773520905910015831LL)) - (78305111U))/*0*/; i_5 < ((var_6) - (1581005574U))/*20*/; i_5 += 2U/*2*/) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_5] [i_5]))));
        arr_17 [i_5] = ((/* implicit */signed char) arr_0 [i_5] [i_5]);
    }
    for (unsigned int i_6 = ((((/* implicit */unsigned int) 4773520905910015831LL)) - (78305111U))/*0*/; i_6 < ((var_6) - (1581005574U))/*20*/; i_6 += 2U/*2*/) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) arr_7 [(short)10] [i_6] [i_6] [i_6]);
        var_22 = ((/* implicit */int) var_4);
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) -3024982173524479500LL))));
}
