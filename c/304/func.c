/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 264905375
Invocation: ./yarpgen --std=c -o out/304
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
void test(unsigned int var_0, long long int var_1, signed char var_7, long long int var_8, unsigned char var_9, int var_13, unsigned long long int var_16, unsigned short var_17, unsigned short var_19, int zero, unsigned long long int arr_0 [16] [16] , unsigned long long int arr_1 [16] , unsigned char arr_2 [16] [16] , unsigned short arr_3 [16] [16] , _Bool arr_4 [16] ) {
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (var_8)))) ? (((/* implicit */int) (short)12)) : (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) var_9)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_16)))));
    var_21 = ((/* implicit */unsigned char) min(((+(max((var_1), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (short i_0 = (short)3/*3*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_16))) + (26692))/*13*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_13))) + (26257))/*2*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 3583734133U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) 3583734133U)))))))) - (12))/*0*/; i_1 < (unsigned short)16/*16*/; i_1 += (unsigned short)2/*2*/) 
        {
            for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) arr_3 [i_1] [14U]))) - (16))/*2*/; i_2 < ((((/* implicit */int) ((unsigned char) 3583734157U))) - (126))/*15*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) -135711345))) - (141))/*2*/) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 135711355)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (arr_0 [i_1] [i_1]))) >> (((903024854U) - (903024842U)))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) -8568477584185781980LL))));
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) != (((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 1])))));
                    arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) * (((/* implicit */int) var_19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (arr_1 [i_2])))));
                }
            } 
        } 
    } 
}
