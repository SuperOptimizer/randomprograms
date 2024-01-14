/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1059397124
Invocation: ./yarpgen --std=c -o out/715
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
void test(unsigned int var_0, _Bool var_7, unsigned char var_9, short var_13, int zero) {
    var_14 += ((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (((((long long int) (unsigned char)0)) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_13))));
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) var_13))), (((((/* implicit */int) ((((/* implicit */int) (short)7168)) <= (((/* implicit */int) (unsigned char)0))))) + (((/* implicit */int) ((short) var_7)))))));
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))));
}
