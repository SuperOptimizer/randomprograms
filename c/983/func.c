/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1693563246
Invocation: ./yarpgen --std=c -o out/983
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
void test(int var_1, _Bool var_2, unsigned long long int var_5, long long int var_6, long long int var_7, unsigned short var_11, short var_12, int var_13, unsigned char var_14, _Bool var_15, signed char var_16, int var_18, unsigned char var_19, int zero, unsigned int arr_0 [11] ) {
    /* LoopSeq 1 */
    for (long long int i_0 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned char)217)), (var_13)))))) || (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (588438112910914217LL)))) == (var_5)))))) - (1LL))/*0*/; i_0 < ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) min(((_Bool)1), (var_15)))) << (((min((var_7), (((/* implicit */long long int) (_Bool)1)))) + (7001446990149533938LL))))) : ((((~(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (unsigned char)26))))))) - (65525LL))/*11*/; i_0 += ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)60))))) + (64LL))/*3*/) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0])))) ? (min(((~(((/* implicit */int) var_19)))), (min((var_1), (((/* implicit */int) var_14)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0LL/*0*/; i_1 < 11LL/*11*/; i_1 += 2LL/*2*/) 
        {
            var_21 = 15851825231620779075ULL;
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) var_12);
            var_22 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)43001)))));
        }
    }
    var_23 = ((/* implicit */unsigned int) var_14);
    if (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_6))));
        var_25 -= ((/* implicit */long long int) (_Bool)1);
    }

}
