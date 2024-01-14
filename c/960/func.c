/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1948359022
Invocation: ./yarpgen --std=c -o out/960
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
void test(short var_0, unsigned int var_3, long long int var_5, int zero, _Bool arr_0 [22] , _Bool arr_1 [22] ) {
    var_12 = ((/* implicit */_Bool) var_5);
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((_Bool) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (3476000770U)))) + (1ULL))/*1*/; i_0 < 21ULL/*21*/; i_0 += 4ULL/*4*/) 
    {
        for (_Bool i_1 = (_Bool)1/*1*/; i_1 < (_Bool)1/*1*/; i_1 += (_Bool)1/*1*/) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_1 [i_0]);
                var_14 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) var_3)) * (2086187206775430721ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0 - 1])))))));
            }
        } 
    } 
}
