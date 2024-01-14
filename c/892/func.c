/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3969280947
Invocation: ./yarpgen --std=c -o out/892
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
void test(signed char var_0, unsigned char var_1, short var_3, long long int var_4, short var_5, unsigned long long int var_7, unsigned char var_8, long long int var_10, unsigned char var_11, _Bool var_13, int var_14, unsigned short var_15, unsigned short var_16, int zero, unsigned int arr_0 [20] , _Bool arr_1 [20] [20] , short arr_3 [20] [20] , unsigned long long int arr_7 [20] [20] [20] [20] ) {
    /* LoopSeq 2 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_16))) + (47))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) max((((((/* implicit */long long int) (-(((/* implicit */int) var_16))))) - ((~(var_10))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_11))))) | (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5)))))))))))) + (51))/*20*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) min((max((((/* implicit */unsigned int) max((var_14), (((/* implicit */int) var_5))))), (((0U) & (0U))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 0U))) & (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_13)))))))))))) + (3))/*3*/) /* same iter space */
    {
        var_17 = ((/* implicit */short) min((((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))), (((long long int) min((var_16), (((/* implicit */unsigned short) var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((+((-(arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) var_16))) + (47))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) max((((((/* implicit */long long int) (-(((/* implicit */int) var_16))))) - ((~(var_10))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_11))))) | (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5)))))))))))) + (51))/*20*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) min((max((((/* implicit */unsigned int) max((var_14), (((/* implicit */int) var_5))))), (((0U) & (0U))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 0U))) & (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_13)))))))))))) + (3))/*3*/) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((long long int) (-(4294967292U))));
        /* LoopNest 2 */
        for (unsigned int i_2 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */long long int) arr_0 [i_1])) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) - (3860235623U))/*2*/; i_2 < ((((/* implicit */unsigned int) var_7)) - (1808888116U))/*18*/; i_2 += 2U/*2*/) 
        {
            for (unsigned short i_3 = (unsigned short)0/*0*/; i_3 < ((((/* implicit */int) var_15)) - (36695))/*20*/; i_3 += (unsigned short)1/*1*/) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (+(arr_7 [i_3] [i_3] [i_3] [i_2 + 1])));
                    var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)68))))));
                }
            } 
        } 
    }
    var_21 = max((((((long long int) var_3)) / (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_13))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_14)))))));
}
