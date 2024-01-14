/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4234750056
Invocation: ./yarpgen --std=c -o out/749
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
void test(unsigned long long int var_0, _Bool var_2, signed char var_4, long long int var_5, unsigned char var_6, short var_11, unsigned short var_12, _Bool var_13, unsigned long long int var_14, int zero) {
    var_19 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (unsigned short)65535))))) + (min((((/* implicit */unsigned long long int) var_2)), (var_0))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_12))));
    var_21 = ((/* implicit */int) min(((~(max((((/* implicit */unsigned long long int) var_11)), (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18438478539571210411ULL)))) ? (((/* implicit */int) min(((short)-20104), (((/* implicit */short) (unsigned char)224))))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_4))))))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_14))));
}
