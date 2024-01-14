/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2359190158
Invocation: ./yarpgen --std=c -o out/680
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
void test(long long int var_0, long long int var_1, long long int var_2, unsigned short var_3, long long int var_4, long long int var_5, signed char var_6, long long int var_7, _Bool var_8, unsigned char var_9, int zero, unsigned int arr_0 [24] , _Bool arr_1 [24] , long long int arr_2 [24] [24] , unsigned int arr_4 [24] [24] [24] , unsigned int arr_5 [24] [24] , int arr_6 [24] [24] [24] , signed char arr_7 [24] [24] , unsigned int arr_12 [24] , _Bool arr_15 [24] [24] [24] , long long int arr_16 [24] [24] [24] , int arr_22 [12] [12] ) {
    if (((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned short)96), (((/* implicit */unsigned short) var_9))))), (2689859906578541318LL))))
    {
        if (((/* implicit */_Bool) (-((+(min((1436633295), (((/* implicit */int) (unsigned char)60)))))))))
        {
            var_12 = ((/* implicit */int) var_2);
            /* LoopSeq 3 */
            for (unsigned int i_0 = ((((/* implicit */unsigned int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_3))))))))) - (1U))/*0*/; i_0 < 24U/*24*/; i_0 += 2U/*2*/) /* same iter space */
            {
                arr_3 [i_0] = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))))))) + (23))/*24*/; i_1 += (unsigned short)2/*2*/) 
                {
                    for (unsigned long long int i_2 = ((/* implicit */unsigned long long int) min((214317526454565824LL), (((((/* implicit */long long int) max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_1])))) / (arr_2 [20LL] [i_1])))))/*0*/; i_2 < 24ULL/*24*/; i_2 += ((((/* implicit */unsigned long long int) var_5)) - (12280768176565967788ULL))/*2*/) 
                    {
                        {
                            arr_8 [i_2] = ((/* implicit */unsigned short) max((arr_7 [i_0] [i_1]), (arr_7 [i_1] [i_2])));
                            arr_9 [1LL] [i_2] = ((/* implicit */unsigned short) ((7456793589468893630LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) == (var_7)))))));
                            var_13 = ((((/* implicit */int) (signed char)6)) * (((/* implicit */int) (unsigned short)65439)));
                            var_14 = ((/* implicit */long long int) arr_0 [i_2]);
                            var_15 &= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) * (((((/* implicit */long long int) arr_6 [i_2] [14LL] [i_0])) / (var_0))))) - (((((((/* implicit */_Bool) arr_0 [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (((/* implicit */long long int) max((arr_0 [(unsigned short)6]), (arr_4 [17U] [i_1] [i_2]))))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) > (((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : (max((7462681267023498748ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))))));
                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [21U]), (arr_0 [i_0]))))));
                arr_11 [i_0] = ((/* implicit */_Bool) var_4);
            }
            for (unsigned int i_3 = ((((/* implicit */unsigned int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_3))))))))) - (1U))/*0*/; i_3 < 24U/*24*/; i_3 += 2U/*2*/) /* same iter space */
            {
                arr_14 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 214317526454565814LL))))), (arr_2 [i_3] [i_3])));
                var_17 *= ((/* implicit */unsigned char) ((unsigned int) (unsigned short)96));
                /* LoopNest 2 */
                for (unsigned int i_4 = ((/* implicit */unsigned int) var_8)/*0*/; i_4 < 24U/*24*/; i_4 += ((((/* implicit */unsigned int) arr_7 [i_3] [i_3])) + (3U))/*3*/) 
                {
                    for (unsigned int i_5 = 1U/*1*/; i_5 < ((((/* implicit */unsigned int) var_7)) - (688819119U))/*23*/; i_5 += ((arr_12 [i_3]) - (3755185429U))/*3*/) 
                    {
                        {
                            arr_20 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_4]) >= (arr_0 [i_3]))))) >= (min((((/* implicit */unsigned int) (unsigned char)15)), (arr_5 [i_3] [(unsigned short)20])))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_5 - 1] [i_3])) || (arr_15 [i_5] [i_5 - 1] [i_4]))))));
                            var_18 = (~(((((/* implicit */int) arr_7 [i_5 - 1] [i_4])) | (((/* implicit */int) (signed char)13)))));
                        }
                    } 
                } 
                arr_21 [(_Bool)1] [i_3] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
            }
            for (unsigned char i_6 = (unsigned char)0/*0*/; i_6 < ((((/* implicit */int) var_9)) - (20))/*12*/; i_6 += (unsigned char)2/*2*/) 
            {
                var_19 -= ((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) 0U))));
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_5 [i_6] [i_6]), (((/* implicit */unsigned int) arr_22 [i_6] [i_6]))))) + (min((-214317526454565825LL), (arr_16 [i_6] [i_6] [i_6])))));
                arr_25 [i_6] [i_6] = ((/* implicit */int) arr_7 [i_6] [i_6]);
            }
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_9))));
        }

        var_22 = ((/* implicit */int) var_1);
    }

    var_23 -= ((/* implicit */long long int) var_6);
}
