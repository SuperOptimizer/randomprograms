/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3472676878
Invocation: ./yarpgen --std=c -o out/431
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
void test(signed char var_1, long long int var_3, signed char var_4, signed char var_5, unsigned long long int var_10, unsigned short var_12, int zero, unsigned short arr_2 [21] [21] ) {
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((var_12), (((/* implicit */unsigned short) (unsigned char)103)))), (((/* implicit */unsigned short) ((_Bool) var_1)))))), (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) + (2))/*21*/; i_0 += (unsigned char)1/*1*/) 
    {
        arr_4 [10U] [(unsigned char)1] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned int) var_5);
    }
    for (_Bool i_1 = (_Bool)0/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) ((unsigned short) min(((~(var_10))), (((/* implicit */unsigned long long int) var_5))))))/*1*/) 
    {
        arr_10 [12ULL] [10U] = ((/* implicit */unsigned long long int) var_12);
        arr_11 [(unsigned char)24] [i_1] = ((/* implicit */int) var_4);
    }
}
