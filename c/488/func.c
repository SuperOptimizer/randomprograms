/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2359436419
Invocation: ./yarpgen --std=c -o out/488
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
void test(unsigned short var_0, unsigned int var_1, unsigned long long int var_2, short var_3, unsigned long long int var_5, short var_6, unsigned long long int var_9, unsigned int var_10, long long int var_11, unsigned short var_12, int var_13, unsigned int var_14, short var_15, int zero, unsigned char arr_0 [25] [25] , unsigned char arr_1 [25] , long long int arr_2 [25] , unsigned char arr_3 [25] , long long int arr_4 [25] [25] , unsigned int arr_7 [25] [25] [25] [25] ) {
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1644509566U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (unsigned short)23366)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_3)))))
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)198))))), (var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-118)), (-5818333573971894530LL))))))));
        var_17 = ((/* implicit */unsigned int) (~(((long long int) max((var_13), (((/* implicit */int) (unsigned short)30432)))))));
    }
    else
    {
        var_18 = ((/* implicit */unsigned short) var_11);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_5))));
        /* LoopNest 3 */
        for (int i_0 = 0/*0*/; i_0 < 25/*25*/; i_0 += 4/*4*/) 
        {
            for (unsigned short i_1 = ((((/* implicit */int) var_0)) - (9888))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((var_15), (((/* implicit */short) arr_0 [i_0] [(unsigned char)23]))))), (4294967291U)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : ((~(arr_2 [i_0])))))))))) - (65510))/*25*/; i_1 += ((((/* implicit */int) var_12)) - (52874))/*1*/) 
            {
                for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) - (102))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) arr_2 [i_0]))) + (58))/*25*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_12))) + (120))/*3*/) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_1] [(unsigned char)7] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1])))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)63))))))));
                        arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-18157)) < (((/* implicit */int) (unsigned char)118))));
                        if (((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-1274659324) : (var_13)))) + (arr_7 [i_0] [i_1] [i_2] [i_2]))))))
                        {
                            arr_10 [17U] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((unsigned long long int) min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32041)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)32041)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : ((~(var_14)))))) || (((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) - (arr_4 [i_0] [i_1])))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 801295296)) ? (((((/* implicit */_Bool) 3645742716U)) ? (arr_4 [(short)7] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32041))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((min((var_9), (((/* implicit */unsigned long long int) var_3)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8192)) / (((/* implicit */int) arr_0 [i_1] [i_1]))))))))))));
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(18446744073709551602ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) 5952309388741420795ULL))))))));
                        }

                    }
                } 
            } 
        } 
    }

    var_23 = ((/* implicit */unsigned long long int) var_10);
}
