/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3235092153
Invocation: ./yarpgen --std=c -o out/868
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
void test(int var_0, unsigned char var_2, signed char var_3, unsigned int var_5, int var_6, unsigned int var_7, unsigned long long int var_8, int var_9, signed char var_10, int var_11, long long int var_13, unsigned short var_14, unsigned char var_15, int zero, signed char arr_0 [17] , short arr_1 [17] [17] , unsigned short arr_3 [17] [17] [17] ) {
    var_16 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (1804639600)))) ? (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) (unsigned char)255))))), (((unsigned long long int) ((_Bool) var_7))));
    var_17 ^= ((/* implicit */unsigned char) var_14);
    if (((/* implicit */_Bool) (signed char)-126))
    {
        if (((/* implicit */_Bool) var_13))
        {
            var_18 = ((/* implicit */unsigned int) (unsigned char)0);
            var_19 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-126))))) || (((((/* implicit */_Bool) (unsigned char)250)) || (((/* implicit */_Bool) var_14))))))));
            var_20 = ((/* implicit */long long int) var_8);
        }

        if (((/* implicit */_Bool) (-(((min((((/* implicit */long long int) var_15)), (var_13))) / (((/* implicit */long long int) var_5)))))))
        {
            if (((/* implicit */_Bool) ((unsigned long long int) ((min((var_11), (((/* implicit */int) var_3)))) | (min((var_0), (((/* implicit */int) var_2))))))))
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (6837420924031405242ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))) : (16340730204024619808ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)155)))))))))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1048575))))), ((unsigned char)148))))));
            }

            /* LoopNest 2 */
            for (unsigned short i_0 = (unsigned short)3/*3*/; i_0 < (unsigned short)13/*13*/; i_0 += (unsigned short)2/*2*/) 
            {
                for (unsigned int i_1 = 0U/*0*/; i_1 < ((((/* implicit */unsigned int) var_2)) - (236U))/*17*/; i_1 += 3U/*3*/) 
                {
                    {
                        var_23 = ((/* implicit */long long int) arr_0 [i_0]);
                        arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)14)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(signed char)8]))))) ? (((12472107202464552082ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)8] [i_1]))))) : (((/* implicit */unsigned long long int) ((12U) * (((/* implicit */unsigned int) -432432368))))))) : (max((((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1] [i_0])))))))));
                        var_25 ^= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                        arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) arr_1 [i_1] [i_1])))), ((-(((/* implicit */int) (unsigned char)229)))))) * (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 - 3]))));
                    }
                } 
            } 
        }

    }

}
