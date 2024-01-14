/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2134122557
Invocation: ./yarpgen --std=c -o out/197
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
void test(signed char var_0, long long int var_1, long long int var_2, short var_3, short var_4, unsigned long long int var_5, unsigned char var_6, signed char var_7, unsigned char var_8, short var_10, unsigned char var_11, short var_12, long long int var_13, unsigned char var_14, int zero, signed char arr_0 [16] [16] , signed char arr_1 [16] , unsigned char arr_2 [16] , unsigned char arr_5 [16] , short arr_6 [16] [16] , long long int arr_7 [16] [16] , unsigned char arr_9 [16] [16] , unsigned char arr_10 [16] [16] , long long int arr_11 [16] [16] , short arr_13 [16] , long long int arr_14 [16] [16] [16] ) {
    var_15 |= ((/* implicit */unsigned long long int) (+(var_1)));
    /* LoopSeq 2 */
    for (long long int i_0 = ((((/* implicit */long long int) var_12)) + (27695LL))/*3*/; i_0 < ((((/* implicit */long long int) var_4)) - (7967LL))/*15*/; i_0 += ((((max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_1)))) : (((/* implicit */int) var_11))))))) + (4LL))/*4*/) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)77)) >= (((/* implicit */int) arr_2 [(short)2])))) ? (((((/* implicit */_Bool) 5930730132498520331ULL)) ? (7334236826308213688ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((var_5) - (7532085856009372299ULL))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((unsigned long long int) arr_0 [i_0 - 1] [i_0 + 1]))));
        arr_4 [i_0 - 3] = ((/* implicit */short) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [(unsigned char)14] [i_0])), (var_6)))) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2])))))));
    }
    for (long long int i_1 = ((((/* implicit */long long int) var_12)) + (27695LL))/*3*/; i_1 < ((((/* implicit */long long int) var_4)) - (7967LL))/*15*/; i_1 += ((((max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_1)))) : (((/* implicit */int) var_11))))))) + (4LL))/*4*/) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (689053613380199810LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)12]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (46))/*0*/; i_2 < (unsigned char)16/*16*/; i_2 += (unsigned char)3/*3*/) 
        {
            for (short i_3 = (short)1/*1*/; i_3 < ((((/* implicit */int) ((/* implicit */short) var_1))) + (9458))/*15*/; i_3 += ((((/* implicit */int) ((/* implicit */short) var_1))) + (9446))/*3*/) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) var_5))) ? (-1912691499069739402LL) : (var_2)))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? ((-(((/* implicit */int) arr_13 [(short)15])))) : (max((((/* implicit */int) arr_1 [i_3 - 1])), (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_5 [i_2]))))))));
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1 - 2])) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) min((var_4), (((/* implicit */short) (unsigned char)130)))))))) : (((long long int) (~(((/* implicit */int) arr_6 [(unsigned char)13] [6LL])))))));
                    if (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [5ULL])) && (((/* implicit */_Bool) 9223372036854775807LL))))), ((+(((/* implicit */int) (unsigned char)2))))))) ? (min((min((((/* implicit */long long int) var_7)), (arr_11 [i_2] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)95))))))) : ((~(((((/* implicit */_Bool) var_13)) ? (arr_14 [i_2] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))))
                    {
                        arr_15 [i_1 + 1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 - 3])) ? (((/* implicit */int) arr_13 [i_1 - 3])) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) max((arr_13 [i_1 - 3]), (arr_13 [i_1 - 3]))))));
                        var_21 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (var_5))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [13LL])) ? (((/* implicit */int) arr_9 [i_1] [i_2])) : (((/* implicit */int) (short)-25664))))))) ? (((((var_2) + (9223372036854775807LL))) << (((((arr_7 [(short)3] [i_3]) + (5585799299096341541LL))) - (29LL))))) : (var_1));
                        var_22 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_5 [i_1])))) - (((/* implicit */int) var_3)))) + (((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) arr_1 [i_3]))))));
                    }

                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)197);
        arr_17 [i_1] = ((/* implicit */signed char) min((((min((arr_7 [i_1] [i_1]), (var_2))) & (((/* implicit */long long int) ((/* implicit */int) (short)-25664))))), (((/* implicit */long long int) arr_6 [i_1] [i_1 - 1]))));
    }
}
