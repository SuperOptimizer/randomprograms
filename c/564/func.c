/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1493479118
Invocation: ./yarpgen --std=c -o out/564
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
void test(unsigned int var_0, _Bool var_1, short var_3, unsigned long long int var_4, _Bool var_5, signed char var_9, unsigned char var_10, unsigned char var_11, unsigned short var_12, signed char var_13, unsigned long long int var_14, long long int var_15, short var_16, short var_17, unsigned int var_18, int zero, signed char arr_0 [14] , _Bool arr_3 [14] [14] , signed char arr_5 [14] [14] [14] , unsigned char arr_6 [14] [14] [14] , unsigned short arr_7 [14] [14] [14] [14] , short arr_8 [14] [14] [14] , unsigned int arr_9 [14] [14] [14] [14] [14] , unsigned short arr_10 [14] , unsigned int arr_11 [14] [14] [14] [14] , int arr_12 [14] [14] [14] [14] , unsigned char arr_13 [14] [14] [14] [14] [14] , signed char arr_14 [14] [14] [14] [14] ) {
    var_20 ^= ((/* implicit */signed char) var_3);
    if ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)10610)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_12))))) : (((/* implicit */int) var_11)))))))
    {
        /* LoopNest 2 */
        for (short i_0 = ((((/* implicit */int) var_3)) + (10355))/*4*/; i_0 < (short)13/*13*/; i_0 += (short)4/*4*/) 
        {
            for (long long int i_1 = 1LL/*1*/; i_1 < 13LL/*13*/; i_1 += 2LL/*2*/) 
            {
                {
                    var_21 ^= ((/* implicit */signed char) (~(16836280364017711520ULL)));
                    var_22 ^= ((/* implicit */signed char) (!(((((17864006561369726100ULL) - (var_14))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) arr_0 [(signed char)3]))))))))));
                    /* LoopNest 2 */
                    for (short i_2 = ((((/* implicit */int) var_16)) + (3810))/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */short) var_14))) + (12717))/*12*/; i_2 += (short)4/*4*/) 
                    {
                        for (unsigned int i_3 = ((((/* implicit */unsigned int) var_10)) - (89U))/*2*/; i_3 < ((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])) - (4294964979U))/*10*/; i_3 += 1U/*1*/) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_10 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1] [(short)9] [i_3]))))))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_2 - 1] [i_1 + 1] [i_0 + 1])), (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                                var_24 += ((/* implicit */signed char) (-(min((((var_5) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_1 + 1])))), (((/* implicit */int) ((short) arr_8 [i_0 - 2] [i_2] [i_0 - 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_4 = 1/*1*/; i_4 < 13/*13*/; i_4 += ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 1])) + (2309))/*2*/) 
                    {
                        for (signed char i_5 = (signed char)0/*0*/; i_5 < (signed char)14/*14*/; i_5 += ((((/* implicit */int) ((/* implicit */signed char) var_15))) + (117))/*4*/) 
                        {
                            {
                                var_25 ^= ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]))));
                                if (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1])) << (((((/* implicit */int) var_12)) - (22969)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [(unsigned short)12] [i_0] [i_0]))))) : (arr_9 [(signed char)8] [(signed char)8] [i_4] [i_0] [i_0]))), (((/* implicit */unsigned int) (_Bool)1)))))
                                {
                                    var_26 += ((/* implicit */long long int) var_9);
                                    var_27 += ((/* implicit */unsigned long long int) var_5);
                                    var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                                }
                                else
                                {
                                    var_29 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_0] [i_0 - 4] [i_1 + 1] [i_1 + 1])) ? (max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_4])), (var_0))) : (((arr_11 [i_5] [i_5] [i_5] [i_0 - 3]) >> (((var_4) - (11002359533449990493ULL))))))), (((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)0))))));
                                    var_30 ^= var_11;
                                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((long long int) (-(arr_12 [i_5] [i_5] [i_5] [7U])))))));
                                }

                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((unsigned long long int) var_18)))));
    }

}
