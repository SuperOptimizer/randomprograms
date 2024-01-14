/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2728497095
Invocation: ./yarpgen --std=c -o out/428
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
void test(long long int var_1, int var_2, unsigned int var_4, _Bool var_6, unsigned int var_7, int var_8, _Bool var_9, _Bool var_13, _Bool var_14, _Bool var_15, unsigned int var_16, int var_17, unsigned int var_18, int zero, unsigned int arr_0 [12] , int arr_2 [12] [12] , _Bool arr_4 [12] [12] [12] , long long int arr_5 [12] , _Bool arr_8 [12] [12] [12] [12] ) {
    /* LoopNest 3 */
    for (_Bool i_0 = ((((/* implicit */int) var_6)) - (1))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */_Bool) var_16))) - (1))/*0*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_18))) - (9132))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_13))) + (12))/*12*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) (_Bool)1))) + (1))/*2*/) 
        {
            for (long long int i_2 = ((((/* implicit */long long int) var_7)) - (345592403LL))/*0*/; i_2 < ((((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) min((var_14), (arr_4 [i_0] [i_1] [i_1])))))) ? (((arr_4 [i_1] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((536869888U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_1])) : (arr_0 [i_0]))))))))))) + (11LL))/*12*/; i_2 += ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) ((_Bool) var_16)))))) + (3LL))/*2*/) 
            {
                {
                    var_19 = arr_8 [i_2] [i_1] [i_1] [i_0];
                    var_20 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_21 = ((var_15) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 2097024)) : (1599263649U))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) var_17)))))) : (((/* implicit */unsigned int) ((int) var_17))));
}
