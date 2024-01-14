/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1408699512
Invocation: ./yarpgen --std=c -o out/523
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
void test(int var_0, _Bool var_1, signed char var_4, unsigned char var_5, long long int var_6, unsigned char var_7, short var_8, unsigned char var_9, short var_10, int var_11, int zero, unsigned char arr_2 [12] [12] , _Bool arr_3 [12] [12] [12] , int arr_4 [12] , int arr_5 [12] [12] , _Bool arr_7 [12] , unsigned int arr_9 [12] [12] [12] [12] [12] [12] , short arr_10 [12] [12] [12] [12] [12] ) {
    /* LoopNest 3 */
    for (int i_0 = ((((/* implicit */int) var_5)) - (230))/*0*/; i_0 < ((((/* implicit */int) var_6)) + (1779932847))/*12*/; i_0 += 4/*4*/) 
    {
        for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_10))) - (79))/*4*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (141))/*11*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (140))/*4*/) 
        {
            for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (3))/*3*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_5))) + (36))/*10*/; i_2 += (signed char)2/*2*/) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((arr_3 [3] [(unsigned char)10] [(unsigned char)10]) ? ((-(((/* implicit */int) min(((short)3991), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) (unsigned char)92))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = (unsigned char)0/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_3 [i_2 - 2] [(signed char)10] [i_2 + 2])))))))) - (243))/*12*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned char) min((min((((long long int) -6018236293030743535LL)), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (~(var_11)))))))) - (13))/*4*/) 
                    {
                        for (unsigned char i_4 = ((((/* implicit */int) ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) : (arr_9 [i_0] [i_1] [(unsigned char)11] [i_2] [(unsigned char)1] [i_3])))) : (var_6)))))) + (4))/*4*/; i_4 < ((((/* implicit */int) var_5)) - (221))/*9*/; i_4 += ((((/* implicit */int) var_7)) - (131))/*2*/) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4 - 3] = ((/* implicit */unsigned char) arr_10 [i_2] [i_1] [(_Bool)1] [i_0] [i_4]);
                                var_12 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) << (((-9013357063922139180LL) + (9013357063922139197LL))))))), ((~(2838398849U)))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (arr_5 [i_1 - 2] [i_4 - 3])))) : (max((arr_9 [i_1 - 3] [(_Bool)1] [i_1 - 1] [i_1 - 3] [10LL] [(unsigned char)3]), (((/* implicit */unsigned int) var_5))))));
                                if (((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_9)))))
                                {
                                    arr_15 [0LL] [0LL] [(unsigned char)9] [(_Bool)1] [(unsigned char)9] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)26))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)14)))) : (((long long int) ((short) var_0)))));
                                    var_14 = ((/* implicit */long long int) min((var_14), (((((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_8)))) != (((/* implicit */int) var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_2 - 1] [i_1 - 4]))))) : (((long long int) var_9))))));
                                    arr_16 [i_0] [i_0] [i_1 - 3] [(signed char)7] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) min((min((arr_9 [i_0] [i_1] [5] [i_3] [i_4 - 4] [i_1]), (((/* implicit */unsigned int) arr_4 [i_0])))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                                }

                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) < (779162142U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (var_8)))) || (((/* implicit */_Bool) var_0)))))));
}
