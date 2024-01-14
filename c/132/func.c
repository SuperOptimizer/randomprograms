/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3808721161
Invocation: ./yarpgen --std=c -o out/132
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
void test(_Bool var_0, _Bool var_1, int var_2, unsigned int var_3, unsigned long long int var_4, unsigned int var_5, _Bool var_6, _Bool var_7, short var_8, unsigned int var_9, long long int var_10, _Bool var_11, short var_12, unsigned int var_14, signed char var_15, int zero, short arr_0 [10] , unsigned short arr_1 [10] , short arr_5 [10] [10] [10] [10] , _Bool arr_7 [10] ) {
    /* LoopNest 3 */
    for (short i_0 = (short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) ((_Bool) var_14)))) + (9))/*10*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_14))) + (3594))/*1*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) (_Bool)1)) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) (short)8184))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_14))/*1*/) 
        {
            for (_Bool i_2 = (_Bool)0/*0*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) ((((unsigned int) var_3)) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2198754820096LL)))))))))/*1*/; i_2 += ((((/* implicit */int) var_11)) + (1))/*1*/) 
            {
                {
                    var_16 ^= ((/* implicit */_Bool) ((unsigned long long int) var_1));
                    if (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58544)) ? (var_9) : (((/* implicit */unsigned int) (((((_Bool)0) || (((/* implicit */_Bool) -584623727)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) var_12))))))))
                    {
                        /* LoopSeq 3 */
                        for (long long int i_3 = ((((/* implicit */long long int) var_12)) + (24273LL))/*4*/; i_3 < 8LL/*8*/; i_3 += ((((/* implicit */long long int) var_7)) + (2LL))/*3*/) 
                        {
                            arr_9 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_6);
                            var_17 = ((/* implicit */unsigned short) min((max((var_5), (((unsigned int) 5031861014341229025LL)))), (((/* implicit */unsigned int) ((((unsigned long long int) (short)24576)) <= (((/* implicit */unsigned long long int) 3020537767U)))))));
                        }
                        for (unsigned short i_4 = ((((/* implicit */int) ((/* implicit */unsigned short) var_15))) - (65533))/*1*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned short) var_11))) + (6))/*6*/; i_4 += (unsigned short)2/*2*/) /* same iter space */
                        {
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)31744))) ? ((((_Bool)1) ? (768LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 3]))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)32766)) << (((/* implicit */int) (signed char)15)))))));
                            /* LoopSeq 1 */
                            for (int i_5 = ((((/* implicit */int) arr_0 [i_1])) + (32406))/*0*/; i_5 < ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 549755811840LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) : (((unsigned int) var_9))))) - (1262637620))/*10*/; i_5 += ((/* implicit */int) var_6)/*1*/) 
                            {
                                var_19 = ((/* implicit */_Bool) 3901514352U);
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_4))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_5 [i_4 + 2] [i_4 - 1] [i_4] [i_4]))));
                            }
                            var_22 = ((/* implicit */_Bool) 268427264LL);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = ((((/* implicit */int) ((/* implicit */unsigned short) var_15))) - (65533))/*1*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned short) var_11))) + (6))/*6*/; i_6 += (unsigned short)2/*2*/) /* same iter space */
                        {
                            var_23 = 2855289849U;
                            arr_19 [i_2] [i_1] [5U] [i_6 + 4] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)21))));
                            var_24 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_7 [i_0])))));
                        }
                        var_25 = var_3;
                    }

                    arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_8)))))));
                    var_26 = ((unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) (unsigned char)126);
    var_28 = var_10;
}
