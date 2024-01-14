/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1224696052
Invocation: ./yarpgen --std=c -o out/689
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
void test(unsigned long long int var_0, unsigned short var_2, unsigned int var_3, unsigned short var_4, unsigned long long int var_5, int var_6, unsigned long long int var_7, signed char var_8, unsigned short var_9, unsigned char var_10, signed char var_11, unsigned long long int var_12, unsigned int var_13, int var_14, unsigned char var_15, unsigned short var_17, int zero, int arr_1 [12] , unsigned int arr_8 [21] , unsigned int arr_9 [21] , signed char arr_10 [21] [21] , _Bool arr_11 [21] [21] , unsigned char arr_12 [21] [21] [21] [21] , short arr_13 [21] , unsigned char arr_14 [21] [21] [21] , unsigned int arr_15 [21] [21] [21] [21] , _Bool arr_18 [21] [21] [21] [21] [21] [21] , unsigned char arr_20 [21] [21] [21] [21] [21] [21] ) {
    /* LoopNest 3 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_7)) - (3671752647U))/*0*/; i_0 < 12U/*12*/; i_0 += 4U/*4*/) 
    {
        for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (61))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_13))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)0)))))))) ? (8U) : (((/* implicit */unsigned int) ((arr_1 [i_0]) | (arr_1 [i_0])))))))) - (12))/*12*/; i_1 += (unsigned char)3/*3*/) 
        {
            for (long long int i_2 = 0LL/*0*/; i_2 < 12LL/*12*/; i_2 += ((((/* implicit */long long int) var_15)) - (12LL))/*4*/) 
            {
                {
                    var_18 += ((/* implicit */short) (unsigned short)12580);
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_9))));
                }
            } 
        } 
    } 
    if (((/* implicit */_Bool) var_5))
    {
        /* LoopNest 3 */
        for (int i_3 = ((((/* implicit */int) var_10)) - (230))/*4*/; i_3 < ((((/* implicit */int) var_7)) + (623214667))/*18*/; i_3 += 2/*2*/) 
        {
            for (_Bool i_4 = ((((/* implicit */int) ((/* implicit */_Bool) var_13))) - (1))/*0*/; i_4 < ((/* implicit */int) ((/* implicit */_Bool) var_3))/*1*/; i_4 += ((/* implicit */int) ((/* implicit */_Bool) var_14))/*1*/) 
            {
                for (unsigned long long int i_5 = 0ULL/*0*/; i_5 < 21ULL/*21*/; i_5 += 4ULL/*4*/) 
                {
                    {
                        var_20 *= ((/* implicit */short) (+(((((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1])) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))));
                        var_21 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_12 [i_3 - 2] [i_4] [i_4] [i_4]), (arr_12 [i_3] [7LL] [i_3] [i_5]))))))), (max((arr_8 [i_3 + 2]), (((/* implicit */unsigned int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-102)))))))));
                        var_22 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) (unsigned short)12580)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        var_23 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (((((/* implicit */_Bool) arr_8 [i_4])) ? (arr_8 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        /* LoopNest 2 */
                        for (unsigned char i_6 = ((((/* implicit */int) ((/* implicit */unsigned char) var_13))) - (109))/*1*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_3] [i_5] [i_5])))))) + (20))/*20*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_8))))))) - (20))/*3*/) 
                        {
                            for (signed char i_7 = ((((/* implicit */int) arr_10 [i_4] [i_5])) - (58))/*0*/; i_7 < ((((/* implicit */int) ((/* implicit */signed char) ((unsigned long long int) (_Bool)0)))) + (21))/*21*/; i_7 += ((((/* implicit */int) var_8)) + (25))/*2*/) 
                            {
                                {
                                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3 - 3]))))) : (((/* implicit */int) arr_10 [i_6 + 1] [i_3 - 4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 3])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_18 [i_7] [i_3] [i_5] [i_4] [i_3] [i_3])), (arr_20 [5ULL] [5ULL] [i_5] [i_6] [5ULL] [i_7])))) ? (arr_15 [i_3 + 3] [(unsigned char)19] [i_5] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10117)) || (((/* implicit */_Bool) var_2))))))))));
                                    if (((/* implicit */_Bool) (-(((/* implicit */int) min((arr_11 [i_3 + 2] [i_5]), (arr_11 [i_3 + 2] [i_3 + 2])))))))
                                    {
                                        if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_3] [i_3 - 4] [i_5] [i_6 + 1] [i_3] [i_6]) ? (((/* implicit */int) arr_18 [i_3] [i_3 - 1] [i_6 + 1] [i_6 + 1] [i_7] [i_7])) : (((/* implicit */int) arr_18 [1LL] [i_3 - 4] [i_3 - 4] [i_6 + 1] [i_7] [(unsigned char)14]))))) ? (4051266047U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_6 - 1] [i_4] [i_6 + 1] [i_3 + 2] [i_7] [i_3 + 3])) << (((((/* implicit */int) var_11)) + (99)))))))))
                                        {
                                            arr_21 [i_7] [i_6] [i_5] [i_5] [i_5] [i_6] [i_3] = ((/* implicit */signed char) arr_12 [i_3 - 2] [i_5] [i_6] [i_7]);
                                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (3668066009200513051LL)))) ? (((/* implicit */int) ((signed char) arr_12 [i_3 - 4] [i_3 - 4] [i_3] [i_3 + 2]))) : (((/* implicit */int) ((4051266047U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5648))))))));
                                            arr_22 [i_7] [i_6] [i_5] [i_3 + 1] [i_7] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)86))))) != (arr_8 [i_3 + 2])))) : (((/* implicit */int) (_Bool)0))));
                                            var_26 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) ^ (var_5))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)80))))))), (((((/* implicit */unsigned long long int) arr_8 [i_4])) & (var_0)))));
                                        }

                                        arr_23 [i_7] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_20 [i_3 + 1] [i_4] [i_4] [i_6 - 1] [i_6 - 1] [i_4])) ? (((/* implicit */int) arr_13 [i_7])) : (var_14))));
                                    }

                                }
                            } 
                        } 
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) ((unsigned char) 54604775155247692ULL))) - (min((((/* implicit */int) var_10)), (var_14))))));
    }

}
