/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2793637641
Invocation: ./yarpgen --std=c -o out/552
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
void test(short var_1, signed char var_2, unsigned short var_3, unsigned char var_4, long long int var_5, unsigned char var_6, signed char var_7, signed char var_9, _Bool var_10, _Bool var_11, unsigned short var_12, int zero, int arr_1 [19] , unsigned int arr_2 [19] , unsigned char arr_4 [19] [19] , short arr_6 [19] ) {
    var_13 |= ((/* implicit */short) max(((~(((((/* implicit */int) var_10)) % (((/* implicit */int) var_4)))))), (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = ((((/* implicit */int) var_10)) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) ((unsigned char) var_10)))/*1*/; i_0 += (_Bool)1/*1*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_3))) - (1))/*0*/; i_1 < (_Bool)1/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) var_2))/*1*/) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) min((max((arr_1 [i_0]), (((/* implicit */int) arr_6 [i_1])))), (max((arr_1 [i_0]), (((/* implicit */int) var_12))))));
                arr_9 [i_0] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                arr_10 [i_0] [i_0] [i_0] = (unsigned char)160;
                var_15 |= ((/* implicit */int) var_1);
            }
        } 
    } 
    if (((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)102), (((/* implicit */unsigned char) var_11))))))))
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned char)255)))) / ((-(((/* implicit */int) var_6)))))))))));
        var_17 = ((/* implicit */long long int) ((unsigned char) ((unsigned short) ((((/* implicit */_Bool) -7029987830501948173LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))));
    }
    else
    {
        var_18 = ((/* implicit */long long int) max((var_18), (min((7029987830501948172LL), (((/* implicit */long long int) var_3))))));
        var_19 ^= ((/* implicit */signed char) min((var_5), (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) max((var_12), (var_3)))))))));
    }

    var_20 &= ((/* implicit */unsigned char) var_12);
}
