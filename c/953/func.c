/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3430706409
Invocation: ./yarpgen --std=c -o out/953
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
void test(_Bool var_1, signed char var_2, unsigned char var_3, unsigned char var_4, short var_5, unsigned short var_10, unsigned char var_11, unsigned char var_12, unsigned char var_13, long long int var_14, unsigned char var_15, unsigned char var_16, _Bool var_17, short var_18, short var_19, int zero, short arr_0 [22] [22] , unsigned char arr_1 [22] , unsigned char arr_2 [22] [22] , unsigned char arr_4 [22] , unsigned long long int arr_7 [22] [22] [22] [22] , long long int arr_13 [22] [22] [22] [22] , unsigned long long int arr_17 [22] [22] [22] [22] [22] [22] , long long int arr_18 [22] [22] [22] [22] [22] , _Bool arr_19 [22] [22] [22] [22] [22] ) {
    /* LoopNest 3 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */int) var_13)) % (((/* implicit */int) var_2))))))))) - (61))/*22*/; i_0 += (unsigned char)4/*4*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))) + (7))/*4*/; i_1 < (short)20/*20*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_12))) - (19))/*4*/) 
        {
            for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < 22ULL/*22*/; i_2 += 4ULL/*4*/) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)0)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)2246)) >> (((((/* implicit */int) (short)2244)) - (2215)))));
                    arr_11 [i_0] [i_1 - 2] [i_1 - 1] [i_2] = (+(((/* implicit */int) var_13)));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_17);
                    /* LoopSeq 2 */
                    for (short i_3 = ((((/* implicit */int) var_19)) - (31435))/*1*/; i_3 < (short)19/*19*/; i_3 += ((((/* implicit */int) ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned char) var_15))))))))) + (2))/*2*/) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_3 + 2] = var_15;
                        arr_16 [i_1] [i_1] [i_1 - 2] [(unsigned short)1] [i_1] [(unsigned short)10] = ((/* implicit */int) ((((((long long int) arr_13 [i_1] [i_1 - 4] [i_1 - 1] [i_1])) + (9223372036854775807LL))) >> (((min((((/* implicit */int) var_4)), ((-(((/* implicit */int) arr_0 [i_0] [i_0])))))) + (10684)))));
                    }
                    for (short i_4 = ((((/* implicit */int) var_19)) - (31435))/*1*/; i_4 < (short)19/*19*/; i_4 += ((((/* implicit */int) ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned char) var_15))))))))) + (2))/*2*/) /* same iter space */
                    {
                        arr_21 [10ULL] [(signed char)15] [i_2] [i_2] [i_2] [11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (arr_7 [i_0] [i_2] [i_4 + 1] [i_4 + 2])))) ? (((arr_18 [i_0] [i_0] [i_1 - 4] [(short)1] [(short)1]) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (arr_18 [(unsigned char)2] [i_1 - 3] [i_2] [i_2] [i_2]));
                        arr_22 [(short)18] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_4 - 1])) : (((arr_19 [i_2] [i_1] [i_4] [i_4] [i_4]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10))))))));
                        arr_23 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((arr_7 [i_2] [i_1 + 1] [0ULL] [i_4 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])))))), ((unsigned short)65535)));
                        arr_24 [i_0] [i_0] = ((((arr_17 [i_4 + 3] [10LL] [i_4] [i_4] [i_4 + 3] [i_4]) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (arr_7 [(unsigned char)12] [(unsigned char)12] [i_1 + 2] [i_0])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_20 = (+(((/* implicit */int) (unsigned char)36)));
}
