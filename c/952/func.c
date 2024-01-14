/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 508940472
Invocation: ./yarpgen --std=c -o out/952
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
void test(int var_0, _Bool var_1, unsigned short var_2, signed char var_3, unsigned short var_4, unsigned short var_6, unsigned long long int var_7, long long int var_8, signed char var_9, unsigned char var_11, _Bool var_12, int zero, unsigned int arr_0 [18] [18] , signed char arr_1 [18] [18] , int arr_3 [14] , unsigned int arr_6 [14] [14] [14] ) {
    var_13 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((2350012291U), (((/* implicit */unsigned int) (unsigned short)0)))))))), (max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) var_12)), (12U)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_1))) - (1))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) min((((/* implicit */int) max(((!(((/* implicit */_Bool) 18ULL)))), ((_Bool)0)))), ((~(((((/* implicit */_Bool) 2475535269U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))))) + (20))/*18*/; i_0 += (signed char)4/*4*/) 
    {
        var_14 = ((/* implicit */int) (+((-(arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */unsigned char) min((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)171)), (var_6))))));
    }
    for (unsigned char i_1 = ((/* implicit */int) ((/* implicit */unsigned char) (_Bool)1))/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (12))/*13*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 0LL)) ? (var_7) : ((~(18ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))))) + (1))/*3*/) 
    {
        var_16 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) / (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (962882321U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])))))));
        arr_5 [(unsigned short)4] &= var_11;
        if (((/* implicit */_Bool) ((unsigned int) min((14304754868326146773ULL), (((/* implicit */unsigned long long int) 16383U))))))
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2LL/*2*/; i_2 < 12LL/*12*/; i_2 += ((((/* implicit */long long int) var_0)) + (1547979708LL))/*1*/) 
            {
                for (unsigned int i_3 = ((((/* implicit */unsigned int) var_6)) - (44492U))/*2*/; i_3 < 13U/*13*/; i_3 += ((((/* implicit */unsigned int) (_Bool)1)) + (2U))/*3*/) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0U/*0*/; i_4 < 14U/*14*/; i_4 += (((+(min((arr_6 [i_1 - 1] [i_3 - 2] [i_2 - 2]), (arr_6 [i_1 - 1] [i_3 - 1] [i_2 + 1]))))) - (1677490560U))/*1*/) 
                        {
                            arr_13 [i_1] [i_2] [i_3 - 1] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) (+(var_0)));
                            arr_14 [i_1] [i_3] [i_3 - 1] [(unsigned short)6] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)124)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : ((((_Bool)1) ? (4294967287U) : (4294967289U)))))) ? (((((/* implicit */_Bool) min(((unsigned char)116), ((unsigned char)178)))) ? (1957122483U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 3412513406U)))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (179649755) : (arr_3 [i_3 + 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            var_17 *= ((/* implicit */unsigned int) max((var_8), (((/* implicit */long long int) (~(4294967283U))))));
                        }
                        arr_15 [(signed char)8] [i_2 + 2] [i_1] = ((/* implicit */unsigned int) (signed char)-3);
                    }
                } 
            } 
            var_18 = min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1] [i_1 + 1]))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (2337844787U))))));
        }

        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (2337844812U))), (2337844816U))))))));
    }
    var_20 = ((/* implicit */int) var_3);
}
