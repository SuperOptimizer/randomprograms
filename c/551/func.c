/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2464933438
Invocation: ./yarpgen --std=c -o out/551
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
void test(unsigned char var_0, signed char var_1, unsigned long long int var_3, int var_4, unsigned short var_5, unsigned short var_6, unsigned long long int var_7, signed char var_8, int var_9, int zero, unsigned int arr_0 [18] , _Bool arr_2 [18] , long long int arr_3 [18] [18] [18] , unsigned short arr_4 [18] , int arr_5 [18] [18] [18] [18] , short arr_6 [18] [18] [18] , signed char arr_10 [18] [18] [18] [18] , short arr_11 [18] [18] [18] [18] [18] , int arr_16 [16] , unsigned char arr_17 [16] [16] , _Bool arr_18 [16] [16] , unsigned short arr_23 [16] [16] [16] , unsigned int arr_24 [16] [16] ) {
    /* LoopNest 3 */
    for (int i_0 = 0/*0*/; i_0 < ((((/* implicit */int) var_8)) - (85))/*18*/; i_0 += ((((/* implicit */int) var_1)) + (76))/*4*/) 
    {
        for (_Bool i_1 = (_Bool)0/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_7))/*1*/) 
        {
            for (long long int i_2 = ((((/* implicit */long long int) var_8)) - (103LL))/*0*/; i_2 < 18LL/*18*/; i_2 += 3LL/*3*/) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */int) (signed char)7);
                    arr_8 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1]))) : (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])) & (2922038902849643239ULL)))))) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77))) : (127ULL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = ((var_3) - (14860315790180690758ULL))/*4*/; i_3 < 14ULL/*14*/; i_3 += 3ULL/*3*/) 
                    {
                        arr_12 [i_0] [i_3] [i_3] [i_1] [i_0] = ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (2092381117) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 - 3])))) : (((/* implicit */int) arr_10 [i_0] [i_3] [i_3 + 3] [i_3])));
                        arr_13 [i_0] [i_1] [i_3] [5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 4] [i_3 + 4] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 4] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3 - 3] [i_3 - 3] [i_3]))));
                        arr_14 [i_3] [(unsigned short)14] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(short)11] [i_3 - 3] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_3 + 1] [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_3 + 1] [i_3 - 2] [i_3 + 3]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */int) (unsigned short)16374))))) ? (((/* implicit */int) var_0)) : (var_9)))) ? (var_9) : (((/* implicit */int) (_Bool)1))))) - (233742874LL))/*2*/; i_4 < 14LL/*14*/; i_4 += ((((/* implicit */long long int) var_5)) - (39482LL))/*4*/) 
    {
        for (_Bool i_5 = ((/* implicit */int) ((/* implicit */_Bool) var_6))/*1*/; i_5 < ((/* implicit */int) ((/* implicit */_Bool) ((arr_2 [i_4]) ? (((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4])) ? (((/* implicit */int) arr_4 [i_4 - 2])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [(signed char)3] [(signed char)3] [i_4 + 2])))) : ((+(((/* implicit */int) arr_4 [i_4 - 2])))))))/*1*/; i_5 += (_Bool)1/*1*/) 
        {
            for (int i_6 = 0/*0*/; i_6 < 16/*16*/; i_6 += ((((/* implicit */int) var_8)) - (102))/*1*/) 
            {
                {
                    if (((/* implicit */_Bool) -884601666))
                    {
                        var_10 -= ((/* implicit */long long int) arr_5 [i_4] [i_4] [i_6] [i_4 - 1]);
                        var_11 = ((/* implicit */unsigned int) max((var_11), (max((((/* implicit */unsigned int) ((1074545529) >> (((((/* implicit */int) arr_23 [i_4 - 1] [i_5 - 1] [i_6])) - (43072)))))), (((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1]))) : (arr_24 [i_4] [i_4])))))));
                    }

                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 - 1]))) : (((arr_24 [i_4 - 2] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_5] [i_5] [i_4])))))))))))));
                    arr_27 [i_6] = ((/* implicit */_Bool) ((arr_2 [i_6]) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5]))) < (arr_24 [i_4] [i_6])))) : (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_6])) ? (max((arr_5 [i_4 + 2] [i_5] [i_6] [i_5]), (((/* implicit */int) arr_2 [i_4])))) : (((arr_16 [i_6]) * (((/* implicit */int) arr_18 [i_4] [(unsigned short)3]))))))));
                }
            } 
        } 
    } 
}
