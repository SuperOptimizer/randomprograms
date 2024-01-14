/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 663568362
Invocation: ./yarpgen --std=c -o out/437
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
void test(unsigned int var_0, unsigned int var_1, int var_2, unsigned long long int var_3, long long int var_4, long long int var_6, unsigned int var_7, unsigned long long int var_8, unsigned long long int var_9, signed char var_10, int var_11, unsigned char var_12, unsigned char var_13, signed char var_16, unsigned int var_17, short var_18, unsigned long long int var_19, int zero, unsigned char arr_0 [23] , unsigned long long int arr_1 [23] , unsigned char arr_2 [23] , _Bool arr_3 [23] , long long int arr_4 [23] [23] [23] , unsigned int arr_5 [23] , unsigned int arr_7 [23] [23] [23] , unsigned long long int arr_9 [23] [23] [23] [23] ) {
    var_20 = min((((/* implicit */unsigned long long int) ((_Bool) var_4))), (min((((var_19) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_17)))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)1))))) << (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((short) var_18))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_17)), (max((6985105879010604514LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
    var_23 &= ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (var_18)))) ? (((((/* implicit */_Bool) var_16)) ? (var_9) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752)))))) ? (((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212)))))) - (3411680400ULL))/*4*/; i_0 < 21ULL/*21*/; i_0 += ((((/* implicit */unsigned long long int) var_0)) - (566279239ULL))/*4*/) 
    {
        for (unsigned char i_1 = ((/* implicit */int) ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_0])), ((unsigned char)46)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (((int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) arr_3 [i_0 + 1]))))))))/*0*/; i_1 < (unsigned char)23/*23*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_10))) - (62))/*4*/) 
        {
            for (unsigned int i_2 = ((((/* implicit */unsigned int) min((((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])) - (max((arr_4 [i_0] [i_0] [i_0 + 2]), (((/* implicit */long long int) arr_5 [i_0])))))), (var_6)))) - (3747413487U))/*3*/; i_2 < ((((/* implicit */unsigned int) var_18)) - (4294963066U))/*22*/; i_2 += ((((/* implicit */unsigned int) (-(((min((5980602985148752532ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) >> (((/* implicit */int) arr_3 [i_1]))))))) + (2U))/*2*/) 
            {
                {
                    var_24 = ((/* implicit */long long int) arr_7 [i_0 - 3] [i_2] [i_1]);
                    var_25 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) var_2)) % (arr_9 [i_0] [i_2 + 1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) max((((long long int) var_11)), (((/* implicit */long long int) min(((unsigned char)0), (arr_2 [i_2 - 3])))))))));
                }
            } 
        } 
    } 
}
