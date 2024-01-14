/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 730841732
Invocation: ./yarpgen --std=c -o out/765
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
void test(int var_0, signed char var_4, int var_5, unsigned int var_7, int var_8, int var_11, short var_16, short var_17, int zero, int arr_0 [12] , long long int arr_2 [12] , unsigned char arr_4 [12] [12] [12] , _Bool arr_5 [12] [12] , signed char arr_6 [12] [12] [12] [12] , _Bool arr_7 [12] [12] [12] [12] ) {
    var_19 = ((/* implicit */short) (((~(min((1703070458465958541ULL), (((/* implicit */unsigned long long int) -5485670274670865015LL)))))) - (((/* implicit */unsigned long long int) -4023258564971173921LL))));
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) max((((/* implicit */int) ((short) var_4))), (var_5))))) - (39))/*12*/; i_0 += (unsigned char)3/*3*/) 
    {
        for (unsigned long long int i_1 = ((max((((max((((/* implicit */unsigned long long int) 2989450438U)), (12760507094180772134ULL))) << (((max((((/* implicit */unsigned long long int) -1825938910)), (10109937150056046387ULL))) - (18446744071883612687ULL))))), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((int) arr_0 [2U]))))))) - (7836461237028257788ULL))/*4*/; i_1 < ((((/* implicit */unsigned long long int) var_17)) - (1808ULL))/*10*/; i_1 += 1ULL/*1*/) 
        {
            for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_11)) - (1723838829ULL))/*1*/; i_2 < ((((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 4] [i_1]))))))))), (((short) min((var_0), (arr_0 [i_0]))))))) - (18446744073709523415ULL))/*11*/; i_2 += 3ULL/*3*/) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_5 [i_2 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 2])))), (arr_0 [i_0])));
                    var_22 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2] [i_1 - 4] [i_2 + 1])))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) (+(min((max((var_7), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (-(var_11)));
}
