/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2766970720
Invocation: ./yarpgen --std=c -o out/438
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
void test(signed char var_1, _Bool var_3, unsigned long long int var_6, int var_10, int var_11, unsigned char var_13, int zero, int arr_0 [15] , short arr_1 [15] [15] , short arr_2 [15] [15] [15] , _Bool arr_3 [15] [15] [15] ) {
    var_15 |= ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) (-(var_10))))) - (13440))/*2*/; i_0 < (short)13/*13*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_13))) - (79))/*4*/) 
    {
        for (int i_1 = ((var_11) + (975865647))/*0*/; i_1 < ((((/* implicit */int) var_3)) + (14))/*15*/; i_1 += ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])) - (443))/*1*/) 
        {
            {
                var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16330)) ? (arr_0 [i_1]) : (var_10)))) ? (3012918761921282042ULL) : (9217884013360390491ULL))), (((/* implicit */unsigned long long int) (((-(15433825311788269574ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_1]))))))));
                arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1])), (var_10))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)147)) != (((/* implicit */int) (!(((/* implicit */_Bool) 15433825311788269574ULL))))))))));
                var_17 = ((/* implicit */long long int) 15433825311788269574ULL);
            }
        } 
    } 
    var_18 = ((/* implicit */short) -4183505558390283933LL);
    var_19 = ((/* implicit */unsigned int) var_6);
}
