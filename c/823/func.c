/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 268814191
Invocation: ./yarpgen --std=c -o out/823
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
void test(short var_1, unsigned int var_2, unsigned int var_6, unsigned int var_7, unsigned int var_9, _Bool var_10, signed char var_11, int var_12, unsigned char var_13, int zero, signed char arr_2 [15] [15] [15] , short arr_5 [15] [15] [15] [15] ) {
    /* LoopNest 3 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (146))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (19))/*15*/; i_0 += (unsigned char)4/*4*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) var_1)) + (5807LL))/*0*/; i_1 < 15LL/*15*/; i_1 += ((((/* implicit */long long int) var_12)) - (1008278683LL))/*2*/) 
        {
            for (long long int i_2 = ((((/* implicit */long long int) var_6)) - (3875893827LL))/*0*/; i_2 < ((((/* implicit */long long int) var_2)) - (2092866671LL))/*15*/; i_2 += 1LL/*1*/) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0] [(_Bool)1]), (arr_5 [i_1] [i_1] [i_1] [i_0])))))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                    arr_6 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) 9978872864783700448ULL));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */int) ((short) var_12));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3612424301U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : ((-(min((((/* implicit */unsigned int) var_10)), (682542994U))))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_11))));
}
