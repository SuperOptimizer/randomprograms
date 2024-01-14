/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 581832566
Invocation: ./yarpgen --std=c -o out/120
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
void test(short var_1, long long int var_4, unsigned long long int var_6, unsigned long long int var_8, int var_9, int zero) {
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) var_9))))))) || (((/* implicit */_Bool) max((((var_8) >> (((/* implicit */int) (unsigned char)60)))), (((/* implicit */unsigned long long int) (_Bool)0))))))))));
    var_12 = ((/* implicit */unsigned long long int) var_1);
}
