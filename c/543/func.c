/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2534568225
Invocation: ./yarpgen --std=c -o out/543
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
void test(unsigned long long int var_0, short var_5, long long int var_6, unsigned long long int var_12, int zero, int arr_0 [25] , signed char arr_1 [25] ) {
    /* LoopSeq 1 */
    for (int i_0 = 0/*0*/; i_0 < ((((/* implicit */int) var_6)) + (1878837882))/*25*/; i_0 += 4/*4*/) 
    {
        var_13 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((0), (0)))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_12))))), (max((((/* implicit */unsigned long long int) (signed char)0)), (267386880ULL)))));
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned short)59960)), (-20))), (min((11), (((/* implicit */int) (unsigned char)25))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0])))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (65535ULL)))))));
    }
    var_14 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) max((-39), (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) (unsigned short)11)), (var_0))))), (((/* implicit */unsigned long long int) max((max((-11), (((/* implicit */int) (unsigned short)2558)))), (((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))))));
}
