/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3634173186
Invocation: ./yarpgen --std=c -o out/80
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
void test(short var_0, long long int var_1, _Bool var_2, unsigned char var_3, signed char var_4, unsigned short var_5, int var_6, unsigned char var_7, unsigned short var_8, unsigned char var_9, unsigned long long int var_10, int zero, signed char arr_0 [10] , unsigned int arr_1 [10] , signed char arr_2 [10] [10] , unsigned char arr_3 [10] , short arr_4 [10] [10] [10] , unsigned long long int arr_5 [10] [10] [10] , unsigned char arr_7 [10] , unsigned int arr_8 [10] [10] [10] , unsigned short arr_9 [10] , unsigned long long int arr_12 [10] [10] [10] , unsigned char arr_14 [10] [10] [10] [10] , unsigned char arr_15 [10] [10] [10] [10] [10] , unsigned long long int arr_16 [10] [10] [10] [10] [10] [10] , unsigned short arr_17 [10] [10] [10] [10] [10] [10] , _Bool arr_18 [10] [10] [10] [10] [10] [10] , unsigned char arr_19 [10] [10] [10] , unsigned long long int arr_28 [10] [10] , short arr_38 [10] [10] [10] [10] [10] [10] [10] ) {
    var_11 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned char)152)), ((+(var_1))))), (((/* implicit */long long int) (unsigned char)29))));
    /* LoopNest 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_10))) - (57))/*0*/; i_0 < (unsigned char)10/*10*/; i_0 += (unsigned char)1/*1*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) (-((-(((/* implicit */int) var_8)))))))) - (16096))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_6))) - (18336))/*10*/; i_1 += (short)3/*3*/) 
        {
            {
                if (((/* implicit */_Bool) ((((/* implicit */long long int) (+(arr_1 [0LL])))) + (min((((/* implicit */long long int) arr_1 [4ULL])), (var_1))))))
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_2 = (unsigned short)0/*0*/; i_2 < (unsigned short)10/*10*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) + (4))/*4*/) 
                    {
                        var_12 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0]))));
                        arr_10 [i_2] [i_1] [i_2] |= ((/* implicit */short) (~(-1193396185952801158LL)));
                        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = (((~(arr_5 [(signed char)0] [i_1] [(signed char)0]))) - (853922902623770614ULL))/*0*/; i_3 < ((((unsigned long long int) var_4)) - (18446744073709551551ULL))/*10*/; i_3 += ((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_6))))))) + (4ULL))/*4*/) 
                    {
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [3ULL])))) >= (((/* implicit */int) (unsigned char)162))))), ((-((~(((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)3]))))))));
                        /* LoopNest 2 */
                        for (signed char i_4 = ((((/* implicit */int) ((/* implicit */signed char) var_6))) + (87))/*1*/; i_4 < (signed char)7/*7*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_12 [i_3] [6ULL] [i_3]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))))))) + (4))/*4*/) 
                        {
                            for (unsigned long long int i_5 = ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) max((var_9), (var_9))))))))) - (18446744073709551399ULL))/*0*/; i_5 < ((((/* implicit */unsigned long long int) var_3)) + (3ULL))/*10*/; i_5 += ((((/* implicit */unsigned long long int) (((+(min((((/* implicit */unsigned int) var_3)), (arr_1 [i_3]))))) / (((/* implicit */unsigned int) var_6))))) + (1ULL))/*1*/) 
                            {
                                {
                                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(arr_5 [(unsigned char)8] [i_1] [i_3]))), (((/* implicit */unsigned long long int) ((_Bool) var_9)))))) ? (((/* implicit */int) ((((/* implicit */int) ((-1825774394410601778LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >= ((+(8388576)))))) : (((/* implicit */int) var_0)))))));
                                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(min((arr_1 [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_3))))))))))));
                                    arr_20 [i_5] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)5)), (8388579)))) + (arr_5 [6ULL] [i_1] [i_0])));
                                    if (((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [(unsigned short)0])))) ? ((~(((/* implicit */int) var_3)))) : ((~(-824985611))))) * (((/* implicit */int) ((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (signed char)-5)))))))))))
                                    {
                                        if (((/* implicit */_Bool) (+((+(((var_1) + (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_3] [i_4] [i_5]))))))))))
                                        {
                                            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_1 [i_0]))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(_Bool)1] [i_4] [i_5] [4])) && (var_2)))))))));
                                            if (((/* implicit */_Bool) (+(arr_16 [i_0] [i_1] [i_3] [i_4] [2] [i_3]))))
                                            {
                                                var_17 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) -3179320725361403799LL))), (((((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_0])) ? (((/* implicit */int) arr_18 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0])) : (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_5] [1]))))));
                                                var_18 = ((/* implicit */_Bool) (~((-(min((604648365), (((/* implicit */int) (unsigned char)42))))))));
                                                if (((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_3] [i_3] [i_0]))
                                                {
                                                    arr_21 [i_0] [i_1] [i_3] [1LL] [(signed char)7] [i_4] [(unsigned char)9] = ((/* implicit */unsigned long long int) min((min(((-(var_6))), (((/* implicit */int) ((unsigned short) var_3))))), (max((((/* implicit */int) min((arr_4 [i_0] [i_4] [i_0]), (((/* implicit */short) var_7))))), (max((604648365), (((/* implicit */int) (short)16109))))))));
                                                    var_19 = ((/* implicit */unsigned long long int) (((((~(arr_5 [i_0] [i_3] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                                }

                                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (signed char)14))));
                                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_1))), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(max((arr_18 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] [3]), ((_Bool)0))))))) : (var_1)));
                                            }
                                            else
                                            {
                                                arr_22 [i_0] [(unsigned char)5] [i_0] = var_8;
                                                if (((/* implicit */_Bool) arr_9 [i_4 + 2]))
                                                {
                                                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_14 [i_4] [i_4 - 1] [i_4 + 1] [i_4]), (arr_14 [i_4] [i_4 - 1] [i_4 + 1] [i_4]))))));
                                                    arr_23 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [1ULL] [i_1] [(short)7] [i_3] [i_4] [i_5]))));
                                                    arr_24 [i_0] [i_5] [i_3] [i_0] [i_5] [i_5] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */int) arr_17 [(unsigned char)6] [i_0] [i_3] [i_4] [i_4 + 1] [9ULL])) * (((/* implicit */int) arr_17 [i_1] [i_4] [i_4] [i_4] [i_4 + 1] [(signed char)7]))))));
                                                }

                                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_8 [i_4] [i_4 + 1] [i_0])))) ? (arr_8 [i_4] [i_4 - 1] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_4 + 1] [i_1] [(signed char)0] [i_4] [i_5] [i_1])))))));
                                            }

                                        }

                                        var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) -8388565)), (max((var_10), (((/* implicit */unsigned long long int) var_1))))))));
                                        arr_25 [i_0] [i_3] [i_4] [(unsigned short)1] = ((/* implicit */unsigned short) (!((((((_Bool)1) ? (arr_16 [i_0] [i_1] [i_1] [i_0] [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_7), ((unsigned char)0)))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0])))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((-2335973283927341597LL), (((/* implicit */long long int) var_8))))))))));
                                    }

                                }
                            } 
                        } 
                        if (((/* implicit */_Bool) min((var_4), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-28378), (((/* implicit */short) arr_3 [i_3])))))) <= (((var_10) & (((/* implicit */unsigned long long int) var_6))))))))))
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_5)) : (min((((((/* implicit */_Bool) (short)19184)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [5LL] [i_3])))), (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_4)))))))));
                            arr_26 [2ULL] [i_3] [i_3] [(unsigned short)8] |= ((/* implicit */long long int) ((signed char) max((arr_18 [8] [i_0] [i_1] [i_1] [i_3] [(short)5]), (arr_18 [i_0] [i_0] [i_1] [i_1] [9] [i_3]))));
                        }

                        var_27 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_3]))))));
                        arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((unsigned int) 15984758774639516274ULL))) : (var_1)))) >= ((~((~(arr_5 [i_0] [(unsigned short)0] [i_0])))))));
                    }
                    for (unsigned char i_6 = (unsigned char)1/*1*/; i_6 < ((((/* implicit */int) var_7)) - (188))/*8*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_1 [(unsigned char)0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))))) - (200))/*1*/) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_7 [(unsigned char)4]))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((max((((/* implicit */long long int) arr_3 [(short)0])), ((+(var_1))))) * (max((((/* implicit */long long int) ((var_2) ? (var_6) : (((/* implicit */int) arr_17 [i_0] [i_0] [(short)8] [i_6] [i_6] [(_Bool)0]))))), (min((((/* implicit */long long int) var_6)), (var_1))))))))));
                        arr_31 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) ((short) var_1));
                    }
                    for (_Bool i_7 = ((((/* implicit */int) ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_15 [i_1] [6] [i_1] [6] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [(unsigned char)8] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_17 [(signed char)1] [(signed char)9] [i_1] [i_1] [(_Bool)1] [9ULL])))))))) - (1))/*0*/; i_7 < ((((/* implicit */int) ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_9 [i_0])))))))) + (1))/*1*/; i_7 += (_Bool)1/*1*/) 
                    {
                        var_30 = var_8;
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(max((min((-627909235), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)130)))))))));
                        if (((/* implicit */_Bool) (unsigned short)54270))
                        {
                            var_32 = ((/* implicit */signed char) var_0);
                            /* LoopNest 2 */
                            for (short i_8 = ((/* implicit */int) ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) -627909235))))))/*0*/; i_8 < ((((/* implicit */int) ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) -2335973283927341597LL)), (arr_28 [(short)8] [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)4]))))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_17 [i_0] [i_0] [i_7] [i_1] [i_7] [i_7])), ((~(((/* implicit */int) var_9))))))))))) + (210))/*10*/; i_8 += (short)4/*4*/) 
                            {
                                for (unsigned char i_9 = ((/* implicit */int) ((/* implicit */unsigned char) var_2))/*0*/; i_9 < (unsigned char)10/*10*/; i_9 += (unsigned char)3/*3*/) 
                                {
                                    {
                                        var_33 |= var_7;
                                        var_34 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)47));
                                    }
                                } 
                            } 
                        }

                        arr_39 [i_0] = ((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_2 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                    }
                }

                var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) << (((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0] [i_0] [i_0])) - (5454)))))) ? (min((max((((/* implicit */unsigned long long int) var_9)), (var_10))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned char) (_Bool)1))))))));
            }
        } 
    } 
}
