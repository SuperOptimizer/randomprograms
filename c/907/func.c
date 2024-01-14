/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3610367179
Invocation: ./yarpgen --std=c -o out/907
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
void test(unsigned int var_0, unsigned char var_1, signed char var_4, unsigned int var_5, long long int var_8, unsigned short var_9, unsigned short var_10, short var_12, unsigned long long int var_13, unsigned char var_14, signed char var_15, int zero, short arr_0 [20] , int arr_1 [20] , short arr_4 [18] , unsigned short arr_6 [18] [18] [18] , unsigned int arr_7 [18] , int arr_9 [18] ) {
    /* LoopSeq 4 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_10))) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_13))/*1*/) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22270))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (var_0))), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (min((3682989146U), (((/* implicit */unsigned int) (unsigned short)61761)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12))))))))));
    }
    for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (50160))/*3*/; i_1 < ((((/* implicit */int) var_9)) - (5546))/*17*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (38125))/*4*/) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (signed char)44);
        /* LoopSeq 1 */
        for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1 - 2]))))))))) + (2))/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (224))/*17*/; i_2 += (unsigned char)4/*4*/) 
        {
            var_19 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (short)1008)) ? (((/* implicit */int) (short)-1009)) : (((/* implicit */int) (short)1008)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [2ULL] [2ULL] [i_2])))))));
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-1008))));
        }
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1009)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1007))) : (min((((/* implicit */long long int) ((unsigned short) (short)1008))), (-6875305161465849113LL)))));
    }
    for (unsigned short i_3 = ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (50160))/*3*/; i_3 < ((((/* implicit */int) var_9)) - (5546))/*17*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (38125))/*4*/) /* same iter space */
    {
        arr_10 [i_3] = max((((/* implicit */unsigned int) (short)1008)), (((((/* implicit */_Bool) 3312260152U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-994))) : (3312260157U))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) arr_7 [11ULL]);
        arr_12 [i_3] = ((/* implicit */unsigned char) (+((-(arr_9 [i_3])))));
    }
    for (unsigned short i_4 = ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (50160))/*3*/; i_4 < ((((/* implicit */int) var_9)) - (5546))/*17*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (38125))/*4*/) /* same iter space */
    {
        arr_16 [(short)3] = ((/* implicit */_Bool) var_4);
        var_22 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        arr_17 [i_4 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)2040)) / (-1037417516)));
    }
    var_23 |= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_15)))) * ((-(((/* implicit */int) var_14))))))), (var_5)));
    var_24 -= ((/* implicit */long long int) (unsigned short)4095);
}
