/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 845290823
Invocation: ./yarpgen --std=c -o out/505
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
void test(signed char var_0, signed char var_1, unsigned int var_2, _Bool var_3, unsigned int var_4, unsigned short var_5, unsigned long long int var_6, signed char var_7, unsigned short var_8, short var_9, short var_10, int zero, long long int arr_0 [11] [11] , short arr_1 [11] , short arr_2 [11] , unsigned short arr_7 [11] [11] , short arr_9 [11] [11] [11] [11] ) {
    if (((/* implicit */_Bool) ((short) ((unsigned int) var_1))))
    {
        var_11 = ((/* implicit */unsigned short) (((+((~(1134095630957215813ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))));
        var_12 = ((/* implicit */_Bool) ((unsigned short) min((((short) var_9)), (((/* implicit */short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_1))))))));
        var_13 = ((/* implicit */unsigned long long int) var_5);
    }

    var_14 = var_8;
    if (((_Bool) ((short) ((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned short)4095))))))
    {
        /* LoopNest 2 */
        for (_Bool i_0 = ((/* implicit */int) ((/* implicit */_Bool) (unsigned short)19294))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) ((short) ((long long int) var_2)))) + (18443))))))) + (1))/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
        {
            for (_Bool i_1 = ((/* implicit */int) ((/* implicit */_Bool) var_7))/*1*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) var_5))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_0 [i_0 - 1] [i_0 - 1])))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) var_9)), (var_6)))))))/*1*/) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_8);
                    var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_5)), (((8777901078161194860LL) % (((/* implicit */long long int) var_4)))))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_8)) - (64772ULL))/*0*/; i_2 < ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) max((var_10), (arr_1 [i_0])))) << (((min((((/* implicit */unsigned int) arr_1 [i_1])), (3620071839U))) - (16328U)))))))) - (535527413ULL))/*11*/; i_2 += ((((/* implicit */unsigned long long int) arr_2 [i_0])) - (18446744073709536613ULL))/*4*/) 
                    {
                        for (unsigned short i_3 = (unsigned short)0/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)40399)))))) + (11))/*11*/; i_3 += (unsigned short)1/*1*/) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_7 [i_2] [i_3]))))))), ((-(((/* implicit */int) arr_9 [i_0] [i_1] [7] [i_3]))))));
                                var_18 ^= (~((((-(((/* implicit */int) (short)32256)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)34189)) > (((/* implicit */int) (signed char)-1))))))));
                                arr_10 [i_0 - 1] [i_1 - 1] [i_2] [i_3] [i_2] [(signed char)8] &= ((/* implicit */int) ((unsigned int) ((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))));
                                arr_11 [i_1] = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)10))));
                }
            } 
        } 
        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_7), ((signed char)1)))), ((-(((/* implicit */int) (unsigned short)25122))))))) ? (3620071839U) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_3)))))))));
    }

}
