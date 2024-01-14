/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3289349830
Invocation: ./yarpgen --std=c -o out/394
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
void test(signed char var_0, _Bool var_1, signed char var_2, unsigned short var_3, _Bool var_4, unsigned int var_6, short var_7, unsigned char var_9, unsigned char var_10, unsigned int var_11, unsigned short var_12, unsigned char var_13, _Bool var_14, short var_16, _Bool var_17, int var_18, int zero, unsigned long long int arr_0 [24] , unsigned char arr_1 [24] , unsigned short arr_4 [24] [24] [24] [24] , _Bool arr_5 [24] [24] [24] , unsigned short arr_6 [24] [24] , unsigned char arr_8 [24] [24] [24] [24] [24] , short arr_11 [24] ) {
    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) % (((unsigned long long int) (short)11994)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2))))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 1073725440)) || (((/* implicit */_Bool) (short)-11994))));
    /* LoopNest 3 */
    for (signed char i_0 = ((((/* implicit */int) var_0)) + (121))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_18), (((/* implicit */int) min((var_14), (var_14))))))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_16)))), (((/* implicit */int) var_12))))) : (513817815U))))) - (87))/*23*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */int) (signed char)103)) >> (((((((/* implicit */_Bool) (short)-11977)) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)0)))) : (((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((((/* implicit */int) (short)16823)) - (16822))))))) - (13249))))))) + (3))/*3*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) (short)192)) ? (((/* implicit */int) ((short) max((arr_1 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) max((arr_0 [7ULL]), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11977))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))))))))) - (181))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) var_13))) - (127))/*24*/; i_1 += (short)4/*4*/) 
        {
            for (signed char i_2 = ((((/* implicit */int) ((/* implicit */signed char) max((((unsigned long long int) (signed char)23)), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (7689302079772984619ULL)))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)178))))))))))) - (20))/*3*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_14))) + (20))/*20*/; i_2 += ((((/* implicit */int) ((/* implicit */signed char) var_6))) - (43))/*1*/) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((min((arr_5 [i_2] [i_1] [i_1]), (var_14))) ? (8089877236769026722LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)163), (var_9)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) min((arr_6 [i_0] [i_2]), (((/* implicit */unsigned short) var_10))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = ((((/* implicit */int) ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_1])), (min((((/* implicit */unsigned short) (short)4094)), (var_3)))))))))) + (1))/*1*/; i_3 < (signed char)20/*20*/; i_3 += (signed char)3/*3*/) 
                    {
                        for (signed char i_4 = (signed char)3/*3*/; i_4 < (signed char)22/*22*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) arr_0 [(unsigned char)19]))) - (115))/*3*/) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */unsigned short) ((min((11822702514769033589ULL), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [(unsigned char)3])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_3 + 2])), (arr_4 [i_0] [i_0] [i_0 + 1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                                var_22 = ((/* implicit */unsigned short) (short)63);
                            }
                        } 
                    } 
                    var_23 |= (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [(signed char)0] [i_2 - 2])));
                }
            } 
        } 
    } 
}
