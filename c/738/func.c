/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3533467938
Invocation: ./yarpgen --std=c -o out/738
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
void test(signed char var_0, unsigned int var_1, unsigned char var_3, long long int var_4, int var_5, short var_6, int var_7, unsigned short var_8, long long int var_9, int zero, unsigned long long int arr_2 [12] , signed char arr_6 [12] [12] [12] , unsigned int arr_8 [12] [12] , signed char arr_12 [12] , unsigned long long int arr_14 [12] ) {
    /* LoopNest 3 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_1))) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) ((var_7) & (((/* implicit */int) var_8)))))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_0))/*1*/) 
    {
        for (signed char i_1 = (signed char)0/*0*/; i_1 < (signed char)12/*12*/; i_1 += (signed char)4/*4*/) 
        {
            for (short i_2 = (short)0/*0*/; i_2 < (short)12/*12*/; i_2 += (short)1/*1*/) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0LL/*0*/; i_3 < ((((((/* implicit */_Bool) (+(arr_8 [i_0] [i_1])))) ? ((+(var_4))) : (((/* implicit */long long int) ((arr_8 [i_0] [i_2]) & (arr_8 [i_0] [i_1])))))) - (2217384505078961441LL))/*12*/; i_3 += ((((/* implicit */long long int) var_6)) + (28227LL))/*4*/) 
                    {
                        for (long long int i_4 = ((((/* implicit */long long int) var_5)) + (896349693LL))/*0*/; i_4 < ((((/* implicit */long long int) ((-1052502974) < (((/* implicit */int) (signed char)-33))))) + (11LL))/*12*/; i_4 += ((((/* implicit */long long int) var_0)) - (107LL))/*1*/) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [9ULL])))))) : (min((((/* implicit */long long int) var_6)), (var_9)))))) : (arr_14 [i_1]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) (((-(arr_2 [i_1]))) | (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))) | ((~(((/* implicit */int) arr_12 [(unsigned short)11])))))))));
                                var_11 = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */long long int) (~(((arr_2 [4U]) << ((((+(var_5))) + (896349694)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) var_8))))) : (var_7)))));
}
