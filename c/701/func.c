/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2172085117
Invocation: ./yarpgen --std=c -o out/701
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
void test(short var_3, signed char var_4, unsigned int var_6, int var_7, unsigned short var_8, int zero, _Bool arr_0 [10] [10] , long long int arr_1 [10] [10] , int arr_2 [10] , int arr_3 [10] , int arr_4 [10] [10] [10] , long long int arr_5 [10] , unsigned long long int arr_6 [10] [10] [10] , unsigned char arr_7 [10] [10] [10] [10] [10] [10] , unsigned short arr_8 [10] [10] [10] [10] [10] [10] , unsigned long long int arr_9 [10] [10] , int arr_10 [10] [10] [10] [10] [10] [10] , int arr_11 [10] , unsigned short arr_12 [10] , unsigned long long int arr_13 [10] [10] , _Bool arr_14 [10] [10] , signed char arr_15 [10] [10] [10] [10] , short arr_16 [10] , _Bool arr_22 [10] [10] , unsigned char arr_23 [10] [10] [10] , short arr_25 [10] [10] [10] [10] , unsigned short arr_26 [10] [10] , long long int arr_27 [10] [10] [10] , unsigned short arr_28 [10] [10] [10] [10] ) {
    var_11 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < (unsigned char)10/*10*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (34))/*3*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((min((max((arr_1 [i_0] [(_Bool)1]), (arr_1 [i_0] [(_Bool)1]))), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [8]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)4] [(short)4]))))))) - (((((/* implicit */_Bool) arr_1 [i_0] [6])) ? (arr_1 [i_0] [(unsigned short)6]) : (arr_1 [i_0] [2LL]))))))) + (14045))/*0*/; i_1 < (short)10/*10*/; i_1 += (short)4/*4*/) 
        {
            for (unsigned int i_2 = 0U/*0*/; i_2 < ((((/* implicit */unsigned int) arr_0 [i_0] [i_1])) + (10U))/*10*/; i_2 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_4 [i_1] [i_1] [i_1])))))) || (((/* implicit */_Bool) (~(arr_4 [i_1] [i_1] [i_1]))))))) + (3U))/*4*/) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = ((((/* implicit */unsigned int) var_4)) - (98U))/*3*/; i_3 < 7U/*7*/; i_3 += 4U/*4*/) 
                    {
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_3] [i_3] [i_3] [(short)3] [i_3 + 2]))))) | ((-(((/* implicit */int) arr_7 [i_3] [1] [(_Bool)1] [i_3 + 3] [i_3] [i_3 - 2])))))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_3 + 3]) - (arr_3 [i_3 + 2])))))))));
                    }
                    var_14 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)25241))))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((arr_2 [(short)8]), (((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1] [(short)6] [i_2]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1ULL/*1*/; i_4 < 7ULL/*7*/; i_4 += ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_8)))) + (((/* implicit */int) min((max((((/* implicit */short) var_4)), (var_3))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)57175)) && ((_Bool)0)))))))))) - (18446744073709503191ULL))/*4*/) 
    {
        for (unsigned int i_5 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_4])), (arr_3 [i_4 + 3])))) == (min((((((/* implicit */_Bool) arr_1 [i_4 + 2] [2LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 1] [i_4] [i_4 + 2] [i_4] [i_4] [i_4 + 1]))) : (arr_1 [i_4] [0U]))), (((/* implicit */long long int) arr_12 [i_4 + 3]))))))/*0*/; i_5 < ((var_6) - (180776714U))/*10*/; i_5 += ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 2] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (arr_9 [(short)7] [i_4 + 3])))) && (((/* implicit */_Bool) ((int) arr_5 [i_4]))))))))) - (4294967291U))/*3*/) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = (unsigned char)3/*3*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned char) arr_0 [i_4 + 1] [i_4]))) + (7))/*7*/; i_6 += (unsigned char)4/*4*/) 
                {
                    for (unsigned char i_7 = ((((/* implicit */int) ((/* implicit */unsigned char) arr_4 [4ULL] [4ULL] [i_6]))) - (10))/*0*/; i_7 < (unsigned char)10/*10*/; i_7 += ((((/* implicit */int) ((/* implicit */unsigned char) (~(arr_11 [i_4]))))) - (44))/*3*/) 
                    {
                        {
                            arr_19 [i_4] [i_7] [i_6 - 2] [i_5] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_4 + 3]), (arr_12 [i_4 + 3])))) ? (((((/* implicit */_Bool) arr_12 [i_4 + 3])) ? (((/* implicit */int) arr_12 [i_4 + 3])) : (((/* implicit */int) arr_12 [i_4 + 3])))) : ((~(((/* implicit */int) arr_12 [i_4 + 3]))))));
                            var_16 = ((/* implicit */unsigned char) (-(max((arr_9 [i_4] [i_4 + 2]), (arr_9 [i_4 - 1] [i_4 - 1])))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) (+((-(((((/* implicit */int) arr_16 [i_4])) / (arr_4 [i_4] [0ULL] [0ULL])))))));
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) max((arr_16 [i_4]), (((short) arr_1 [i_4 - 1] [i_4]))));
                arr_21 [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) (+(min((((/* implicit */int) arr_8 [0U] [i_5] [i_4] [i_4] [i_4] [9])), (arr_2 [i_4])))))) ? ((~(((/* implicit */int) (short)32767)))) : (max(((+(((/* implicit */int) (unsigned short)17231)))), (((/* implicit */int) (_Bool)1)))));
                /* LoopNest 3 */
                for (unsigned char i_8 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (15))/*2*/; i_8 < ((((/* implicit */int) ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((short)32169), (((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))), (min((arr_5 [i_4]), (((/* implicit */long long int) arr_12 [i_5])))))))) - (161))/*8*/; i_8 += ((((/* implicit */int) ((/* implicit */unsigned char) var_3))) - (172))/*4*/) 
                {
                    for (_Bool i_9 = (_Bool)1/*1*/; i_9 < (_Bool)1/*1*/; i_9 += (_Bool)1/*1*/) 
                    {
                        for (unsigned char i_10 = ((((/* implicit */int) ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4 + 2])) ? (((/* implicit */unsigned long long int) arr_5 [i_4 - 1])) : (arr_6 [i_9 - 1] [i_4] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_8] [i_8])) != (((/* implicit */int) arr_25 [i_9 - 1] [i_8] [i_8] [i_4]))))))), (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8] [i_8])))))) - (10))/*0*/; i_10 < ((((/* implicit */int) ((/* implicit */unsigned char) max((arr_10 [i_4] [(unsigned char)8] [0] [i_4 + 3] [i_4] [0]), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10178)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (16892345848347993051ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764))))))))))))) - (13))/*10*/; i_10 += (unsigned char)3/*3*/) 
                        {
                            {
                                arr_29 [i_4] [i_8 - 2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((arr_2 [i_5]), (((/* implicit */int) arr_26 [i_9] [i_4]))))))) ? (max(((~(((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_4])) && (arr_0 [i_4] [i_5])))))) : (arr_10 [i_10] [6] [i_4] [i_8 + 2] [i_4] [i_4])));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_5 [i_4]))) ? (((((/* implicit */int) arr_28 [i_4] [i_5] [i_5] [i_4])) | (((/* implicit */int) arr_14 [i_4] [i_4])))) : (arr_2 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1632338064))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [(short)3] [(short)3])) <= (((/* implicit */int) arr_23 [i_10] [i_9] [i_5])))))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_27 [i_4 - 1] [i_5] [i_10]))) ? ((-(((/* implicit */int) arr_0 [i_4] [i_4 + 1])))) : (arr_11 [i_8])))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) arr_27 [i_5] [i_5] [i_5]))), (arr_6 [i_5] [i_9 - 1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_4] [i_5]), ((!(((/* implicit */_Bool) arr_2 [i_4]))))))))));
                                arr_30 [i_4] [i_8] [i_8] [i_8] [i_9 - 1] [i_10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_4] [i_4])), (arr_10 [i_10] [i_4] [(_Bool)1] [i_5] [6LL] [i_4])))) ? (((((/* implicit */int) arr_28 [i_8] [0] [i_9] [i_9])) * (((/* implicit */int) arr_22 [i_8] [i_5])))) : (((((/* implicit */_Bool) (short)15006)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (short)-20868))))))) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (min((((arr_3 [i_4]) ^ (((/* implicit */int) arr_12 [i_8])))), (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_26 [i_8] [i_8])) : (((/* implicit */int) arr_22 [i_8] [i_8]))))))));
                                arr_31 [i_4] [(short)5] [i_9 - 1] [i_9 - 1] [i_4] [i_9] = (+(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_23 [i_4] [i_4] [i_8 + 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
