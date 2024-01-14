/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1163992207
Invocation: ./yarpgen --std=c -o out/412
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
void test(short var_0, unsigned char var_1, _Bool var_2, signed char var_3, long long int var_4, int var_5, signed char var_6, unsigned int var_8, _Bool var_9, int var_10, int zero, unsigned short arr_0 [17] , long long int arr_1 [17] [17] , unsigned int arr_2 [17] [17] [17] , _Bool arr_3 [17] , int arr_4 [17] [17] ) {
    var_11 = ((/* implicit */unsigned int) (+(min(((((_Bool)1) ? (((/* implicit */int) (signed char)107)) : (var_5))), (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) min((((/* implicit */unsigned int) var_10)), (max((min((var_8), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((-1584600060) * (((/* implicit */int) var_9))))))))))) - (28383))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_1))) - (184))/*14*/; i_0 += (short)4/*4*/) 
    {
        var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [12U] [i_0])) ? (max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 2] [i_0 + 1]))) : (((/* implicit */long long int) (+((~(((/* implicit */int) var_3)))))))));
        var_13 = ((/* implicit */_Bool) ((int) (+(arr_1 [i_0 + 1] [i_0 - 2]))));
        var_14 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = ((((/* implicit */long long int) var_0)) - (17248LL))/*1*/; i_1 < 14LL/*14*/; i_1 += 4LL/*4*/) 
        {
            if (((/* implicit */_Bool) ((((/* implicit */unsigned int) 923755434)) - ((-(1879621881U))))))
            {
                var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) var_5)) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)1804)))) : (((/* implicit */int) var_3))))));
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (arr_1 [i_0] [i_0 - 1]) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (var_4) : (((/* implicit */long long int) arr_4 [i_1] [i_0 - 1])))))) + (min((var_4), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) <= (arr_2 [i_0 - 2] [i_0 - 2] [i_1]))))))));
            }
            else
            {
                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) || (((_Bool) var_2))));
                var_18 = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((((/* implicit */_Bool) -6455408087591272280LL)) ? ((((_Bool)1) ? (arr_2 [i_0] [i_0 + 2] [i_0]) : (((/* implicit */unsigned int) arr_4 [1] [i_0 + 2])))) : (((/* implicit */unsigned int) (~(116132387)))))) : (max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-4))))))));
            }

            var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (var_10)));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_3 [i_0 + 1])))))))));
        }
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 4)), (2863638093173308402LL))))))) & (((min((var_9), (var_9))) ? ((~(((/* implicit */int) (_Bool)1)))) : (min((-2036569166), (((/* implicit */int) (signed char)15))))))));
}
