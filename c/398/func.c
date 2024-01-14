/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2141119925
Invocation: ./yarpgen --std=c -o out/398
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
void test(_Bool var_1, unsigned short var_2, long long int var_3, unsigned int var_4, signed char var_5, int var_6, unsigned long long int var_7, signed char var_8, signed char var_9, int zero, signed char arr_1 [12] [12] , unsigned short arr_2 [12] [12] [12] , int arr_3 [12] [12] [12] ) {
    var_10 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59041))) == (3333529667U)))), (max((var_3), (7536292788790010533LL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0ULL/*0*/; i_0 < ((((/* implicit */unsigned long long int) var_4)) - (3314076901ULL))/*12*/; i_0 += 4ULL/*4*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_7))) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) var_5))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))/*1*/) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6522765219333939435LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (961437628U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)8] [i_1])))))) ? (((/* implicit */int) arr_2 [i_0] [(signed char)1] [(short)11])) : (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_1 [6LL] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3333529667U)))))));
                var_11 = ((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]);
                var_12 = (~(min((((/* implicit */unsigned int) arr_3 [i_1] [i_0] [(_Bool)1])), (var_4))));
            }
        } 
    } 
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 961437623U)) : (11ULL)))) ? ((~(3333529667U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))) : (var_6))))
    {
        var_13 -= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95))))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 7446571165082791324ULL)) ? (var_6) : (((/* implicit */int) var_5)))) : (var_6))));
        var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U))));
    }

    var_15 = ((/* implicit */unsigned short) var_1);
}
