/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 730907091
Invocation: ./yarpgen --std=c -o out/208
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
void test(unsigned int var_0, _Bool var_1, signed char var_2, unsigned long long int var_3, unsigned short var_4, unsigned short var_5, unsigned short var_6, long long int var_7, long long int var_8, unsigned short var_10, unsigned long long int var_11, unsigned int var_12, signed char var_13, short var_14, int zero, long long int arr_2 [23] [23] , short arr_3 [23] [23] , unsigned int arr_4 [23] [23] [23] , unsigned short arr_6 [23] [23] [23] [23] , unsigned long long int arr_10 [23] [23] [23] [23] [23] ) {
    /* LoopNest 3 */
    for (_Bool i_0 = ((/* implicit */int) ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_12)))))))))/*1*/; i_0 < (_Bool)1/*1*/; i_0 += (_Bool)1/*1*/) 
    {
        for (_Bool i_1 = (_Bool)0/*0*/; i_1 < (_Bool)1/*1*/; i_1 += (_Bool)1/*1*/) 
        {
            for (_Bool i_2 = (_Bool)0/*0*/; i_2 < (_Bool)1/*1*/; i_2 += (_Bool)1/*1*/) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4U/*4*/; i_3 < 21U/*21*/; i_3 += ((((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) var_2)))))), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) var_13)) : (-2048883930))))))) - (65447U))/*2*/) 
                    {
                        for (_Bool i_4 = ((((/* implicit */int) ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */long long int) ((int) var_2))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)15] [16U] [(unsigned short)15] [i_3]))) : (arr_2 [i_1] [i_1])))))))) - (1))/*0*/; i_4 < (_Bool)0/*0*/; i_4 += ((/* implicit */int) ((/* implicit */_Bool) var_14))/*1*/) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_2] [i_4])))) && (((/* implicit */_Bool) ((unsigned int) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65501)) ? (((/* implicit */int) (unsigned short)38)) : (((/* implicit */int) (unsigned short)65496))))) : (var_8)))));
                                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned char) var_0)))))), (var_0)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = ((((/* implicit */int) ((/* implicit */unsigned short) var_12))) - (61248))/*0*/; i_5 < (unsigned short)23/*23*/; i_5 += ((((/* implicit */int) ((/* implicit */unsigned short) var_11))) - (53023))/*1*/) 
                    {
                        var_18 *= (-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(1383073910U)))) + (arr_10 [i_0 - 1] [i_0 - 1] [(unsigned short)11] [i_2] [i_5])));
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2484031037U))));
                    }
                    var_21 = min((((/* implicit */short) (!(((1383073897U) != (2911893388U)))))), (((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_12)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_6)) ? (((/* implicit */int) var_6)) : (-187367600)))) ? (((/* implicit */int) (!(((_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
}
