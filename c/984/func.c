/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2849117771
Invocation: ./yarpgen --std=c -o out/984
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
void test(int var_0, short var_1, _Bool var_2, short var_3, short var_4, short var_5, unsigned int var_6, long long int var_7, long long int var_8, int var_9, int zero, long long int arr_1 [25] [25] , long long int arr_3 [25] [25] , int arr_6 [23] [23] , long long int arr_8 [23] [23] , signed char arr_9 [23] , short arr_10 [23] ) {
    var_10 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-4762331953592242508LL)))) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)12287)))) : (((/* implicit */int) var_2))))), (((((long long int) var_7)) & (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (var_0)))))))));
    if (((/* implicit */_Bool) var_7))
    {
        var_11 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
        /* LoopSeq 2 */
        for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_0))) - (1))/*0*/; i_0 < (_Bool)1/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) ((short) var_8)))/*1*/) /* same iter space */
        {
            var_12 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) | (((unsigned long long int) var_5))));
            arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */int) (signed char)-112)) < (((/* implicit */int) (short)-21245))))), ((short)-12927)));
        }
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_0))) - (1))/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) ((short) var_8)))/*1*/) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) 1036503675U)) / (arr_1 [i_1] [i_1]))));
            arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-13579))) / (var_7)));
        }
        var_14 = ((((/* implicit */int) ((_Bool) (short)-21367))) <= (((/* implicit */int) (short)2272)));
    }

    /* LoopNest 3 */
    for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) min((var_9), (((/* implicit */int) (!(((((/* implicit */_Bool) -8511979412218439387LL)) && (((/* implicit */_Bool) var_7))))))))))) - (116))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_7))) + (124))/*23*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_3))) - (24))/*1*/) 
    {
        for (short i_3 = ((((/* implicit */int) ((/* implicit */short) var_2))) + (2))/*3*/; i_3 < (short)22/*22*/; i_3 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) 3811650503U)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8796925352425300848LL)) ? (((/* implicit */long long int) 2502827335U)) : (var_8)))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 1385614847U)) : (18446744073709551609ULL))))) : (((/* implicit */unsigned long long int) (+(arr_6 [12LL] [12LL])))))))) + (12805))/*4*/) 
        {
            for (unsigned long long int i_4 = ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) - (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_3 [i_3] [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_2] [i_3]))))), (((/* implicit */long long int) ((((/* implicit */int) min((var_1), (((/* implicit */short) (_Bool)1))))) * (((/* implicit */int) ((_Bool) (_Bool)0))))))))) - (8442ULL))/*0*/; i_4 < ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) - (((var_8) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)0])))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-63))))) : (min((((/* implicit */long long int) -2147483640)), (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))) - (18446744073709551530ULL))/*23*/; i_4 += ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */int) (short)-21781)) <= (var_9)))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (arr_8 [i_2] [i_3])))) - (10846961638305837064ULL))/*4*/) 
            {
                {
                    var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) & (((/* implicit */int) ((var_9) < (((/* implicit */int) var_5)))))))), (((long long int) min((var_5), (((/* implicit */short) var_2)))))));
                    arr_13 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) var_7);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (2020144065069737836LL))))) ? (arr_6 [i_2] [i_2]) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                    arr_14 [i_4] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1200)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (max((arr_1 [i_2] [i_3]), (((/* implicit */long long int) var_6)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_0) : (var_9)));
    var_18 = ((/* implicit */short) ((unsigned char) var_0));
}
