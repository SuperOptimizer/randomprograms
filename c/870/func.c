/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1481998558
Invocation: ./yarpgen --std=c -o out/870
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
void test(unsigned char var_0, unsigned int var_1, unsigned int var_2, unsigned long long int var_5, long long int var_6, unsigned int var_7, signed char var_8, unsigned int var_10, int zero, unsigned short arr_0 [16] , _Bool arr_1 [16] , unsigned char arr_4 [16] , int arr_5 [16] , long long int arr_6 [16] [16] [16] , unsigned char arr_7 [16] [16] [16] , short arr_11 [16] [16] ) {
    /* LoopSeq 1 */
    for (unsigned int i_0 = ((((/* implicit */unsigned int) var_8)) - (4294967249U))/*0*/; i_0 < ((var_2) - (2992890941U))/*16*/; i_0 += 4U/*4*/) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3090))) : (var_10)))))) ? (min((((/* implicit */unsigned int) (~(1949435821)))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967295U))))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)57344)))), (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_8)) - (18446744073709551567ULL))/*2*/; i_1 < ((((/* implicit */unsigned long long int) var_7)) - (1506729685ULL))/*14*/; i_1 += 4ULL/*4*/) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = (unsigned char)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_6))) - (65))/*16*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_4 [i_1 - 2])))), (((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */unsigned char) (_Bool)0))))))))) - (175))/*1*/) 
            {
                var_11 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), ((-(((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) & (((11095833793234115490ULL) ^ (((/* implicit */unsigned long long int) 4166403935U))))))))));
                var_13 ^= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2]);
            }
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) - (arr_6 [i_0] [i_0] [i_1 + 2]))));
            arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1]);
        }
        for (unsigned char i_3 = (unsigned char)3/*3*/; i_3 < ((((/* implicit */int) var_0)) - (115))/*15*/; i_3 += (unsigned char)4/*4*/) 
        {
            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) (signed char)46))))) : (arr_5 [i_0]))))));
            var_15 = ((/* implicit */int) arr_0 [i_0]);
        }
    }
    var_16 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (min((var_5), (((/* implicit */unsigned long long int) 3701371540U)))))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (8620097182517101608ULL))) - (15049660161633202235ULL)))));
}
