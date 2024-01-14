/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 307181473
Invocation: ./yarpgen --std=c -o out/895
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
void test(int var_0, long long int var_1, unsigned short var_3, signed char var_4, unsigned long long int var_5, unsigned long long int var_6, short var_7, unsigned long long int var_8, long long int var_9, int zero, long long int arr_0 [10] [10] , unsigned char arr_1 [10] [10] , unsigned long long int arr_2 [10] [10] , short arr_3 [10] [10] [10] , unsigned short arr_7 [10] [10] [10] [10] , short arr_9 [10] [10] [10] [10] , signed char arr_10 [10] [10] , unsigned char arr_11 [10] [10] [10] [10] [10] , unsigned long long int arr_14 [10] [10] [10] [10] [10] [10] ) {
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (var_8)));
    var_11 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) var_7)), (var_9))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_1)) - (3267583261535099230ULL))/*1*/; i_0 < ((((/* implicit */unsigned long long int) var_4)) - (83ULL))/*7*/; i_0 += ((min((((unsigned long long int) (+(((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_7)))) - (86ULL))/*4*/) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) var_7)))) - (44517U)))));
        var_13 -= ((/* implicit */short) ((unsigned long long int) arr_0 [i_0 - 1] [i_0]));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((((long long int) arr_2 [i_0] [i_0 + 3])) + (((long long int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))) : (min((var_1), (((/* implicit */long long int) (unsigned short)0)))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0ULL/*0*/; i_1 < ((((/* implicit */unsigned long long int) var_7)) - (8152ULL))/*10*/; i_1 += 1ULL/*1*/) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = ((var_8) - (18285946093562607350ULL))/*3*/; i_2 < 8ULL/*8*/; i_2 += ((((arr_2 [i_0 + 3] [i_0 + 3]) * (max((((/* implicit */unsigned long long int) (unsigned short)38976)), (arr_2 [i_1] [i_0 - 1]))))) - (17526454110748312590ULL))/*2*/) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 0/*0*/; i_3 < 10/*10*/; i_3 += (((+(((/* implicit */int) arr_3 [i_1] [i_1] [i_2])))) + (645))/*1*/) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (157))/*2*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (103))/*8*/; i_4 += (unsigned char)4/*4*/) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(arr_0 [i_4 - 2] [i_4 - 2]))))));
                        arr_13 [i_0] [i_0] [i_2] [i_4] [i_0] = arr_10 [i_1] [i_4];
                        var_16 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_4]);
                    }
                    var_17 = ((/* implicit */signed char) ((2484365121931089255ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 2])))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [7LL] [i_1] [i_2] [i_3] [i_2])) ? (((/* implicit */int) (signed char)0)) : ((~(((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0ULL/*0*/; i_5 < 10ULL/*10*/; i_5 += 2ULL/*2*/) 
                {
                    arr_16 [i_2] [(short)2] [i_2] [(short)2] [i_1] = ((/* implicit */int) arr_14 [i_0] [i_0] [i_2 - 1] [i_0] [4] [i_2]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_2] [i_5])))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])))))));
                }
                var_21 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) (signed char)-17))));
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1373475604)) < (var_6)));
        }
    }
}
