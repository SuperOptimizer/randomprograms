/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2291916096
Invocation: ./yarpgen --std=c -o out/194
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
void test(unsigned long long int var_0, unsigned long long int var_1, signed char var_5, signed char var_8, short var_9, unsigned int var_10, unsigned long long int var_12, int zero, unsigned short arr_1 [18] , short arr_5 [18] [18] , short arr_7 [18] [18] [18] [18] , int arr_17 [18] [18] ) {
    var_17 = ((/* implicit */_Bool) min((var_17), (((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1212051739)), (var_1))))))))))));
    if (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (13599783159760770237ULL))))
    {
        var_18 = ((/* implicit */int) (short)-12008);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_0 = ((/* implicit */int) ((/* implicit */short) ((unsigned long long int) ((_Bool) var_9))))/*1*/; i_0 < (short)16/*16*/; i_0 += (short)3/*3*/) 
        {
            arr_2 [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (1313451751)));
            /* LoopNest 2 */
            for (short i_1 = ((((/* implicit */int) ((/* implicit */short) var_12))) - (26605))/*0*/; i_1 < (short)18/*18*/; i_1 += (short)4/*4*/) 
            {
                for (short i_2 = (short)1/*1*/; i_2 < (short)16/*16*/; i_2 += ((((/* implicit */int) ((/* implicit */short) var_12))) - (26602))/*3*/) 
                {
                    {
                        /* LoopNest 2 */
                        for (int i_3 = 0/*0*/; i_3 < ((((/* implicit */int) var_8)) - (6))/*18*/; i_3 += ((((/* implicit */int) var_10)) + (1830159168))/*4*/) 
                        {
                            for (int i_4 = 0/*0*/; i_4 < 18/*18*/; i_4 += 3/*3*/) 
                            {
                                {
                                    var_19 = 2403575759U;
                                    arr_12 [(signed char)15] [i_1] = ((/* implicit */int) ((short) ((int) var_0)));
                                }
                            } 
                        } 
                        arr_13 [i_0] &= ((/* implicit */unsigned long long int) var_9);
                        var_20 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_5 = (signed char)0/*0*/; i_5 < (signed char)18/*18*/; i_5 += (signed char)3/*3*/) 
                        {
                            if (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2])))))
                            {
                                var_21 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(arr_17 [i_0] [i_5]))))));
                            }

                            arr_18 [i_0 + 2] [i_5] [i_2] [(short)7] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 + 2] [i_0 - 1] [i_2 - 1]);
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_12))));
                            arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) (short)12008)) - (((/* implicit */int) (short)127)))));
                        }
                    }
                } 
            } 
        }
    }

    var_24 = ((/* implicit */int) max((var_24), ((-(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)32808))))))))));
    var_25 -= ((/* implicit */unsigned long long int) 14U);
}
