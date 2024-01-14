/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3727555645
Invocation: ./yarpgen --std=c -o out/988
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
void test(unsigned char var_1, unsigned int var_2, _Bool var_4, short var_5, unsigned char var_6, unsigned int var_7, unsigned int var_11, unsigned char var_12, unsigned char var_13, unsigned int var_14, int zero, short arr_0 [15] , unsigned int arr_1 [15] , _Bool arr_4 [15] [15] [15] ) {
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-82))));
    var_17 = ((/* implicit */_Bool) var_1);
    if (((/* implicit */_Bool) var_14))
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_1))));
        /* LoopNest 2 */
        for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_7))) - (3955))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_12))) + (2))/*15*/; i_0 += ((((/* implicit */int) var_5)) - (27892))/*2*/) 
        {
            for (short i_1 = (short)0/*0*/; i_1 < (short)15/*15*/; i_1 += (short)2/*2*/) 
            {
                {
                    var_19 ^= ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (arr_1 [6])))));
                    if (((_Bool) min((((arr_4 [i_0] [(_Bool)1] [(unsigned char)3]) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_0 [(unsigned char)9])))), (((/* implicit */int) var_13)))))
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) 1859001603)) ? (max((6238164367398247566LL), (((/* implicit */long long int) (signed char)-89)))) : (((/* implicit */long long int) ((/* implicit */int) (short)27877)))))));
                        var_21 = ((/* implicit */unsigned char) arr_1 [i_1]);
                        arr_5 [(_Bool)1] [i_0] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_0] [i_0]);
                    }

                    arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) (short)28596))))), (((_Bool) var_14)))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11)))), (15547574878631638637ULL)))));
                }
            } 
        } 
    }

    var_22 = ((/* implicit */int) (((((~(((/* implicit */int) (unsigned char)115)))) < (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)118)), (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (((unsigned short) var_4)))))) : (var_14)));
}
