/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3057155449
Invocation: ./yarpgen --std=c -o out/379
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
void test(unsigned long long int var_1, int var_3, unsigned long long int var_4, long long int var_5, unsigned char var_6, unsigned long long int var_7, int var_10, unsigned int var_11, unsigned char var_12, long long int var_13, short var_14, int zero, unsigned int arr_2 [19] ) {
    if (((/* implicit */_Bool) var_6))
    {
        var_15 = ((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (short)-17870)))))));
        /* LoopSeq 1 */
        for (int i_0 = 0/*0*/; i_0 < 19/*19*/; i_0 += ((((/* implicit */int) ((var_3) != ((+(var_3)))))) + (4))/*4*/) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)41))))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_2 [(signed char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))))))))))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned char) (unsigned char)181)))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)30)) & (((int) var_12)))) | (((/* implicit */int) ((short) arr_2 [i_0]))))))));
            var_19 = ((/* implicit */unsigned long long int) (unsigned char)217);
        }
        var_20 = ((/* implicit */int) var_14);
        var_21 &= ((/* implicit */short) var_4);
        var_22 = ((/* implicit */int) var_1);
    }
    else
    {
        var_23 = ((/* implicit */short) var_12);
        var_24 = ((/* implicit */unsigned short) (unsigned char)217);
    }

    var_25 = ((/* implicit */_Bool) var_3);
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (var_5)))))) ? (((/* implicit */unsigned int) var_10)) : (((unsigned int) var_4))));
}
