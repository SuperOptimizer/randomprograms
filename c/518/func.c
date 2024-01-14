/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3591295821
Invocation: ./yarpgen --std=c -o out/518
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
void test(unsigned char var_13, int zero, unsigned char arr_1 [22] , unsigned char arr_2 [22] ) {
    var_14 = var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = (unsigned char)1/*1*/; i_0 < (unsigned char)19/*19*/; i_0 += (unsigned char)3/*3*/) 
    {
        arr_3 [i_0] = ((unsigned char) arr_1 [i_0 - 1]);
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 + 2]))));
    }
}
