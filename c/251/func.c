/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2359165517
Invocation: ./yarpgen --std=c -o out/251
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
void test(_Bool var_0, signed char var_2, unsigned long long int var_3, short var_4, unsigned long long int var_6, int var_7, unsigned short var_8, unsigned short var_10, int var_11, short var_12, int zero, short arr_0 [24] , unsigned char arr_1 [24] , long long int arr_2 [24] , signed char arr_3 [24] , short arr_4 [24] [24] , short arr_5 [24] , short arr_6 [24] [24] [24] , _Bool arr_7 [24] [24] [24] , _Bool arr_8 [24] [24] [24] [24] , _Bool arr_9 [24] [24] [24] , _Bool arr_10 [24] [24] [24] [24] ) {
    var_14 *= ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (int i_0 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) var_2))))))))) + (2))/*2*/; i_0 < ((var_7) - (70320467))/*22*/; i_0 += ((var_11) + (789554751))/*4*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) (((((~(((((/* implicit */int) arr_0 [i_0 + 2])) & (((/* implicit */int) var_2)))))) + (2147483647))) >> (((((/* implicit */int) max((max((var_12), (arr_0 [i_0 - 2]))), (((/* implicit */short) arr_1 [i_0 - 2]))))) - (19587))))))) + (1))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_8))) + (102))/*24*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_4))) - (120))/*3*/) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_10)))) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)1416)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = (_Bool)0/*0*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1]))) | (arr_2 [i_0 + 2]))) ^ (((long long int) var_8)))))/*1*/; i_2 += ((/* implicit */int) var_0)/*1*/) 
                {
                    for (long long int i_3 = 0LL/*0*/; i_3 < ((((/* implicit */long long int) var_6)) - (7334409408328915202LL))/*24*/; i_3 += 2LL/*2*/) 
                    {
                        {
                            var_16 = ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2] [i_0 - 2])) ? (var_7) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_3]))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))))) ^ (((((/* implicit */int) (unsigned char)83)) + (((/* implicit */int) (unsigned short)16320))))));
                            var_18 = max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ^ (((((/* implicit */int) arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_3])) << (((((/* implicit */int) arr_1 [i_1])) - (114)))))))), (((((/* implicit */_Bool) (short)17073)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28058))) : (3780967982U))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 2])) >= ((-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_0 + 1]))))))));
            }
        } 
    } 
}
