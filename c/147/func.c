/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 271430426
Invocation: ./yarpgen --std=c -o out/147
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
void test(signed char var_2, signed char var_3, _Bool var_5, signed char var_8, unsigned long long int var_10, short var_12, signed char var_13, int zero, unsigned short arr_1 [21] , short arr_3 [21] , signed char arr_5 [21] [21] [21] , _Bool arr_6 [21] [21] , _Bool arr_7 [21] [21] ) {
    var_18 = ((/* implicit */unsigned char) max((var_8), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (int i_0 = ((((/* implicit */int) var_2)) + (118))/*0*/; i_0 < ((((/* implicit */int) var_3)) + (81))/*21*/; i_0 += 3/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1375124967U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [(signed char)11]))))) : (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (6ULL))))))))) + (2))/*2*/; i_1 < (signed char)18/*18*/; i_1 += ((((/* implicit */int) var_13)) + (93))/*1*/) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned char) var_3);
                arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-59)) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1])) - (105))))) ^ (((/* implicit */int) min((arr_7 [i_1 - 2] [i_1]), (arr_6 [i_1 + 3] [i_1]))))));
                arr_10 [i_0] [i_1] = ((/* implicit */signed char) (~(max(((+(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)15006)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) min((max(((signed char)70), ((signed char)-72))), (((signed char) var_8)))))));
}
