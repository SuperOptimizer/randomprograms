/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2747376561
Invocation: ./yarpgen --std=c -o out/69
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
void test(long long int var_1, signed char var_2, _Bool var_3, long long int var_4, long long int var_5, unsigned short var_6, short var_7, int var_8, int zero, long long int arr_2 [22] ) {
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) + (var_8)))), (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) : (((long long int) (short)-32742)))))) - (5459))/*0*/; i_0 < (unsigned short)22/*22*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned short) var_5))) - (64163))/*3*/) 
    {
        for (signed char i_1 = ((((/* implicit */int) ((/* implicit */signed char) 18446744073709551615ULL))) + (1))/*0*/; i_1 < (signed char)22/*22*/; i_1 += ((((/* implicit */int) ((/* implicit */signed char) var_5))) + (91))/*1*/) 
        {
            for (_Bool i_2 = (_Bool)0/*0*/; i_2 < (_Bool)1/*1*/; i_2 += ((/* implicit */int) ((_Bool) (unsigned short)23468))/*1*/) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 4294967278U)) | (var_1)));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))))))) ? (max((((((/* implicit */long long int) (-2147483647 - 1))) | (1975350752743674733LL))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1474373818U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
}
