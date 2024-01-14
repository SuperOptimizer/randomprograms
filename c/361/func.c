/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 525310056
Invocation: ./yarpgen --std=c -o out/361
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
void test(unsigned long long int var_0, unsigned char var_1, unsigned short var_2, signed char var_3, unsigned short var_4, unsigned char var_6, unsigned short var_7, unsigned long long int var_8, long long int var_10, int zero, unsigned char arr_0 [12] , unsigned short arr_1 [12] [12] , _Bool arr_2 [12] , unsigned short arr_3 [12] [12] [12] ) {
    var_12 = ((/* implicit */short) max((max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))), (max((((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5193))))), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))))));
    var_13 = ((/* implicit */int) var_4);
    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_1))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-105), (var_3)))))))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_10))) - (13709))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_7))) - (4653))/*12*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_4))) - (1882))/*3*/) 
    {
        for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_10))) - (137))/*4*/; i_1 < (unsigned char)11/*11*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (165))/*3*/) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_1])))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 4])) : (((/* implicit */int) arr_2 [i_1 - 2]))))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)111)), ((unsigned short)16384)))))));
            }
        } 
    } 
}
