/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3652048311
Invocation: ./yarpgen --std=c -o out/107
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
void test(unsigned short var_1, unsigned short var_3, signed char var_4, long long int var_5, long long int var_7, unsigned long long int var_10, signed char var_12, unsigned long long int var_13, unsigned short var_14, unsigned long long int var_16, int zero, int arr_7 [11] [11] [11] ) {
    var_17 *= ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = ((((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) -2147483637)))), (((/* implicit */unsigned long long int) min((var_3), (var_3))))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) var_14)))) + (1))/*0*/; i_0 < 11/*11*/; i_0 += ((((/* implicit */int) var_16)) - (1311433003))/*3*/) 
    {
        for (short i_1 = (short)0/*0*/; i_1 < (short)11/*11*/; i_1 += (short)2/*2*/) 
        {
            {
                var_18 = ((/* implicit */signed char) (unsigned short)65534);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < ((((/* implicit */unsigned long long int) var_12)) - (18446744073709551577ULL))/*11*/; i_2 += ((var_13) - (8671984359714520828ULL))/*4*/) 
                {
                    var_19 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])) != (17634121426518825180ULL))) ? (max((17634121426518825180ULL), (((/* implicit */unsigned long long int) (unsigned short)65526)))) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_0])))));
                    var_20 = ((/* implicit */unsigned long long int) var_7);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((var_13) < (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (3544003589828135267ULL)))))));
}
