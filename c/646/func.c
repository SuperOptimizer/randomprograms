/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 138256636
Invocation: ./yarpgen --std=c -o out/646
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
void test(unsigned long long int var_0, unsigned int var_1, int var_4, unsigned long long int var_5, unsigned int var_7, long long int var_12, int zero, int arr_1 [14] , _Bool arr_6 [14] [14] [14] , signed char arr_10 [14] [14] [14] ) {
    var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (max((((/* implicit */long long int) var_1)), (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (signed char)-1)) : (-353855937))))))));
    var_15 = ((/* implicit */short) var_0);
    var_16 = ((/* implicit */_Bool) -802383970726504407LL);
    /* LoopNest 2 */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < ((/* implicit */int) ((/* implicit */signed char) var_5))/*14*/; i_0 += (signed char)1/*1*/) 
    {
        for (long long int i_1 = 0LL/*0*/; i_1 < ((((/* implicit */long long int) var_4)) - (1625721273LL))/*14*/; i_1 += 4LL/*4*/) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = ((((/* implicit */int) var_12)) + (1408901739))/*0*/; i_2 < 14/*14*/; i_2 += ((var_4) - (1625721283))/*4*/) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) 353855937))));
                    arr_11 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)62))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_6 [i_1] [0ULL] [i_1]))));
                }
                arr_12 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_0]))) / (-3878525867265721656LL)))) / (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) arr_1 [(unsigned char)8])) / (2425940073794000336ULL)))))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-1))))));
            }
        } 
    } 
}
