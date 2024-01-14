/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2645024550
Invocation: ./yarpgen --std=c -o out/627
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
void test(unsigned int var_1, _Bool var_2, unsigned int var_5, unsigned short var_6, signed char var_8, unsigned int var_9, signed char var_10, int zero, unsigned char arr_0 [13] [13] , signed char arr_2 [13] , short arr_4 [13] , unsigned int arr_5 [13] [13] , unsigned int arr_6 [13] , unsigned short arr_9 [13] ) {
    var_11 = ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_5)) - (3483727841ULL))/*1*/; i_0 < ((((/* implicit */unsigned long long int) var_6)) - (53490ULL))/*12*/; i_0 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_8))))))) : (var_9)))) - (4294967293ULL))/*1*/) 
    {
        for (unsigned long long int i_1 = 0ULL/*0*/; i_1 < ((((/* implicit */unsigned long long int) var_2)) + (12ULL))/*13*/; i_1 += ((((/* implicit */unsigned long long int) var_9)) - (2612268211ULL))/*1*/) 
        {
            for (unsigned int i_2 = 0U/*0*/; i_2 < ((((min((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (arr_5 [i_0 - 1] [i_0 + 1]))) & (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 + 1]))))))) + (12U))/*13*/; i_2 += 3U/*3*/) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned short) ((unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_0 [7U] [12ULL])))) : (((/* implicit */int) arr_4 [i_0 - 1])))));
                    var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_0] [i_0 - 1]) : (arr_6 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)8])))))) : (((((/* implicit */_Bool) arr_6 [9U])) ? (arr_6 [i_0]) : (arr_5 [i_0] [i_0 - 1])))));
                    var_13 = ((/* implicit */unsigned long long int) min((3603761730U), (((/* implicit */unsigned int) ((unsigned short) (+(691205565U)))))));
                }
            } 
        } 
    } 
}
