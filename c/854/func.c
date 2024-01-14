/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3203262337
Invocation: ./yarpgen --std=c -o out/854
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
void test(unsigned char var_1, unsigned long long int var_2, unsigned int var_3, _Bool var_4, long long int var_5, signed char var_6, _Bool var_7, unsigned char var_10, int var_11, signed char var_12, signed char var_13, _Bool var_14, int var_15, int var_16, short var_17, unsigned int var_18, unsigned long long int var_19, int zero, int arr_0 [12] , int arr_1 [12] , unsigned char arr_3 [20] , short arr_4 [20] [20] , unsigned int arr_6 [20] [20] , long long int arr_7 [20] [20] ) {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < 12ULL/*12*/; i_0 += ((var_19) - (13316163053611984154ULL))/*1*/) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (((/* implicit */unsigned int) ((((var_11) / (arr_1 [(signed char)4]))) + (((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [(_Bool)1])) != (636287223U))))))) : (4294967295U))))));
        arr_2 [i_0] [0LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [0LL]) | (arr_1 [8])))) ? (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (short)21)) : (((/* implicit */int) (short)-41)))) : (((((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) (short)-1457)) + (1481)))))) ? (((/* implicit */int) (short)-41)) : (((((((/* implicit */int) (short)-25)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (71)))))))));
        var_21 -= ((/* implicit */signed char) min(((-(((/* implicit */int) (short)49)))), (arr_0 [(signed char)4])));
    }
    for (unsigned int i_1 = ((/* implicit */unsigned int) var_4)/*0*/; i_1 < 20U/*20*/; i_1 += 2U/*2*/) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1] [i_1]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-18467)) - (((/* implicit */int) (signed char)116))))), (3894220342U))))));
        if (((/* implicit */_Bool) (short)14921))
        {
            var_22 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = ((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1]))))) - (24715LL))/*0*/; i_2 < ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1] [i_1]))) || (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) + (19LL))/*20*/; i_2 += 3LL/*3*/) 
            {
                arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2924856973U)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551596ULL)));
                arr_9 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]);
                arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (((arr_7 [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2])))))));
                arr_11 [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))) != (var_5))));
            }
        }

    }
    for (signed char i_3 = ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)123)) : (var_16)))) : (((unsigned int) var_13))))) ? (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) + ((-(var_15))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)8)) * (((/* implicit */int) var_7))))) < (min((var_5), (((/* implicit */long long int) var_10))))))))))) - (114))/*0*/; i_3 < (signed char)20/*20*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) var_3))) + (7))/*2*/) 
    {
        var_23 = ((/* implicit */signed char) arr_6 [i_3] [i_3]);
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) var_5);
    }
    var_24 = ((/* implicit */unsigned long long int) var_5);
    var_25 = ((var_14) ? (((/* implicit */unsigned long long int) var_18)) : (((((/* implicit */_Bool) 400746972U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (15ULL))));
    var_26 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) var_15)) == (var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (short)-27))))) : (var_2)));
}
