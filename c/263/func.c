/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2815757170
Invocation: ./yarpgen --std=c -o out/263
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
void test(unsigned int var_0, short var_1, short var_2, signed char var_3, short var_4, short var_5, signed char var_6, unsigned int var_7, unsigned int var_8, short var_9, unsigned long long int var_10, unsigned char var_11, unsigned char var_12, int zero, unsigned int arr_3 [19] , unsigned long long int arr_4 [19] [19] ) {
    if (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) (short)25890)) ? (10271821321977546061ULL) : (8174922751732005554ULL))))))
    {
        /* LoopNest 2 */
        for (int i_0 = 2/*2*/; i_0 < ((((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (var_7) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))))) : (max((((/* implicit */unsigned long long int) var_7)), (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))) - (2070739135))/*18*/; i_0 += ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((var_0), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((var_8) - (3391572648U)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) + (98))/*4*/) 
        {
            for (short i_1 = (short)0/*0*/; i_1 < (short)19/*19*/; i_1 += (short)3/*3*/) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned int) var_11))))) && (((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned int) var_9)))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (16U)))) < (((((/* implicit */unsigned long long int) arr_3 [i_0])) - (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_0])))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))) | (((/* implicit */unsigned long long int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) var_2)) ? (2940045270U) : (13U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-24)) & (((/* implicit */int) (unsigned short)0)))))))))))));
        var_16 = max((((/* implicit */unsigned int) var_9)), (max((max((var_8), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))));
        var_17 = ((/* implicit */unsigned char) var_8);
    }

    var_18 = ((/* implicit */short) max((max((max((var_10), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */short) var_3))))))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_12)))))));
}
