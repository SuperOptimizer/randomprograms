/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1621843727
Invocation: ./yarpgen --std=c -o out/157
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
void test(signed char var_0, signed char var_1, _Bool var_3, unsigned short var_6, short var_8, unsigned char var_9, _Bool var_10, unsigned short var_12, short var_13, signed char var_14, unsigned char var_15, int zero, unsigned char arr_0 [21] , unsigned int arr_1 [21] [21] , unsigned int arr_3 [23] [23] , long long int arr_4 [23] [23] ) {
    var_16 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) min(((_Bool)1), (var_3)))) : (((/* implicit */int) var_14)))));
    var_17 = ((/* implicit */signed char) (!((_Bool)0)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_10)) + (20ULL))/*21*/; i_0 += ((((/* implicit */unsigned long long int) var_9)) - (95ULL))/*2*/) 
    {
        var_18 = ((/* implicit */unsigned short) 9044196513045433970LL);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_13)), (arr_1 [11LL] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
        var_20 = ((/* implicit */unsigned int) 6273199712582255518LL);
        var_21 |= ((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */unsigned int) -1115162044)) : (3045743145U))));
    }
    for (unsigned char i_1 = (unsigned char)0/*0*/; i_1 < (unsigned char)23/*23*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_14))) - (31))/*3*/) 
    {
        var_22 = ((/* implicit */unsigned char) ((unsigned int) 1115162044));
        var_23 ^= ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))), (arr_3 [i_1] [i_1]))));
    }
    var_24 = ((/* implicit */short) var_15);
    var_25 |= ((/* implicit */int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((1249224150U) >> (((3642656993442517599ULL) - (3642656993442517587ULL))))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_10)))) + (((/* implicit */int) var_12)))))));
}
