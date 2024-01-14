/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3488664798
Invocation: ./yarpgen --std=c -o out/979
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
void test(int var_1, int var_2, _Bool var_5, signed char var_6, signed char var_7, signed char var_8, short var_9, int zero) {
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (var_7)))) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) var_5)), (var_1)))))) ? (var_1) : (((/* implicit */int) ((unsigned short) max(((unsigned short)0), (((/* implicit */unsigned short) var_8)))))));
    var_11 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)118)) : (var_1))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))));
}
