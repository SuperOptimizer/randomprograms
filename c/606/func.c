/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 312343595
Invocation: ./yarpgen --std=c -o out/606
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
void test(long long int var_2, long long int var_6, _Bool var_7, int var_10, unsigned short var_11, _Bool var_15, unsigned char var_16, short var_17, long long int var_18, int zero, _Bool arr_0 [22] , _Bool arr_1 [22] [22] , signed char arr_2 [22] ) {
    var_20 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) ((var_7) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (492581209243648LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2726))) / (var_18))), (((/* implicit */long long int) var_7))))))) - (492581209243648ULL))/*0*/; i_0 < ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -492581209243637LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))) << (((((/* implicit */int) min(((unsigned short)43142), (((/* implicit */unsigned short) var_17))))) - (35630)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))) - (8549596136278371458ULL))/*22*/; i_0 += 4ULL/*4*/) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((_Bool) max((arr_1 [i_0] [i_0]), (var_15))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_0 [i_0]) ? (((/* implicit */int) (unsigned short)43140)) : (((/* implicit */int) (unsigned short)43140)))) : (((((/* implicit */_Bool) (unsigned short)22393)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)22393)), (5284785766738509933LL))))));
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_10))));
}
