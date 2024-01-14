/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3213170717
Invocation: ./yarpgen --std=c -o out/407
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
void test(unsigned long long int var_1, unsigned char var_3, unsigned char var_7, int var_8, _Bool var_9, unsigned long long int var_10, signed char var_12, unsigned int var_13, int var_16, int zero, unsigned char arr_0 [23] , _Bool arr_1 [23] , unsigned long long int arr_4 [23] [23] ) {
    var_18 = ((/* implicit */signed char) (unsigned char)19);
    var_19 = ((/* implicit */short) ((unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */int) (signed char)-75)))))));
    /* LoopNest 3 */
    for (int i_0 = ((((/* implicit */int) var_10)) + (299108996))/*2*/; i_0 < ((((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))))) ? (((((/* implicit */int) ((unsigned short) -446115716))) | ((+(((/* implicit */int) var_3)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)7935))))))))) - (53478))/*22*/; i_0 += ((var_8) + (1468479789))/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) (short)-10485)))))))) - (9))/*2*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) ((arr_1 [i_0 - 2]) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))) ? (1459111203U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21406))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) arr_0 [i_0 + 1]))))))))) + (12))/*20*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (short)8128)) : (((/* implicit */int) (signed char)44)))))) + (68))/*4*/) 
        {
            for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (1))/*0*/; i_2 < (signed char)23/*23*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */int) (short)10495)) / (((/* implicit */int) (unsigned char)56)))))) + (70))/*1*/) 
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-310977432)));
                    if (((/* implicit */_Bool) (short)14336))
                    {
                        arr_8 [i_0] [i_1] [i_2] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 + 1])))) ? (max((arr_4 [i_0 - 2] [i_1 - 2]), (arr_4 [i_0 - 2] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 + 2])) ? (arr_4 [i_0 + 1] [i_1 + 1]) : (arr_4 [i_0 - 2] [i_1 + 1])))));
                        arr_9 [3U] [3U] [3U] [17ULL] = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)39))))), ((+(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (-5524637768993797013LL)))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 11594904769365742770ULL);
                    }

                    arr_11 [i_0] [i_0] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) (unsigned short)21399))), (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (short)16384))))))) + ((+(var_1)))));
                }
            } 
        } 
    } 
}
