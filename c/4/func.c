/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4190645149
Invocation: ./yarpgen --std=c -o out/4
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
void test(short var_0, unsigned long long int var_1, unsigned char var_2, unsigned char var_3, signed char var_4, unsigned long long int var_6, signed char var_10, int var_11, unsigned short var_12, unsigned short var_13, unsigned long long int var_14, short var_15, signed char var_16, int zero, unsigned char arr_0 [20] [20] , unsigned char arr_1 [20] , int arr_3 [20] , _Bool arr_5 [11] , int arr_6 [11] , short arr_8 [11] [11] ) {
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_2))) - (104))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */short) ((((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (9223372036854775785LL))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))) + (4))/*19*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_1))) - (24347))/*2*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) var_6)) - (8229833577775307438LL))/*0*/; i_1 < 20LL/*20*/; i_1 += 3LL/*3*/) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) arr_1 [i_0]))))))))))));
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (-9223372036854775778LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)238))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = ((((/* implicit */int) var_13)) - (19085))/*0*/; i_2 < ((((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (var_10))))) | ((+(14456044989853354221ULL))))), (var_14)))) - (93232368))/*11*/; i_2 += 4/*4*/) 
    {
        for (unsigned long long int i_3 = ((((/* implicit */unsigned long long int) var_2)) - (105ULL))/*0*/; i_3 < ((((/* implicit */unsigned long long int) (~((((~(((/* implicit */int) arr_5 [(unsigned short)8])))) | (((((/* implicit */int) arr_1 [i_2])) / (arr_6 [i_2])))))))) + (11ULL))/*11*/; i_3 += 1ULL/*1*/) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) arr_6 [i_2])) : (-9223372036854775767LL)))) : (((arr_3 [i_2]) / ((+(((/* implicit */int) arr_8 [i_3] [(short)7])))))))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max(((~((~(((/* implicit */int) var_15)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 83971904872066163ULL))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (unsigned char)49)))) : ((-(((/* implicit */int) (_Bool)0)))))) ^ ((((+(((/* implicit */int) var_12)))) / (((((/* implicit */_Bool) 3990699083856197395ULL)) ? (var_11) : (((/* implicit */int) var_10))))))));
}
