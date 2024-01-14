/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1759446666
Invocation: ./yarpgen --std=c -o out/366
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
void test(unsigned int var_0, unsigned short var_1, unsigned short var_3, unsigned long long int var_4, unsigned short var_8, unsigned short var_9, unsigned short var_11, unsigned short var_12, int zero, unsigned short arr_5 [16] [16] [16] [16] ) {
    var_13 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < ((((/* implicit */int) var_11)) - (2164))/*16*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) (~(4549685749039710028ULL))))) - (49327))/*4*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) var_3)) - (44005))/*3*/; i_1 < ((((/* implicit */int) var_8)) - (64124))/*13*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_4))) - (35390))/*2*/) 
        {
            for (unsigned short i_2 = ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (45333))/*3*/; i_2 < ((((/* implicit */int) var_1)) - (27087))/*13*/; i_2 += ((((/* implicit */int) var_12)) - (19991))/*3*/) 
            {
                {
                    arr_7 [i_2 + 1] [i_1 - 1] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
                    arr_8 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 12294897650499001811ULL)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned short)65535)))) >= (((/* implicit */int) min((max((arr_5 [i_1] [i_0] [i_1 + 1] [i_2]), (arr_5 [i_1] [i_1] [i_1] [i_1]))), (arr_5 [i_1] [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) var_9))))))));
}
