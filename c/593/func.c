/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 680830436
Invocation: ./yarpgen --std=c -o out/593
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
void test(unsigned short var_0, unsigned short var_1, unsigned char var_2, unsigned short var_5, _Bool var_6, unsigned char var_8, long long int var_10, long long int var_11, unsigned char var_12, signed char var_13, unsigned char var_14, unsigned char var_15, int zero) {
    var_16 = ((/* implicit */_Bool) var_12);
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30743))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)10550)) : (((/* implicit */int) (signed char)49))))) ? (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_11)) ? (var_10) : (var_11)))))) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < (_Bool)1/*1*/; i_0 += (_Bool)1/*1*/) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
    }
}
