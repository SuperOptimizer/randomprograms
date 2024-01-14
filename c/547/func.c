/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 821977289
Invocation: ./yarpgen --std=c -o out/547
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
void test(short var_0, unsigned long long int var_2, short var_4, unsigned short var_5, unsigned int var_6, unsigned char var_7, unsigned char var_8, int var_9, short var_10, short var_13, unsigned int var_14, unsigned char var_16, int var_18, int zero, unsigned long long int arr_1 [20] , unsigned short arr_2 [20] [20] , unsigned short arr_3 [20] ) {
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? ((~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (6994104190032765397ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) max(((unsigned char)241), (var_7)))) : ((-(((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) max((var_2), (var_2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */unsigned int) var_18)) ^ (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (max((var_2), (((/* implicit */unsigned long long int) var_13)))) : ((((_Bool)1) ? (11248882540269096749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (int i_0 = ((var_9) + (845407714))/*0*/; i_0 < 20/*20*/; i_0 += ((((/* implicit */int) var_4)) + (3099))/*1*/) 
        {
            for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) var_7)) - (59ULL))/*0*/; i_1 < ((((/* implicit */unsigned long long int) (unsigned char)242)) - (222ULL))/*20*/; i_1 += ((((/* implicit */unsigned long long int) var_14)) - (4109159240ULL))/*1*/) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) 2941607246313662647ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (7197861533440454869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) ^ (((/* implicit */int) ((short) arr_2 [i_0] [i_1])))));
                    arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }

}
