/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4163080298
Invocation: ./yarpgen --std=c -o out/419
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
void test(_Bool var_0, unsigned long long int var_1, unsigned char var_2, unsigned long long int var_4, signed char var_5, _Bool var_6, signed char var_7, _Bool var_8, short var_9, unsigned short var_10, unsigned int var_13, _Bool var_14, unsigned long long int var_16, short var_18, int zero, signed char arr_0 [22] , short arr_1 [22] [22] , unsigned char arr_3 [22] , short arr_4 [22] [22] , _Bool arr_5 [22] , int arr_8 [22] [22] [22] , _Bool arr_9 [22] , _Bool arr_10 [22] [22] [22] , _Bool arr_15 [22] [22] , int arr_16 [22] [22] [22] , unsigned char arr_23 [22] [22] [22] , unsigned char arr_24 [22] , _Bool arr_25 [22] [22] [22] ) {
    var_19 *= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0U/*0*/; i_0 < 22U/*22*/; i_0 += ((((/* implicit */unsigned int) var_10)) - (47987U))/*3*/) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0U/*0*/; i_1 < 22U/*22*/; i_1 += ((((/* implicit */unsigned int) var_10)) - (47987U))/*3*/) /* same iter space */
    {
        arr_6 [i_1] [(signed char)3] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1]))))));
        arr_7 [13U] = ((/* implicit */int) arr_0 [i_1]);
        /* LoopSeq 4 */
        for (signed char i_2 = (signed char)1/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (128))/*21*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_18))) + (55))/*2*/) 
        {
            arr_11 [i_1] [(signed char)17] [i_2] = ((/* implicit */unsigned long long int) (((~(5LL))) | (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))))));
            arr_12 [i_1] [i_2] = ((/* implicit */signed char) (-(var_13)));
            var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_4 [i_2] [i_1]), (((/* implicit */short) var_7))))) ? (((/* implicit */int) max((var_9), (var_9)))) : (((/* implicit */int) arr_9 [i_2])))) - (((/* implicit */int) arr_0 [i_2]))));
        }
        for (signed char i_3 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (111))/*4*/; i_3 < ((((/* implicit */int) var_5)) + (105))/*18*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (84))/*2*/) /* same iter space */
        {
            var_22 ^= ((/* implicit */short) ((((/* implicit */int) max((arr_9 [i_3 - 1]), (var_0)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            arr_17 [(signed char)7] [i_3] [i_3] = ((/* implicit */signed char) arr_1 [i_3] [i_3 - 1]);
            arr_18 [i_1] [i_3] [i_3 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        }
        for (signed char i_4 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (111))/*4*/; i_4 < ((((/* implicit */int) var_5)) + (105))/*18*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (84))/*2*/) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [(unsigned char)14]))))) ? (arr_16 [i_1] [(_Bool)1] [i_1]) : (((((/* implicit */_Bool) arr_1 [i_1] [i_4 + 3])) ? (((/* implicit */int) arr_4 [(signed char)15] [i_4])) : (((/* implicit */int) var_9)))))), (((/* implicit */int) var_2)))))));
            var_24 *= arr_1 [i_4] [(signed char)15];
            arr_21 [i_1] = ((/* implicit */_Bool) arr_4 [i_4 + 2] [i_4 - 4]);
            arr_22 [i_1] [i_1] [i_1] &= ((/* implicit */short) (+(((((/* implicit */int) arr_15 [i_4 + 4] [i_1])) + (((/* implicit */int) var_2))))));
        }
        for (signed char i_5 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (111))/*4*/; i_5 < ((((/* implicit */int) var_5)) + (105))/*18*/; i_5 += ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (84))/*2*/) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_6 = (short)0/*0*/; i_6 < (short)22/*22*/; i_6 += ((((/* implicit */int) ((/* implicit */short) var_0))) + (1))/*2*/) 
            {
                for (short i_7 = ((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-17738)), (5391535128592666581ULL)))) ? (((/* implicit */int) arr_10 [i_6] [i_5] [i_6])) : (((((/* implicit */int) arr_15 [i_5 - 1] [i_5 + 2])) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_2)))))))))/*0*/; i_7 < (short)22/*22*/; i_7 += ((((/* implicit */int) ((/* implicit */short) arr_24 [i_5]))) - (169))/*2*/) 
                {
                    for (unsigned int i_8 = ((((/* implicit */unsigned int) var_6)) - (1U))/*0*/; i_8 < 22U/*22*/; i_8 += ((((/* implicit */unsigned int) var_1)) - (2369642131U))/*2*/) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((((-(((/* implicit */int) var_2)))) - (((/* implicit */int) arr_23 [i_1] [i_5] [i_6]))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_4))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18))))))) < ((~(6ULL)))));
                        }
                    } 
                } 
            } 
            arr_33 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) var_7);
        }
    }
}
