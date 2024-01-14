/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 366644919
Invocation: ./yarpgen --std=c -o out/162
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
void test(unsigned short var_1, unsigned short var_2, unsigned short var_3, unsigned int var_4, unsigned int var_6, unsigned short var_7, unsigned int var_9, unsigned short var_11, unsigned int var_12, unsigned int var_13, unsigned short var_14, int zero) {
    var_15 = ((/* implicit */unsigned int) var_2);
    var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) 1481625097U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))))));
    if (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2813342195U)) ? (((((/* implicit */_Bool) var_2)) ? (1481625097U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))) : (var_13))))))
    {
        var_17 = ((((/* implicit */_Bool) (unsigned short)49644)) ? (((((/* implicit */_Bool) 2813342195U)) ? (((((/* implicit */_Bool) 2813342198U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (458719563U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)28862)) ? (var_13) : (var_12))) : (1481625098U))));
        var_18 -= ((unsigned short) var_2);
        var_19 = ((/* implicit */unsigned int) ((unsigned short) min((min((((/* implicit */unsigned int) var_1)), (1481625098U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)48986)) : (((/* implicit */int) (unsigned short)26029))))))));
    }

    if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((var_12) << (((((/* implicit */int) var_2)) - (51693))))) : (3810488178U)))) ? (((((/* implicit */_Bool) var_4)) ? (min((var_12), (16383U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_1))))))) : (var_4))))
    {
        var_20 = ((/* implicit */unsigned short) 1481625098U);
        var_21 *= ((/* implicit */unsigned short) var_13);
        var_22 = ((/* implicit */unsigned short) max((((((((/* implicit */int) var_14)) >> (((var_9) - (4092253647U))))) & (((/* implicit */int) var_14)))), (((/* implicit */int) ((unsigned short) 2813342195U)))));
    }

    var_23 ^= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)34353)) ? (var_9) : (var_4))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)65507), (var_7))))))) : (265767841U));
}
