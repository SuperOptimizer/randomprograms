/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2431557356
Invocation: ./yarpgen --std=c -o out/249
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
void test(signed char var_0, long long int var_1, int var_2, short var_3, int var_4, long long int var_5, unsigned int var_6, unsigned short var_7, unsigned short var_8, int var_9, int var_10, long long int var_11, int zero, unsigned short arr_0 [25] , _Bool arr_3 [25] , unsigned int arr_4 [25] [25] [25] , int arr_5 [25] [25] [25] [25] ) {
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (var_4) : (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (int i_0 = 3/*3*/; i_0 < ((((/* implicit */int) var_0)) - (32))/*24*/; i_0 += 3/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (52))/*1*/; i_1 < (signed char)24/*24*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_5))) + (36))/*1*/) 
        {
            for (long long int i_2 = ((((/* implicit */long long int) max(((((~(((/* implicit */int) arr_3 [i_0])))) & (((/* implicit */int) (signed char)121)))), (((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) arr_0 [i_0])))) / ((-(((/* implicit */int) (short)23972))))))))) - (55941LL))/*0*/; i_2 < ((((/* implicit */long long int) var_3)) - (18738LL))/*25*/; i_2 += ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23972))))) ? ((-(arr_4 [i_0 - 2] [i_1 - 1] [i_0 - 2]))) : (((/* implicit */unsigned int) (~(-1953926102))))))) - (1097963111LL))/*2*/) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_3))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-112))))) || (((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) -1953926102)))))))))));
                    arr_8 [i_2] [i_0] [i_1] [i_2] |= ((/* implicit */short) var_10);
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)4286)) : (((/* implicit */int) (signed char)107)))))));
                    if (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)14336)))) ? ((-((((_Bool)1) ? (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_1] [i_2])) : (var_1))))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_4 [(unsigned short)16] [i_1] [i_2])) : (var_11))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)119)), ((unsigned short)61249)))))))))
                    {
                        var_15 = max((((/* implicit */unsigned short) arr_3 [i_0])), (max((((/* implicit */unsigned short) var_0)), (var_7))));
                        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61250))));
                        arr_9 [i_1] = ((/* implicit */signed char) 578217470);
                    }

                }
            } 
        } 
    } 
}
