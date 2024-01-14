/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1644621949
Invocation: ./yarpgen --std=c -o out/588
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
void test(unsigned char var_0, short var_2, unsigned int var_3, unsigned long long int var_4, unsigned short var_5, _Bool var_6, _Bool var_7, _Bool var_9, unsigned char var_10, _Bool var_11, int var_13, unsigned long long int var_14, _Bool var_15, unsigned long long int var_16, _Bool var_17, int zero, unsigned long long int arr_0 [12] , _Bool arr_6 [13] , signed char arr_7 [13] [13] ) {
    /* LoopNest 2 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_13))) - (1))/*0*/; i_0 < (_Bool)1/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_10))/*1*/) 
    {
        for (short i_1 = (short)1/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_13))) - (28708))/*10*/; i_1 += (short)2/*2*/) 
        {
            {
                arr_4 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + ((~(arr_0 [i_1 + 2])))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (!((_Bool)0)));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (~((~(var_16)))));
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = ((var_16) - (14080730895087177021ULL))/*1*/; i_2 < ((((/* implicit */unsigned long long int) var_11)) + (10ULL))/*10*/; i_2 += ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_7)))) - (((/* implicit */int) var_0))))), (((max((var_4), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) + (2ULL))/*2*/) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))), (((var_4) - (((/* implicit */unsigned long long int) (~(var_13))))))));
        arr_9 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (max((var_4), (((/* implicit */unsigned long long int) arr_6 [i_2])))))), (((/* implicit */unsigned long long int) max((((var_6) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [1ULL]))))), (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2 + 2])))))));
    }
    var_20 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_17))))))), (((_Bool) (!(var_15))))));
}
