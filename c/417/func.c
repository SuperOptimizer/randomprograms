/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3952636975
Invocation: ./yarpgen --std=c -o out/417
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
void test(signed char var_0, short var_1, signed char var_3, unsigned long long int var_5, signed char var_7, unsigned int var_11, unsigned short var_14, int zero, unsigned char arr_0 [24] , short arr_4 [24] [24] [24] ) {
    var_16 |= ((/* implicit */short) var_5);
    var_17 = ((/* implicit */int) ((_Bool) var_14));
    var_18 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) (unsigned short)33247)))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((signed char)-17), (var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = (unsigned short)3/*3*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_11))) - (19805))/*23*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28636)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (296640211U))))) - (32764))/*3*/) 
    {
        for (unsigned int i_1 = ((((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 3]))))), (18446744073709551604ULL)))) - (4294967125U))/*0*/; i_1 < ((((/* implicit */unsigned int) var_1)) - (4294942307U))/*24*/; i_1 += 2U/*2*/) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)28636)), (4294967282U))))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 3] [i_0 - 3])) : (((((/* implicit */_Bool) (short)-28636)) ? (((/* implicit */int) (short)28632)) : (((/* implicit */int) (signed char)85)))))) - (17694)))));
                var_20 = ((/* implicit */signed char) arr_0 [i_0]);
                arr_6 [(unsigned char)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((unsigned int) (short)-28620)) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59621))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((int) var_7));
}
