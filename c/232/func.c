/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3696614738
Invocation: ./yarpgen --std=c -o out/232
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
void test(unsigned short var_0, long long int var_1, long long int var_2, long long int var_3, unsigned int var_4, unsigned char var_5, long long int var_6, unsigned short var_7, long long int var_8, unsigned long long int var_9, unsigned long long int var_11, unsigned char var_12, int zero, unsigned int arr_1 [22] , unsigned char arr_3 [22] [22] [22] , long long int arr_7 [22] [22] [22] , unsigned short arr_9 [22] , unsigned char arr_11 [22] [22] [22] [22] , long long int arr_12 [22] [22] [22] [22] [22] , unsigned char arr_18 [22] [22] [22] , unsigned short arr_20 [22] [22] [22] [22] , unsigned char arr_21 [22] [22] [22] [22] [22] [22] , unsigned short arr_24 [22] [22] [22] [22] [22] [22] , signed char arr_25 [22] ) {
    var_13 = max((max((var_4), (((/* implicit */unsigned int) ((unsigned char) var_1))))), (((/* implicit */unsigned int) var_0)));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((int) min((var_4), (((/* implicit */unsigned int) var_0))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < 22ULL/*22*/; i_0 += ((((/* implicit */unsigned long long int) var_6)) - (14047511439348558360ULL))/*3*/) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = (signed char)1/*1*/; i_1 < (signed char)19/*19*/; i_1 += (signed char)3/*3*/) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [(signed char)16]) << (((arr_1 [i_0]) - (3969587838U)))))) || (((/* implicit */_Bool) arr_1 [i_1 + 3]))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6575765245314031131LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7495491727673198340LL)));
        }
        for (_Bool i_2 = (_Bool)0/*0*/; i_2 < ((/* implicit */int) ((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))/*1*/; i_2 += ((/* implicit */int) ((/* implicit */_Bool) (unsigned short)24954))/*1*/) 
        {
            /* LoopNest 2 */
            for (short i_3 = ((((/* implicit */int) ((/* implicit */short) var_8))) + (26424))/*4*/; i_3 < ((((/* implicit */int) ((/* implicit */short) var_9))) + (9467))/*21*/; i_3 += (short)4/*4*/) 
            {
                for (unsigned char i_4 = (unsigned char)2/*2*/; i_4 < (unsigned char)19/*19*/; i_4 += (unsigned char)1/*1*/) 
                {
                    {
                        var_15 |= ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_4 + 2] [i_4 + 3]))) : (arr_12 [i_4 - 2] [i_4 - 2] [i_4 + 3] [i_4 - 1] [i_4 + 1]));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_9))));
                        var_17 += ((/* implicit */signed char) arr_11 [i_0] [i_3] [i_0] [(unsigned short)20]);
                        arr_13 [i_0] = var_4;
                    }
                } 
            } 
            var_18 = ((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0/*0*/; i_5 < 22/*22*/; i_5 += ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [i_0])) ? (4395942967601423770ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)0]))))) + (1664981609))/*3*/) 
        {
            for (_Bool i_6 = (_Bool)0/*0*/; i_6 < ((/* implicit */int) ((/* implicit */_Bool) var_0))/*1*/; i_6 += (_Bool)1/*1*/) 
            {
                {
                    if (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) arr_1 [i_0])))))) ^ (var_6))))
                    {
                        var_19 += ((/* implicit */unsigned int) var_12);
                        /* LoopNest 2 */
                        for (unsigned int i_7 = ((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)146))))) + (3U))/*3*/; i_7 < ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) - (4294967277U))/*18*/; i_7 += ((((/* implicit */unsigned int) var_2)) - (1596506552U))/*1*/) 
                        {
                            for (_Bool i_8 = (_Bool)0/*0*/; i_8 < (_Bool)1/*1*/; i_8 += ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(unsigned char)15] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 1])) ? (((/* implicit */int) arr_21 [0U] [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_21 [i_7 + 4] [i_7 + 1] [i_7 + 1] [i_7 - 3] [i_7 - 2] [i_7])))))/*1*/) 
                            {
                                {
                                    if (((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)27312)))))))
                                    {
                                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) != ((+(((/* implicit */int) (unsigned char)119))))));
                                        arr_27 [i_0] [i_0] [i_0] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) 790998868U);
                                        arr_28 [0LL] |= ((var_2) > (((((/* implicit */_Bool) 12573631013296627370ULL)) ? (7495491727673198340LL) : (-7495491727673198319LL))));
                                    }

                                    arr_29 [i_0] [i_6] [i_7 - 2] [i_8] = ((/* implicit */unsigned int) (signed char)19);
                                }
                            } 
                        } 
                        var_21 = ((/* implicit */_Bool) (signed char)2);
                        arr_30 [i_0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_0] [i_0] [2LL] [i_0] [i_0] [i_0])) % (((/* implicit */int) var_5)))) ^ (((/* implicit */int) arr_3 [i_6] [i_5] [2U]))));
                    }

                    var_22 = ((/* implicit */unsigned short) ((long long int) arr_20 [i_0] [i_5] [i_6] [i_0]));
                    arr_31 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_6] [i_0] [i_0]))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [(unsigned short)12])) + (2147483647))) >> (((((/* implicit */int) arr_25 [(short)18])) + (85))))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) - (185))/*0*/; i_9 < ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) - (31))/*20*/; i_9 += ((((/* implicit */int) ((/* implicit */unsigned char) var_3))) - (2))/*4*/) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_12)))))))));
        var_25 = ((/* implicit */short) (_Bool)1);
    }
    var_26 = ((/* implicit */unsigned char) var_1);
}
