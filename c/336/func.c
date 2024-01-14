/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4193845472
Invocation: ./yarpgen --std=c -o out/336
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
void test(unsigned char var_2, int var_4, int var_8, short var_14, int var_15, _Bool var_17, signed char var_18, int zero, unsigned long long int arr_0 [24] , signed char arr_1 [24] , unsigned char arr_3 [12] [12] , short arr_4 [12] [12] ) {
    /* LoopSeq 2 */
    for (short i_0 = (short)1/*1*/; i_0 < (short)23/*23*/; i_0 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) var_18)), (((short) var_14))))) ? (var_15) : (((/* implicit */int) var_2)))))) - (25304))/*3*/) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_14);
        var_20 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) 1115131185)), (max((((/* implicit */unsigned long long int) (_Bool)0)), (28ULL))))))))) - (49))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_8))) - (35))/*12*/; i_1 += (signed char)3/*3*/) 
    {
        var_21 &= ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_0 [(signed char)14]))) < (((/* implicit */unsigned long long int) (~(var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [22ULL])) % (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (var_8))) + (var_15))) / (((/* implicit */int) (signed char)-70))));
        arr_7 [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [0U])))));
    }
    var_22 = ((/* implicit */short) var_17);
}
