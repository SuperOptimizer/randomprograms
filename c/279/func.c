/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2994085766
Invocation: ./yarpgen --std=c -o out/279
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
void test(long long int var_1, long long int var_2, _Bool var_3, unsigned long long int var_4, signed char var_5, short var_7, unsigned int var_8, unsigned char var_10, _Bool var_11, unsigned int var_12, unsigned short var_13, unsigned int var_14, unsigned int var_15, unsigned long long int var_16, long long int var_17, int zero, _Bool arr_0 [24] , signed char arr_1 [24] , int arr_2 [24] [24] [24] , short arr_3 [24] , signed char arr_6 [24] , signed char arr_7 [24] [24] , short arr_9 [25] [25] , short arr_10 [25] [25] , signed char arr_12 [25] [25] , long long int arr_13 [25] [25] [25] , short arr_15 [25] [25] , signed char arr_16 [25] [25] [25] [25] ) {
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_16))))) : (((/* implicit */int) var_10)))))
    {
        var_18 = ((/* implicit */unsigned long long int) var_7);
        var_19 ^= ((/* implicit */long long int) ((unsigned short) max((max((var_16), (((/* implicit */unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned int i_0 = 0U/*0*/; i_0 < ((((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_17))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))) + (23U))/*24*/; i_0 += ((((/* implicit */unsigned int) var_11)) + (1U))/*1*/) 
        {
            for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (58))/*4*/; i_1 < (unsigned char)23/*23*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) arr_0 [i_0]))) + (1))/*1*/) 
            {
                for (unsigned int i_2 = 0U/*0*/; i_2 < ((((/* implicit */unsigned int) var_13)) - (40342U))/*24*/; i_2 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 4] [i_1 - 1] [i_1])) ? (((2ULL) * (((/* implicit */unsigned long long int) arr_2 [i_1 - 3] [i_1 - 4] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17U)) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967292U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))) - (2082786905U))/*1*/) 
                {
                    {
                        arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_16))) << (((((/* implicit */int) ((unsigned char) var_2))) - (234)))))) ? (((((((/* implicit */int) arr_6 [i_2])) + (((/* implicit */int) arr_1 [i_0])))) + ((+(((/* implicit */int) (signed char)-121)))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2]))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)127)), ((short)32767)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (0ULL))))));
                    }
                } 
            } 
        } 
        var_21 *= (-(var_12));
    }
    else
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))) * (((9223372036854775807LL) / ((-9223372036854775807LL - 1LL)))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_14)))))))));
        var_23 += ((/* implicit */unsigned int) (unsigned char)0);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_17)))) * ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_4)))))));
    }

    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = (unsigned short)0/*0*/; i_3 < (unsigned short)25/*25*/; i_3 += (unsigned short)1/*1*/) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0U/*0*/; i_4 < ((((/* implicit */unsigned int) (_Bool)1)) + (24U))/*25*/; i_4 += 2U/*2*/) 
        {
            arr_14 [i_3] [i_3] = ((((/* implicit */long long int) var_14)) ^ (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))));
            var_25 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-105)))) == (((/* implicit */int) arr_9 [i_3] [i_4]))));
            /* LoopSeq 1 */
            for (signed char i_5 = (signed char)2/*2*/; i_5 < (signed char)22/*22*/; i_5 += (signed char)1/*1*/) 
            {
                arr_17 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_5])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [9U] [i_5]))))) : (var_2)));
                var_26 = ((/* implicit */unsigned short) ((((long long int) arr_12 [i_3] [i_4])) - (var_1)));
                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3] [i_4])) - (((/* implicit */int) arr_16 [i_3] [(signed char)14] [20LL] [i_5 + 3]))));
            }
        }
    }
    var_28 ^= ((/* implicit */signed char) var_1);
    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((((unsigned short) (-(var_17)))), (((/* implicit */unsigned short) var_10)))))));
}
