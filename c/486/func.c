/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 557765144
Invocation: ./yarpgen --std=c -o out/486
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
void test(unsigned char var_1, signed char var_2, long long int var_4, short var_11, int var_13, unsigned int var_15, unsigned char var_17, int zero) {
    var_19 = ((/* implicit */short) ((((((/* implicit */int) var_1)) / ((-(((/* implicit */int) (short)(-32767 - 1))))))) >> ((((-(((2547032734958399251LL) / (((/* implicit */long long int) 406631824)))))) + (6263731930LL)))));
    /* LoopNest 3 */
    for (short i_0 = (short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_15))) - (21402))/*18*/; i_0 += (short)1/*1*/) 
    {
        for (_Bool i_1 = (_Bool)0/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((short) 2547032734958399228LL)))) ^ (var_13))))/*1*/; i_1 += (_Bool)1/*1*/) 
        {
            for (unsigned char i_2 = (unsigned char)2/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) min((((int) var_2)), ((~(2147483647))))))) + (17))/*17*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) var_11))) - (132))/*1*/) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [(short)1] [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2016LL)) / (14661482361152478373ULL)));
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)246))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7780))) : (4587801043935068342ULL))))) & (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -1592025089)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) + (9223372036854775807LL))) << (((2547032734958399228LL) - (2547032734958399228LL))))))));
                    arr_10 [i_0] [(short)10] [i_0] &= ((/* implicit */long long int) ((short) ((unsigned short) (-(((/* implicit */int) (unsigned short)9141))))));
                }
            } 
        } 
    } 
}
