/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2264774354
Invocation: ./yarpgen --std=c -o out/150
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
void test(unsigned short var_0, unsigned char var_1, unsigned char var_2, unsigned char var_3, unsigned short var_4, signed char var_5, unsigned char var_7, unsigned char var_8, unsigned char var_9, unsigned char var_11, unsigned short var_16, signed char var_18, int zero, unsigned char arr_0 [10] [10] , unsigned char arr_2 [10] [10] , signed char arr_3 [10] [10] [10] , signed char arr_8 [21] , signed char arr_16 [21] [21] [21] [21] ) {
    /* LoopNest 2 */
    for (signed char i_0 = ((((/* implicit */int) ((/* implicit */signed char) var_4))) + (56))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) var_3))) - (8))/*10*/; i_0 += (signed char)1/*1*/) 
    {
        for (unsigned short i_1 = (unsigned short)1/*1*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) var_3))) - (11))/*7*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) - (18))/*1*/) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 3])) * (((/* implicit */int) var_0))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_0] [i_1])) ? ((+(((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((signed char) max((var_8), (((/* implicit */unsigned char) arr_3 [i_1 + 1] [i_0] [i_0])))))) : (((/* implicit */int) var_3))));
                if (((/* implicit */_Bool) min(((unsigned char)96), ((unsigned char)1))))
                {
                    var_20 = ((/* implicit */unsigned short) arr_2 [(unsigned char)8] [i_1]);
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_0 [i_0] [(signed char)8])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)4] [i_0])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) max(((signed char)-107), ((signed char)-9)))))))))));
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)194)) < (((/* implicit */int) arr_2 [i_1 + 3] [i_1]))));
                }

                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (signed char)14)) : (((((/* implicit */_Bool) max(((unsigned short)34022), ((unsigned short)57393)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)26198)))) : (((/* implicit */int) arr_0 [i_1] [i_1 + 1]))))));
            }
        } 
    } 
    if (((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((unsigned short)57393), (((/* implicit */unsigned short) (signed char)-3))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)234)))) : (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)14)))))), (((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)63)))) ? (((/* implicit */int) ((unsigned char) var_16))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))
    {
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)57))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max(((~(((/* implicit */int) ((((/* implicit */int) (signed char)106)) < (((/* implicit */int) (unsigned short)40892))))))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_16)))))))));
    }
    else
    {
        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (max((((/* implicit */unsigned short) (unsigned char)156)), ((unsigned short)60151))))))));
        var_25 = var_2;
    }

    /* LoopNest 3 */
    for (signed char i_2 = ((((/* implicit */int) min((var_5), ((signed char)(-127 - 1))))) + (128))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */signed char) var_1))) + (34))/*21*/; i_2 += (signed char)1/*1*/) 
    {
        for (unsigned char i_3 = (unsigned char)0/*0*/; i_3 < (unsigned char)21/*21*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned char) var_18))) - (24))/*1*/) 
        {
            for (unsigned short i_4 = (unsigned short)0/*0*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned short) var_18))) - (4))/*21*/; i_4 += (unsigned short)1/*1*/) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) var_18);
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_4]), ((signed char)14)))) ? ((+(((/* implicit */int) arr_16 [i_4] [i_3] [i_4] [(unsigned char)20])))) : ((-(((/* implicit */int) arr_8 [i_2]))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (unsigned short)40893)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned char)51))))));
}
