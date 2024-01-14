/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2684301913
Invocation: ./yarpgen --std=c -o out/203
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
void test(short var_0, unsigned int var_1, long long int var_2, unsigned int var_3, long long int var_4, unsigned long long int var_5, long long int var_6, short var_7, long long int var_8, unsigned int var_9, short var_10, unsigned int var_11, short var_12, int zero, unsigned int arr_1 [18] , short arr_5 [18] [18] [18] , unsigned int arr_6 [18] [18] [18] , unsigned int arr_10 [18] [18] [18] [18] , unsigned char arr_11 [18] , short arr_12 [18] [18] [18] [18] , short arr_20 [25] [25] [25] , unsigned int arr_21 [25] [25] [25] ) {
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) (unsigned char)96)))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) (+(((-7039002011811073099LL) + (((/* implicit */long long int) 2905131893U)))))))) - (32554))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_9))) + (2695))/*18*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_3))) + (20975))/*3*/) 
    {
        for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (42))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) ((short) (+(arr_1 [(unsigned char)8])))))) + (11))/*18*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (136))/*3*/) 
        {
            {
                if (((/* implicit */_Bool) min(((+(arr_1 [i_0]))), (((/* implicit */unsigned int) ((((unsigned int) var_3)) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))
                {
                    var_14 = ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (short i_2 = ((((/* implicit */int) ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) > (arr_1 [i_0]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)18922))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11))))))) + (1))/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)164))))))) + (17))/*17*/; i_2 += ((((/* implicit */int) var_7)) - (12327))/*3*/) 
                    {
                        for (long long int i_3 = ((((/* implicit */long long int) var_9)) - (784921995LL))/*0*/; i_3 < (((+((-(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-18922))))))))) + (243068572372678014LL))/*18*/; i_3 += ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_6 [i_1] [i_2] [(short)4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18942))) : ((~(arr_6 [10ULL] [i_0] [14LL])))))) - (4294948351LL))/*3*/) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)92))));
                                var_16 &= ((/* implicit */unsigned char) var_9);
                                var_17 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                }
                else
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = ((((/* implicit */int) ((/* implicit */unsigned char) ((long long int) (short)18942)))) - (252))/*2*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (202))/*17*/; i_4 += ((((/* implicit */int) min(((unsigned char)92), ((unsigned char)0)))) + (2))/*2*/) 
                    {
                        for (unsigned int i_5 = ((((/* implicit */unsigned int) var_8)) - (1103325147U))/*0*/; i_5 < ((686267267U) - (686267249U))/*18*/; i_5 += ((((/* implicit */unsigned int) var_5)) - (1122879361U))/*4*/) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) var_0);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (short)832))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) * (var_11)))));
                                arr_16 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */long long int) arr_6 [10ULL] [i_4 - 1] [i_1]);
                            }
                        } 
                    } 
                    var_20 = arr_6 [i_0] [i_1] [i_1];
                    var_21 = ((/* implicit */unsigned int) min((((long long int) 2497407841U)), (((/* implicit */long long int) arr_11 [i_0]))));
                }

                var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_12 [i_0] [i_1] [13U] [i_1]))))) > (arr_10 [i_0] [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */long long int) var_1))))));
                var_23 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))/*0*/; i_6 < ((((/* implicit */long long int) var_12)) - (15176LL))/*25*/; i_6 += ((((/* implicit */long long int) ((short) var_11))) + (18964LL))/*2*/) 
    {
        for (unsigned int i_7 = ((((/* implicit */unsigned int) var_0)) - (9542U))/*0*/; i_7 < ((((/* implicit */unsigned int) var_8)) - (1103325122U))/*25*/; i_7 += ((((/* implicit */unsigned int) min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (unsigned char)92))))) - (90U))/*2*/) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) arr_21 [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_7] [i_7] [i_6]))))) : (((((/* implicit */_Bool) 17078817885692119326ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18942))) : (((unsigned long long int) var_5)))))))));
                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)19434))));
                arr_23 [i_6] = ((/* implicit */unsigned int) 1367926188017432296ULL);
            }
        } 
    } 
}
