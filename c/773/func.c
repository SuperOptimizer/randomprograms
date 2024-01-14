/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 921390681
Invocation: ./yarpgen --std=c -o out/773
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
void test(unsigned int var_1, short var_2, short var_5, unsigned char var_8, unsigned int var_10, _Bool var_12, int zero, long long int arr_3 [15] , unsigned short arr_7 [15] [15] ) {
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */long long int) (-(var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = ((((/* implicit */int) var_12)) - (1))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)212)))))))))))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))/*1*/) 
    {
        for (short i_1 = ((((/* implicit */int) var_5)) - (20258))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) 0U))) + (15))/*15*/; i_1 += ((((/* implicit */int) ((/* implicit */short) (unsigned char)212))) - (211))/*1*/) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_3 [(unsigned char)6]))));
                /* LoopSeq 1 */
                for (int i_2 = 0/*0*/; i_2 < ((((/* implicit */int) var_2)) + (20802))/*15*/; i_2 += ((((/* implicit */int) (unsigned char)22)) - (21))/*1*/) 
                {
                    arr_10 [(_Bool)1] [i_1] [(_Bool)1] &= ((/* implicit */long long int) (-((+((+(18446744073709551612ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = (unsigned char)0/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) - (3))/*15*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) - (16))/*2*/) 
                    {
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [2]))));
                        var_17 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                        var_18 = ((/* implicit */unsigned int) arr_7 [10] [10]);
                    }
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (signed char)116);
}
