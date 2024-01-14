/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3218378934
Invocation: ./yarpgen --std=c -o out/558
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
void test(signed char var_2, unsigned short var_3, unsigned int var_8, unsigned int var_10, signed char var_11, long long int var_13, unsigned short var_15, long long int var_16, int zero, long long int arr_0 [15] , unsigned short arr_1 [15] [15] , unsigned int arr_2 [15] [15] , _Bool arr_3 [15] , unsigned int arr_4 [15] , signed char arr_9 [15] [15] [15] , signed char arr_11 [15] [15] [15] [15] [15] [15] ) {
    var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (unsigned short)12096))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) (+(var_8))))) - (11731))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) var_8))) - (11716))/*15*/; i_0 += (short)2/*2*/) 
    {
        for (int i_1 = ((((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) arr_2 [i_0] [(_Bool)1])) : (5044404040344672290LL))))) - (799253944))/*0*/; i_1 < 15/*15*/; i_1 += ((((/* implicit */int) var_15)) - (8436))/*3*/) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = ((var_10) - (1670073302U))/*1*/; i_2 < 13U/*13*/; i_2 += ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)53412))))) - (4294913881U))/*2*/) 
                {
                    for (int i_3 = ((((/* implicit */int) ((((/* implicit */_Bool) 5226406695724490279LL)) ? ((~(arr_0 [i_2 + 1]))) : (((long long int) arr_3 [i_0]))))) + (1178338547))/*0*/; i_3 < ((((/* implicit */int) ((unsigned long long int) 2803439599U))) + (1491527712))/*15*/; i_3 += 4/*4*/) 
                    {
                        {
                            arr_12 [i_3] [i_1] [(unsigned short)3] [i_2] = ((/* implicit */unsigned long long int) (~(((((_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */long long int) (~(767450939)))) : (max((var_16), (var_16)))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)10349)) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10349)))))));
                            arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) 511U)) & (min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [12U] [i_1] [11ULL] [i_3] [i_3] [i_3])), (4294967278U)))), (var_13)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)12] [i_1]))) : (14865764455744781765ULL))) | (((/* implicit */unsigned long long int) ((unsigned int) 8083896431408766267LL))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = ((((/* implicit */int) var_2)) + (109))/*0*/; i_4 < 10/*10*/; i_4 += 4/*4*/) 
    {
        for (unsigned int i_5 = ((((/* implicit */unsigned int) var_11)) - (4294967268U))/*1*/; i_5 < 9U/*9*/; i_5 += ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_4 [i_4])))))))) | ((-(var_8))))) - (682218028U))/*1*/) 
        {
            {
                var_23 ^= ((/* implicit */unsigned long long int) var_8);
                arr_20 [i_5] [i_4] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10349))) - (-2018958730553439747LL)))));
            }
        } 
    } 
    var_24 += ((/* implicit */_Bool) max((4294966785U), (4294966790U)));
}
