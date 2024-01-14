/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 687906808
Invocation: ./yarpgen --std=c -o out/706
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
void test(int var_0, unsigned long long int var_1, _Bool var_2, long long int var_5, int var_6, unsigned long long int var_8, signed char var_9, unsigned short var_11, long long int var_12, int var_15, unsigned long long int var_16, int zero, unsigned char arr_4 [23] [23] , unsigned long long int arr_5 [23] ) {
    var_17 = ((/* implicit */long long int) (_Bool)1);
    var_18 &= ((/* implicit */long long int) var_16);
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), ((~(var_6)))))), (9935819822675399922ULL))))));
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))
    {
        /* LoopNest 2 */
        for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_5))))) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) var_8))/*1*/; i_0 += (_Bool)1/*1*/) 
        {
            for (short i_1 = ((((/* implicit */int) ((/* implicit */short) var_1))) - (29084))/*3*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_0))) + (1315))/*21*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_11))) + (10763))/*4*/) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 128849018880LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (6917529027641081856LL)))) : (((arr_5 [(unsigned char)8]) / (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(signed char)11] [i_0])) % ((+(((/* implicit */int) (unsigned char)135)))))))));
                    var_21 = var_11;
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 9935819822675399922ULL))));
        var_23 = ((/* implicit */signed char) var_8);
    }

}
