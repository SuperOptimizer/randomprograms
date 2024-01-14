/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4051710026
Invocation: ./yarpgen --std=c -o out/882
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
void test(int var_0, signed char var_1, unsigned char var_2, unsigned char var_3, unsigned char var_4, int var_5, long long int var_6, _Bool var_7, long long int var_8, short var_9, unsigned int var_10, signed char var_11, unsigned int var_12, signed char var_13, unsigned char var_14, long long int var_15, int var_16, unsigned int var_17, signed char var_18, int zero, unsigned char arr_0 [19] [19] , unsigned int arr_1 [19] , int arr_2 [19] , int arr_3 [19] , long long int arr_5 [19] [19] , unsigned int arr_6 [19] , unsigned long long int arr_7 [19] [19] [19] [19] , short arr_8 [19] [19] [19] [19] , int arr_9 [19] [19] [19] , signed char arr_11 [19] [19] , unsigned int arr_12 [19] [19] , signed char arr_14 [19] [19] [19] , short arr_15 [19] , signed char arr_16 [19] [19] [19] [19] [19] [19] , int arr_17 [19] [19] [19] , signed char arr_18 [19] [19] [19] [19] , unsigned long long int arr_19 [19] , unsigned char arr_23 [19] , unsigned char arr_24 [19] [19] [19] , unsigned int arr_27 [19] [19] [19] [19] , int arr_28 [19] [19] [19] [19] , long long int arr_29 [19] [19] [19] , signed char arr_31 [19] [19] [19] [19] [19] , unsigned long long int arr_35 [12] , unsigned char arr_39 [12] [12] , signed char arr_44 [12] [12] [12] [12] [12] [12] , int arr_47 [12] [12] [12] [12] , signed char arr_52 [12] , signed char arr_54 [12] [12] [12] [12] [12] [12] [12] ) {
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))), (var_3)));
    var_21 |= ((/* implicit */unsigned char) ((signed char) 8514311747239423090LL));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) var_12)) - (666461848ULL))/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_17)) - (3205557382ULL))/*19*/; i_0 += ((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */int) var_9)), (var_16)))))))) + (2ULL))/*2*/) 
    {
        var_22 = arr_3 [i_0];
        var_23 |= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        if (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_3 [i_0]))))))
        {
            arr_4 [i_0] = min((((((/* implicit */unsigned int) max((((/* implicit */int) var_18)), (arr_2 [(short)17])))) % (((unsigned int) -963105801)))), (((/* implicit */unsigned int) ((signed char) arr_2 [i_0]))));
            var_24 = ((/* implicit */unsigned char) min((max((((arr_1 [3U]) | (((/* implicit */unsigned int) arr_2 [i_0])))), (arr_1 [6]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (long long int i_1 = ((((/* implicit */long long int) var_0)) + (1665376800LL))/*0*/; i_1 < ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (arr_2 [i_0])))) && (((/* implicit */_Bool) ((var_7) ? (((int) var_17)) : (max((arr_3 [(signed char)1]), (arr_2 [i_0]))))))))) + (18LL))/*19*/; i_1 += ((((((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) > (min((963105803), (arr_2 [3U]))))) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) + (665170451LL))/*2*/) 
            {
                for (unsigned char i_2 = (unsigned char)3/*3*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_12))) - (134))/*18*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) arr_3 [i_1]))) - (47))/*3*/) 
                {
                    {
                        var_25 |= ((/* implicit */unsigned char) ((((((unsigned long long int) var_1)) & (((/* implicit */unsigned long long int) max((-1176037148), (963105799)))))) % (((/* implicit */unsigned long long int) arr_1 [6]))));
                        arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2 - 2] [i_2 - 2])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 2] [i_1]))))), (arr_9 [(signed char)4] [i_0] [i_2 - 2])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_3 = 1LL/*1*/; i_3 < 18LL/*18*/; i_3 += ((((/* implicit */long long int) var_9)) - (8546LL))/*1*/) 
            {
                arr_13 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_0)))) ? (arr_7 [(unsigned char)16] [9] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_3 - 1]) & (arr_1 [(signed char)10]))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_1 [i_3]))))), (arr_7 [i_0] [i_0] [(signed char)0] [i_0]))))));
                /* LoopNest 2 */
                for (long long int i_4 = 2LL/*2*/; i_4 < 18LL/*18*/; i_4 += ((((/* implicit */long long int) var_3)) - (3LL))/*1*/) 
                {
                    for (signed char i_5 = ((((/* implicit */int) var_11)) - (113))/*2*/; i_5 < (signed char)17/*17*/; i_5 += (signed char)4/*4*/) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((unsigned char) arr_1 [(unsigned char)11]));
                            if ((!(((/* implicit */_Bool) ((arr_3 [i_0]) % (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_4 - 1] [i_5])))))))))
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) max(((unsigned char)192), ((unsigned char)250)))) : (((/* implicit */int) ((signed char) var_15))))), (((arr_17 [i_3 - 1] [i_3 + 1] [i_3 + 1]) & (arr_17 [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
                                arr_21 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((arr_7 [i_3] [i_5 - 2] [i_5 - 1] [i_5 + 2]) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(signed char)10] [i_3 + 1] [i_4] [i_5])) % (750376452))))))), (min((((unsigned int) arr_0 [i_3] [i_5])), (((/* implicit */unsigned int) arr_9 [18U] [i_3 + 1] [15]))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-92))))) ^ (((long long int) arr_18 [(signed char)1] [i_5 - 1] [i_5 - 1] [i_3 + 1]))));
                                arr_22 [i_5] [i_4 + 1] [i_3 - 1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [i_0] [i_4 - 1] [i_0] [4U] [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_16 [i_0] [i_4 - 2] [i_4] [i_5] [i_3 + 1] [7])) : (((/* implicit */int) arr_16 [(unsigned char)8] [i_4 - 1] [i_4 - 1] [i_5] [i_3 - 1] [i_0])))), (((var_5) ^ (((/* implicit */int) arr_16 [i_0] [i_4 - 1] [i_4 - 1] [9] [i_3 + 1] [i_5]))))));
                            }

                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -963105801)) && (((/* implicit */_Bool) arr_6 [i_3 - 1]))));
                        }
                    } 
                } 
                var_29 += ((/* implicit */signed char) max((((unsigned long long int) arr_11 [i_3 - 1] [i_3 + 1])), (((/* implicit */unsigned long long int) ((unsigned char) arr_11 [(unsigned char)4] [i_3 + 1])))));
            }
        }
        else
        {
            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
            var_31 = ((/* implicit */unsigned int) min((max((((unsigned char) arr_17 [i_0] [i_0] [i_0])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0])) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) -1LL))) && (((/* implicit */_Bool) ((unsigned char) var_1))))))));
            var_32 += ((/* implicit */signed char) (-((+(arr_17 [i_0] [i_0] [(signed char)10])))));
            /* LoopNest 3 */
            for (long long int i_6 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) arr_14 [i_0] [(signed char)0] [i_0])), (arr_15 [i_0]))))) && ((!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]))))))))) + (2LL))/*2*/; i_6 < ((var_6) - (721492812293626694LL))/*16*/; i_6 += ((((/* implicit */long long int) (!(((/* implicit */_Bool) max(((~(arr_9 [i_0] [(unsigned char)5] [i_0]))), (((/* implicit */int) arr_15 [i_0])))))))) + (4LL))/*4*/) 
            {
                for (unsigned int i_7 = ((min((((unsigned int) max((((/* implicit */unsigned char) (signed char)-127)), (arr_0 [1U] [17U])))), (((/* implicit */unsigned int) arr_16 [(signed char)9] [(signed char)9] [i_0] [i_0] [i_6] [(signed char)0])))) - (173U))/*0*/; i_7 < ((var_17) - (3205557382U))/*19*/; i_7 += 1U/*1*/) 
                {
                    for (unsigned char i_8 = (unsigned char)0/*0*/; i_8 < (unsigned char)19/*19*/; i_8 += (unsigned char)3/*3*/) 
                    {
                        {
                            arr_32 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((572620442), (((/* implicit */int) (unsigned char)169))))) && (((/* implicit */_Bool) min((arr_19 [i_6]), (((/* implicit */unsigned long long int) arr_16 [i_0] [15LL] [i_6 - 2] [i_7] [i_8] [i_8]))))))) ? (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 6704494587075384203LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [1])) ? (((/* implicit */int) arr_31 [i_0] [i_0] [14] [i_7] [i_0])) : (1985712653)))) : (min((((/* implicit */long long int) arr_11 [i_0] [i_6])), (arr_5 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 2013755261U))) && (((/* implicit */_Bool) 8514311747239423090LL))))))));
                            arr_33 [i_8] [i_0] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */short) (~((~((~(((/* implicit */int) arr_18 [i_8] [i_7] [i_0] [i_0]))))))));
                        }
                    } 
                } 
            } 
        }

    }
    for (long long int i_9 = ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */long long int) var_17)), (4502193372673975626LL))))) - (4502193372673975626LL))/*0*/; i_9 < 12LL/*12*/; i_9 += 3LL/*3*/) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_9] [(unsigned char)0] [2U] [i_9])) ? (((/* implicit */int) var_2)) : (arr_2 [10U])))) % (var_15)))) && (((/* implicit */_Bool) arr_23 [i_9])))))) - (1))/*0*/; i_10 < ((((/* implicit */int) ((/* implicit */signed char) ((((_Bool) arr_19 [i_9])) && (max((((((/* implicit */_Bool) arr_9 [i_9] [(signed char)15] [i_9])) || (((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) (signed char)6)))))))))) + (11))/*12*/; i_10 += ((((/* implicit */int) ((/* implicit */signed char) var_17))) + (104))/*1*/) 
        {
            var_33 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_3 [i_9]) % (((/* implicit */int) arr_24 [i_9] [i_9] [i_9]))))) | (min((9007199254740991LL), (((/* implicit */long long int) var_5))))));
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) min((min((-963105813), (((((/* implicit */_Bool) 8007290926819999152LL)) ? (67108863) : (((/* implicit */int) (signed char)7)))))), (611691283)));
        }
        for (int i_11 = ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_18 [i_9] [i_9] [i_9] [i_9]))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_9])))))))) - (1))/*0*/; i_11 < ((var_5) - (1519246459))/*12*/; i_11 += ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) -963105801)), (arr_12 [i_9] [i_9]))))) + (3))/*4*/) 
        {
            var_34 = ((/* implicit */int) arr_11 [i_9] [i_9]);
            if (((/* implicit */_Bool) ((((/* implicit */_Bool) 1689838144U)) ? (((-5LL) % (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_9] [i_9] [i_9] [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_9] [i_9] [i_11] [i_11]), (((/* implicit */unsigned long long int) (_Bool)0))))) && (((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_11])))))))))
            {
                /* LoopSeq 1 */
                for (long long int i_12 = ((((/* implicit */long long int) var_13)) - (62LL))/*0*/; i_12 < 12LL/*12*/; i_12 += 3LL/*3*/) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 2ULL/*2*/; i_13 < ((((/* implicit */unsigned long long int) var_15)) - (345367628600726041ULL))/*9*/; i_13 += ((((/* implicit */unsigned long long int) var_3)) - (3ULL))/*1*/) 
                    {
                        arr_45 [i_9] [i_9] [i_11] [i_9] = max((((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) : (3263034004U)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_11] [i_12] [1ULL])) ? (((/* implicit */long long int) 2281212060U)) : (arr_5 [i_9] [i_9])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_29 [i_9] [i_9] [i_9])) & (arr_7 [i_9] [i_9] [i_13 - 2] [i_13]))))))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_9] [i_9] [i_12] [i_13 + 1] [i_9] [(unsigned char)6])) & (((/* implicit */int) arr_18 [i_9] [(signed char)12] [(signed char)15] [i_13]))));
                        var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) var_9))) & (((unsigned int) arr_6 [i_9]))))), ((-(1230344327449759413ULL)))));
                    }
                    for (int i_14 = ((((/* implicit */int) var_8)) + (1762017074))/*2*/; i_14 < ((((/* implicit */int) var_11)) - (106))/*9*/; i_14 += ((((int) (((!(((/* implicit */_Bool) -8616011112936276618LL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_9]))))))))) + (4))/*4*/) 
                    {
                        arr_48 [i_14 + 1] [i_9] [i_12] [i_9] [i_9] = ((/* implicit */int) (!(((((/* implicit */_Bool) min((arr_3 [i_14]), (((/* implicit */int) arr_39 [i_9] [i_14]))))) && ((!(((/* implicit */_Bool) -8514311747239423091LL))))))));
                        arr_49 [i_11] [i_9] = ((/* implicit */signed char) min((3871342742U), (((/* implicit */unsigned int) (signed char)43))));
                    }
                    arr_50 [i_9] [i_9] [(signed char)7] [i_9] = ((signed char) arr_44 [(signed char)7] [i_11] [(signed char)7] [i_12] [i_9] [i_11]);
                    /* LoopNest 2 */
                    for (long long int i_15 = 0LL/*0*/; i_15 < ((((/* implicit */long long int) var_11)) - (103LL))/*12*/; i_15 += ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_18 [i_9] [i_11] [i_12] [(signed char)12])), (arr_19 [i_9])))))) & (arr_5 [i_9] [i_11]))) - (68LL))/*4*/) 
                    {
                        for (long long int i_16 = 0LL/*0*/; i_16 < 12LL/*12*/; i_16 += ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_1 [i_12]))) - (((((/* implicit */_Bool) arr_47 [7LL] [i_12] [i_11] [i_9])) ? (arr_47 [i_11] [i_11] [i_11] [i_11]) : (arr_47 [i_15] [i_12] [8] [i_15])))))) + (1533872688LL))/*3*/) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) arr_28 [(unsigned char)2] [i_9] [i_9] [(unsigned char)2]);
                                var_38 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_11] [(_Bool)1])) % (((/* implicit */int) var_2))))) && (((((/* implicit */_Bool) ((signed char) arr_1 [i_15]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967295U)), (arr_35 [i_11]))))))));
                                arr_57 [i_9] [i_11] [i_12] [i_15] [(signed char)5] = ((/* implicit */signed char) -117050801);
                                var_39 = ((/* implicit */_Bool) (-(max((((-1238632895) - (-872019226))), (max((117050787), (((/* implicit */int) (signed char)-124))))))));
                            }
                        } 
                    } 
                    var_40 = min((((unsigned char) arr_14 [i_9] [i_11] [i_9])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_9] [i_11] [i_11] [i_9]))))));
                }
                var_41 = ((/* implicit */unsigned int) var_15);
            }
            else
            {
                arr_58 [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_54 [i_9] [i_9] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
                var_42 -= ((/* implicit */unsigned int) ((_Bool) max((2281212034U), (((/* implicit */unsigned int) 1315437853)))));
                var_43 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_5 [i_9] [i_9]))))));
            }

        }
        var_44 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_52 [i_9])) && (((((/* implicit */_Bool) 1224925180U)) && (((/* implicit */_Bool) 872019243))))))));
        arr_59 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_14)), (arr_12 [i_9] [i_9]))))) - (((/* implicit */int) ((signed char) ((var_12) / (var_12)))))));
        arr_60 [i_9] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) 3221225472U)) % (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551611ULL))))), (((/* implicit */unsigned long long int) var_8))));
    }
}
