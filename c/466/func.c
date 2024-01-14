/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2864968630
Invocation: ./yarpgen --std=c -o out/466
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
void test(signed char var_1, unsigned short var_3, _Bool var_4, unsigned short var_6, short var_8, _Bool var_10, int var_11, int var_17, long long int var_18, int zero, long long int arr_0 [11] [11] , short arr_1 [11] [11] , long long int arr_3 [11] ) {
    /* LoopNest 3 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_6)) - (53571U))/*0*/; i_0 < 11U/*11*/; i_0 += ((((/* implicit */unsigned int) var_8)) - (4294937888U))/*3*/) 
    {
        for (signed char i_1 = ((/* implicit */int) ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) : (arr_0 [i_0] [i_0])))))))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) (_Bool)1))) + (10))/*11*/; i_1 += (signed char)4/*4*/) 
        {
            for (int i_2 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (min((6681728629202835350ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((11765015444506716266ULL), (6681728629202835350ULL)))))))) : (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_1])))))/*0*/; i_2 < ((((/* implicit */int) var_6)) - (53560))/*11*/; i_2 += (((((!((_Bool)1))) ? (((/* implicit */int) min(((unsigned char)162), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) -1280495857)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)803)))))) + (3))/*4*/) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)46847))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : ((((_Bool)1) ? (2718098673191501435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 6511178631670940345LL))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (7122107781059346180ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) ((4484339076059383337LL) >= (var_18))))) : (((((/* implicit */_Bool) var_3)) ? (var_18) : (4484339076059383337LL))))))))));
    var_23 = ((/* implicit */unsigned char) var_17);
}
