/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2048401901
Invocation: ./yarpgen --std=c -o out/528
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
void test(unsigned int var_0, unsigned int var_2, long long int var_3, long long int var_4, short var_5, long long int var_6, _Bool var_8, unsigned int var_10, unsigned long long int var_12, int zero, unsigned short arr_0 [14] [14] , short arr_1 [14] , unsigned int arr_2 [14] [14] [14] , signed char arr_4 [14] [14] [14] ) {
    var_13 = ((/* implicit */unsigned int) var_8);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-100)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)33)), (var_5))))))) : (var_6)));
    if (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (var_12))))
    {
        /* LoopNest 2 */
        for (int i_0 = 3/*3*/; i_0 < ((((/* implicit */int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) (signed char)-87))))) : ((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) var_8))))) + (10))/*11*/; i_0 += ((((/* implicit */int) var_4)) - (471609321))/*1*/) 
        {
            for (_Bool i_1 = ((((/* implicit */int) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)16)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_0]))))))) != (((unsigned int) arr_0 [(short)3] [i_0 - 1]))))) - (1))/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) max((max((((unsigned int) arr_0 [i_0 - 3] [i_0])), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))))))/*1*/) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((arr_2 [i_0] [i_0] [i_0 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3] [i_1]))))))));
                    arr_5 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0 + 2])) - (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 - 3])))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) var_2);
        var_18 = var_2;
        var_19 = var_8;
    }

    var_20 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-122))))), (((var_8) ? (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)125)), ((unsigned char)239)))))))));
}
