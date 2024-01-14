/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2355625395
Invocation: ./yarpgen --std=c -o out/214
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
void test(unsigned int var_0, int var_1, unsigned long long int var_2, signed char var_3, signed char var_4, _Bool var_5, short var_6, long long int var_7, unsigned int var_8, unsigned long long int var_9, unsigned int var_10, int zero, unsigned short arr_0 [21] [21] , unsigned int arr_1 [21] , int arr_2 [21] [21] , unsigned short arr_4 [17] ) {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) 33847670U)) * (var_2)))))) + (23))/*21*/; i_0 += (signed char)4/*4*/) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_0])))) : (((long long int) 2070176419779261742ULL)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((2070176419779261730ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
        var_12 = ((((/* implicit */_Bool) 2070176419779261730ULL)) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
    }
    for (long long int i_1 = ((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_7) < (((/* implicit */long long int) var_8)))))))) == (min((max((11946236556543352647ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 551538071856426327LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45411))))))))))) + (3LL))/*3*/; i_1 < ((((/* implicit */long long int) var_4)) + (104LL))/*16*/; i_1 += 4LL/*4*/) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [2U] [i_1])), (((min((-551538071856426342LL), (((/* implicit */long long int) var_8)))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)16)))))))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16376567653930289892ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) max((4109255631U), (((/* implicit */unsigned int) var_5))))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))) / (((long long int) max((((/* implicit */unsigned long long int) var_4)), (var_9)))))))));
        var_15 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -282631369)) ? (((/* implicit */unsigned long long int) -10378699)) : (12699152069586674875ULL)))));
        arr_6 [i_1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 1])), (var_9))), (((((/* implicit */_Bool) arr_4 [i_1])) ? ((~(15481778550145840431ULL))) : (((/* implicit */unsigned long long int) ((-7294676607649279519LL) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
}
