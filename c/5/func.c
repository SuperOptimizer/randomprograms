/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3175361383
Invocation: ./yarpgen --std=c -o out/5
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
void test(unsigned short var_4, unsigned short var_5, unsigned long long int var_6, int var_7, unsigned short var_8, unsigned char var_10, unsigned long long int var_11, int zero, unsigned char arr_0 [10] , int arr_3 [10] , unsigned long long int arr_7 [20] [20] [20] ) {
    /* LoopSeq 1 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) var_5)) : (var_7))))))))) - (24452))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_10)), (max((8305738869490199859ULL), (7632493533664655250ULL))))))) - (11561))/*10*/; i_0 += ((((/* implicit */int) var_4)) - (63389))/*2*/) 
    {
        arr_4 [i_0] = max((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)22257)))), (arr_3 [i_0]));
        var_19 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)255)))) | (var_11));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = (unsigned char)0/*0*/; i_1 < (unsigned char)20/*20*/; i_1 += (unsigned char)4/*4*/) 
    {
        for (short i_2 = ((((/* implicit */int) ((/* implicit */short) var_8))) + (7118))/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (unsigned char)172)), (var_6))))))) - (26198))/*17*/; i_2 += (short)2/*2*/) 
        {
            {
                arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1903191929)) ? ((~(((/* implicit */int) (unsigned char)210)))) : (((/* implicit */int) var_5))));
                arr_10 [i_1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)-23074)), (arr_7 [i_1] [i_1] [i_2 + 1])))))) && (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) -1878866379)), (7878713750693775432ULL))), (((/* implicit */unsigned long long int) ((short) (unsigned short)61886))))))));
            }
        } 
    } 
}
