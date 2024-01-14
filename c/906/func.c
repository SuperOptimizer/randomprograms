/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 947253506
Invocation: ./yarpgen --std=c -o out/906
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
void test(short var_0, unsigned short var_1, long long int var_2, _Bool var_3, unsigned int var_5, unsigned int var_7, unsigned char var_8, int var_12, unsigned char var_13, unsigned char var_14, unsigned long long int var_15, int zero, unsigned long long int arr_0 [14] , unsigned char arr_1 [14] , unsigned int arr_2 [14] , unsigned char arr_6 [14] , int arr_7 [14] [14] [14] ) {
    var_16 -= ((/* implicit */_Bool) var_14);
    var_17 *= ((/* implicit */int) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) ((unsigned int) ((var_15) - (((/* implicit */unsigned long long int) var_5))))))) - (1))/*0*/; i_0 < (_Bool)1/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
    {
        for (unsigned int i_1 = ((((/* implicit */unsigned int) min(((-((-(((/* implicit */int) var_13)))))), (((/* implicit */int) ((unsigned short) (unsigned char)255)))))) - (143U))/*0*/; i_1 < ((((/* implicit */unsigned int) var_3)) + (14U))/*14*/; i_1 += ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) ((((/* implicit */unsigned int) min((var_12), (((/* implicit */int) arr_1 [i_0]))))) < (((var_7) * (arr_2 [i_0]))))))))) - (140U))/*3*/) 
        {
            for (unsigned int i_2 = ((2317795723U) - (2317795720U))/*3*/; i_2 < ((((/* implicit */unsigned int) var_0)) - (468U))/*12*/; i_2 += ((((/* implicit */unsigned int) arr_0 [i_1])) - (3132501813U))/*4*/) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_7 [i_2 - 3] [i_2 - 2] [i_2 + 1]) - (arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 1]))) ^ (min((arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 3]), (arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 2])))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) 8191)) % (((max((var_2), (((/* implicit */long long int) var_3)))) & (((/* implicit */long long int) (-(arr_7 [i_0] [i_0] [i_0]))))))));
                    arr_11 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))))) : ((~(var_15))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)130)) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)7)), (arr_6 [10U])))))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned char) min((4294967295U), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) % (var_7))) << (((/* implicit */int) var_3))))));
    var_20 = ((/* implicit */short) var_15);
}
