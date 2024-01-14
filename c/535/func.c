/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3543187210
Invocation: ./yarpgen --std=c -o out/535
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
void test(signed char var_0, long long int var_1, unsigned char var_2, signed char var_3, signed char var_4, int var_5, signed char var_6, long long int var_7, long long int var_8, long long int var_9, unsigned char var_11, int var_12, int zero, unsigned long long int arr_0 [21] [21] , int arr_1 [21] , unsigned char arr_3 [21] , unsigned long long int arr_7 [13] [13] , int arr_8 [13] [13] , signed char arr_12 [18] , signed char arr_17 [18] [18] [18] , long long int arr_19 [18] [18] [18] [18] , short arr_20 [18] ) {
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1U/*1*/; i_0 < 17U/*17*/; i_0 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))) != (((/* implicit */int) var_11))))/*1*/) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((var_8) < (((/* implicit */long long int) arr_1 [4U])))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (+(arr_0 [i_0] [i_0]))))));
        arr_6 [i_0 + 2] = ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0 + 2] [i_0 + 2]));
    }
    for (unsigned short i_1 = (unsigned short)1/*1*/; i_1 < (unsigned short)10/*10*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (59140))/*1*/) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) var_5)), (var_1))) : (((/* implicit */long long int) ((var_5) / (((/* implicit */int) var_11)))))))) : (((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_7 [i_1] [(signed char)1]) : (arr_0 [i_1 + 2] [i_1 + 2]))) - (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */int) arr_3 [i_1]))))))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_1 [i_1 + 2]))));
        var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 2])) ? (arr_0 [i_1] [4LL]) : (((/* implicit */unsigned long long int) arr_8 [6LL] [6LL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43589)) ? (var_1) : (((/* implicit */long long int) arr_1 [i_1]))))))) / (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)32768)))), (max((var_12), (((/* implicit */int) (signed char)127)))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) var_8))) - (1))/*0*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) var_3))/*1*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11)))))))/*1*/) 
    {
        arr_13 [14LL] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [6LL]))));
        /* LoopNest 2 */
        for (short i_3 = ((((/* implicit */int) ((/* implicit */short) (((-9223372036854775807LL - 1LL)) != (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_9))))))) - (1))/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))))) + (18))/*18*/; i_3 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_7)))) > (arr_0 [i_2] [i_2]))))) + (2))/*3*/) 
        {
            for (unsigned int i_4 = 3U/*3*/; i_4 < 16U/*16*/; i_4 += ((((/* implicit */unsigned int) var_8)) - (1728243459U))/*2*/) 
            {
                {
                    arr_18 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((int) var_2)) * (((/* implicit */int) ((unsigned char) (signed char)-87)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = (unsigned char)2/*2*/; i_5 < (unsigned char)14/*14*/; i_5 += (unsigned char)2/*2*/) 
                    {
                        for (short i_6 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) ((arr_1 [i_5]) != (var_5)))) : (((((/* implicit */_Bool) var_6)) ? (-1541650673) : (((/* implicit */int) arr_3 [i_2])))))))) - (1))/*0*/; i_6 < (short)18/*18*/; i_6 += (short)2/*2*/) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((arr_19 [i_2] [i_4 - 3] [i_5 + 4] [i_6]) | (var_8))) + (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 4194303LL)) && (((/* implicit */_Bool) arr_20 [1]))))) != (((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_2]))) : (var_7))) + (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)))));
                            }
                        } 
                    } 
                    arr_23 [(signed char)12] [i_3] [i_2] [(unsigned short)17] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) + (((((/* implicit */int) arr_17 [i_2] [i_3] [i_4 + 2])) - (((/* implicit */int) (unsigned short)36171))))));
                }
            } 
        } 
    }
    var_20 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_12)) : (min((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_2))))), (max((var_1), (var_9))))));
}
