/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 563163546
Invocation: ./yarpgen --std=c -o out/561
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
void test(unsigned short var_1, int var_2, short var_3, unsigned short var_4, long long int var_5, int var_6, int var_7, short var_8, int var_9, unsigned short var_10, int zero, long long int arr_0 [18] , unsigned char arr_1 [18] [18] , int arr_2 [18] [18] , long long int arr_3 [18] [18] [18] , long long int arr_4 [18] [18] , short arr_9 [18] [18] [18] [18] , long long int arr_19 [18] [18] [18] [18] ) {
    var_11 = ((/* implicit */int) var_10);
    if (((((_Bool) var_1)) && (((/* implicit */_Bool) var_4))))
    {
        /* LoopNest 2 */
        for (int i_0 = ((((/* implicit */int) (unsigned short)65535)) - (65535))/*0*/; i_0 < ((((/* implicit */int) var_8)) - (24340))/*18*/; i_0 += ((((/* implicit */int) (unsigned short)2569)) - (2568))/*1*/) 
        {
            for (int i_1 = ((((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) (short)0)))) - (65535))/*0*/; i_1 < ((var_6) - (2007194404))/*18*/; i_1 += ((((/* implicit */int) (unsigned short)2569)) - (2567))/*2*/) 
            {
                {
                    var_12 *= ((/* implicit */short) ((min((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */long long int) var_4)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62967))))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (arr_2 [i_1] [i_1])));
                    /* LoopNest 3 */
                    for (int i_2 = (((~(((/* implicit */int) (unsigned char)194)))) + (195))/*0*/; i_2 < ((((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) 6904886433101263593LL)) ? (-974374463) : (((/* implicit */int) (unsigned char)255))))), (arr_0 [i_0]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32760)) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_1] [i_0]))))))) + (746698119))/*18*/; i_2 += ((var_9) - (567098546))/*2*/) 
                    {
                        for (int i_3 = 0/*0*/; i_3 < ((((/* implicit */int) arr_4 [i_0] [i_1])) - (1113234890))/*18*/; i_3 += ((((/* implicit */int) var_5)) + (1306812944))/*1*/) 
                        {
                            for (int i_4 = ((((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1167630090022647975ULL)) ? (((/* implicit */int) (unsigned short)58818)) : (((/* implicit */int) (short)-14563))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1] [i_1]))))) : (-6904886433101263581LL))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((var_7) < (((/* implicit */int) (short)-8))))), (min((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0])), ((unsigned short)65527)))))))))) - (1))/*0*/; i_4 < ((var_2) - (1940382605))/*18*/; i_4 += 1/*1*/) 
                            {
                                {
                                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) (unsigned short)65535))));
                                    arr_14 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */signed char) ((unsigned short) var_8));
                                    arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] [i_2] = ((/* implicit */int) (unsigned char)37);
                                }
                            } 
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = (_Bool)0/*0*/; i_5 < ((/* implicit */int) ((/* implicit */_Bool) arr_0 [i_0]))/*1*/; i_5 += (_Bool)1/*1*/) 
                    {
                        for (int i_6 = ((((/* implicit */int) (_Bool)1)) - (1))/*0*/; i_6 < ((((((/* implicit */int) (unsigned short)2569)) % (((/* implicit */int) (unsigned char)37)))) + (2))/*18*/; i_6 += ((max(((+(((/* implicit */int) (short)7)))), (max((((/* implicit */int) (_Bool)1)), (-466144703))))) - (5))/*2*/) 
                        {
                            {
                                arr_23 [i_6] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (((((/* implicit */_Bool) ((unsigned int) (short)-32760))) ? (((arr_19 [i_6] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (short)-14))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_15 = ((/* implicit */int) min((((/* implicit */long long int) (short)-32747)), (min((arr_4 [i_1] [i_1]), (arr_4 [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */int) var_1);
        var_17 = ((/* implicit */int) ((_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)54979))))));
    }

    var_18 = ((/* implicit */signed char) var_6);
}
