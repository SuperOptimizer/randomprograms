/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 3355177101
Invocation: ./yarpgen --std=c -o out/786
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
void test(short var_0, unsigned long long int var_1, _Bool var_2, int var_3, unsigned char var_4, unsigned short var_5, unsigned char var_6, unsigned short var_7, unsigned char var_8, _Bool var_9, int zero, _Bool arr_0 [11] , unsigned long long int arr_1 [11] , _Bool arr_4 [11] , short arr_5 [11] , int arr_6 [11] , short arr_7 [25] , short arr_8 [25] , int arr_10 [15] , signed char arr_12 [15] , int arr_14 [15] [15] [15] , unsigned short arr_18 [15] [15] ) {
    /* LoopSeq 4 */
    for (signed char i_0 = ((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) var_5))) - (20))/*9*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) var_0))) - (96))/*2*/) 
    {
        if (((/* implicit */_Bool) var_8))
        {
            var_10 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [(signed char)6]), (((/* implicit */unsigned long long int) var_7))))) ? ((((~(arr_1 [(signed char)8]))) * (((((/* implicit */_Bool) var_4)) ? (arr_1 [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_1)))) && (((/* implicit */_Bool) arr_1 [(signed char)0]))))))));
            var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) - (((((/* implicit */int) var_5)) >> (((/* implicit */int) arr_0 [i_0]))))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6]))) : (arr_1 [i_0])))))));
            var_12 = ((/* implicit */int) ((arr_1 [i_0]) | (min((arr_1 [i_0]), (arr_1 [i_0])))));
            arr_2 [(_Bool)1] &= ((arr_1 [4]) == ((~(max((((/* implicit */unsigned long long int) var_5)), (arr_1 [10]))))));
        }

        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0 + 2])), ((unsigned short)0)))) && (((((/* implicit */int) (unsigned char)198)) < (3670016))))))));
        arr_3 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((arr_1 [i_0]) >> (((arr_1 [i_0]) - (3445353144107277043ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */signed char) ((((arr_1 [i_0]) >> (((((arr_1 [i_0]) - (3445353144107277043ULL))) - (11059285377638622062ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
    }
    for (signed char i_1 = (signed char)0/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */signed char) var_8))) + (35))/*11*/; i_1 += (signed char)2/*2*/) 
    {
        if (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((-(arr_6 [(signed char)8]))), (((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) var_5))))))) % (((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_6 [i_1])))) ? ((-(arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (arr_0 [i_1]))))))))))
        {
            var_14 |= ((/* implicit */unsigned char) (+(arr_6 [i_1])));
            var_15 -= ((/* implicit */unsigned char) arr_4 [i_1]);
        }

        var_16 = ((/* implicit */unsigned long long int) max((arr_4 [i_1]), (min((arr_4 [i_1]), (var_2)))));
    }
    for (unsigned char i_2 = (unsigned char)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (139))/*25*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) (+((~(((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))))))) - (222))/*4*/) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_7 [i_2]))));
        var_18 &= ((/* implicit */signed char) arr_7 [i_2]);
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */int) max((arr_7 [17ULL]), (((/* implicit */short) (_Bool)1))))) + (((/* implicit */int) max((arr_8 [i_2]), (arr_7 [i_2])))))), ((+(((/* implicit */int) ((unsigned char) var_7)))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (((unsigned long long int) arr_7 [i_2]))));
    }
    for (unsigned char i_3 = ((((/* implicit */int) ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((((/* implicit */int) (signed char)-61)) % (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) var_9))))) | (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((/* implicit */int) var_2)))))))) - (193))/*2*/; i_3 < (unsigned char)13/*13*/; i_3 += (unsigned char)4/*4*/) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) 12759375519009952444ULL))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0U/*0*/; i_4 < ((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_10 [i_3 + 1]))))))) + (15U))/*15*/; i_4 += 4U/*4*/) 
        {
            for (long long int i_5 = ((((/* implicit */long long int) var_4)) - (100LL))/*0*/; i_5 < 15LL/*15*/; i_5 += ((((/* implicit */long long int) var_1)) - (6311938743195689823LL))/*4*/) 
            {
                for (long long int i_6 = ((((/* implicit */long long int) var_3)) - (1238165382LL))/*0*/; i_6 < ((((/* implicit */long long int) var_1)) - (6311938743195689812LL))/*15*/; i_6 += ((min((((/* implicit */long long int) min((arr_12 [i_3 - 2]), (arr_12 [i_3 + 1])))), ((+((+(13LL))))))) + (29LL))/*1*/) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_8 [i_3 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 2])))))));
                        var_22 = ((/* implicit */unsigned char) arr_7 [i_3 + 1]);
                    }
                } 
            } 
        } 
        arr_21 [i_3] |= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_8 [i_3 + 1])) + (((/* implicit */int) arr_8 [i_3 + 2])))));
        var_23 = ((/* implicit */unsigned long long int) (~(max((arr_14 [i_3] [i_3 - 1] [i_3 + 1]), (((/* implicit */int) arr_18 [i_3 - 2] [i_3]))))));
    }
    if (((/* implicit */_Bool) var_7))
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (max((min((((/* implicit */unsigned long long int) var_0)), (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        var_25 = ((/* implicit */long long int) var_9);
        var_26 = ((/* implicit */int) ((min((max((var_1), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((var_8), (var_8)))))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (((((/* implicit */int) var_9)) - (var_3))))))));
    }

}
