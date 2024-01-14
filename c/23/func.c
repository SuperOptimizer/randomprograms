/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3885609905
Invocation: ./yarpgen --std=c -o out/23
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
void test(signed char var_0, signed char var_1, long long int var_3, long long int var_4, int var_8, long long int var_15, int zero, long long int arr_3 [18] ) {
    var_19 = var_4;
    /* LoopNest 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (73))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_3))) - (177))/*18*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) -6674366913351888932LL))) - (219))/*1*/) 
    {
        for (long long int i_1 = 1LL/*1*/; i_1 < ((((/* implicit */long long int) ((unsigned short) (short)8153))) - (8136LL))/*17*/; i_1 += ((var_4) + (7601655465650789817LL))/*2*/) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(-9134330476850814370LL))) : (((((/* implicit */_Bool) 9134330476850814369LL)) ? (-9134330476850814389LL) : (((/* implicit */long long int) 2407831517U)))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)0))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (9134330476850814370LL) : (((/* implicit */long long int) -1085460030))))) && (((/* implicit */_Bool) 6674366913351888925LL))));
                arr_6 [i_0] = ((/* implicit */short) ((((arr_3 [i_0]) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22537))) ^ (2935739478U)))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)212)) % (((/* implicit */int) (unsigned char)111)))) <= (-874216280)))) : (((/* implicit */int) ((short) arr_3 [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((31LL) << (((((((/* implicit */_Bool) 2407831524U)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (signed char)-123)))) - (148))))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
    var_22 = ((/* implicit */short) (+(((((/* implicit */int) ((var_8) < (((/* implicit */int) (unsigned char)96))))) << (((/* implicit */int) ((var_3) == (5647959067728259901LL))))))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-9134330476850814370LL)))) ? (((-6674366913351888935LL) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (signed char)108)))))))) ? (var_8) : ((-((-(((/* implicit */int) (signed char)86))))))));
}
