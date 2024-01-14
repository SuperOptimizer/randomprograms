/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2672240796
Invocation: ./yarpgen --std=c -o out/763
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
void test(_Bool var_0, unsigned short var_1, long long int var_2, unsigned int var_4, unsigned char var_6, _Bool var_8, _Bool var_10, int zero, unsigned short arr_0 [18] [18] , unsigned long long int arr_1 [18] ) {
    var_15 = ((/* implicit */short) (((-(((/* implicit */int) min((var_10), (var_8)))))) | (min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) 0ULL))))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)24418))))))));
    /* LoopNest 2 */
    for (int i_0 = ((((/* implicit */int) var_6)) - (178))/*1*/; i_0 < ((((/* implicit */int) var_2)) - (853945186))/*17*/; i_0 += ((min((1778866205), (((/* implicit */int) (short)10)))) - (6))/*4*/) 
    {
        for (unsigned long long int i_1 = (((~(((((/* implicit */_Bool) -9052333795589699431LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (-13) : (((/* implicit */int) (signed char)-11))))) : (min((((/* implicit */unsigned long long int) (short)0)), (arr_1 [(_Bool)1]))))))) - (11ULL))/*1*/; i_1 < ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) -9052333795589699431LL)) : (arr_1 [4U])))) ? ((-(((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))) - (1610802947ULL))/*17*/; i_1 += ((/* implicit */unsigned long long int) var_10)/*1*/) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) == (3297668765U)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) 0)), (var_2)))));
            }
        } 
    } 
}
