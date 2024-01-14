/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 892240056
Invocation: ./yarpgen --std=c -o out/918
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
void test(unsigned long long int var_2, unsigned short var_4, unsigned long long int var_5, unsigned long long int var_6, unsigned int var_7, unsigned long long int var_9, unsigned short var_10, int zero, unsigned int arr_0 [12] , unsigned long long int arr_1 [12] , unsigned char arr_2 [12] , unsigned short arr_4 [12] ) {
    /* LoopNest 2 */
    for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (52474))/*12*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((unsigned long long int) var_6))))))) + (2))/*3*/) 
    {
        for (unsigned int i_1 = 0U/*0*/; i_1 < ((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))) | (var_9)))) - (3221077809U))/*12*/; i_1 += ((((/* implicit */unsigned int) arr_2 [i_0])) - (71U))/*1*/) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_6))));
                arr_5 [i_1] = ((/* implicit */unsigned char) var_10);
                if (((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))))))
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((max((var_5), (var_2))), (((unsigned long long int) arr_1 [i_1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4539)))));
                    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) 3323572802U));
                }

            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_2))))));
    var_15 ^= ((/* implicit */unsigned short) var_6);
}
