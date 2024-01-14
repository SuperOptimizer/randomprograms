/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1464050910
Invocation: ./yarpgen --std=c -o out/383
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
void test(long long int var_0, unsigned int var_1, long long int var_4, short var_5, unsigned short var_6, _Bool var_7, unsigned short var_8, unsigned short var_9, _Bool var_11, unsigned short var_12, long long int var_16, int zero, _Bool arr_0 [12] , unsigned long long int arr_1 [12] [12] , long long int arr_3 [16] [16] , int arr_4 [16] ) {
    /* LoopSeq 3 */
    for (long long int i_0 = ((var_4) - (640777371023708711LL))/*0*/; i_0 < ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (-(-996858648))))))) + (11LL))/*12*/; i_0 += 2LL/*2*/) 
    {
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-32753))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3000727236661852915LL))))))));
    }
    for (short i_1 = ((((/* implicit */int) ((/* implicit */short) var_6))) - (21837))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_11))) + (16))/*16*/; i_1 += ((((/* implicit */int) var_5)) + (23375))/*4*/) 
    {
        var_19 = ((/* implicit */short) max((((/* implicit */long long int) arr_4 [i_1])), (((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_1]))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
        arr_5 [i_1] = arr_4 [i_1];
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((_Bool) (~(arr_4 [i_1])))), ((_Bool)1)));
    }
    for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) var_12))) - (1))/*0*/; i_2 < ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_16)))/*1*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
    {
        var_20 = (-(max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2]))))), ((+(arr_3 [i_2] [i_2]))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) != ((~(-5141126730906318704LL))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_9)))) : (((/* implicit */int) (unsigned short)0)))))))));
}
