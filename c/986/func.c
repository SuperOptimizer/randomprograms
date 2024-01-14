/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2511515555
Invocation: ./yarpgen --std=c -o out/986
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
void test(unsigned int var_0, unsigned int var_1, unsigned short var_3, unsigned long long int var_5, signed char var_8, short var_9, unsigned int var_10, short var_11, int var_12, int zero, signed char arr_0 [17] [17] , unsigned long long int arr_1 [17] , unsigned int arr_3 [17] [17] [17] , unsigned long long int arr_5 [17] [17] [17] [17] ) {
    if (((/* implicit */_Bool) var_8))
    {
        var_13 = (~((-(((/* implicit */int) (signed char)-35)))));
        var_14 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)-36))))), (var_0))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)15)))))));
        var_15 = max((min((var_10), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_12)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-27035)))))))));
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((5053962040359392168LL) << (((var_5) - (27149604845094368ULL))))) != (((/* implicit */long long int) ((1U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))))))))), (min(((signed char)-29), ((signed char)-16)))));
        /* LoopNest 3 */
        for (unsigned short i_0 = ((((/* implicit */int) var_3)) - (18019))/*0*/; i_0 < (unsigned short)17/*17*/; i_0 += (unsigned short)2/*2*/) 
        {
            for (unsigned int i_1 = ((var_0) - (1966673758U))/*0*/; i_1 < ((((/* implicit */unsigned int) ((min((15124606380765266010ULL), (arr_1 [i_0]))) + ((+(arr_1 [i_0])))))) - (2264269097U))/*17*/; i_1 += ((((/* implicit */unsigned int) (short)0)) + (2U))/*2*/) 
            {
                for (short i_2 = ((((/* implicit */int) ((/* implicit */short) ((var_1) % (((/* implicit */unsigned int) (((-(((/* implicit */int) var_9)))) / (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))))))))))) + (8469))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */short) var_0))) - (3917))/*17*/; i_2 += ((((/* implicit */int) var_11)) - (7932))/*4*/) 
                {
                    {
                        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63086)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_2]))))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28337)) || (((/* implicit */_Bool) (signed char)110)))))));
                        var_17 += ((/* implicit */unsigned int) arr_5 [i_0] [i_2] [i_2] [i_2]);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (arr_3 [i_0] [i_1] [i_2])))))))));
                    }
                } 
            } 
        } 
    }

    var_19 = ((/* implicit */_Bool) var_3);
}
