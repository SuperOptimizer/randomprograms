/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2276971527
Invocation: ./yarpgen --std=c -o out/351
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
void test(unsigned int var_0, unsigned long long int var_3, long long int var_6, unsigned char var_7, long long int var_9, int var_10, long long int var_12, int zero, unsigned long long int arr_0 [16] , unsigned long long int arr_1 [16] , unsigned int arr_2 [16] [16] , unsigned long long int arr_5 [16] [16] ) {
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) | (var_0)))) ? (((((/* implicit */_Bool) min((17745721268651165350ULL), (((/* implicit */unsigned long long int) 9052820468424588732LL))))) ? (var_9) : (max((-9052820468424588733LL), (((/* implicit */long long int) 690690187U)))))) : (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) ((unsigned short) min((((/* implicit */long long int) var_10)), ((+(var_12)))))))) + (3063))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */short) ((int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-56))))), (((unsigned char) 3692255359U))))))) - (114))/*13*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_3))) - (8144))/*3*/) 
    {
        for (unsigned short i_1 = ((/* implicit */int) ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_7))))))))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_3))) - (8131))/*16*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_9))) - (7772))/*4*/) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((unsigned long long int) -7714411807706555939LL)), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0 + 3]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))))))));
                var_14 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7959050203278140837LL)))))) >= (arr_2 [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0 + 1] [i_0 - 1]))) : (((/* implicit */int) ((unsigned short) 1064731628U)))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((unsigned long long int) (-(arr_1 [i_1])))) >= (((/* implicit */unsigned long long int) 1501714926U)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29180))) & (0ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (9052820468424588732LL)))))))));
}
