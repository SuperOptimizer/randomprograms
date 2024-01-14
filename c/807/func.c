/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 200851981
Invocation: ./yarpgen --std=c -o out/807
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
void test(long long int var_0, unsigned int var_4, long long int var_5, short var_6, signed char var_7, unsigned char var_8, signed char var_10, int var_11, unsigned short var_14, unsigned int var_15, unsigned long long int var_16, short var_17, int zero, int arr_0 [13] [13] , unsigned long long int arr_4 [13] , short arr_5 [13] [13] [13] [13] ) {
    var_18 = ((/* implicit */unsigned char) var_16);
    if (((/* implicit */_Bool) var_17))
    {
        var_19 |= ((/* implicit */_Bool) (unsigned char)0);
        var_20 = ((/* implicit */unsigned short) var_6);
        var_21 = ((/* implicit */unsigned short) ((max((var_5), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_14)), (var_4)))))) + (((/* implicit */long long int) ((/* implicit */int) max((min(((short)-515), (((/* implicit */short) var_8)))), ((short)32706)))))));
        /* LoopNest 2 */
        for (unsigned int i_0 = 3U/*3*/; i_0 < 10U/*10*/; i_0 += ((((/* implicit */unsigned int) (signed char)-126)) - (4294967167U))/*3*/) 
        {
            for (signed char i_1 = ((((/* implicit */int) var_7)) - (104))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_15))) + (50))/*13*/; i_1 += ((((/* implicit */int) var_10)) - (29))/*1*/) 
            {
                {
                    var_22 = ((/* implicit */signed char) (~(arr_4 [i_0])));
                    /* LoopNest 3 */
                    for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_15))) - (219))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0]))))), (((arr_0 [i_1] [i_0 - 1]) & (arr_0 [i_0 - 3] [i_1]))))))) + (13))/*13*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (118))/*1*/) 
                    {
                        for (unsigned short i_3 = (unsigned short)0/*0*/; i_3 < (unsigned short)13/*13*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned char)12)))))))) - (65520))/*4*/) 
                        {
                            for (unsigned char i_4 = (unsigned char)0/*0*/; i_4 < (unsigned char)13/*13*/; i_4 += (unsigned char)1/*1*/) 
                            {
                                {
                                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_4] [i_3] [i_1] [(unsigned char)3]), (arr_5 [i_0 - 3] [i_3] [i_2] [i_3])))) ? ((-(((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                    var_23 = ((/* implicit */_Bool) var_0);
                                    arr_13 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
                                }
                            } 
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0U))));
    }

    var_25 = ((/* implicit */short) min((((/* implicit */int) var_8)), ((-(1073733632)))));
}
