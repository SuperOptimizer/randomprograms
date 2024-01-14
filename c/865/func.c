/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2176721115
Invocation: ./yarpgen --std=c -o out/865
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
void test(unsigned int var_0, short var_2, int var_3, int var_5, unsigned long long int var_6, int var_7, unsigned int var_9, unsigned long long int var_10, long long int var_15, unsigned long long int var_18, unsigned char var_19, int zero, unsigned int arr_0 [10] , signed char arr_1 [10] , unsigned short arr_2 [10] , unsigned short arr_8 [10] [10] [10] [10] [10] , unsigned long long int arr_9 [10] [10] [10] [10] ) {
    /* LoopNest 3 */
    for (int i_0 = ((var_7) - (740909568))/*0*/; i_0 < ((((/* implicit */int) var_10)) + (1315450109))/*10*/; i_0 += (((+(((/* implicit */int) (short)32767)))) - (32766))/*1*/) 
    {
        for (int i_1 = 0/*0*/; i_1 < 10/*10*/; i_1 += ((((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_9)))))), (min((arr_0 [6U]), (((/* implicit */unsigned int) arr_1 [i_0]))))))) - (76))/*1*/) 
        {
            for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)30))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_1]))))) ? (max((((((/* implicit */_Bool) (short)29142)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (var_3))), ((-(((/* implicit */int) arr_2 [i_1])))))) : (((/* implicit */int) ((min((((/* implicit */long long int) (short)63)), (-2055862102532367802LL))) <= (-7140071324759024574LL)))))))) - (178))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_15))) - (41))/*10*/; i_2 += (unsigned char)4/*4*/) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) (unsigned char)180);
                    if (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_0])))))))))
                    {
                        if (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))
                        {
                            /* LoopNest 2 */
                            for (unsigned char i_3 = ((((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))) + (1))/*1*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (112))/*9*/; i_3 += (unsigned char)2/*2*/) 
                            {
                                for (unsigned short i_4 = ((((/* implicit */int) ((/* implicit */unsigned short) var_15))) - (20015))/*4*/; i_4 < (unsigned short)9/*9*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned short) (~(13))))) - (65519))/*3*/) 
                                {
                                    {
                                        var_21 -= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_4 - 4] [i_3 - 1] [i_3 - 1] [i_0])) || (((/* implicit */_Bool) arr_9 [i_4 - 4] [i_3 + 1] [i_3 + 1] [i_0])))));
                                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min(((unsigned short)44257), (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) 1229826550U)) : (arr_9 [i_0] [i_0] [i_3 + 1] [i_0]))) == (((/* implicit */unsigned long long int) (-(-320904008))))));
                                    }
                                } 
                            } 
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)63)), (((((((/* implicit */unsigned long long int) var_5)) * (var_18))) * (((((/* implicit */unsigned long long int) var_5)) / (var_6)))))));
                        }

                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_19))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_0))) : (max((((/* implicit */unsigned int) (unsigned short)804)), (4134389926U))))))));
                    }

                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)21279))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_15)) : (var_10))))) / (((/* implicit */unsigned long long int) -2049316304))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned short)48532)) : (((/* implicit */int) (unsigned short)64747))));
}
