/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2142913773
Invocation: ./yarpgen --std=c -o out/180
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
void test(short var_0, unsigned long long int var_1, int var_2, long long int var_3, unsigned int var_4, int var_5, signed char var_7, int var_9, unsigned char var_10, unsigned long long int var_11, int zero, signed char arr_1 [14] , signed char arr_2 [14] [14] , long long int arr_3 [14] ) {
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_9)))))))))));
    var_13 += ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) >= (((3817010607U) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))))));
    var_14 = ((/* implicit */short) var_9);
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_11))))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))))), (((/* implicit */unsigned int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (230))/*0*/; i_0 < (unsigned char)14/*14*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (144))/*4*/) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((var_1) ^ (17312383539132071101ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned char)234))))))), (((/* implicit */unsigned long long int) var_2))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (var_3) : (((/* implicit */long long int) ((int) arr_1 [(unsigned char)4])))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) arr_1 [i_0])))))) : (((int) arr_3 [i_0]))));
    }
}
