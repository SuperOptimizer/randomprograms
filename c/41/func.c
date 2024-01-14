/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 971601871
Invocation: ./yarpgen --std=c -o out/41
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
void test(signed char var_1, signed char var_2, long long int var_4, signed char var_5, int var_6, int var_7, unsigned int var_8, unsigned long long int var_9, int var_10, _Bool var_11, int zero, int arr_0 [21] [21] , unsigned short arr_1 [21] , unsigned short arr_3 [21] [21] ) {
    /* LoopSeq 2 */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < (_Bool)1/*1*/; i_0 += (_Bool)1/*1*/) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_1 [i_0])))) << (((5823455630473651475ULL) - (5823455630473651475ULL))))))));
        var_13 |= ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((short) var_6))), (max((24ULL), (((/* implicit */unsigned long long int) 8LL)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = (_Bool)0/*0*/; i_1 < (_Bool)1/*1*/; i_1 += (_Bool)1/*1*/) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1061348785)) | (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (680035476U)))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) arr_3 [i_1] [16])) : (((/* implicit */int) var_2))));
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1]))));
    }
    var_17 *= ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (var_7)))) / (max((((/* implicit */unsigned long long int) var_1)), (var_9))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_9)))))));
}
