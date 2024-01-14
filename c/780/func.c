/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1878266681
Invocation: ./yarpgen --std=c -o out/780
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
void test(unsigned int var_0, _Bool var_1, short var_2, int var_3, unsigned int var_4, unsigned short var_5, int var_6, unsigned long long int var_7, int var_9, int zero, short arr_0 [17] , short arr_1 [17] , signed char arr_3 [17] [17] [17] ) {
    var_10 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_3)), (var_4)));
    var_11 = var_6;
    var_12 = ((/* implicit */signed char) var_0);
    if (((/* implicit */_Bool) var_2))
    {
        var_13 = ((/* implicit */unsigned long long int) var_9);
        if (((/* implicit */_Bool) min((((/* implicit */int) var_1)), (min((var_6), (max((var_6), (485898884))))))))
        {
            var_14 &= ((/* implicit */int) max((var_2), (var_2)));
            /* LoopNest 2 */
            for (unsigned int i_0 = ((((/* implicit */unsigned int) var_1)) + (1U))/*1*/; i_0 < ((max((max((((/* implicit */unsigned int) min((var_2), (((/* implicit */short) var_1))))), (var_0))), (((/* implicit */unsigned int) max((var_3), (var_9)))))) - (3977518874U))/*16*/; i_0 += 2U/*2*/) 
            {
                for (short i_1 = ((((/* implicit */int) ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), ((short)32767)))), (max((16076407218948309801ULL), (((/* implicit */unsigned long long int) (short)31666)))))))) + (31963))/*4*/; i_1 < (short)16/*16*/; i_1 += (short)1/*1*/) 
                {
                    {
                        arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) var_1))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [(signed char)2] [i_1 - 1])), (0ULL)))));
                        var_15 += ((/* implicit */short) min((min((((/* implicit */unsigned int) var_6)), (0U))), (((/* implicit */unsigned int) max((arr_1 [(_Bool)1]), (arr_1 [(short)8]))))));
                        var_16 = ((/* implicit */short) max((max((var_7), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((var_4), (var_0))))));
                    }
                } 
            } 
        }

        var_17 = max((((/* implicit */unsigned int) var_3)), (min((min((var_4), (var_0))), (((/* implicit */unsigned int) var_3)))));
    }

}
