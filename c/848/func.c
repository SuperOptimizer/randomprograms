/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2716062718
Invocation: ./yarpgen --std=c -o out/848
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
void test(short var_2, unsigned short var_3, short var_4, unsigned short var_5, int var_6, unsigned int var_7, short var_8, unsigned short var_9, short var_10, _Bool var_11, int zero, unsigned int arr_2 [10] [10] ) {
    var_12 |= ((/* implicit */unsigned long long int) var_3);
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
    var_14 += ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_7)))), (((long long int) var_2)))) + (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)-28)), (1925835822U))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)510)))))))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) ((max((var_7), ((-(var_7))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_4)))))))))) - (10346))/*1*/; i_0 < ((((/* implicit */int) var_8)) + (9138))/*7*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_5))) - (31737))/*4*/) 
    {
        for (int i_1 = 0/*0*/; i_1 < ((((/* implicit */int) var_7)) + (1579427957))/*10*/; i_1 += 4/*4*/) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((_Bool) 2369131473U));
                var_16 = (-((+(0LL))));
                var_17 += ((/* implicit */unsigned int) ((18446744073709551610ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_6))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_1])) ? (var_7) : (max((2369131498U), (((/* implicit */unsigned int) (unsigned short)0))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)30243))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (short)-23491)) < (((/* implicit */int) var_11))));
}
