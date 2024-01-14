/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2316018578
Invocation: ./yarpgen --std=c -o out/690
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
void test(signed char var_0, unsigned char var_1, unsigned char var_3, unsigned char var_4, short var_5, int var_6, short var_9, int var_11, int var_13, int zero) {
    var_15 |= ((/* implicit */short) var_0);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)108)) ? (8390904082828964340ULL) : (((/* implicit */unsigned long long int) 681321056))));
    /* LoopNest 3 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_3))) - (153))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_1))) - (233))/*19*/; i_0 += (short)1/*1*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)5)))) / (((/* implicit */int) ((((/* implicit */_Bool) 2147483648ULL)) || (((/* implicit */_Bool) var_6)))))))))) + (127))/*2*/; i_1 < ((((/* implicit */int) var_9)) - (15536))/*16*/; i_1 += ((((/* implicit */int) var_9)) - (15548))/*4*/) 
        {
            for (unsigned char i_2 = ((/* implicit */int) ((/* implicit */unsigned char) ((((9223372036854775296ULL) ^ (((/* implicit */unsigned long long int) 119196370)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (max((var_6), (((/* implicit */int) (unsigned char)128))))))))))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) -259934864))) - (93))/*19*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (short)-22264)) ? (var_13) : (var_11)))))) - (81))/*1*/) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((int) (unsigned char)155));
                    var_17 = ((/* implicit */unsigned char) (signed char)59);
                }
            } 
        } 
    } 
}
