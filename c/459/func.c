/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 839844996
Invocation: ./yarpgen --std=c -o out/459
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
void test(_Bool var_0, long long int var_1, short var_2, unsigned long long int var_3, long long int var_4, short var_5, signed char var_6, unsigned int var_8, unsigned int var_10, short var_11, short var_12, int var_15, _Bool var_16, long long int var_17, int zero, long long int arr_13 [17] , _Bool arr_15 [17] [17] ) {
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 5604696122838365928ULL)) && (((/* implicit */_Bool) (unsigned char)224)))))))) && (((/* implicit */_Bool) var_11))));
    if (((/* implicit */_Bool) var_12))
    {
        var_19 = ((/* implicit */signed char) max((var_19), (var_6)));
        var_20 = ((/* implicit */unsigned short) var_6);
    }
    else
    {
        /* LoopNest 3 */
        for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_16))) + (1))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (68))/*12*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_11))) - (188))/*1*/) 
        {
            for (unsigned int i_1 = 1U/*1*/; i_1 < ((var_10) - (2848704296U))/*12*/; i_1 += 1U/*1*/) 
            {
                for (short i_2 = (short)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */short) 128LL))) - (114))/*14*/; i_2 += ((((/* implicit */int) ((/* implicit */short) max((((/* implicit */unsigned long long int) var_12)), (var_3))))) - (29217))/*3*/) 
                {
                    {
                        arr_8 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_9 [i_0] = ((/* implicit */_Bool) 3749920836U);
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */signed char) max((((((/* implicit */_Bool) 393646359)) ? (((/* implicit */long long int) (+(-1891459719)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_15)) : (-132LL))))), (((/* implicit */long long int) var_11))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_12))));
    }

    if (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 9311901657355600614ULL))))))))
    {
        var_23 = ((/* implicit */int) max((((/* implicit */long long int) (!((_Bool)0)))), (min((((/* implicit */long long int) var_5)), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : (var_17)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = ((((/* implicit */int) ((/* implicit */_Bool) var_15))) - (1))/*0*/; i_3 < (_Bool)1/*1*/; i_3 += (_Bool)1/*1*/) 
        {
            for (unsigned long long int i_4 = ((((/* implicit */unsigned long long int) ((_Bool) var_4))) - (1ULL))/*0*/; i_4 < ((((/* implicit */unsigned long long int) var_6)) - (18446744073709551541ULL))/*17*/; i_4 += ((((/* implicit */unsigned long long int) var_15)) - (18446744072440683919ULL))/*3*/) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((int) min((((/* implicit */int) (signed char)-13)), (((((/* implicit */_Bool) 678322911802408034ULL)) ? (-1714068504) : (((/* implicit */int) arr_15 [i_3] [i_4])))))));
                    arr_16 [i_3] = ((/* implicit */long long int) var_8);
                    arr_17 [i_3] [i_4] [i_4] = ((/* implicit */short) min((var_0), ((!(((/* implicit */_Bool) ((unsigned long long int) 12842047950871185677ULL)))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -132LL)) ? ((+(arr_13 [i_3]))) : (min((arr_13 [i_4]), (((/* implicit */long long int) (unsigned char)234))))));
                }
            } 
        } 
        var_25 = ((/* implicit */short) 4764853689320714322LL);
    }

}
