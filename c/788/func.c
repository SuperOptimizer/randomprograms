/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3228185219
Invocation: ./yarpgen --std=c -o out/788
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
void test(unsigned int var_1, unsigned long long int var_2, _Bool var_3, unsigned long long int var_4, short var_9, int var_10, unsigned char var_11, _Bool var_12, short var_16, unsigned long long int var_17, signed char var_18, int zero, _Bool arr_2 [17] , unsigned long long int arr_3 [17] [17] [17] , short arr_4 [17] [17] ) {
    var_19 = ((/* implicit */unsigned long long int) var_10);
    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)-117))))) || (((/* implicit */_Bool) var_17)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_9))) - (10636))/*17*/; i_0 += (unsigned short)2/*2*/) 
    {
        for (_Bool i_1 = (_Bool)0/*0*/; i_1 < (_Bool)0/*0*/; i_1 += (_Bool)1/*1*/) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)0)), (4181624563162322963ULL)))) ? (((/* implicit */unsigned long long int) -2929983135681701273LL)) : (max((arr_3 [i_1 + 1] [(short)9] [i_0]), (((/* implicit */unsigned long long int) (signed char)110)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)5)) / (((((/* implicit */int) arr_4 [(unsigned short)16] [(unsigned short)9])) / (((/* implicit */int) (signed char)-99)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_3 [i_1] [i_1 + 1] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22840))))))))) % (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_3 [i_1 + 1] [i_1 + 1] [i_0])))))))));
            }
        } 
    } 
    var_22 = var_16;
}
