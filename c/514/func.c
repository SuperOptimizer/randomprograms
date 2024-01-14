/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1858328764
Invocation: ./yarpgen --std=c -o out/514
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
void test(int var_0, int var_2, unsigned short var_3, unsigned char var_4, int var_7, int var_8, unsigned char var_9, short var_10, unsigned char var_12, int zero) {
    var_13 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (var_10)))) : ((-(((/* implicit */int) var_3)))))));
    if (((/* implicit */_Bool) (-(max((var_7), (((/* implicit */int) var_10)))))))
    {
        var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_9)))), (min((((/* implicit */int) ((signed char) (unsigned short)12))), (max((((/* implicit */int) (_Bool)1)), (var_7)))))));
        var_15 = ((/* implicit */long long int) max((var_2), (max((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) (signed char)-112)))), (var_8)))));
        if (((/* implicit */_Bool) var_4))
        {
            var_16 = ((/* implicit */long long int) var_9);
            var_17 = ((/* implicit */int) var_4);
        }

    }

}
