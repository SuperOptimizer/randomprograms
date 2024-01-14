/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3515375843
Invocation: ./yarpgen --std=c -o out/368
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
void test(unsigned char var_0, unsigned char var_1, unsigned int var_2, int var_4, short var_5, unsigned char var_7, _Bool var_8, unsigned char var_9, unsigned char var_10, int zero, _Bool arr_0 [14] , unsigned char arr_1 [14] [14] ) {
    /* LoopNest 3 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_4)) - (1128153938U))/*0*/; i_0 < ((((/* implicit */unsigned int) var_10)) - (238U))/*14*/; i_0 += ((((/* implicit */unsigned int) var_10)) - (250U))/*2*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_1))) - (101))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_1))) - (87))/*14*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_4))) - (17230))/*4*/) 
        {
            for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) var_5))) - (1))/*0*/; i_2 < ((((/* implicit */int) var_8)) + (1))/*1*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((unsigned short) var_1));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5489))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))) % (((/* implicit */int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)48037))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_8)) << (max((((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)190)))), (((/* implicit */int) ((_Bool) var_9)))))));
}
