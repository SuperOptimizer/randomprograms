/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 382843263
Invocation: ./yarpgen --std=c -o out/128
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
void test(long long int var_0, signed char var_1, unsigned short var_2, long long int var_3, long long int var_4, signed char var_5, unsigned int var_6, unsigned char var_7, signed char var_8, long long int var_9, unsigned long long int var_10, unsigned long long int var_11, signed char var_12, unsigned long long int var_13, unsigned long long int var_14, long long int var_15, signed char var_16, int zero) {
    var_17 = ((/* implicit */int) var_11);
    if (((/* implicit */_Bool) var_6))
    {
        /* LoopSeq 2 */
        for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (54))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (40))/*15*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_14))) - (163))/*1*/) 
        {
            arr_2 [i_0] = ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
            arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */long long int) ((int) var_8))) : ((-(var_3)))));
            arr_4 [i_0] = ((/* implicit */unsigned char) var_16);
        }
        for (int i_1 = 0/*0*/; i_1 < ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) + (12))/*12*/; i_1 += ((((/* implicit */int) var_3)) + (189648841))/*1*/) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0/*0*/; i_2 < ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_6)))) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))) + (1086772592))/*12*/; i_2 += 4/*4*/) 
            {
                if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (var_10))))
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((long long int) var_8)) : ((~(var_0))))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41938)) ? (((/* implicit */int) (short)11321)) : (((/* implicit */int) (unsigned short)54291))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) var_3))));
                }

                arr_11 [i_2] = ((/* implicit */signed char) var_4);
            }
            var_21 += ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_11))))), ((~((~(((/* implicit */int) var_8))))))));
            /* LoopSeq 2 */
            for (int i_3 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) < (max((((/* implicit */unsigned long long int) var_1)), (var_11)))))) - (1))/*0*/; i_3 < ((((/* implicit */int) max((min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_16))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) - (947898525))/*12*/; i_3 += ((((/* implicit */int) var_10)) + (1086772582))/*2*/) 
            {
                /* LoopNest 3 */
                for (short i_4 = ((((/* implicit */int) ((/* implicit */short) var_1))) + (13))/*0*/; i_4 < ((((/* implicit */int) ((/* implicit */short) var_1))) + (25))/*12*/; i_4 += (short)3/*3*/) 
                {
                    for (unsigned int i_5 = ((max((((unsigned int) var_5)), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))))) - (55U))/*0*/; i_5 < ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_4)))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)35)))) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (unsigned short)31391)))))))) - (1543849624U))/*12*/; i_5 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) == (var_4))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))))) + (4U))/*4*/) 
                    {
                        for (unsigned short i_6 = ((((/* implicit */int) ((/* implicit */unsigned short) ((long long int) var_13)))) - (37540))/*0*/; i_6 < ((((/* implicit */int) ((/* implicit */unsigned short) var_13))) - (37528))/*12*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned short) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 5636959648072947918LL))))))))) + (3))/*4*/) 
                        {
                            {
                                var_22 = ((unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_7)))))));
                                arr_24 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (~(var_0)))) ? ((~(var_14))) : (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) var_6)))));
                                arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12320863212787339557ULL)) ? (5636959648072947913LL) : (5636959648072947918LL)));
                                arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = ((((/* implicit */int) ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))), (min((-2128792308472113051LL), (((/* implicit */long long int) (signed char)-120)))))))) - (101))/*0*/; i_7 < (signed char)12/*12*/; i_7 += ((((/* implicit */int) ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) var_11)))))))) + (1))/*1*/) 
                {
                    for (unsigned long long int i_8 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)9))))/*0*/; i_8 < ((max((((((/* implicit */_Bool) (~(var_10)))) ? (max((((/* implicit */unsigned long long int) var_7)), (var_14))) : (((/* implicit */unsigned long long int) (~(var_0)))))), (((/* implicit */unsigned long long int) ((unsigned short) var_10))))) - (7758203065593054872ULL))/*12*/; i_8 += ((((/* implicit */unsigned long long int) var_0)) - (13322250345108805554ULL))/*3*/) 
                    {
                        for (signed char i_9 = (signed char)1/*1*/; i_9 < (signed char)11/*11*/; i_9 += (signed char)1/*1*/) 
                        {
                            {
                                arr_37 [i_8] [11LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
                                arr_38 [i_8] [i_8] [i_8] [i_8] [i_8] &= ((((/* implicit */_Bool) min((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))) ? ((-(min((var_15), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-27648)) + (2147483647))) >> (((((/* implicit */int) (short)-20343)) + (20344)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))), (((int) var_14))));
            }
            for (int i_10 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned long long int) var_1)), (var_13)))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_1))))))) + (44))/*2*/; i_10 < ((((/* implicit */int) var_5)) - (44))/*11*/; i_10 += ((((/* implicit */int) var_11)) - (2079681661))/*1*/) 
            {
                var_24 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_14))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                arr_42 [i_1] [i_10] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
            }
        }
        var_25 = ((/* implicit */short) min(((+(var_11))), (((/* implicit */unsigned long long int) ((unsigned short) var_10)))));
    }

    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_9)), (var_10)));
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_15))));
}
