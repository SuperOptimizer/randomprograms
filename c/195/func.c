/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2531625674
Invocation: ./yarpgen --std=c -o out/195
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
void test(_Bool var_1, long long int var_2, _Bool var_4, _Bool var_5, long long int var_7, _Bool var_10, int zero) {
    var_12 -= ((_Bool) var_7);
    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967279U))))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) ((unsigned int) var_5)))), (min((((long long int) var_10)), (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))))));
}
