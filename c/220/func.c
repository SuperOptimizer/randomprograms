/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4198834825
Invocation: ./yarpgen --std=c -o out/220
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
void test(unsigned char var_1, unsigned long long int var_9, unsigned char var_11, signed char var_13, _Bool var_15, signed char var_16, int zero, unsigned char arr_0 [22] , unsigned int arr_1 [22] ) {
    var_17 = ((/* implicit */_Bool) var_9);
    var_18 -= ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_16)))))))) + (22))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_1))) - (60))/*1*/) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(-3704183053166932764LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)73)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1985651634U)))) : (3704183053166932765LL)))) ? (((((/* implicit */_Bool) 476086456U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : (((13273796528320335399ULL) << (((arr_1 [i_0]) - (158320080U))))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)128)))) & (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_16))) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) var_13))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_16))/*1*/) 
    {
        var_19 = ((/* implicit */signed char) (unsigned char)0);
        var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1]))));
    }
}
