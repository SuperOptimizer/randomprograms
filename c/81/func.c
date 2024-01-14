/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2827771858
Invocation: ./yarpgen --std=c -o out/81
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
void test(long long int var_1, unsigned long long int var_3, signed char var_5, int var_6, int var_8, long long int var_9, unsigned char var_13, unsigned int var_14, signed char var_16, signed char var_17, int zero, unsigned char arr_0 [11] [11] , unsigned long long int arr_1 [11] , unsigned int arr_3 [11] [11] [11] , unsigned char arr_4 [11] [11] [11] , unsigned long long int arr_6 [11] [11] [11] ) {
    if ((!(((/* implicit */_Bool) var_17))))
    {
        var_18 ^= ((/* implicit */unsigned int) min((8833069507397133958LL), (((/* implicit */long long int) 3290796124U))));
        var_19 = ((/* implicit */signed char) min((var_6), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }

    if (((/* implicit */_Bool) ((((/* implicit */_Bool) 4131327645U)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned char)45)))))
    {
        var_20 = ((/* implicit */signed char) var_1);
        /* LoopSeq 1 */
        for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_3))) - (191))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) (-(min((var_14), (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (1U))))))))) - (110))/*11*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) 4131327633U))) - (143))/*2*/) 
        {
            arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 4131327645U);
            var_21 = (~(((/* implicit */int) min((arr_0 [i_0] [i_0]), ((unsigned char)198)))));
            /* LoopNest 2 */
            for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 163639654U))) : (min((arr_1 [i_0]), (arr_1 [i_0]))))))) - (102))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) min(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), ((-(((/* implicit */int) (signed char)-1)))))))) - (114))/*11*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) (unsigned char)76))) - (72))/*4*/) 
            {
                for (unsigned long long int i_2 = 1ULL/*1*/; i_2 < 9ULL/*9*/; i_2 += ((((/* implicit */unsigned long long int) var_13)) - (250ULL))/*1*/) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]);
                        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3290796127U)) ? ((+(arr_6 [i_0] [i_2 + 2] [i_2 - 1]))) : (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_3 [i_0] [i_0] [i_0]))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (unsigned char)34))));
        }
        var_23 = ((/* implicit */unsigned long long int) (-(var_9)));
    }

}
