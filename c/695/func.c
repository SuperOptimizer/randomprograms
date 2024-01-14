/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 791638125
Invocation: ./yarpgen --std=c -o out/695
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
void test(unsigned short var_0, unsigned char var_1, short var_2, short var_4, signed char var_5, unsigned char var_6, unsigned int var_7, long long int var_8, int var_9, int zero, unsigned short arr_0 [18] , short arr_1 [18] , short arr_2 [18] , int arr_5 [18] [18] , unsigned char arr_6 [18] [18] [18] , signed char arr_7 [18] [18] [18] , unsigned int arr_10 [18] [18] [18] , int arr_13 [24] , _Bool arr_15 [24] [24] [24] ) {
    var_10 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((((/* implicit */int) var_5)) + (2147483647))) << ((((((-(((/* implicit */int) var_2)))) + (6666))) - (3)))))));
    var_11 = ((/* implicit */short) min((var_11), (var_2)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_0)) - (32995U))/*0*/; i_0 < ((((/* implicit */unsigned int) var_6)) - (158U))/*18*/; i_0 += ((((/* implicit */unsigned int) var_1)) - (57U))/*4*/) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 1943538069))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2511))) & (max((((/* implicit */unsigned int) arr_1 [i_0])), (653591592U)))))));
        var_12 = ((/* implicit */_Bool) (unsigned char)212);
        /* LoopSeq 2 */
        for (short i_1 = (short)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_1))) - (43))/*18*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_9))) - (12060))/*4*/) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)480)) ? (7941956021783137577LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204)))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) arr_5 [i_0] [i_1])) : (3879625934780440640LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max((-7941956021783137602LL), (((/* implicit */long long int) (unsigned short)26161))))) ? (min((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1])), (var_8))) : (min((var_8), (((/* implicit */long long int) arr_2 [i_0])))))), (((/* implicit */long long int) arr_5 [i_0] [i_0])))))));
        }
        for (unsigned char i_2 = ((((/* implicit */int) var_6)) - (176))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (120))/*18*/; i_2 += (unsigned char)4/*4*/) 
        {
            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7941956021783137584LL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-120)) : (var_9))) : (((((/* implicit */_Bool) arr_7 [12LL] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) (short)-11313))))))));
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_2]))));
            arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) (signed char)-7))))) * (((((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (3U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))));
        }
    }
    /* LoopNest 3 */
    for (short i_3 = ((((/* implicit */int) ((/* implicit */short) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))) + (12670))/*0*/; i_3 < (short)24/*24*/; i_3 += ((((/* implicit */int) ((/* implicit */short) var_5))) + (120))/*2*/) 
    {
        for (short i_4 = (short)0/*0*/; i_4 < (short)24/*24*/; i_4 += ((((/* implicit */int) ((/* implicit */short) var_0))) + (32542))/*1*/) 
        {
            for (unsigned int i_5 = ((/* implicit */unsigned int) min((((/* implicit */int) ((arr_15 [i_3] [i_4] [(unsigned char)20]) && (arr_15 [i_4] [i_4] [i_3])))), (((((/* implicit */int) arr_15 [(signed char)18] [i_3] [i_4])) >> (((var_7) - (1595526844U)))))))/*0*/; i_5 < ((((/* implicit */unsigned int) var_5)) - (4294967154U))/*24*/; i_5 += ((((/* implicit */unsigned int) var_4)) - (7950U))/*3*/) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5])) ? ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) + (7941956021783137566LL))))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (13ULL) : (((/* implicit */unsigned long long int) -1182577360569878539LL))))))))));
                    var_17 = (unsigned char)45;
                }
            } 
        } 
    } 
}
