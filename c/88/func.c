/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 466369289
Invocation: ./yarpgen --std=c -o out/88
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
void test(unsigned int var_0, short var_1, int var_5, signed char var_6, signed char var_8, _Bool var_9, short var_11, int zero, unsigned int arr_0 [17] , unsigned char arr_2 [17] [17] [17] , unsigned int arr_3 [17] ) {
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_11)) - (330ULL))/*17*/; i_0 += ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned char) var_9))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) - (4294967294ULL))/*1*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_1))) - (45047))/*0*/; i_1 < (unsigned short)17/*17*/; i_1 += ((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)0)), (((((/* implicit */int) (unsigned char)221)) & (((/* implicit */int) var_6))))))) != (min(((~(arr_0 [6U]))), (min((((/* implicit */unsigned int) var_8)), (arr_0 [(unsigned short)12]))))))))/*1*/) 
        {
            {
                var_14 += ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_1]);
                var_15 = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_8)), (((3087874325088116393LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158)))))));
}
