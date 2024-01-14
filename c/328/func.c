/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3166381766
Invocation: ./yarpgen --std=c -o out/328
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
void test(unsigned char var_3, unsigned char var_4, unsigned char var_5, unsigned char var_9, unsigned char var_10, int zero, unsigned char arr_0 [19] , unsigned char arr_1 [19] [19] ) {
    var_11 = var_4;
    /* LoopSeq 1 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < ((((/* implicit */int) var_9)) - (139))/*19*/; i_0 += ((((/* implicit */int) var_10)) - (179))/*3*/) 
    {
        var_12 = ((unsigned char) (unsigned char)248);
        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)11)))))));
    }
    if (((/* implicit */_Bool) var_4))
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), ((unsigned char)246)));
        var_16 -= (unsigned char)176;
        var_17 &= (unsigned char)193;
        var_18 = ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_3)))))));
    }

}
