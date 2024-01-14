/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3982643457
Invocation: ./yarpgen --std=c -o out/709
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
void test(unsigned short var_0, unsigned char var_1, int var_2, long long int var_3, int var_4, short var_5, unsigned short var_6, int var_7, unsigned short var_8, _Bool var_9, int var_10, unsigned char var_11, unsigned char var_12, _Bool var_13, int var_14, int zero, _Bool arr_5 [15] ) {
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_7), (-506114414))), (((/* implicit */int) var_1))))) ? (var_2) : (max((var_2), (((((/* implicit */_Bool) 9223372019674906624LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)237)))))))))));
    var_16 += ((/* implicit */unsigned char) ((unsigned short) (short)-25690));
    if (((/* implicit */_Bool) max((((/* implicit */int) ((short) (_Bool)0))), (max((((((-506114414) + (2147483647))) >> (((1672417965) - (1672417959))))), (((/* implicit */int) var_6)))))))
    {
        var_17 = ((/* implicit */unsigned int) ((var_2) & (max(((~(-1427730177))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_12))))))));
        /* LoopNest 3 */
        for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (187))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_14))) - (134))/*13*/; i_0 += ((/* implicit */int) ((/* implicit */unsigned char) var_13))/*1*/) 
        {
            for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < (unsigned short)15/*15*/; i_1 += (unsigned short)3/*3*/) 
            {
                for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (14))/*2*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) arr_5 [i_0]))) + (11))/*12*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) var_10))) - (244))/*3*/) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19725)) ? (-506114414) : (((/* implicit */int) (_Bool)0))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 4294967295U))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_9)) & (((/* implicit */int) var_8)))), (max((((/* implicit */int) var_6)), (var_7)))))) ? (((long long int) max((var_14), (((/* implicit */int) var_11))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))), ((~(var_3)))))));
    }
    else
    {
        var_21 = ((/* implicit */short) max((((((/* implicit */int) max(((short)-3490), ((short)25317)))) + (((/* implicit */int) ((unsigned short) var_9))))), (((/* implicit */int) ((unsigned short) var_3)))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1297965696)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (short)29731))))) ? ((~(var_4))) : (((/* implicit */int) var_5)));
    }

}
