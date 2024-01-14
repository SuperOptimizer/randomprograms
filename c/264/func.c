/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 514256140
Invocation: ./yarpgen --std=c -o out/264
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
void test(unsigned int var_0, unsigned char var_3, unsigned short var_4, unsigned short var_6, signed char var_9, unsigned long long int var_10, unsigned long long int var_11, unsigned int var_14, unsigned short var_16, unsigned int var_18, short var_19, int zero, long long int arr_0 [19] , unsigned int arr_2 [19] [19] [19] , unsigned int arr_3 [19] [19] , unsigned short arr_4 [19] [19] [19] , unsigned short arr_6 [19] [19] [19] , _Bool arr_7 [19] [19] , short arr_8 [19] [19] [19] [19] [19] , unsigned short arr_10 [19] ) {
    var_20 = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_19))))), (min(((unsigned char)23), ((unsigned char)42))))))));
    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)40959), (((/* implicit */unsigned short) (unsigned char)16))))) << (((((/* implicit */int) var_19)) - (29591)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) var_3)), (var_10))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_10))))), (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_0)) : (10090909734933000190ULL))), (((/* implicit */unsigned long long int) var_14)))))))) - (38))/*1*/; i_0 < (unsigned char)17/*17*/; i_0 += (unsigned char)3/*3*/) 
    {
        for (unsigned long long int i_1 = ((((8355834338776551426ULL) * (10090909734933000190ULL))) - (1839744152172609532ULL))/*0*/; i_1 < 19ULL/*19*/; i_1 += ((((/* implicit */unsigned long long int) var_4)) - (37783ULL))/*2*/) 
        {
            for (unsigned char i_2 = (unsigned char)2/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) min((arr_2 [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned int) (unsigned char)63)))))) - (46))/*17*/; i_2 += (unsigned char)2/*2*/) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned char) arr_7 [i_0] [i_1]);
                    var_23 = ((/* implicit */unsigned int) max((min((max((((/* implicit */long long int) arr_6 [i_0 + 1] [i_1] [i_0 + 1])), (arr_0 [18U]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [6U] [i_1] [i_2])), (arr_3 [i_1] [i_1])))))), (min((min((((/* implicit */long long int) arr_7 [i_2] [i_1])), ((-9223372036854775807LL - 1LL)))), (min((((/* implicit */long long int) arr_4 [i_2 - 1] [i_1] [(unsigned char)8])), (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4ULL/*4*/; i_3 < 18ULL/*18*/; i_3 += ((((/* implicit */unsigned long long int) var_9)) - (18446744073709551545ULL))/*2*/) 
                    {
                        for (unsigned char i_4 = ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (185))/*2*/; i_4 < (unsigned char)18/*18*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)99)) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)207))))) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) > (((/* implicit */int) (signed char)100))))))))))) - (239))/*4*/) 
                        {
                            {
                                var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-8763)) * (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_8 [11U] [11U] [i_2 + 2] [i_3] [i_4]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_2 + 2] [i_0]))))))), (((/* implicit */int) min((arr_8 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_3 + 1] [i_4 - 2]), (arr_8 [i_0 + 1] [i_2 - 1] [i_2 + 2] [i_3 + 1] [i_4 - 2]))))));
                                var_25 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_9)))))), (10090909734933000190ULL));
                                var_26 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) min(((((_Bool)0) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_2])) : (((/* implicit */int) var_16)))), (((((/* implicit */int) arr_7 [i_3] [i_0])) & (((/* implicit */int) (short)-18440))))))), (min((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((unsigned short) (short)-8763)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
