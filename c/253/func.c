/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 34217745
Invocation: ./yarpgen --std=c -o out/253
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
void test(long long int var_0, _Bool var_1, unsigned long long int var_2, _Bool var_3, int var_4, long long int var_5, long long int var_8, _Bool var_9, _Bool var_11, unsigned short var_12, short var_13, _Bool var_14, _Bool var_15, unsigned long long int var_16, int var_17, int zero, int arr_0 [21] [21] ) {
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) -1349014584)), (2147483648U)));
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((-1159511999584963430LL), (var_0)))) * (((var_16) << (((var_8) + (6227764544564774923LL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((var_15) ? (((/* implicit */unsigned long long int) ((unsigned int) var_13))) : (((var_16) & (((/* implicit */unsigned long long int) 1349014591)))))))))
    {
        var_20 |= ((((/* implicit */int) var_15)) >> (((min((((unsigned long long int) var_8)), (var_2))) - (12218979529144776722ULL))));
        var_21 = ((/* implicit */unsigned long long int) var_17);
        /* LoopNest 2 */
        for (long long int i_0 = ((/* implicit */long long int) var_1)/*0*/; i_0 < (((-(-9223372036854775806LL))) - (9223372036854775785LL))/*21*/; i_0 += ((var_8) + (6227764544564774869LL))/*4*/) 
        {
            for (unsigned long long int i_1 = 1ULL/*1*/; i_1 < ((((/* implicit */unsigned long long int) var_12)) - (15417ULL))/*19*/; i_1 += ((((/* implicit */unsigned long long int) ((signed char) (signed char)120))) - (117ULL))/*3*/) 
            {
                {
                    var_22 = ((/* implicit */int) ((short) (+(((/* implicit */int) (!((_Bool)1)))))));
                    arr_4 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (arr_0 [i_1 - 1] [i_1 + 2]))), ((-(-1349014577)))));
                    var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1349014594)) || (((/* implicit */_Bool) var_12))))), (((unsigned int) var_4))))) ? (((/* implicit */int) ((-1349014597) < (((/* implicit */int) (unsigned char)6))))) : (((/* implicit */int) (unsigned char)249)));
                }
            } 
        } 
    }

    var_24 = ((/* implicit */int) ((((((int) var_14)) * (((/* implicit */int) min(((unsigned char)119), (((/* implicit */unsigned char) var_11))))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)113), (((/* implicit */unsigned char) var_3)))))) > (var_5))))));
    var_25 = ((/* implicit */short) ((((/* implicit */int) min((var_14), (var_11)))) ^ (((/* implicit */int) var_13))));
}
