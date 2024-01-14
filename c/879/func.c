/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1812454070
Invocation: ./yarpgen --std=c -o out/879
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
void test(_Bool var_0, short var_1, unsigned short var_2, long long int var_3, unsigned int var_5, _Bool var_6, _Bool var_8, _Bool var_9, unsigned int var_10, unsigned long long int var_13, int zero, short arr_1 [23] [23] , unsigned short arr_2 [23] [23] , short arr_3 [23] , short arr_4 [23] [23] , int arr_5 [23] , _Bool arr_9 [24] [24] , unsigned long long int arr_11 [24] [24] , unsigned short arr_12 [24] ) {
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) (unsigned short)2116)) - (2116U))/*0*/; i_0 < 23U/*23*/; i_0 += ((var_10) - (2622753599U))/*1*/) /* same iter space */
    {
        var_14 |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)63442))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 2U))));
    }
    for (unsigned int i_1 = ((((/* implicit */unsigned int) (unsigned short)2116)) - (2116U))/*0*/; i_1 < 23U/*23*/; i_1 += ((var_10) - (2622753599U))/*1*/) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) 1215134774U))))) << (((((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (signed char)127)))) - (118))))) < (max((((((/* implicit */_Bool) arr_3 [(unsigned char)3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) (unsigned char)18))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1] [(signed char)18])) || (((/* implicit */_Bool) arr_1 [i_1] [13U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) var_0))));
        var_19 |= ((/* implicit */long long int) (signed char)-127);
    }
    for (unsigned int i_2 = ((((/* implicit */unsigned int) (unsigned short)2116)) - (2116U))/*0*/; i_2 < 23U/*23*/; i_2 += ((var_10) - (2622753599U))/*1*/) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_1 [i_2] [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_2 [15] [i_2])) < (((/* implicit */int) (signed char)31))))))))));
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (0U))))
        {
            var_21 = ((/* implicit */long long int) max((((var_6) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (max((((/* implicit */unsigned long long int) var_1)), (0ULL))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_1 [i_2] [i_2])) | (((/* implicit */int) (_Bool)1)))))))));
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)54))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (536870911U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))) : (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114)))))) ? (min((((/* implicit */unsigned long long int) 4294967295U)), (var_13))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_13)))))))));
        }

        arr_8 [i_2] = ((/* implicit */unsigned int) ((((((var_8) ? (576460752303390720LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))))) << (((max((((/* implicit */int) var_2)), (arr_5 [i_2]))) - (678568983))))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-121)), (max((8184U), (3063323572U))))))));
    }
    for (short i_3 = ((((/* implicit */int) ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned char)118)) ? (var_3) : (var_3))))) ^ (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)0)))))))))) + (11776))/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) + (var_10))))) - (2742))/*24*/; i_3 += (short)1/*1*/) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
        var_24 |= ((/* implicit */unsigned long long int) (_Bool)1);
        arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_11 [i_3] [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) 1418931945390980807LL)) : (var_13))) : (((arr_11 [i_3] [i_3]) & (arr_11 [i_3] [i_3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-1358717003) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)4)), (arr_12 [i_3])))) : (((/* implicit */int) arr_12 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2703366434U)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) var_2))))))))));
        var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_9 [i_3] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) ? ((+(((/* implicit */int) arr_12 [(unsigned char)10])))) : (((/* implicit */int) var_9))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 2146435072ULL))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) 1358717003)))))));
}
