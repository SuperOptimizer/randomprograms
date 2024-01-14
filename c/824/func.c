/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 130926128
Invocation: ./yarpgen --std=c -o out/824
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
void test(long long int var_0, unsigned char var_1, short var_2, unsigned char var_3, unsigned int var_4, unsigned char var_5, signed char var_6, unsigned char var_8, signed char var_9, short var_10, unsigned int var_11, unsigned int var_12, unsigned int var_13, signed char var_14, unsigned short var_15, unsigned char var_16, unsigned short var_17, int zero, unsigned long long int arr_1 [13] , short arr_3 [13] , unsigned long long int arr_6 [13] , long long int arr_8 [13] [13] [13] , _Bool arr_10 [13] , int arr_16 [13] [13] [13] [13] [13] [13] , short arr_18 [13] [13] [13] [13] , short arr_19 [13] ) {
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (min((var_0), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) - (6917529027641081856ULL)));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7680)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U)))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (int i_0 = ((((/* implicit */int) var_1)) - (22))/*0*/; i_0 < ((((/* implicit */int) var_6)) - (90))/*13*/; i_0 += ((((/* implicit */int) var_10)) - (31586))/*2*/) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) var_2)), (var_13))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((1514081485U) >> (((4278163295U) - (4278163288U)))))), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = ((((/* implicit */int) var_1)) - (22))/*0*/; i_1 < ((((/* implicit */int) var_6)) - (90))/*13*/; i_1 += ((((/* implicit */int) var_10)) - (31586))/*2*/) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13)))) / ((-(var_11)))));
        if ((!(((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)67))))))
        {
            /* LoopNest 2 */
            for (_Bool i_2 = (_Bool)0/*0*/; i_2 < (_Bool)1/*1*/; i_2 += (_Bool)1/*1*/) 
            {
                for (long long int i_3 = 2LL/*2*/; i_3 < ((((/* implicit */long long int) var_15)) - (17977LL))/*9*/; i_3 += 4LL/*4*/) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = ((/* implicit */int) ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)36)) & (((/* implicit */int) (signed char)25)))))))/*0*/; i_4 < (unsigned short)13/*13*/; i_4 += (unsigned short)3/*3*/) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) (unsigned short)37344)) - (37327))))))));
                            var_23 += ((8539091761821209674LL) >> (19U));
                        }
                        for (unsigned char i_5 = ((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3 - 1] [i_3] [i_3] [i_3 + 1])))))/*0*/; i_5 < ((((/* implicit */int) ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)19))) >= (var_0))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-16487)))))))) - (171))/*13*/; i_5 += ((((/* implicit */int) var_3)) - (157))/*3*/) 
                        {
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_1] [i_2] [i_3 + 1] [i_3 + 1]))));
                            arr_20 [i_1] [i_2] [i_3] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))));
                        }
                        if (((/* implicit */_Bool) 16804000U))
                        {
                            if (((/* implicit */_Bool) -2882396736288841648LL))
                            {
                                arr_21 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_13))));
                                arr_22 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((short) arr_8 [i_2] [i_2] [i_3]));
                            }
                            else
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)13)) | (((/* implicit */int) var_16))));
                                arr_23 [10ULL] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147367931058503198ULL))));
                                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_19 [i_2])))));
                            }

                            arr_24 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) var_4)) ^ (11529215046068469746ULL)))));
                        }

                    }
                } 
            } 
            arr_25 [i_1] [i_1] = ((/* implicit */long long int) 16299376142651048417ULL);
        }

        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_8))));
        arr_26 [i_1] = ((/* implicit */int) (signed char)124);
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17))))));
    }
    var_29 = ((/* implicit */unsigned long long int) (-(((long long int) 3876872140U))));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (min((9LL), (((/* implicit */long long int) var_6))))))) ? (((((/* implicit */_Bool) min((2147367931058503211ULL), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (4278163293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) == (((((/* implicit */_Bool) -73721063)) ? (2147367931058503178ULL) : (((/* implicit */unsigned long long int) var_13)))))))))))));
}
