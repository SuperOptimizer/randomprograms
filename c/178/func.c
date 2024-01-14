/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1378834693
Invocation: ./yarpgen --std=c -o out/178
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
void test(long long int var_0, unsigned char var_1, unsigned int var_2, unsigned short var_3, unsigned long long int var_4, unsigned int var_5, unsigned int var_7, unsigned int var_8, unsigned short var_9, unsigned int var_11, long long int var_12, int var_13, int zero, unsigned long long int arr_1 [22] , unsigned short arr_4 [22] , unsigned char arr_8 [22] [22] [22] [22] , unsigned short arr_10 [22] [22] [22] [22] [22] ) {
    var_15 = ((/* implicit */_Bool) var_5);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64194)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64194))) : (min((min((var_8), (((/* implicit */unsigned int) (unsigned short)1341)))), (((/* implicit */unsigned int) (unsigned short)64202))))));
    if (((/* implicit */_Bool) (unsigned short)64185))
    {
        var_17 = ((/* implicit */signed char) var_0);
        var_18 = ((/* implicit */int) var_1);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_7))));
        var_20 = ((/* implicit */long long int) var_9);
        /* LoopNest 2 */
        for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (92))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_11))) - (218))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_12))) - (166))/*1*/) 
        {
            for (unsigned long long int i_1 = 1ULL/*1*/; i_1 < 21ULL/*21*/; i_1 += ((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (unsigned short)64185)), (var_11)))))) - (64184ULL))/*1*/) 
            {
                {
                    arr_7 [i_0] [i_1] = (~(((5129786078331778127LL) << (((((/* implicit */int) (unsigned short)64185)) - (64185))))));
                    /* LoopNest 2 */
                    for (unsigned short i_2 = ((/* implicit */int) ((/* implicit */unsigned short) 0LL))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned short) var_4))) - (5954))/*22*/; i_2 += (unsigned short)2/*2*/) 
                    {
                        for (long long int i_3 = ((((/* implicit */long long int) var_2)) - (4019349852LL))/*0*/; i_3 < 22LL/*22*/; i_3 += ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64223)) ? (((/* implicit */int) (unsigned short)1341)) : (var_13)))) ? (1326936977) : (((/* implicit */int) (unsigned short)1333))))) - (1326936975LL))/*2*/) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1861233068)))) ? (((3375872984U) << (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1] [i_3] [i_3])) - (54540))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)1341), (arr_10 [i_0] [i_1] [i_1 + 1] [i_1] [i_3])))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)64186), ((unsigned short)64194)))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)1305)))) ^ (((/* implicit */int) max((arr_4 [i_1 - 1]), (arr_4 [i_0]))))));
                    var_23 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (unsigned short)38554)), (((long long int) var_3)))), (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1] [i_0] [i_1]))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((unsigned int) arr_1 [i_0])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1 - 1] [i_1] [i_1])))));
                }
            } 
        } 
    }

}
