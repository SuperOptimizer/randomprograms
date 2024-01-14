/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1973970835
Invocation: ./yarpgen --std=c -o out/582
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
void test(unsigned long long int var_0, unsigned long long int var_3, unsigned long long int var_7, unsigned short var_10, unsigned long long int var_12, int var_15, short var_17, int var_18, int zero, _Bool arr_0 [20] [20] , unsigned char arr_1 [20] , unsigned short arr_2 [20] [20] [20] , short arr_3 [20] , _Bool arr_4 [20] [20] , unsigned long long int arr_5 [20] [20] [20] [20] , unsigned char arr_6 [20] [20] [20] , unsigned short arr_7 [20] , unsigned long long int arr_8 [20] [20] , short arr_10 [20] [20] , long long int arr_11 [20] [20] [20] [20] [20] [20] ) {
    var_19 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) min((min((var_3), (((/* implicit */unsigned long long int) ((short) var_18))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)62543)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (short)17899))))))))))) - (178))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_15))) - (179))/*20*/; i_0 += (unsigned char)1/*1*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_0]))))) ^ (min(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((short) arr_1 [i_0]))))))))) + (121))/*2*/; i_1 < (short)18/*18*/; i_1 += (short)2/*2*/) 
        {
            for (_Bool i_2 = (_Bool)0/*0*/; i_2 < (_Bool)1/*1*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) (~(min((((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))), ((~(((/* implicit */int) arr_2 [i_1 + 2] [i_1] [i_0])))))))))/*1*/) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_6 [(unsigned short)19] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = ((((/* implicit */int) ((/* implicit */_Bool) ((int) ((unsigned long long int) arr_6 [i_0] [i_1] [12]))))) - (1))/*0*/; i_3 < ((/* implicit */int) ((/* implicit */_Bool) var_17))/*1*/; i_3 += (_Bool)1/*1*/) 
                    {
                        for (_Bool i_4 = ((((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_5 [(unsigned char)0] [i_1] [i_1] [i_3]) : (arr_8 [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [(unsigned short)5]), (((/* implicit */short) arr_0 [(unsigned short)15] [i_1]))))))))) ? (((/* implicit */int) ((unsigned char) (short)32762))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2]))))))))) - (1))/*0*/; i_4 < ((/* implicit */int) ((/* implicit */_Bool) var_12))/*1*/; i_4 += ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [6ULL] [i_1] [6ULL])) ? (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])), (((arr_4 [i_3] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_0]))) : (arr_8 [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2] [i_2] [(unsigned short)18]))))), (((unsigned long long int) arr_7 [i_1])))))))/*1*/) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */long long int) arr_4 [i_1 - 2] [18ULL]);
                                var_21 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)41581)))) > (((/* implicit */int) (short)21906))));
                                var_22 = ((/* implicit */unsigned long long int) (-(arr_11 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */_Bool) ((short) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_12) : (var_0)))));
    var_24 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_10)))));
}
