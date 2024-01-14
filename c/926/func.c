/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4022587234
Invocation: ./yarpgen --std=c -o out/926
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
void test(unsigned int var_0, unsigned int var_1, unsigned int var_3, int var_4, unsigned short var_5, unsigned int var_6, unsigned char var_7, unsigned short var_8, int zero, unsigned int arr_2 [11] [11] , unsigned short arr_8 [11] [11] [11] [11] ) {
    var_10 = ((/* implicit */unsigned short) 562949416550400ULL);
    var_11 = ((/* implicit */unsigned int) max((18361660435667898498ULL), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (38278))/*2*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_4))) - (35497))/*9*/; i_0 += (unsigned short)3/*3*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) var_5)) - (40108))/*2*/; i_1 < ((((/* implicit */int) var_8)) - (15933))/*7*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) - (12057))/*3*/) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)64744)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (arr_2 [i_0 - 2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (var_1)));
                var_13 = max(((~(((/* implicit */int) (unsigned short)0)))), (((((/* implicit */int) ((unsigned short) (unsigned short)34135))) & (((/* implicit */int) (unsigned short)792)))));
                arr_6 [i_0] [i_1 + 2] [i_1] = ((/* implicit */int) var_3);
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((((/* implicit */int) (unsigned short)31392)) ^ (((/* implicit */int) (unsigned short)31392)))) : (((((/* implicit */int) (unsigned short)789)) & (((/* implicit */int) (unsigned char)9))))))) ? (((/* implicit */unsigned int) max((2047), (((/* implicit */int) (unsigned short)5071))))) : (((((/* implicit */unsigned int) 0)) | (max((((/* implicit */unsigned int) (unsigned short)252)), (501522113U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_6)) - (1003826972ULL))/*0*/; i_2 < 11ULL/*11*/; i_2 += 3ULL/*3*/) 
                {
                    for (unsigned short i_3 = ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)245)), ((unsigned short)59548)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))))) - (59548))/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned short) ((unsigned int) (unsigned short)49329)))) - (49318))/*11*/; i_3 += ((((/* implicit */int) var_8)) - (15937))/*3*/) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)34)) <= (-2047))))) - (((((/* implicit */_Bool) (unsigned char)5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28834)))))));
                            arr_11 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)42120)) ? (2996900421U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))))) : (max((((/* implicit */unsigned int) (unsigned char)25)), (var_3))))), (var_6)));
                            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)49323), (((/* implicit */unsigned short) (unsigned char)233))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (12776038286390115786ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
