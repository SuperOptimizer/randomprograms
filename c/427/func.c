/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2486464848
Invocation: ./yarpgen --std=c -o out/427
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
void test(long long int var_1, unsigned char var_3, short var_4, short var_5, unsigned short var_8, unsigned long long int var_9, _Bool var_10, unsigned short var_11, unsigned int var_12, int zero) {
    var_14 = ((/* implicit */unsigned char) var_5);
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (13143001815535447558ULL))))))), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (1427480394U)))), (var_1)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((13143001815535447558ULL), (((/* implicit */unsigned long long int) var_3)))) >= (((/* implicit */unsigned long long int) var_12)))))) != (var_9)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_10))));
}
