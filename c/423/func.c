/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 425539120
Invocation: ./yarpgen --std=c -o out/423
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
void test(long long int var_1, int var_4, int var_7, int var_8, int var_10, int zero, unsigned long long int arr_0 [23] , short arr_1 [23] [23] , unsigned char arr_2 [23] [23] , unsigned short arr_3 [23] , int arr_6 [23] [23] [23] [23] , unsigned short arr_8 [23] [23] [23] [23] [23] [23] , int arr_9 [23] [23] [23] [23] ) {
    /* LoopNest 2 */
    for (long long int i_0 = ((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_10))))))) + (1LL))/*1*/; i_0 < 22LL/*22*/; i_0 += 4LL/*4*/) 
    {
        for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) + (23))/*23*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) 32767LL)) ? (2128877698) : (0))))) - (6271))/*3*/) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = ((max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0 + 1])))), (var_8))) - (1501033550))/*0*/; i_2 < ((((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_0 [(unsigned char)16])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)6144))) : ((+(-9093514813252191624LL))))) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)13])))))) - (6121))/*23*/; i_2 += ((var_7) - (395153283))/*3*/) 
                {
                    for (unsigned int i_3 = 0U/*0*/; i_3 < ((((/* implicit */unsigned int) var_10)) - (3615299273U))/*23*/; i_3 += ((((/* implicit */unsigned int) var_1)) - (2227297733U))/*3*/) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(5351033920987831017ULL)))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (var_1) : (-8034542358629779754LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (max((((/* implicit */int) (unsigned short)0)), (2147483647)))));
                            arr_11 [i_3] [i_1] [i_0 - 1] [i_3] [i_0] [i_2] = ((/* implicit */unsigned int) (-(10872986773777658992ULL)));
                            arr_12 [i_0] [(unsigned char)5] [i_0] [i_0] = (((+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)16] [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (15ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) != (min((7573757299931892623ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))))));
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_1)))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0] [i_1] [(signed char)8] [i_1] [(signed char)8]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((2147483647), (arr_6 [i_0] [i_1] [i_0] [i_1])))))))));
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */_Bool) arr_6 [22] [i_1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (unsigned char)241)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) 1466766585U)) - (-274877906944LL))));
}
