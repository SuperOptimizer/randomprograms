/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1302704131
Invocation: ./yarpgen --std=c -o out/345
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
void test(unsigned long long int var_4, unsigned int var_5, int zero, unsigned long long int arr_1 [17] [17] , signed char arr_2 [17] ) {
    /* LoopSeq 1 */
    for (unsigned char i_0 = (unsigned char)3/*3*/; i_0 < (unsigned char)14/*14*/; i_0 += (unsigned char)4/*4*/) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) max((arr_1 [i_0] [i_0 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) + (var_4)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    var_12 = ((/* implicit */short) (signed char)15);
}
