/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 449794235
Invocation: ./yarpgen --std=c -o out/928
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
void test(_Bool var_2, signed char var_3, long long int var_4, signed char var_8, _Bool var_12, int zero, long long int arr_0 [19] , signed char arr_1 [19] , unsigned long long int arr_2 [19] [19] , unsigned long long int arr_3 [19] ) {
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (2927791152U)))))));
    /* LoopSeq 1 */
    for (short i_0 = (short)0/*0*/; i_0 < (short)19/*19*/; i_0 += (short)3/*3*/) 
    {
        var_19 &= ((/* implicit */unsigned int) ((arr_3 [i_0]) | (arr_2 [i_0] [i_0])));
        var_20 = ((/* implicit */int) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */signed char) var_12))))) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))), (min((((/* implicit */unsigned long long int) ((arr_0 [(unsigned short)16]) << (((var_4) - (1013499496315343163LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_3 [i_0])))))));
        var_22 = ((/* implicit */long long int) ((max((((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) var_8)) + (42))))), (((/* implicit */unsigned long long int) ((_Bool) var_2))))) & (((min((((/* implicit */unsigned long long int) arr_0 [18LL])), (arr_3 [(signed char)4]))) >> (((((/* implicit */int) var_3)) + (28)))))));
    }
}
