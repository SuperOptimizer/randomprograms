/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2037412851
Invocation: ./yarpgen --std=c -o out/563
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
void test(long long int var_0, short var_2, _Bool var_3, unsigned char var_4, short var_5, _Bool var_8, long long int var_11, short var_12, int var_14, int zero, unsigned long long int arr_0 [25] , _Bool arr_2 [25] [25] , short arr_4 [25] [25] ) {
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) var_5))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_14))/*1*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [(signed char)20] [20ULL]))))) / (((unsigned long long int) var_3)))) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */int) (unsigned short)62435)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) - (max((((/* implicit */unsigned long long int) var_11)), (17058132569074235925ULL)))))))) - (1))/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_2))/*1*/) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 0U))) ? (((/* implicit */int) max(((unsigned short)62437), ((unsigned short)65531)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1])) < (max((((/* implicit */int) (short)-25449)), (-16))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0])) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) + (-24LL)))))) : (((/* implicit */unsigned long long int) (-((+(-503875794))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_14))))))))))));
}
