/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3275219127
Invocation: ./yarpgen --std=c -o out/325
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
void test(int var_3, unsigned int var_5, unsigned short var_6, signed char var_7, unsigned int var_8, unsigned short var_9, unsigned int var_11, _Bool var_13, long long int var_14, int zero, unsigned long long int arr_0 [20] , signed char arr_3 [20] [20] [20] , _Bool arr_4 [20] [20] , _Bool arr_6 [20] [20] [20] [20] , unsigned int arr_7 [20] [20] [20] [20] [20] [20] , unsigned int arr_9 [20] [20] [20] [20] [20] [20] ) {
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) max((var_3), (((/* implicit */int) var_9))))) | ((+(var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((((/* implicit */int) (unsigned short)39280)) - (((/* implicit */int) (unsigned char)94)))))))));
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) 65535)) ? (566101452) : (2147483647))))), (((/* implicit */int) ((unsigned char) var_3))))))) - (204))/*0*/; i_0 < (unsigned char)20/*20*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_14))) - (84))/*4*/) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((((~(65546))) + (2147483647))) >> (((arr_0 [i_0]) - (7057301052501987320ULL)))))), (min((((/* implicit */unsigned long long int) (+(566101452)))), (min((((/* implicit */unsigned long long int) (signed char)-66)), (arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (long long int i_1 = ((((/* implicit */long long int) var_11)) - (1341236345LL))/*0*/; i_1 < 20LL/*20*/; i_1 += ((((/* implicit */long long int) -1374127463)) + (1374127466LL))/*3*/) 
        {
            for (unsigned char i_2 = ((/* implicit */int) ((/* implicit */unsigned char) arr_4 [i_0] [i_0]))/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) + (17))/*19*/; i_2 += (unsigned char)3/*3*/) 
            {
                for (signed char i_3 = (signed char)0/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */signed char) var_6))) + (36))/*20*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) max((max((((/* implicit */int) (_Bool)1)), (-70686218))), ((-(((arr_6 [i_2] [i_2] [(unsigned char)6] [i_1]) ? (((/* implicit */int) arr_6 [3U] [3U] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))))))))) + (2))/*3*/) 
                {
                    {
                        if (((/* implicit */_Bool) var_14))
                        {
                            arr_10 [(signed char)4] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((int) ((arr_0 [i_2 - 1]) >> (((arr_0 [i_2 + 1]) - (7057301052501987279ULL))))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((65573), (((/* implicit */int) ((signed char) (_Bool)1))))))));
                            arr_11 [12U] [(unsigned short)5] [i_2] [i_2] = ((/* implicit */int) min((((((var_13) ? (9ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(signed char)1] [i_2] [i_3] [i_3])))) << ((((+(((/* implicit */int) (unsigned short)17760)))) - (17719))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)59)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47766))))))));
                        }

                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_2 - 1] [i_2]), (var_7)))) ? (min((((/* implicit */unsigned long long int) ((arr_9 [i_0] [(unsigned char)17] [i_0] [i_0] [15] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_3])))))), (((((/* implicit */_Bool) (signed char)-54)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    var_19 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_11)))));
}
