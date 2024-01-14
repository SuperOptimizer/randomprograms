/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4081656088
Invocation: ./yarpgen --std=c -o out/95
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
void test(unsigned char var_0, unsigned int var_1, long long int var_6, unsigned long long int var_9, long long int var_10, signed char var_11, unsigned short var_13, int zero, short arr_1 [13] [13] , _Bool arr_8 [13] [13] ) {
    if (((/* implicit */_Bool) (unsigned short)0))
    {
        /* LoopNest 3 */
        for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_0)) - (78ULL))/*2*/; i_0 < 12ULL/*12*/; i_0 += ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)22615)) ? (((/* implicit */int) (short)31118)) : (((/* implicit */int) (short)-31128)))) : (((/* implicit */int) var_11))))) + (((((/* implicit */_Bool) max(((short)31110), ((short)5055)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31118)))))))) - (328664032ULL))/*1*/) 
        {
            for (signed char i_1 = ((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (short)-31115)) + (((/* implicit */int) arr_1 [(unsigned char)0] [i_0])))) < (((((/* implicit */int) (short)-4)) * (((/* implicit */int) (short)11884)))))))) != (((unsigned int) (unsigned short)3347)))))/*1*/; i_1 < (signed char)11/*11*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_10))) + (22))/*1*/) 
            {
                for (short i_2 = ((/* implicit */int) ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56781))))) == (((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31135))) <= (1325927125U)))))))))))/*0*/; i_2 < (short)13/*13*/; i_2 += ((((/* implicit */int) ((/* implicit */short) var_0))) - (77))/*3*/) 
                {
                    {
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-31126)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [(signed char)2]))))), (((/* implicit */unsigned int) (unsigned short)19409))))) ? (((/* implicit */int) ((((_Bool) (short)-5056)) || ((!(((/* implicit */_Bool) (short)31141))))))) : (((int) 2969040166U))));
                        arr_10 [i_0] [i_1] [i_0] = ((short) ((((/* implicit */_Bool) arr_1 [i_0] [0ULL])) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) (short)19565))));
                    }
                } 
            } 
        } 
        var_19 = var_1;
    }

    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_10))));
    var_21 = ((/* implicit */unsigned long long int) var_13);
    var_22 |= ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)213)))) <= (((/* implicit */int) (unsigned short)1995))));
}
