/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 598604288
Invocation: ./yarpgen --std=c -o out/275
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
void test(_Bool var_3, long long int var_15, int zero, unsigned int arr_0 [24] ) {
    var_20 = var_15;
    /* LoopSeq 1 */
    for (int i_0 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16162)) ? (3366805525796096012LL) : (((/* implicit */long long int) ((/* implicit */int) ((-3366805525796096012LL) < (-3366805525796096010LL)))))))) + (1595537396))/*0*/; i_0 < ((((/* implicit */int) var_3)) + (23))/*24*/; i_0 += (((~(((/* implicit */int) (signed char)70)))) + (72))/*1*/) 
    {
        var_21 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)0)))), ((-(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) < (0LL))))))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
}
