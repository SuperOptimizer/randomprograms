/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3399296634
Invocation: ./yarpgen --std=c -o out/618
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
void test(_Bool var_0, unsigned long long int var_2, signed char var_3, unsigned int var_4, unsigned int var_5, int var_6, unsigned int var_7, _Bool var_8, unsigned char var_9, unsigned long long int var_10, int zero, short arr_0 [25] , _Bool arr_1 [25] , unsigned int arr_2 [25] [25] , unsigned short arr_3 [25] [25] , short arr_6 [25] [25] [25] [25] , long long int arr_8 [25] [25] [25] [25] [25] [25] , _Bool arr_17 [17] , int arr_18 [17] ) {
    if (((/* implicit */_Bool) var_3))
    {
        /* LoopNest 3 */
        for (unsigned int i_0 = ((((/* implicit */unsigned int) var_2)) - (537850866U))/*2*/; i_0 < 23U/*23*/; i_0 += ((var_7) - (4161364746U))/*2*/) 
        {
            for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_3)) - (18446744073709551560ULL))/*3*/; i_1 < ((((/* implicit */unsigned long long int) var_7)) - (4161364726ULL))/*22*/; i_1 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)3517)))) - (((((/* implicit */int) arr_1 [(signed char)14])) + (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_0 [i_0]))))) - (18446744073709528418ULL))/*1*/) 
            {
                for (signed char i_2 = (signed char)1/*1*/; i_2 < (signed char)24/*24*/; i_2 += (signed char)2/*2*/) 
                {
                    {
                        arr_7 [23ULL] = ((/* implicit */_Bool) ((unsigned char) (((_Bool)0) ? (1503421172) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_3 = ((((/* implicit */int) ((/* implicit */unsigned char) ((int) (unsigned short)65535)))) - (253))/*2*/; i_3 < (unsigned char)24/*24*/; i_3 += ((((/* implicit */int) var_9)) - (52))/*1*/) 
                        {
                            var_11 |= ((/* implicit */unsigned long long int) (+(arr_2 [i_1 - 3] [i_0 + 1])));
                            if (((/* implicit */_Bool) (unsigned short)65523))
                            {
                                arr_10 [i_3 - 1] [i_2 + 1] [i_1 - 2] [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) ((((/* implicit */int) (short)-3518)) <= (((/* implicit */int) (unsigned short)65535))));
                                var_12 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_3 - 2] [i_1 - 1] [i_0] [i_0 + 1]))));
                            }

                            arr_11 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_3] = ((/* implicit */short) (~(1667206483)));
                        }
                        arr_12 [19LL] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_1 [i_0 - 2])) & (((/* implicit */int) (short)3517)))));
                    }
                } 
            } 
        } 
        if (((/* implicit */_Bool) ((signed char) (unsigned short)0)))
        {
            var_13 = ((/* implicit */unsigned int) var_10);
            var_14 = ((/* implicit */long long int) var_0);
            var_15 ^= ((/* implicit */unsigned char) var_8);
        }

    }

    var_16 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (signed char i_4 = ((((/* implicit */int) ((/* implicit */signed char) var_5))) + (34))/*0*/; i_4 < (signed char)17/*17*/; i_4 += (signed char)1/*1*/) 
    {
        for (unsigned short i_5 = ((((/* implicit */int) ((/* implicit */unsigned short) var_9))) - (51))/*2*/; i_5 < ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) - (25807))/*15*/; i_5 += ((((/* implicit */int) ((/* implicit */unsigned short) ((unsigned int) max((arr_6 [i_4] [i_4] [16U] [i_4]), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)3517))) < (arr_8 [(unsigned char)13] [i_4] [(unsigned char)13] [i_4] [i_4] [i_4]))))))))) + (1))/*2*/) 
        {
            {
                arr_19 [i_4] [i_5] = ((/* implicit */signed char) ((((unsigned long long int) ((long long int) (unsigned short)65528))) ^ ((+(((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (6636297017057042927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))))));
                if (((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_4]) != (((/* implicit */int) (short)-3517)))))) & (((unsigned int) 1491340327034133898ULL)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_5 + 1]))))))))
                {
                    arr_20 [i_4] = ((/* implicit */int) (((_Bool)0) ? (15263567994717480075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191)))));
                    var_17 = ((/* implicit */unsigned char) ((_Bool) ((short) max((arr_3 [i_5] [i_4]), (((/* implicit */unsigned short) (signed char)24))))));
                }

                var_18 &= ((15263567994717480062ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    if (((/* implicit */_Bool) var_4))
    {
        var_19 &= 695474549U;
        var_20 = ((/* implicit */long long int) ((var_0) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }

}
