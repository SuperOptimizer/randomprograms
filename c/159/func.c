/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 651314176
Invocation: ./yarpgen --std=c -o out/159
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
void test(unsigned long long int var_0, long long int var_2, _Bool var_4, long long int var_5, unsigned long long int var_6, unsigned int var_8, unsigned int var_10, unsigned int var_11, unsigned int var_12, int zero, long long int arr_1 [10] , unsigned int arr_2 [10] [10] , int arr_3 [10] , unsigned long long int arr_4 [10] [10] [10] , signed char arr_6 [10] [10] [10] [10] , long long int arr_7 [10] [10] [10] , signed char arr_8 [10] [10] [10] , short arr_9 [10] ) {
    /* LoopNest 2 */
    for (unsigned int i_0 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((min((var_11), (var_8))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) -137438953472LL)) != (var_0))))))) / (var_0)))/*0*/; i_0 < ((var_10) - (1760681508U))/*10*/; i_0 += ((((/* implicit */unsigned int) var_2)) - (3986079265U))/*3*/) 
    {
        for (_Bool i_1 = ((/* implicit */int) ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) ((_Bool) var_5))) << (((2147483647) - (2147483639)))))))/*1*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_11))/*1*/) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < ((((/* implicit */unsigned long long int) var_8)) - (449564440ULL))/*10*/; i_2 += ((((/* implicit */unsigned long long int) var_8)) - (449564448ULL))/*2*/) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */long long int) var_8)) % (((((/* implicit */long long int) arr_2 [i_1] [i_2])) % (arr_1 [i_0]))))), (((/* implicit */long long int) arr_9 [i_1]))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_2])))) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) ((var_8) <= (arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0]))) : (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))))))));
                    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)8406)), (((/* implicit */unsigned long long int) 19U))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) var_4))));
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_2])))))) ? (arr_2 [i_0] [i_1]) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2]))) / (arr_2 [i_2] [i_1 - 1])))));
                }
                var_16 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_12);
}
