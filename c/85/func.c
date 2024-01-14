/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 572448747
Invocation: ./yarpgen --std=c -o out/85
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
void test(long long int var_1, unsigned char var_2, unsigned char var_3, short var_4, _Bool var_6, short var_7, unsigned char var_10, _Bool var_11, int zero, unsigned char arr_0 [25] , long long int arr_4 [25] ) {
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10))));
    var_13 = ((/* implicit */unsigned char) (-(7255234067740071177LL)));
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_11)) * ((+(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 2/*2*/; i_0 < 23/*23*/; i_0 += ((((((/* implicit */_Bool) (~(var_1)))) ? (min((((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_7)))) + (14432))/*2*/) 
    {
        for (unsigned char i_1 = ((((/* implicit */int) var_10)) - (83))/*0*/; i_1 < ((((/* implicit */int) arr_0 [i_0])) - (120))/*25*/; i_1 += ((((/* implicit */int) var_2)) - (249))/*1*/) 
        {
            {
                arr_5 [21] [(unsigned char)10] [i_1] = ((/* implicit */_Bool) min((7255234067740071162LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29027)) || (((/* implicit */_Bool) 1699716467)))))));
                var_15 *= (-(((/* implicit */int) ((-7255234067740071178LL) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((min((arr_4 [i_0]), (((/* implicit */long long int) (unsigned char)121)))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))), (arr_4 [i_0 + 2])));
            }
        } 
    } 
}
