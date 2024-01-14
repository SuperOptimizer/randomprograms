/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 661414679
Invocation: ./yarpgen --std=c -o out/364
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
void test(int var_1, short var_3, short var_4, unsigned char var_5, int var_8, short var_9, _Bool var_11, long long int var_12, int zero) {
    var_13 -= ((/* implicit */unsigned char) var_11);
    var_14 = var_9;
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) 67108863U))) : ((+(((/* implicit */int) var_4)))))) : (min((((((/* implicit */int) var_4)) * (((/* implicit */int) var_11)))), (2147483647)))));
    var_16 = ((((/* implicit */_Bool) var_8)) ? ((~(max((var_12), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (1954881798)))) ? (((((/* implicit */_Bool) 274877898752LL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_11))))))));
    var_17 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (max((var_8), (-2147483647))) : (((/* implicit */int) var_5)))));
}
