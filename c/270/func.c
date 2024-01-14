/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1406321208
Invocation: ./yarpgen --std=c -o out/270
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
void test(signed char var_0, _Bool var_3, unsigned int var_6, signed char var_7, long long int var_8, _Bool var_10, long long int var_14, signed char var_15, unsigned int var_18, int zero, signed char arr_1 [12] , long long int arr_2 [12] [12] [12] , long long int arr_3 [12] [12] , _Bool arr_4 [12] [12] , unsigned int arr_5 [12] [12] , _Bool arr_11 [12] [12] [12] ) {
    var_19 = ((/* implicit */signed char) (~(var_14)));
    /* LoopNest 3 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_8))))) == (((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (-8672048156913637343LL)))))))))) + (3U))/*3*/; i_0 < ((((/* implicit */unsigned int) (~(var_8)))) - (1602557509U))/*10*/; i_0 += ((((/* implicit */unsigned int) var_7)) - (4294967166U))/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) ((2284285196U) & (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0 + 1]))))))))) - (8))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_14)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1663929721U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)4])) || ((_Bool)1))))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))))) + (12))/*12*/; i_1 += (signed char)3/*3*/) 
        {
            for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) | (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-8672048156913637343LL)))) ? (((1663929747U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (var_6))))))) + (14))/*0*/; i_2 < ((((/* implicit */int) var_0)) + (24))/*12*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) (((~(arr_3 [i_0 - 3] [i_0 + 1]))) <= (((/* implicit */long long int) (~(var_18)))))))) + (1))/*1*/) 
            {
                {
                    if (((/* implicit */_Bool) 2631037575U))
                    {
                        arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), ((~(arr_5 [i_0 - 2] [i_0])))));
                        arr_7 [i_0] [i_0] [4LL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)59)), (((((/* implicit */long long int) 2250262150U)) ^ (arr_3 [i_0 - 2] [i_0 - 3])))));
                        arr_8 [i_0] [i_0] [i_1] [i_2] = ((long long int) ((((/* implicit */_Bool) (signed char)-98)) ? ((~(-2091921913722434884LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) - (0U))))));
                    }

                    var_20 = ((/* implicit */unsigned int) (-(8672048156913637336LL)));
                    if (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((signed char) 8672048156913637342LL))) ? (((1663929725U) - (arr_5 [i_0 + 1] [(_Bool)1]))) : (182373916U))))))
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_0] = (~((~(arr_3 [i_0 - 1] [i_0 + 2]))));
                        arr_10 [i_0] [i_2] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [i_0 - 2] [i_0]))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((_Bool)1) ? (((4206513888U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))))) : (max((((var_18) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))))), (((/* implicit */unsigned int) ((_Bool) arr_2 [i_0] [i_1] [(_Bool)1]))))))))));
                        /* LoopNest 2 */
                        for (signed char i_3 = (signed char)1/*1*/; i_3 < ((((/* implicit */int) ((/* implicit */signed char) (+(max((((/* implicit */int) arr_1 [i_0 - 3])), (((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))))))))) - (78))/*10*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) max((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_6))) | ((~(2878159241U))))), (((/* implicit */unsigned int) arr_1 [i_2])))))) - (115))/*3*/) 
                        {
                            for (_Bool i_4 = (_Bool)0/*0*/; i_4 < ((/* implicit */int) ((/* implicit */_Bool) var_15))/*1*/; i_4 += ((/* implicit */int) ((/* implicit */_Bool) (~((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_1]))))))))/*1*/) 
                            {
                                {
                                    arr_18 [i_0] [i_1] [8U] [(_Bool)1] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) * (max((var_14), (((/* implicit */long long int) 1663929717U))))))));
                                    var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 3033991098U)))))) ? (((arr_2 [i_0] [i_1] [i_0]) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [10U] [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_1] [i_0])) : (((/* implicit */int) (signed char)-98))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) var_7)))) == (((/* implicit */int) arr_4 [i_0 - 3] [i_0])))))));
                                }
                            } 
                        } 
                    }

                }
            } 
        } 
    } 
}
