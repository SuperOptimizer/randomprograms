/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2678961677
Invocation: ./yarpgen --std=c -o out/445
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
void test(int var_0, int var_3, int var_9, int zero, unsigned int arr_0 [22] [22] , unsigned int arr_1 [22] ) {
    /* LoopSeq 1 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_9)) - (1983683503U))/*2*/; i_0 < ((((/* implicit */unsigned int) max((2147483647), ((~(((int) 4294967283U))))))) - (2147483627U))/*20*/; i_0 += ((((/* implicit */unsigned int) var_3)) - (2732844595U))/*1*/) 
    {
        var_12 -= ((max((((/* implicit */unsigned int) ((1199917990) | (0)))), (min((((/* implicit */unsigned int) 1199917999)), (arr_1 [6]))))) + (min((((((/* implicit */_Bool) arr_0 [13U] [6U])) ? (4294967295U) : (((/* implicit */unsigned int) 4194303)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 250529246)) : (4294967286U))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 0U)) ? (-909533011) : (-3));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 879548633)) ? (4294967292U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (-1257991242) : (((((/* implicit */_Bool) 879548633)) ? (-2147483647) : (50639531))))), (((int) ((((/* implicit */_Bool) arr_1 [10])) ? (1743504851) : (3)))))))));
    }
    var_14 = ((/* implicit */int) min((min(((~(1U))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 879548655)) : (4173263332U))))), (4294967295U)));
}
