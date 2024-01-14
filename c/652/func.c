/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4180920907
Invocation: ./yarpgen --std=c -o out/652
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
void test(short var_1, short var_3, unsigned short var_4, long long int var_5, unsigned short var_6, unsigned char var_8, short var_9, int zero, unsigned char arr_2 [16] , long long int arr_4 [19] , unsigned short arr_7 [19] , long long int arr_8 [19] , short arr_9 [19] [19] ) {
    /* LoopNest 2 */
    for (long long int i_0 = 2LL/*2*/; i_0 < ((((/* implicit */long long int) var_6)) - (65384LL))/*14*/; i_0 += ((var_5) + (5322574899094704359LL))/*2*/) 
    {
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) (unsigned short)64216))) + (1320))/*0*/; i_1 < (short)16/*16*/; i_1 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)14913)) ? (((/* implicit */int) (unsigned short)50623)) : (((/* implicit */int) (unsigned short)50622)))))) + (14916))/*3*/) 
        {
            {
                var_10 -= ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) ((unsigned char) arr_2 [i_0 + 2]))));
                var_11 |= ((/* implicit */short) (unsigned short)50623);
            }
        } 
    } 
    if (((/* implicit */_Bool) (unsigned short)50623))
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_6))))) ^ (((/* implicit */int) ((unsigned short) var_9)))));
        var_13 = ((/* implicit */unsigned char) var_4);
        var_14 = ((/* implicit */short) var_5);
    }

    var_15 -= ((/* implicit */unsigned char) min(((unsigned short)50623), ((unsigned short)14893)));
    /* LoopSeq 2 */
    for (unsigned short i_2 = ((((/* implicit */int) (unsigned short)14893)) - (14891))/*2*/; i_2 < ((((/* implicit */int) (unsigned short)50623)) - (50606))/*17*/; i_2 += ((((/* implicit */int) (unsigned short)50622)) - (50619))/*3*/) /* same iter space */
    {
        var_16 = arr_4 [i_2];
        var_17 = ((/* implicit */short) ((unsigned char) ((unsigned char) (unsigned short)14893)));
    }
    for (unsigned short i_3 = ((((/* implicit */int) (unsigned short)14893)) - (14891))/*2*/; i_3 < ((((/* implicit */int) (unsigned short)50623)) - (50606))/*17*/; i_3 += ((((/* implicit */int) (unsigned short)50622)) - (50619))/*3*/) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (arr_8 [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14926))))) % (min((((/* implicit */long long int) var_3)), (arr_8 [i_3 - 2])))));
        arr_11 [2LL] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_3]))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_3 - 2] [i_3]))) : (((/* implicit */int) arr_7 [i_3])))));
    }
}
