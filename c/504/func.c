/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1250131552
Invocation: ./yarpgen --std=c -o out/504
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
void test(unsigned long long int var_1, signed char var_2, unsigned int var_4, unsigned long long int var_5, _Bool var_6, short var_8, unsigned long long int var_9, signed char var_12, unsigned char var_13, int zero, unsigned int arr_3 [25] [25] , _Bool arr_4 [25] , _Bool arr_7 [25] [25] [25] , unsigned int arr_8 [25] [25] [25] [25] , unsigned int arr_9 [25] [25] [25] ) {
    var_14 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((short) var_13))))), (var_6)));
    var_15 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))), (var_5))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) (+((+((~(9223372036854775807LL))))))))) + (4))/*4*/; i_0 < (signed char)24/*24*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (125))/*2*/) 
    {
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_8)) - (28497ULL))/*0*/; i_1 < ((((/* implicit */unsigned long long int) var_6)) + (24ULL))/*25*/; i_1 += ((var_1) - (668755986069132885ULL))/*2*/) 
        {
            for (long long int i_2 = ((((/* implicit */long long int) (-(((arr_3 [i_0 - 1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) - (1105036189LL))/*3*/; i_2 < ((((/* implicit */long long int) var_4)) - (3498981538LL))/*24*/; i_2 += ((((/* implicit */long long int) (+((((~(var_1))) >> (((/* implicit */int) arr_4 [i_0 + 1]))))))) - (8888994043820209360LL))/*4*/) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = ((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_9)))) || (((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_2 + 1] [i_0]) * (arr_9 [i_0] [i_0] [i_0])))))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (arr_3 [i_0 - 3] [i_2 + 1]))))))/*1*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) var_12))) - (45))/*22*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_1])))))) + (4))/*4*/) 
                    {
                        for (short i_4 = ((((/* implicit */int) ((/* implicit */short) var_13))) - (54))/*3*/; i_4 < ((((/* implicit */int) ((/* implicit */short) var_4))) - (14498))/*24*/; i_4 += (short)2/*2*/) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_1] [i_1] = var_5;
                                arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_1] [(_Bool)1] [i_4]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0 - 4] [i_0 - 3] [i_0]))))) ? (((/* implicit */long long int) max((arr_3 [i_0 - 1] [i_0 - 3]), (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0 - 4] [i_0 - 4]))))) : (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 3]) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
}
