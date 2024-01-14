/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2343436587
Invocation: ./yarpgen --std=c -o out/880
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
void test(unsigned long long int var_0, _Bool var_1, int var_2, unsigned int var_3, int var_4, _Bool var_6, _Bool var_7, unsigned char var_8, long long int var_9, unsigned char var_10, short var_11, unsigned short var_12, unsigned char var_13, int zero, unsigned short arr_0 [13] , unsigned char arr_1 [13] [13] , unsigned int arr_2 [13] , _Bool arr_3 [13] , short arr_5 [13] [13] [13] , unsigned long long int arr_6 [13] [13] [13] , signed char arr_8 [13] [13] [13] , unsigned char arr_9 [13] [13] , unsigned short arr_11 [13] [13] , long long int arr_12 [13] [13] [13] [13] , unsigned short arr_13 [13] , signed char arr_14 [13] [13] , _Bool arr_17 [13] [13] [13] [13] [13] , _Bool arr_25 [13] , int arr_35 [14] [14] [14] , signed char arr_36 [14] [14] [14] , short arr_37 [14] [14] [14] , unsigned long long int arr_39 [14] , int arr_41 [14] [14] [14] ) {
    if (var_7)
    {
        var_14 = ((/* implicit */int) var_13);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)29)) != (((/* implicit */int) (unsigned char)118)))))) ? (((/* implicit */int) var_13)) : ((-((-(((/* implicit */int) var_12))))))));
        if (((/* implicit */_Bool) var_12))
        {
            /* LoopNest 2 */
            for (_Bool i_0 = (_Bool)1/*1*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) var_3))/*1*/; i_0 += (_Bool)1/*1*/) 
            {
                for (int i_1 = 1/*1*/; i_1 < 12/*12*/; i_1 += 3/*3*/) 
                {
                    {
                        var_16 *= arr_1 [i_0] [i_0];
                        /* LoopNest 2 */
                        for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) var_8))) - (1))/*0*/; i_2 < (_Bool)1/*1*/; i_2 += (_Bool)1/*1*/) 
                        {
                            for (_Bool i_3 = ((((/* implicit */int) ((/* implicit */_Bool) var_12))) - (1))/*0*/; i_3 < (_Bool)1/*1*/; i_3 += (_Bool)1/*1*/) 
                            {
                                {
                                    var_17 = ((/* implicit */unsigned long long int) var_10);
                                    var_18 *= ((((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (5962019352654972880LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_0 [4ULL])))))));
                                }
                            } 
                        } 
                        /* LoopNest 3 */
                        for (unsigned long long int i_4 = (((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [(signed char)10] [(signed char)10]))))) : ((~(arr_6 [(unsigned char)7] [(unsigned short)6] [i_0 - 1]))))))) - (145ULL))/*3*/; i_4 < ((((((/* implicit */_Bool) min((arr_9 [i_0] [10LL]), (arr_9 [i_0 - 1] [(unsigned char)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)8] [4LL]))) : (((((/* implicit */_Bool) arr_6 [(unsigned char)4] [i_0 - 1] [i_1 - 1])) ? (arr_6 [i_0] [i_0 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)6]))))))) - (136ULL))/*11*/; i_4 += ((((/* implicit */unsigned long long int) var_1)) + (2ULL))/*2*/) 
                        {
                            for (int i_5 = 2/*2*/; i_5 < ((((/* implicit */int) var_11)) - (22964))/*12*/; i_5 += ((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_5 [(unsigned short)0] [i_0] [i_4 + 1]))) ? (max((((var_7) ? (arr_6 [i_4] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_4 + 2]))))), (((/* implicit */unsigned long long int) arr_0 [(signed char)5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1 + 1] [(unsigned char)3])))))) - (36162))/*4*/) 
                            {
                                for (unsigned char i_6 = (unsigned char)3/*3*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned char) var_12))) - (5))/*11*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_13 [i_1]))))) == (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) var_2)) : (-8798106898895425582LL)))))))))) + (3))/*3*/) 
                                {
                                    {
                                        arr_21 [i_0 - 1] [i_1] [(signed char)9] [i_5] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((unsigned char) min((arr_12 [i_1] [(_Bool)1] [i_5] [i_6]), (((/* implicit */long long int) var_6)))))), ((unsigned short)8192)));
                                        arr_22 [i_6 + 2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) max((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) arr_17 [i_5 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                                        arr_23 [i_0] [i_1] [(unsigned char)7] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)63337)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (unsigned char)255))));
                                    }
                                } 
                            } 
                        } 
                        /* LoopNest 2 */
                        for (signed char i_7 = (signed char)0/*0*/; i_7 < ((((/* implicit */int) ((/* implicit */signed char) ((unsigned char) arr_3 [i_1])))) + (13))/*13*/; i_7 += (signed char)2/*2*/) 
                        {
                            for (unsigned char i_8 = ((/* implicit */int) ((/* implicit */unsigned char) ((short) ((long long int) arr_3 [i_7]))))/*0*/; i_8 < ((((/* implicit */int) ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) 16252928))) ? (max((((/* implicit */int) arr_14 [i_0] [i_0])), (var_2))) : (var_4))) & (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) 16252928)) ^ (var_0))))))))) + (13))/*13*/; i_8 += ((((/* implicit */int) var_8)) - (171))/*2*/) 
                            {
                                {
                                    arr_29 [i_0] [11LL] [i_1] [i_1] [1LL] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_1 [(_Bool)1] [i_1 - 1])))) : (((/* implicit */int) (unsigned char)137))));
                                    arr_30 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (signed char)80))))) ? ((-(((/* implicit */int) arr_25 [i_0 - 1])))) : (((/* implicit */int) arr_25 [i_0 - 1]))));
                                    arr_31 [(short)9] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))));
                                    arr_32 [i_0] [9ULL] [i_7] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -5962019352654972887LL)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))))));
                                }
                            } 
                        } 
                    }
                } 
            } 
            var_19 = (-(((/* implicit */int) var_13)));
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_8)))) : (((/* implicit */int) var_7)))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-30)), ((unsigned char)226)))) ? (2110827903982096552LL) : (((/* implicit */long long int) 586242548)))) - (2110827903982096541LL)))));
            if (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))
            {
                /* LoopNest 3 */
                for (_Bool i_9 = (_Bool)0/*0*/; i_9 < ((((/* implicit */int) (((-(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_13))))))) >= (((((/* implicit */_Bool) (signed char)-44)) ? (409977364) : (1073741823)))))) + (1))/*1*/; i_9 += (_Bool)1/*1*/) 
                {
                    for (signed char i_10 = (signed char)1/*1*/; i_10 < ((((/* implicit */int) ((/* implicit */signed char) (-(((/* implicit */int) var_7)))))) + (12))/*12*/; i_10 += ((((/* implicit */int) ((/* implicit */signed char) (-(497155043))))) - (28))/*1*/) 
                    {
                        for (int i_11 = ((/* implicit */int) var_6)/*0*/; i_11 < ((((/* implicit */int) var_11)) - (22962))/*14*/; i_11 += ((((((((/* implicit */_Bool) arr_37 [i_10 + 1] [10ULL] [i_10 + 1])) ? (((/* implicit */int) arr_37 [i_10 + 1] [13LL] [i_10 + 2])) : (arr_35 [i_10 + 2] [i_10 + 2] [i_10 + 1]))) * (((/* implicit */int) max((arr_37 [i_10 - 1] [i_10 - 1] [i_10]), (arr_37 [i_10 + 2] [i_10 + 1] [i_10])))))) - (502477052))/*4*/) 
                        {
                            {
                                arr_42 [i_10 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15296571220056053390ULL)) ? (max((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)29)))), (((int) var_1)))) : (((/* implicit */int) (_Bool)0))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9] [(signed char)9] [i_11])) ? (((/* implicit */unsigned long long int) (+(arr_41 [i_9] [i_10] [i_9])))) : (arr_39 [i_10 - 1])))) || (((/* implicit */_Bool) ((unsigned int) (signed char)13)))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_13)))) + (((int) -998567060))))) ? ((-(((var_7) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) var_9))));
            }

            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        }

        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1739025231769164062LL)))) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_13))))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-30)) > (((/* implicit */int) var_11))))))));
    }

    var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), ((-(min((var_9), (((/* implicit */long long int) (signed char)-99))))))));
}
