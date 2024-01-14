/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1316461841
Invocation: ./yarpgen --std=c -o out/271
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
void test(unsigned int var_0, _Bool var_2, signed char var_5, _Bool var_7, unsigned long long int var_8, short var_11, signed char var_12, unsigned short var_14, long long int var_15, int var_16, unsigned long long int var_17, int zero, unsigned short arr_0 [17] , _Bool arr_1 [17] , short arr_2 [17] , _Bool arr_3 [17] [17] , unsigned char arr_4 [17] [17] [17] , unsigned short arr_5 [17] [17] [17] ) {
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4134107356U)))))))));
    if (((/* implicit */_Bool) var_15))
    {
        var_19 = ((/* implicit */unsigned long long int) (+(160859939U)));
        var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    else
    {
        if (((/* implicit */_Bool) var_11))
        {
            /* LoopNest 3 */
            for (unsigned int i_0 = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) - (4294931507U))/*1*/; i_0 < ((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) + (14U))/*15*/; i_0 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? ((-((+(var_8))))) : ((+(((((/* implicit */_Bool) 6243346617461682131ULL)) ? (5932128912273370763ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))) - (824666803U))/*1*/) 
            {
                for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_0 [5ULL])) ? (4134107356U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (max((4134107385U), (((/* implicit */unsigned int) var_16)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [15]))))))))) + (1))/*1*/; i_1 < (short)15/*15*/; i_1 += (short)1/*1*/) 
                {
                    for (unsigned int i_2 = ((((/* implicit */unsigned int) (!(arr_3 [6LL] [i_1 + 2])))) - (1U))/*0*/; i_2 < 17U/*17*/; i_2 += ((((/* implicit */unsigned int) (_Bool)1)) + (1U))/*2*/) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((-10), (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))))) : (((((/* implicit */unsigned int) var_16)) | (var_0)))));
                            arr_6 [i_0] [i_1 + 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)125);
                            var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)13] [11ULL] [11ULL]))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(unsigned char)3] [(unsigned char)3])) == (((/* implicit */int) arr_2 [i_0]))))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) var_5);
        }

        var_24 = ((/* implicit */signed char) var_2);
    }

}
