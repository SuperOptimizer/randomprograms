/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1030029644
Invocation: ./yarpgen --std=c -o out/50
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
void test(_Bool var_0, unsigned int var_1, _Bool var_2, int var_3, long long int var_4, signed char var_5, int var_6, _Bool var_7, int var_8, int var_10, _Bool var_13, unsigned short var_14, unsigned char var_15, unsigned long long int var_16, unsigned char var_17, int zero, unsigned char arr_3 [11] , signed char arr_4 [11] , _Bool arr_7 [13] [13] ) {
    var_18 = (!(((/* implicit */_Bool) (signed char)31)));
    if (((/* implicit */_Bool) var_6))
    {
        var_19 = ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_1)) - (4239574873ULL))/*0*/; i_0 < ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) | (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (1061183475))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))) - (211ULL))/*11*/; i_0 += ((((/* implicit */unsigned long long int) var_15)) - (218ULL))/*4*/) 
        {
            for (_Bool i_1 = ((((/* implicit */int) ((var_8) < (((/* implicit */int) (!(var_13))))))) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) var_6))/*1*/; i_1 += (_Bool)1/*1*/) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) -1061183476)) < (4744721180431263241ULL))))))));
                    var_21 = ((/* implicit */short) max((-1061183471), ((-(((/* implicit */int) arr_4 [i_1]))))));
                    arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [(unsigned char)2]))))) * ((~(((unsigned long long int) var_2))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (~(-1061183475)))) - (((((/* implicit */_Bool) (unsigned short)45965)) ? (((/* implicit */long long int) var_1)) : (var_4))))), (((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) var_7))))))))) - (1ULL))/*0*/; i_2 < ((((/* implicit */unsigned long long int) ((var_4) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (17421996410759095618ULL)))))))) + (13ULL))/*13*/; i_2 += 2ULL/*2*/) 
        {
            var_22 = ((/* implicit */unsigned char) var_16);
            arr_9 [i_2] = ((/* implicit */short) ((((var_10) + (2147483647))) << (((/* implicit */int) arr_7 [i_2] [i_2]))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [4ULL] [i_2]))))) && (((/* implicit */_Bool) ((unsigned long long int) (+(var_8)))))));
        }
        if (((/* implicit */_Bool) (-(972899802))))
        {
            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (_Bool)0))))))))));
            var_25 = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_0))))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_3))));
        }

    }

    var_27 = ((/* implicit */signed char) var_10);
}
