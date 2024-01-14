/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 58049426
Invocation: ./yarpgen --std=c -o out/174
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
void test(unsigned int var_0, int var_2, signed char var_4, signed char var_5, short var_6, unsigned long long int var_7, unsigned short var_8, signed char var_9, int zero, _Bool arr_1 [22] , _Bool arr_3 [22] [22] , signed char arr_7 [22] [22] , unsigned long long int arr_12 [22] [22] [22] , short arr_14 [22] [22] [22] ) {
    /* LoopNest 2 */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) var_9))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) (+(18446744073709551615ULL))))/*1*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) arr_1 [i_0]))) - (1))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (71))/*22*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)180)) == (((/* implicit */int) (_Bool)1)))))) + (4))/*4*/) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = (signed char)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_2))) - (71))/*22*/; i_2 += ((((/* implicit */int) var_9)) - (95))/*4*/) 
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                    var_13 |= ((unsigned char) var_7);
                }
                arr_10 [i_0] |= ((/* implicit */short) arr_3 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_3 = ((((/* implicit */unsigned int) var_6)) - (20760U))/*0*/; i_3 < 22U/*22*/; i_3 += 4U/*4*/) 
                {
                    for (int i_4 = 2/*2*/; i_4 < 20/*20*/; i_4 += ((((/* implicit */int) var_4)) + (29))/*4*/) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((int) (short)32767)))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_4 + 2] [16] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [(unsigned short)0] [i_4 - 2])))) & (((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) (unsigned char)255))))))) - (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) min(((short)-32369), ((short)25951))))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) (short)19488)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) var_8))))))) & (var_0)));
}
