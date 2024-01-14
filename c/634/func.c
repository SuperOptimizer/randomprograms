/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2628420897
Invocation: ./yarpgen --std=c -o out/634
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
void test(int var_10, int zero, short arr_0 [22] , signed char arr_1 [22] , unsigned short arr_2 [22] , unsigned long long int arr_4 [22] , unsigned short arr_5 [22] , int arr_9 [22] [22] , short arr_10 [22] ) {
    var_16 = ((/* implicit */unsigned char) (+(64922028U)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_10)) - (3727089702U))/*0*/; i_0 < 22U/*22*/; i_0 += 1U/*1*/) /* same iter space */
    {
        var_17 = arr_1 [i_0];
        var_18 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */short) arr_2 [i_0]);
    }
    for (unsigned int i_1 = ((((/* implicit */unsigned int) var_10)) - (3727089702U))/*0*/; i_1 < 22U/*22*/; i_1 += 1U/*1*/) /* same iter space */
    {
        arr_6 [i_1] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))), (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_1 [i_1])), (arr_0 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
    }
    for (unsigned int i_2 = ((((/* implicit */unsigned int) var_10)) - (3727089702U))/*0*/; i_2 < 22U/*22*/; i_2 += 1U/*1*/) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]);
        var_21 = ((/* implicit */unsigned int) min(((+(max((((/* implicit */int) (short)-20030)), (-1423357600))))), (((/* implicit */int) arr_5 [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((max((((/* implicit */unsigned short) arr_1 [i_2])), (arr_5 [i_2]))), (arr_5 [14U]))))));
        var_22 -= ((/* implicit */signed char) min((min((max((arr_10 [i_2]), (arr_0 [i_2]))), (arr_0 [(unsigned short)17]))), (((/* implicit */short) arr_1 [i_2]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = ((((/* implicit */int) ((/* implicit */_Bool) arr_2 [(short)10]))) - (1))/*0*/; i_3 < (_Bool)1/*1*/; i_3 += ((/* implicit */int) ((/* implicit */_Bool) arr_9 [i_2] [i_2]))/*1*/) /* same iter space */
        {
            arr_14 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2]))));
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_2 [i_2]);
        }
        for (_Bool i_4 = ((((/* implicit */int) ((/* implicit */_Bool) arr_2 [(short)10]))) - (1))/*0*/; i_4 < (_Bool)1/*1*/; i_4 += ((/* implicit */int) ((/* implicit */_Bool) arr_9 [i_2] [i_2]))/*1*/) /* same iter space */
        {
            arr_19 [i_2] [i_4] [i_2] = ((/* implicit */short) (-(max(((+(((/* implicit */int) arr_10 [i_2])))), (((/* implicit */int) arr_2 [i_2]))))));
            var_23 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
        }
    }
}
