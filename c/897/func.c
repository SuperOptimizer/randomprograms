/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2655057748
Invocation: ./yarpgen --std=c -o out/897
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
void test(signed char var_0, long long int var_1, unsigned short var_2, unsigned char var_3, unsigned short var_4, unsigned short var_5, _Bool var_9, long long int var_12, int zero, short arr_0 [18] , _Bool arr_1 [18] [18] , short arr_2 [18] ) {
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))))) - (15ULL))/*0*/; i_0 < 18ULL/*18*/; i_0 += ((((/* implicit */unsigned long long int) var_1)) - (2062401763857585962ULL))/*1*/) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_0]))) : (var_12)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */short) ((signed char) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))))) - (15ULL))/*0*/; i_1 < 18ULL/*18*/; i_1 += ((((/* implicit */unsigned long long int) var_1)) - (2062401763857585962ULL))/*1*/) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1]))) ? (((/* implicit */int) arr_0 [i_1])) : (((arr_1 [i_1] [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2))))));
        var_16 |= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) var_0)), (arr_2 [i_1])))))));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned int) var_2)))));
}
