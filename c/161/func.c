/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 767549769
Invocation: ./yarpgen --std=c -o out/161
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
void test(int var_0, signed char var_1, signed char var_5, unsigned char var_6, short var_7, unsigned int var_10, int zero, int arr_0 [16] , int arr_1 [16] , int arr_5 [16] , unsigned short arr_6 [16] , unsigned short arr_8 [16] , int arr_10 [16] ) {
    var_11 = ((/* implicit */short) (_Bool)0);
    var_12 = ((/* implicit */signed char) ((unsigned long long int) ((((long long int) (_Bool)0)) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_5)))))))));
    var_13 = ((/* implicit */unsigned int) ((signed char) ((signed char) ((((/* implicit */int) (unsigned short)32081)) == (var_0)))));
    /* LoopSeq 2 */
    for (signed char i_0 = ((((/* implicit */int) var_1)) + (92))/*0*/; i_0 < ((((/* implicit */int) ((signed char) var_7))) + (1))/*16*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) ((unsigned char) 2109692583))) : (((/* implicit */int) ((signed char) var_10)))))))) - (98))/*2*/) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((_Bool) ((unsigned char) arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)204)) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_3 [i_0] = ((int) (-2147483647 - 1));
    }
    for (signed char i_1 = ((((/* implicit */int) var_1)) + (92))/*0*/; i_1 < ((((/* implicit */int) ((signed char) var_7))) + (1))/*16*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) ((unsigned char) 2109692583))) : (((/* implicit */int) ((signed char) var_10)))))))) - (98))/*2*/) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) ((signed char) ((short) arr_0 [i_1])));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) == (arr_0 [i_1]))))) == (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((unsigned char) arr_5 [i_1]))) : (((/* implicit */int) arr_6 [i_1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = (short)0/*0*/; i_2 < (short)16/*16*/; i_2 += (short)2/*2*/) 
        {
            var_16 = ((/* implicit */unsigned short) ((_Bool) arr_10 [i_1]));
            var_17 = ((/* implicit */short) ((unsigned char) arr_8 [i_1]));
        }
        var_18 = ((/* implicit */int) 7799194412788723369LL);
    }
}
