/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1237097420
Invocation: ./yarpgen --std=c -o out/265
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
void test(short var_0, unsigned short var_1, unsigned int var_2, long long int var_4, signed char var_6, unsigned char var_7, int var_8, signed char var_9, unsigned short var_10, short var_11, unsigned short var_12, unsigned short var_14, int zero, unsigned char arr_0 [16] [16] , unsigned short arr_7 [16] [16] [16] [16] , unsigned short arr_8 [16] [16] [16] [16] , long long int arr_9 [16] , unsigned long long int arr_10 [16] [16] [16] [16] , long long int arr_16 [16] [16] [16] , unsigned char arr_19 [16] [16] [16] [16] [16] [16] ) {
    /* LoopSeq 1 */
    for (unsigned short i_0 = (unsigned short)2/*2*/; i_0 < (unsigned short)15/*15*/; i_0 += (unsigned short)1/*1*/) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_7);
        arr_4 [i_0 - 2] [i_0] = var_14;
        /* LoopNest 3 */
        for (unsigned int i_1 = 2U/*2*/; i_1 < 14U/*14*/; i_1 += ((((/* implicit */unsigned int) var_1)) - (56354U))/*2*/) 
        {
            for (signed char i_2 = ((((/* implicit */int) var_6)) + (93))/*0*/; i_2 < (signed char)16/*16*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_2))) + (98))/*2*/) 
            {
                for (signed char i_3 = ((((/* implicit */int) ((/* implicit */signed char) var_0))) - (15))/*2*/; i_3 < ((((/* implicit */int) ((/* implicit */signed char) var_10))) + (78))/*13*/; i_3 += (signed char)1/*1*/) 
                {
                    {
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_2] [i_3] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_2)))));
                        arr_13 [i_3 - 2] [i_3] [i_2] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) / (((/* implicit */int) var_9))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_1] [i_0 - 1])) && (((/* implicit */_Bool) (unsigned char)231)))))))) - (((/* implicit */long long int) ((/* implicit */int) (short)-27041)))));
                        if (((/* implicit */_Bool) arr_0 [i_2] [i_2]))
                        {
                            arr_14 [i_3] [i_3] [i_1 - 2] [(unsigned short)14] [i_3] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((signed char)60), ((signed char)21)))), (arr_8 [i_3] [i_1 + 1] [(unsigned short)14] [i_3])))) ? ((+(max((((/* implicit */int) (unsigned char)25)), (-1210115186))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) (signed char)127)) || ((_Bool)0))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = (unsigned short)2/*2*/; i_4 < ((((/* implicit */int) var_10)) - (36787))/*12*/; i_4 += ((((/* implicit */int) (unsigned short)54941)) - (54939))/*2*/) 
                            {
                                arr_17 [i_0] [i_0 - 2] [i_0 - 1] [i_3] [i_0] = ((/* implicit */unsigned short) var_11);
                                arr_18 [i_3] = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_3]);
                            }
                            /* vectorizable */
                            for (signed char i_5 = ((((/* implicit */int) ((/* implicit */signed char) (unsigned short)3903))) - (61))/*2*/; i_5 < (signed char)14/*14*/; i_5 += (signed char)3/*3*/) 
                            {
                                arr_21 [(short)8] [i_1] [14LL] = ((/* implicit */signed char) (unsigned short)16352);
                                arr_22 [(unsigned short)0] [i_0] [i_0] [i_2] [i_2] [i_3 - 1] [(unsigned char)2] = ((/* implicit */long long int) ((arr_10 [i_0 + 1] [i_1 - 2] [i_1] [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            }
                        }

                        if (((/* implicit */_Bool) var_8))
                        {
                            arr_23 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (arr_9 [(signed char)8])))) - (arr_10 [i_0] [i_1] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (signed char)38))));
                            if (((((/* implicit */_Bool) max(((~(arr_10 [i_0] [i_1 - 1] [i_1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) var_6))))
                            {
                                arr_24 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((signed char) min(((+(((/* implicit */int) (signed char)120)))), (((/* implicit */int) (short)16256)))));
                                arr_25 [i_2] [i_2] = ((/* implicit */long long int) arr_19 [i_0] [i_0] [i_1] [(unsigned char)14] [i_2] [i_0]);
                            }

                            arr_26 [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_2]);
                        }

                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */long long int) var_10);
}
