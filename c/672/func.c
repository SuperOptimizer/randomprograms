/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 785233763
Invocation: ./yarpgen --std=c -o out/672
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
void test(short var_0, unsigned long long int var_1, unsigned int var_2, unsigned char var_3, unsigned int var_4, unsigned char var_6, unsigned int var_8, unsigned char var_9, unsigned char var_10, unsigned char var_11, unsigned int var_13, unsigned int var_14, unsigned int var_15, unsigned char var_16, unsigned int var_17, signed char var_18, short var_19, int zero, signed char arr_0 [12] , unsigned char arr_1 [12] [12] , unsigned short arr_3 [12] [12] , unsigned short arr_4 [12] , unsigned char arr_5 [12] , unsigned int arr_6 [12] , signed char arr_7 [12] , unsigned char arr_11 [12] [12] [12] [12] , short arr_12 [12] [12] , unsigned int arr_13 [12] [12] [12] , unsigned int arr_16 [12] [12] [12] [12] [12] [12] , short arr_17 [12] [12] [12] [12] [12] , unsigned int arr_18 [12] [12] [12] [12] [12] , unsigned int arr_19 [12] [12] [12] [12] [12] [12] , unsigned char arr_25 [12] [12] [12] , short arr_27 [12] [12] , signed char arr_28 [12] [12] [12] [12] [12] [12] , short arr_29 [12] [12] [12] [12] [12] [12] , unsigned char arr_31 [12] [12] [12] [12] [12] [12] , unsigned short arr_32 [12] [12] [12] [12] [12] [12] , unsigned int arr_33 [12] [12] , unsigned char arr_42 [12] , unsigned int arr_43 [12] , unsigned short arr_44 [12] [12] [12] [12] , unsigned int arr_45 [12] [12] [12] , unsigned long long int arr_48 [12] , unsigned int arr_49 [12] [12] [12] [12] , short arr_50 [12] [12] [12] [12] , signed char arr_52 [12] [12] [12] , unsigned int arr_58 [12] , signed char arr_60 [12] [12] [12] [12] [12] , short arr_73 [24] , short arr_74 [24] , unsigned int arr_75 [24] ) {
    var_20 = ((/* implicit */unsigned char) (~(var_15)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < (signed char)12/*12*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (31))/*1*/) /* same iter space */
    {
        var_21 *= ((((/* implicit */_Bool) arr_0 [i_0])) ? (3956478776U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)2] [(unsigned char)2]))));
        var_22 = ((/* implicit */unsigned int) arr_1 [i_0] [(unsigned char)5]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((var_14) | (338488519U))) : (3956478776U)));
        var_23 = (-(((338488513U) ^ (3310524224U))));
    }
    for (signed char i_1 = (signed char)0/*0*/; i_1 < (signed char)12/*12*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_9))) - (31))/*1*/) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) (((+(((/* implicit */int) (unsigned short)65525)))) <= (((/* implicit */int) (unsigned char)23))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [(short)0])) : (((/* implicit */int) arr_0 [(unsigned short)10]))))));
        var_25 &= ((/* implicit */short) arr_0 [i_1]);
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1]))))) : (var_14))))
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = (unsigned char)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_17))) - (217))/*12*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (66))/*3*/) 
            {
                if (((/* implicit */_Bool) ((unsigned int) ((2993251818U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)10])))))))
                {
                    arr_8 [i_1] [0U] [i_2] = min((((unsigned int) max((arr_3 [5U] [i_1]), (arr_3 [i_1] [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2] [i_1])) / (((/* implicit */int) arr_1 [i_1] [i_2]))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */short) arr_0 [i_1]);
                    var_26 = ((/* implicit */unsigned char) arr_7 [(signed char)11]);
                    var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_1 [i_1] [i_1])), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - (var_17)))))));
                }
                else
                {
                    if (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])))))
                    {
                        var_28 ^= var_3;
                        arr_10 [i_1] [(short)6] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) max((((/* implicit */short) arr_0 [i_1])), (var_0))))))), (338488513U)));
                    }

                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(8U)))) || (((/* implicit */_Bool) (signed char)75)))))));
                    if (((/* implicit */_Bool) max((min((((/* implicit */int) arr_1 [i_2] [i_2])), (((((/* implicit */int) (unsigned char)14)) / (((/* implicit */int) arr_4 [i_1])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) * (((((/* implicit */int) arr_4 [i_2])) * (((/* implicit */int) arr_7 [(unsigned char)9])))))))))
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_3 = ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (50))/*1*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (40))/*11*/; i_3 += (unsigned char)3/*3*/) 
                        {
                            arr_14 [11U] [i_2] [i_2] [5ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [9U] [i_3 - 1] [i_3]))))), (4294967295U)));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) (unsigned char)23))));
                            arr_15 [i_1] [(unsigned short)11] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_10)), (338488520U)));
                            /* LoopNest 2 */
                            for (unsigned char i_4 = (unsigned char)0/*0*/; i_4 < (unsigned char)12/*12*/; i_4 += ((((/* implicit */int) var_3)) - (181))/*3*/) 
                            {
                                for (unsigned int i_5 = 4U/*4*/; i_5 < 11U/*11*/; i_5 += ((((/* implicit */unsigned int) var_19)) - (4294943177U))/*3*/) 
                                {
                                    {
                                        arr_20 [i_5] [i_5 - 2] [i_2] [i_5] [i_5] = arr_19 [i_3] [(unsigned char)7] [i_3] [i_3 + 1] [i_3] [i_3];
                                        var_31 = min(((-(arr_6 [i_4]))), (min((((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-21273))))), ((~(var_15))))));
                                        if (((/* implicit */_Bool) ((short) 1567557743U)))
                                        {
                                            var_32 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_1])))), ((-(((/* implicit */int) (short)10073))))));
                                            var_33 ^= ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_1] [(unsigned char)0] [i_2] [i_1] [i_1]))))), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_9)))))));
                                        }

                                        var_34 = max((max((arr_13 [i_2] [i_2] [i_3]), (((/* implicit */unsigned int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2]))))));
                                    }
                                } 
                            } 
                        }
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [(short)5] [i_1])))))));
                    }
                    else
                    {
                        if (((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_5 [(short)2])), (340937144U)))))) || (((/* implicit */_Bool) (~(arr_18 [i_1] [10U] [i_1] [i_1] [i_2]))))))
                        {
                            var_36 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2])));
                            arr_21 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [(short)10])) != (((/* implicit */int) var_19)))))) != (((((/* implicit */_Bool) ((unsigned char) (short)32736))) ? (min((8126464U), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2])))))));
                        }
                        else
                        {
                            arr_22 [i_1] [i_1] [8U] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)19)) != (((/* implicit */int) arr_17 [i_1] [i_1] [(unsigned char)4] [(unsigned char)4] [i_2]))))), ((unsigned short)20749)));
                            /* LoopNest 3 */
                            for (unsigned char i_6 = ((((/* implicit */int) var_10)) - (185))/*0*/; i_6 < (unsigned char)12/*12*/; i_6 += (unsigned char)4/*4*/) 
                            {
                                for (signed char i_7 = ((((/* implicit */int) ((/* implicit */signed char) var_4))) + (63))/*2*/; i_7 < ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (58))/*11*/; i_7 += (signed char)4/*4*/) 
                                {
                                    for (unsigned long long int i_8 = ((((/* implicit */unsigned long long int) var_10)) - (183ULL))/*2*/; i_8 < 11ULL/*11*/; i_8 += 3ULL/*3*/) 
                                    {
                                        {
                                            var_37 = ((/* implicit */short) (((+(((/* implicit */int) arr_31 [i_8 - 2] [i_7 - 1] [i_6] [i_1] [(short)6] [i_8])))) / ((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_28 [11U] [i_2] [2U] [i_2] [i_2] [i_2])), (arr_1 [i_6] [i_8 - 1]))))))));
                                            var_38 = ((/* implicit */unsigned long long int) min((var_38), ((-(min((((/* implicit */unsigned long long int) arr_18 [(short)11] [i_7 - 1] [i_6] [i_7 - 1] [i_8 - 2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65505))) - (0ULL)))))))));
                                        }
                                    } 
                                } 
                            } 
                        }

                        if (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((unsigned long long int) 18446744073709551615ULL)) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-127))))))))), (arr_6 [i_2]))))
                        {
                            arr_34 [i_2] = min((((((arr_13 [i_2] [2U] [i_2]) >> (((((/* implicit */int) arr_3 [i_1] [(signed char)5])) - (29202))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1] [(unsigned short)4] [i_2])) / (((/* implicit */int) arr_27 [i_1] [i_2]))))));
                            arr_35 [6U] [i_2] = 18446744073709551589ULL;
                            arr_36 [(short)10] &= ((/* implicit */short) (-((+(((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [8ULL]))))));
                        }
                        else
                        {
                            arr_37 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_1] [i_1]))))), (((((/* implicit */_Bool) 4294967295U)) ? (2065607739U) : (1278445209U)))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_2])), (arr_11 [i_1] [i_2] [i_1] [(short)5])))) < (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2])) : ((~(((/* implicit */int) arr_27 [i_1] [i_2]))))))));
                            var_40 *= ((/* implicit */short) arr_33 [0U] [0U]);
                        }

                        arr_38 [0U] &= min((((unsigned int) arr_12 [i_1] [i_1])), (arr_33 [i_1] [i_2]));
                        arr_39 [i_1] [4U] [i_2] &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_33 [1ULL] [i_2])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))))), (((((/* implicit */_Bool) (unsigned char)13)) ? (max((var_2), (((/* implicit */unsigned int) (unsigned char)185)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) arr_31 [10U] [i_2] [i_2] [i_2] [(unsigned char)0] [10U])))))))));
                    }

                    arr_40 [i_1] [(unsigned char)3] [i_2] = ((/* implicit */unsigned short) var_16);
                }

                arr_41 [i_1] [i_2] = ((/* implicit */unsigned int) (signed char)51);
                /* LoopNest 2 */
                for (signed char i_9 = (signed char)1/*1*/; i_9 < (signed char)11/*11*/; i_9 += ((((/* implicit */int) ((/* implicit */signed char) var_19))) + (54))/*2*/) 
                {
                    for (unsigned char i_10 = (unsigned char)0/*0*/; i_10 < (unsigned char)12/*12*/; i_10 += (unsigned char)2/*2*/) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_25 [i_9 + 1] [i_2] [i_9])) | (((/* implicit */int) arr_25 [i_9 + 1] [i_2] [i_2])))) << (((/* implicit */int) ((13554206041774645748ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (max(((+((+(2870675895U))))), (((/* implicit */unsigned int) ((short) arr_16 [i_1] [i_2] [i_2] [(unsigned char)1] [i_9 + 1] [i_9 + 1])))))));
                            arr_46 [i_2] [i_1] [i_2] [i_1] [i_1] = arr_33 [i_1] [i_1];
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1])))))));
            }
            if (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_0 [i_1])), (1081817330U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)-1))))))))
            {
                /* LoopNest 3 */
                for (unsigned int i_11 = ((((/* implicit */unsigned int) var_10)) - (185U))/*0*/; i_11 < ((((/* implicit */unsigned int) var_9)) - (20U))/*12*/; i_11 += 1U/*1*/) 
                {
                    for (signed char i_12 = (signed char)0/*0*/; i_12 < ((((/* implicit */int) var_18)) - (17))/*12*/; i_12 += (signed char)2/*2*/) 
                    {
                        for (unsigned int i_13 = 4U/*4*/; i_13 < 11U/*11*/; i_13 += 1U/*1*/) 
                        {
                            {
                                arr_54 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_25 [i_1] [i_11] [i_12])))) | (((/* implicit */int) arr_25 [8U] [(signed char)1] [(short)10]))));
                                /* LoopSeq 2 */
                                for (unsigned char i_14 = (unsigned char)0/*0*/; i_14 < ((((/* implicit */int) var_3)) - (172))/*12*/; i_14 += (unsigned char)1/*1*/) 
                                {
                                    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? ((~(arr_18 [i_12] [i_11] [(short)8] [i_13] [i_13 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))))))));
                                    arr_57 [i_1] [i_11] [i_12] [i_13] [i_11] [i_14] [i_14] = ((unsigned short) min((var_11), (((/* implicit */unsigned char) (signed char)50))));
                                }
                                for (unsigned long long int i_15 = 0ULL/*0*/; i_15 < ((((/* implicit */unsigned long long int) var_11)) - (66ULL))/*12*/; i_15 += ((((/* implicit */unsigned long long int) var_13)) - (1306757942ULL))/*2*/) 
                                {
                                    arr_61 [i_1] [i_1] [i_12] [i_13] [(short)11] = ((/* implicit */unsigned char) (((-(2229359557U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_50 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13 - 2]))))));
                                    var_45 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_1] [i_1] [i_1] [i_12] [i_1])) ? (((/* implicit */int) arr_25 [i_11] [i_12] [i_12])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_12] [i_1] [(short)4] [i_1]))))) % (max((2097151U), (var_15)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_13]))) * (0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [4U] [i_11] [4U] [i_11] [(unsigned char)11] [(unsigned short)2]))) : (((((/* implicit */_Bool) arr_52 [i_11] [i_11] [i_15])) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))))))) : (((/* implicit */unsigned long long int) min((arr_49 [i_1] [7U] [i_12] [i_15]), (((/* implicit */unsigned int) arr_44 [8U] [(short)1] [i_12] [8U])))))));
                                }
                                var_46 = var_2;
                            }
                        } 
                    } 
                } 
                arr_62 [(unsigned short)7] |= ((/* implicit */unsigned int) ((29ULL) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16376)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [4U] [i_1] [i_1] [(short)10] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32239))))) : ((-(((/* implicit */int) (short)-11769))))))));
                var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) max((max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)64)) / (((/* implicit */int) (short)-19386))))), (((unsigned int) (short)-21490)))), (((/* implicit */unsigned int) arr_27 [i_1] [i_1])))))));
                var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) 0ULL))));
            }

        }
        else
        {
            arr_63 [i_1] = ((/* implicit */signed char) max((((unsigned int) 18ULL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)245))))))));
            var_49 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)3)) >= (((/* implicit */int) (unsigned char)68)))))));
            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_1] [i_1] [(unsigned char)10] [i_1])))))));
        }

        if (((/* implicit */_Bool) arr_19 [i_1] [6U] [i_1] [i_1] [i_1] [(unsigned char)6]))
        {
            var_51 = ((/* implicit */unsigned char) arr_4 [i_1]);
            arr_64 [i_1] |= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 26ULL)))));
        }
        else
        {
            var_52 = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_1] [i_1] [7U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-6229))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_1])) ? (arr_45 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) & (var_1)))));
            arr_65 [i_1] [i_1] = ((/* implicit */unsigned char) arr_33 [i_1] [i_1]);
            var_53 += ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_12 [i_1] [i_1])) / (((/* implicit */int) arr_12 [i_1] [i_1])))));
            arr_66 [i_1] &= ((/* implicit */short) ((unsigned short) arr_45 [i_1] [i_1] [i_1]));
            arr_67 [i_1] = ((/* implicit */signed char) arr_48 [i_1]);
        }

        /* LoopSeq 1 */
        for (signed char i_16 = ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (69))/*0*/; i_16 < (signed char)12/*12*/; i_16 += (signed char)4/*4*/) 
        {
            var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_1] [i_1] [i_16] [(unsigned char)11])), ((~(((/* implicit */int) arr_52 [i_1] [i_1] [i_1])))))))));
            arr_71 [i_1] = ((/* implicit */short) arr_28 [i_16] [i_16] [(short)4] [i_1] [0U] [0U]);
            var_55 = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (var_1)))) ? (((arr_58 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-21490))))) : ((-(var_17))))));
            if (((/* implicit */_Bool) (+(2341864468U))))
            {
                arr_72 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_1] [i_1] [(unsigned char)6]))))) >= ((-(min((((/* implicit */unsigned int) arr_42 [i_1])), (2065607739U)))))));
                var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) (unsigned char)137))));
            }

            var_57 = ((/* implicit */unsigned char) arr_45 [(unsigned char)1] [i_1] [(unsigned char)11]);
        }
    }
    for (signed char i_17 = (signed char)0/*0*/; i_17 < ((((/* implicit */int) ((/* implicit */signed char) var_3))) + (96))/*24*/; i_17 += (signed char)1/*1*/) 
    {
        var_58 -= ((/* implicit */unsigned char) var_13);
        var_59 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_74 [i_17])), ((~(((/* implicit */int) arr_74 [i_17]))))))), (arr_75 [i_17])));
        arr_76 [i_17] [i_17] = ((/* implicit */unsigned long long int) var_14);
        arr_77 [i_17] [i_17] = ((/* implicit */short) arr_75 [i_17]);
        if (((/* implicit */_Bool) arr_74 [i_17]))
        {
            var_60 = ((/* implicit */unsigned char) arr_75 [i_17]);
            arr_78 [i_17] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_73 [i_17]))));
        }

    }
}
