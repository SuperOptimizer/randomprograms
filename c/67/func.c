/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1481795737
Invocation: ./yarpgen --std=c -o out/67
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
void test(unsigned long long int var_5, _Bool var_15, int zero, _Bool arr_0 [18] , unsigned long long int arr_2 [18] [18] ) {
    /* LoopSeq 1 */
    for (_Bool i_0 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))/*0*/; i_0 < ((/* implicit */int) ((/* implicit */_Bool) 11098621165210795664ULL))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) (-((-((-(2731506864828231599ULL))))))))/*1*/) 
    {
        if (arr_0 [i_0])
        {
            var_18 = ((/* implicit */_Bool) 8380406038522081352ULL);
            var_19 |= ((/* implicit */_Bool) (+((+((-(((/* implicit */int) (_Bool)0))))))));
        }

        arr_3 [i_0] = (~(max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))));
        var_20 ^= ((7348122908498755951ULL) >> (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (12000269250314048027ULL))) - (12000269250314047995ULL))));
    }
    var_21 |= ((/* implicit */_Bool) var_5);
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
