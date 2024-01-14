/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3416504292
Invocation: ./yarpgen --std=c -o out/235
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
void test(unsigned short var_0, short var_2, long long int var_5, int var_8, unsigned long long int var_9, unsigned char var_10, int zero, unsigned char arr_0 [23] , signed char arr_1 [23] , unsigned int arr_5 [16] [16] , unsigned char arr_8 [16] , _Bool arr_9 [16] , long long int arr_10 [16] , unsigned int arr_14 [16] [16] , int arr_17 [16] [16] [16] [16] , unsigned char arr_18 [16] [16] [16] [16] [16] ) {
    var_12 = ((/* implicit */unsigned int) (unsigned char)80);
    /* LoopSeq 3 */
    for (signed char i_0 = (signed char)1/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) var_2))) + (38))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_0))) - (13))/*3*/) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        if (((/* implicit */_Bool) ((min((((/* implicit */int) arr_1 [i_0 + 1])), (var_8))) & (((/* implicit */int) arr_0 [i_0 - 1])))))
        {
            arr_3 [i_0] = ((/* implicit */long long int) min((min((((/* implicit */int) arr_0 [i_0 - 1])), ((~(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) max((((short) (unsigned char)195)), (((/* implicit */short) (!(((/* implicit */_Bool) var_2))))))))));
            var_13 -= ((/* implicit */signed char) (short)-15373);
            var_14 = ((/* implicit */unsigned long long int) max(((short)15372), (((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)61), (((/* implicit */unsigned char) arr_1 [(unsigned short)17]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [18])), (var_5)))))))));
            arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (_Bool)0)) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [2])) : (((/* implicit */int) (short)-15373)))))));
        }

        var_15 = ((/* implicit */unsigned long long int) var_10);
    }
    /* vectorizable */
    for (signed char i_1 = (signed char)2/*2*/; i_1 < (signed char)13/*13*/; i_1 += (signed char)4/*4*/) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1])))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((arr_5 [i_1 - 1] [i_1 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 3]))))))));
    }
    /* vectorizable */
    for (signed char i_2 = (signed char)2/*2*/; i_2 < (signed char)13/*13*/; i_2 += (signed char)4/*4*/) /* same iter space */
    {
        if (((/* implicit */_Bool) (+(arr_10 [i_2 - 1]))))
        {
            var_18 = ((/* implicit */unsigned int) ((((var_9) & (((/* implicit */unsigned long long int) 535994394)))) << (((/* implicit */int) (unsigned char)60))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (_Bool)1))));
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 + 3])) : (((/* implicit */int) arr_0 [i_2 + 3]))));
            arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 3])) ? (535994394) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (long long int i_3 = 0LL/*0*/; i_3 < 16LL/*16*/; i_3 += 2LL/*2*/) 
            {
                for (signed char i_4 = (signed char)1/*1*/; i_4 < (signed char)14/*14*/; i_4 += (signed char)3/*3*/) 
                {
                    for (long long int i_5 = 0LL/*0*/; i_5 < 16LL/*16*/; i_5 += 2LL/*2*/) 
                    {
                        {
                            if (((_Bool) arr_14 [i_4 + 1] [i_2 + 3]))
                            {
                                arr_19 [7U] = ((/* implicit */unsigned int) (_Bool)0);
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_2 + 2] [i_5] [(_Bool)1])) & (((/* implicit */int) arr_9 [i_2 + 1]))));
                                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_14 [i_2] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            }

                            arr_20 [i_4] = ((/* implicit */unsigned char) ((535994394) - (((/* implicit */int) arr_1 [i_2]))));
                            var_23 *= ((/* implicit */unsigned long long int) ((arr_17 [i_2 + 2] [i_4 + 1] [i_2 + 2] [6ULL]) == (arr_17 [i_2 + 3] [i_4 + 2] [i_4] [i_5])));
                            arr_21 [(signed char)2] [(unsigned char)11] [i_4] [i_5] = ((/* implicit */unsigned int) (+(arr_17 [i_2 + 2] [i_4 - 1] [i_4] [i_4 - 1])));
                        }
                    } 
                } 
            } 
        }

        var_24 ^= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-113))));
    }
    var_25 = ((/* implicit */unsigned short) var_2);
}
