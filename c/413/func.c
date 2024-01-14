/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2441005605
Invocation: ./yarpgen --std=c -o out/413
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
void test(signed char var_0, unsigned long long int var_2, _Bool var_4, signed char var_5, unsigned long long int var_6, unsigned long long int var_7, unsigned long long int var_8, int zero, unsigned short arr_0 [18] , _Bool arr_1 [18] , unsigned short arr_4 [18] [18] , unsigned short arr_5 [18] [18] ) {
    /* LoopSeq 1 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) var_4))) | (((((8126464) > (8126464))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-16057), ((short)22263))))) : (var_8))))))) - (32381))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */short) ((long long int) (unsigned short)65535)))) + (16))/*15*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_5))) + (13))/*3*/) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) != (((unsigned long long int) var_7)))), ((!(((/* implicit */_Bool) ((signed char) -8126451)))))));
        var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)24267))));
        if (((/* implicit */_Bool) ((((_Bool) -8149203793675095672LL)) ? (min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (short)31223)))) : (((((14478478145003957319ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13564))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)231))))))))))
        {
            arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2])))))));
            /* LoopSeq 1 */
            for (int i_1 = (((-((~(((/* implicit */int) arr_0 [i_0 + 1])))))) - (52544))/*0*/; i_1 < (((-(((((/* implicit */_Bool) max((1969646323), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))) + (18))/*18*/; i_1 += ((((/* implicit */int) var_0)) + (41))/*3*/) 
            {
                var_11 = ((/* implicit */unsigned char) ((signed char) (short)-31224));
                arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) != (673622019)))), (min((((((/* implicit */_Bool) (short)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))) : (var_2))), (var_6)))));
                arr_7 [(unsigned char)3] [i_0] [i_1] = (~(min((var_2), (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0 + 3])))));
                var_12 = ((/* implicit */short) max((min((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) + (-4858612598811039115LL))))), (((/* implicit */long long int) (+(((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((var_8) - (762542272158400097ULL))))))))));
            }
        }

    }
    var_13 = ((/* implicit */unsigned long long int) var_5);
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1969646323))))), (var_6)));
}
