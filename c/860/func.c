/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3857399079
Invocation: ./yarpgen --std=c -o out/860
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
void test(signed char var_0, short var_1, unsigned long long int var_2, unsigned int var_4, unsigned char var_5, signed char var_6, unsigned int var_7, short var_8, short var_9, unsigned char var_10, int zero, signed char arr_0 [18] [18] , unsigned char arr_1 [18] , unsigned short arr_2 [18] [18] , unsigned int arr_3 [18] , unsigned int arr_5 [18] , unsigned char arr_6 [18] , unsigned long long int arr_7 [18] [18] , long long int arr_8 [18] [18] [18] [18] , unsigned int arr_9 [18] [18] [18] , unsigned short arr_10 [18] , unsigned int arr_13 [18] [18] [18] , unsigned int arr_14 [18] , unsigned int arr_16 [18] [18] [18] , short arr_21 [18] [18] [18] ) {
    /* LoopSeq 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_0)))))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_6))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) - (35))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (202))/*18*/; i_0 += (unsigned char)1/*1*/) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) 10672244630660885892ULL);
        if (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_3 [(short)12])))))
        {
            /* LoopSeq 1 */
            for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) - (40138))/*18*/; i_1 += (unsigned short)1/*1*/) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_5 [i_1]))))) - (1U))/*0*/; i_2 < 18U/*18*/; i_2 += ((var_7) - (1858048465U))/*2*/) 
                {
                    var_12 |= ((/* implicit */signed char) (short)10656);
                    var_13 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((short) arr_8 [i_0] [i_1] [i_1] [i_2])));
                    arr_11 [i_0] = ((/* implicit */signed char) arr_6 [i_0]);
                    arr_12 [i_0] [i_1] [i_0] = ((unsigned short) arr_8 [i_1] [i_1] [i_2] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_3 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_0]))))) - (4294967249U))/*3*/; i_3 < ((((unsigned int) arr_0 [i_0] [i_0])) - (4294967235U))/*17*/; i_3 += ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)10656))))) - (10654U))/*2*/) 
                {
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_14 [i_1]))))));
                    if (((/* implicit */_Bool) ((unsigned int) arr_5 [i_3 + 1])))
                    {
                        var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
                        var_16 = ((/* implicit */short) arr_0 [i_1] [i_1]);
                    }

                }
                for (unsigned int i_4 = ((((/* implicit */unsigned int) var_2)) - (927046873U))/*3*/; i_4 < ((((/* implicit */unsigned int) arr_10 [14U])) - (886U))/*16*/; i_4 += ((((/* implicit */unsigned int) (+(max((((unsigned long long int) arr_7 [i_0] [16ULL])), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_0] [i_0]))))))) - (625951853U))/*4*/) 
                {
                    var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)512))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned short) 4649431258642154270LL))))) : (max((((/* implicit */unsigned int) arr_10 [i_0])), (arr_9 [i_4 - 3] [i_4 - 3] [i_4 + 1]))));
                    var_18 = ((/* implicit */unsigned int) ((((((unsigned int) 31U)) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0])))))) <= ((+(arr_16 [i_4 - 2] [i_1] [i_4 - 3])))));
                    if (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65052)), ((+(var_7))))))
                    {
                        var_19 = (i_0 % 2 == 0) ? (((/* implicit */short) (-(((((/* implicit */int) (signed char)19)) / (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */short) (-(((((/* implicit */int) (signed char)19)) * (((/* implicit */int) arr_1 [i_0])))))));
                        arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1] [i_4 - 2] [i_1]), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                    }

                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) (~(arr_13 [i_4 - 1] [i_1] [i_0]))));
                }
                for (short i_5 = ((((/* implicit */int) ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) + (arr_9 [i_1] [i_1] [i_0]))))))) - (4005))/*0*/; i_5 < ((((/* implicit */int) ((/* implicit */short) (-(((/* implicit */int) arr_6 [4U])))))) + (234))/*18*/; i_5 += ((((/* implicit */int) ((/* implicit */short) var_5))) - (107))/*2*/) 
                {
                    if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((unsigned long long int) ((unsigned long long int) arr_6 [i_5]))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-20))))))))))
                    {
                        var_20 ^= ((/* implicit */short) var_7);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_1] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4649431258642154270LL)));
                    }

                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_6);
                    var_22 &= ((/* implicit */long long int) (-(3928894683U)));
                }
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) (~(min((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_0])))));
            }
            arr_25 [i_0] = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0]);
        }

        arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) 3928894681U)) ? (arr_16 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0]))) : (((unsigned int) arr_16 [i_0] [i_0] [i_0]))));
    }
    for (signed char i_6 = ((((/* implicit */int) ((/* implicit */signed char) var_4))) - (80))/*3*/; i_6 < ((((/* implicit */int) ((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) 0U)), (-1801297749338165721LL))))))) - (21))/*18*/; i_6 += (signed char)3/*3*/) 
    {
        var_23 = ((/* implicit */unsigned int) ((short) 3928894681U));
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) var_8)))));
    }
    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11711)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (7324622083471404930ULL)));
}
