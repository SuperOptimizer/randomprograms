/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1566304297
Invocation: ./yarpgen --std=c -o out/965
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
void test(unsigned long long int var_6, int zero, _Bool arr_0 [11] ) {
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0/*0*/; i_0 < 11/*11*/; i_0 += 1/*1*/) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) 4309751916146487018ULL))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) (~(((int) (unsigned short)61732)))))));
}
