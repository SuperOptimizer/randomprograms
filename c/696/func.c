/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1466436101
Invocation: ./yarpgen --std=c -o out/696
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
void test(short var_1, int var_2, unsigned int var_3, int var_4, unsigned long long int var_5, unsigned short var_6, unsigned int var_7, signed char var_8, unsigned int var_10, int var_11, unsigned long long int var_12, long long int var_14, unsigned short var_15, unsigned short var_16, unsigned int var_18, _Bool var_19, int zero) {
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < (_Bool)1/*1*/; i_0 += (_Bool)1/*1*/) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_19);
        var_21 += ((/* implicit */long long int) ((var_2) > (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) var_2)))))));
        var_22 += ((/* implicit */short) ((var_2) + (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) var_11)))))));
        arr_3 [i_0] = var_10;
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_5))));
    }
    for (signed char i_1 = ((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((var_18) > (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) == (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_1)))))))) == (((/* implicit */int) var_15)))))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) ((((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) << (((((var_14) + (9223372036854775807LL))) >> (((var_14) + (887542767224654159LL))))))) << (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_8))))))))) + (22))/*14*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) ((var_12) << (((((/* implicit */int) var_1)) - (29060))))))) + (2))/*2*/) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((((var_3) >> (((var_3) - (839159652U))))) >> (((var_3) - (839159652U))))) << (((/* implicit */int) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_15)))) > (((((/* implicit */int) var_16)) << (((var_11) - (898535355))))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) var_4);
    }
    var_24 = ((/* implicit */_Bool) var_2);
}
