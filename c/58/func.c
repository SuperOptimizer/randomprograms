/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2069769126
Invocation: ./yarpgen --std=c -o out/58
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
void test(signed char var_2, unsigned long long int var_4, short var_5, unsigned short var_6, unsigned int var_9, unsigned int var_12, unsigned char var_13, _Bool var_15, unsigned short var_16, unsigned short var_17, _Bool var_18, int zero, signed char arr_0 [11] , _Bool arr_2 [11] [11] [11] , _Bool arr_5 [11] [11] , unsigned long long int arr_6 [11] [11] [11] [11] , unsigned long long int arr_7 [11] [11] , short arr_10 [11] [11] [11] [11] , _Bool arr_11 [11] [11] [11] [11] [11] [11] , _Bool arr_12 [11] [11] [11] [11] [11] [11] ) {
    if (((/* implicit */_Bool) 4393751543808LL))
    {
        var_19 = ((/* implicit */unsigned char) ((_Bool) var_4));
        var_20 *= ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_18)) + (((/* implicit */int) (_Bool)0)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_16)) - (52090ULL))/*0*/; i_0 < 11ULL/*11*/; i_0 += 2ULL/*2*/) 
        {
            for (int i_1 = 0/*0*/; i_1 < 11/*11*/; i_1 += 4/*4*/) 
            {
                for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < ((((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (short)-19327)))))) - (19315ULL))/*11*/; i_2 += ((((/* implicit */unsigned long long int) var_2)) - (44ULL))/*2*/) 
                {
                    {
                        /* LoopNest 2 */
                        for (_Bool i_3 = (_Bool)0/*0*/; i_3 < (_Bool)1/*1*/; i_3 += ((/* implicit */int) ((/* implicit */_Bool) var_13))/*1*/) 
                        {
                            for (signed char i_4 = ((((/* implicit */int) ((/* implicit */signed char) var_17))) + (9))/*0*/; i_4 < (signed char)11/*11*/; i_4 += (signed char)3/*3*/) 
                            {
                                {
                                    var_21 = ((/* implicit */_Bool) arr_10 [(unsigned short)7] [(unsigned short)7] [i_2] [i_2]);
                                    if (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))
                                    {
                                        var_22 = ((/* implicit */_Bool) (unsigned short)112);
                                        if (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0])))
                                        {
                                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((arr_5 [i_0] [i_1]) ? (((/* implicit */int) ((_Bool) min((var_5), (((/* implicit */short) arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0])))))) : (((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) + (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))));
                                            arr_13 [i_3] [i_3] |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 2333502366U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_4]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                                        }

                                    }

                                }
                            } 
                        } 
                        arr_14 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [(unsigned char)9] [i_0] [i_0]);
                        var_24 ^= ((/* implicit */long long int) max((arr_7 [i_1] [i_2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)8)))))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */unsigned char) ((int) (unsigned char)199));
    }

    var_26 = ((/* implicit */unsigned char) ((var_15) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
}
