/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 369460399
Invocation: ./yarpgen --std=c -o out/32
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
void test(unsigned long long int var_1, short var_2, unsigned long long int var_3, unsigned int var_5, unsigned char var_7, int var_8, long long int var_11, long long int var_12, unsigned long long int var_13, _Bool var_14, signed char var_15, unsigned long long int var_16, unsigned int var_17, int zero, unsigned short arr_1 [18] [18] ) {
    var_18 *= ((/* implicit */_Bool) (((((((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) var_11)))) << ((((-(((/* implicit */int) (signed char)4)))) + (61)))));
    if (((((unsigned int) var_1)) != (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))
    {
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26380)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)129)))))
        {
            var_19 = max((((((/* implicit */_Bool) (+(var_17)))) ? (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (short)26380)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26387))))) : (((((/* implicit */_Bool) 6960344749161532796ULL)) ? (var_16) : (((/* implicit */unsigned long long int) var_5)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_0 = 0LL/*0*/; i_0 < ((((/* implicit */long long int) var_16)) + (946634731127206644LL))/*18*/; i_0 += 2LL/*2*/) 
            {
                var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65530))))) || ((!(((/* implicit */_Bool) (unsigned short)14)))));
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 315560302U))));
                arr_2 [i_0] = var_2;
            }
            /* vectorizable */
            for (_Bool i_1 = (_Bool)1/*1*/; i_1 < (_Bool)1/*1*/; i_1 += (_Bool)1/*1*/) 
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(var_11))))));
                var_23 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_1 [i_1 - 1] [i_1]))));
            }
        }

        var_24 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) == (min((((/* implicit */unsigned long long int) var_11)), (var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_13)))))))) : ((~(max((((/* implicit */long long int) var_14)), (-3328297084827874358LL))))));
        var_25 = ((/* implicit */long long int) var_2);
    }

}
