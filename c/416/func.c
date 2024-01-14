/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 593471265
Invocation: ./yarpgen --std=c -o out/416
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
void test(long long int var_0, unsigned long long int var_1, short var_2, unsigned char var_3, short var_4, long long int var_6, int var_7, long long int var_8, unsigned int var_9, int zero, unsigned char arr_2 [22] [22] , unsigned long long int arr_3 [22] [22] , short arr_4 [22] [22] , short arr_5 [22] [22] [22] ) {
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) (short)-20663)) + (2147483647))) << (((((/* implicit */int) (signed char)71)) - (71)))))), (((((/* implicit */_Bool) (unsigned char)6)) ? (5239508959435230422LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (var_6) : ((-(((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))))));
    var_11 = 3587465929U;
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_1))) - (61633))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) - (43389))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (signed char)51)) - (51)))))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (max((((/* implicit */long long int) 268435456U)), (var_0))))), (((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-59)))), (((/* implicit */int) (_Bool)1))))))))) - (6070))/*4*/) 
    {
        for (unsigned short i_1 = (unsigned short)1/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_4))) - (3058))/*19*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((int) 4026531838U)), (((/* implicit */int) ((short) var_4)))))) && (((/* implicit */_Bool) var_4)))))) + (2))/*3*/) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) ((unsigned short) var_3))) : ((-(var_7))));
                var_12 += ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) 1252413393U)) ? (((/* implicit */unsigned long long int) 4026531839U)) : (arr_3 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((short) arr_2 [i_1] [i_1])), (arr_5 [i_0] [i_0] [i_0]))))) : (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) -3901675603939965723LL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) ((unsigned int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_1) : (arr_3 [i_1 + 2] [(signed char)3]))), (((unsigned long long int) 3369473750U)))))) - (3369473750ULL))/*0*/; i_2 < ((((/* implicit */unsigned long long int) (_Bool)1)) + (21ULL))/*22*/; i_2 += ((2113529678249344110ULL) - (2113529678249344106ULL))/*4*/) 
                {
                    for (_Bool i_3 = (_Bool)0/*0*/; i_3 < ((/* implicit */int) ((/* implicit */_Bool) var_8))/*1*/; i_3 += ((/* implicit */int) ((/* implicit */_Bool) var_9))/*1*/) 
                    {
                        {
                            arr_14 [i_1] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) -3901675603939965723LL)));
                            var_13 += ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
