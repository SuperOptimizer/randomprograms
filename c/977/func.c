/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 189712476
Invocation: ./yarpgen --std=c -o out/977
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
void test(unsigned short var_0, int var_1, _Bool var_2, unsigned char var_3, unsigned short var_4, _Bool var_5, unsigned char var_6, unsigned long long int var_7, _Bool var_8, _Bool var_9, short var_10, int zero, unsigned int arr_0 [20] , unsigned int arr_1 [20] [20] , short arr_3 [20] [20] [20] , unsigned long long int arr_4 [20] [20] [20] , signed char arr_5 [20] [20] [20] [20] , unsigned long long int arr_6 [20] [20] [20] , unsigned short arr_7 [20] ) {
    var_11 = ((unsigned int) ((unsigned long long int) 0U));
    if (((/* implicit */_Bool) var_10))
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_0)))) ? (((/* implicit */unsigned int) 2075271329)) : (max((4294967295U), (((/* implicit */unsigned int) (short)32765))))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (962723032U)))) ? (((((/* implicit */_Bool) 12026380009020264416ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) var_1))))) : (((/* implicit */int) max((((unsigned short) var_0)), (((/* implicit */unsigned short) (_Bool)1))))));
        var_13 = max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)));
    }

    /* LoopNest 3 */
    for (short i_0 = ((/* implicit */int) ((/* implicit */short) var_2))/*0*/; i_0 < (short)20/*20*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_8))) + (3))/*3*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) var_6))) - (72))/*2*/; i_1 < (short)18/*18*/; i_1 += (short)1/*1*/) 
        {
            for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (111))/*0*/; i_2 < (unsigned char)20/*20*/; i_2 += ((((/* implicit */int) var_3)) - (195))/*2*/) 
            {
                {
                    if (((/* implicit */_Bool) 18446744073709551615ULL))
                    {
                        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [15ULL] [i_0] [i_0]))) : (arr_0 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)33)), (var_10)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (2416155959U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)13])))))), (((((/* implicit */_Bool) arr_3 [i_2] [i_1 - 1] [16U])) ? (4ULL) : (arr_6 [i_2] [i_1] [i_0]))))) : (((((/* implicit */_Bool) (+(12026380009020264416ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (0ULL))) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
                        arr_9 [i_0] = ((/* implicit */unsigned char) min((((((4586217473331121785ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [10] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1]))))))), (((((/* implicit */_Bool) 1619689486)) ? (arr_6 [i_0] [i_1 + 2] [i_2]) : (arr_6 [0ULL] [i_1 - 1] [0ULL])))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((((-2147483647 - 1)) % (((int) -2147483643)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (max((((/* implicit */unsigned long long int) var_5)), (var_7)))))))))));
                        arr_10 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_1] [i_0])))))) % (arr_0 [i_0]))));
                        arr_11 [i_2] [(unsigned short)11] [i_1 - 2] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)110)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U)))));
                    }

                    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)32557))))) | (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 2])) ? (arr_4 [i_1 + 2] [i_1 - 2] [i_1 + 2]) : (arr_4 [i_2] [i_1 - 2] [i_1])))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) var_5);
    var_17 = ((/* implicit */_Bool) ((unsigned short) ((((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) - (((/* implicit */int) var_5)))));
}
