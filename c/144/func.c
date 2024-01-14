/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1984585242
Invocation: ./yarpgen --std=c -o out/144
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
void test(unsigned long long int var_3, unsigned short var_5, unsigned int var_12, unsigned long long int var_14, int zero, short arr_0 [22] , unsigned char arr_1 [22] [22] , unsigned char arr_2 [22] [22] , _Bool arr_3 [22] [22] [22] ) {
    /* LoopNest 2 */
    for (short i_0 = (short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_12))) + (10967))/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */short) ((2945174181506474834ULL) / (max((var_3), (((/* implicit */unsigned long long int) var_5)))))))) + (4))/*4*/) 
    {
        for (_Bool i_1 = ((/* implicit */int) ((/* implicit */_Bool) min((min((((unsigned char) -2244256170293930686LL)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-24)) || (((/* implicit */_Bool) 2372465553U))))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-26511)))))))))))/*0*/; i_1 < (_Bool)0/*0*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) (-((~(((/* implicit */int) max(((short)8191), (((/* implicit */short) (_Bool)0))))))))))/*1*/) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))));
                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])), (9867502146976269858ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))) < (max((((/* implicit */long long int) arr_0 [i_0])), (2244256170293930685LL))))))) : (min((min((-2244256170293930708LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (447483815U))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) max((arr_1 [i_1 + 1] [i_1]), (arr_1 [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-6814716381784084982LL)))))), ((~(7021383718104522979ULL)))));
}
