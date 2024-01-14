/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 4001436525
Invocation: ./yarpgen --std=c -o out/274
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
void test(short var_0, unsigned char var_2, long long int var_3, _Bool var_5, int var_7, short var_8, unsigned char var_9, int var_10, unsigned int var_12, unsigned char var_15, int var_17, int zero, int arr_0 [24] , unsigned char arr_1 [24] , short arr_2 [24] [24] , _Bool arr_3 [24] [24] , int arr_4 [24] [24] [24] [24] , unsigned long long int arr_5 [24] [24] , long long int arr_9 [16] , _Bool arr_10 [16] [16] , unsigned char arr_14 [16] [16] [16] ) {
    var_19 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_2))) - (1))/*0*/; i_0 < (_Bool)1/*1*/; i_0 += (_Bool)1/*1*/) 
    {
        for (int i_1 = 3/*3*/; i_1 < 23/*23*/; i_1 += ((((/* implicit */int) var_8)) + (965))/*3*/) 
        {
            for (long long int i_2 = ((((/* implicit */long long int) var_10)) - (491499685LL))/*0*/; i_2 < ((var_3) + (2512088215432061512LL))/*24*/; i_2 += 3LL/*3*/) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_5)) % (((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 1])))), ((+(((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 1]))))));
                    var_20 = ((/* implicit */_Bool) min((((arr_5 [i_1] [i_1]) * ((+(arr_5 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) arr_3 [(unsigned char)0] [i_1 + 1]))), (arr_2 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 1 */
    for (short i_3 = (short)3/*3*/; i_3 < ((((/* implicit */int) ((/* implicit */short) var_7))) + (8971))/*13*/; i_3 += (short)1/*1*/) 
    {
        if (arr_3 [i_3] [i_3 - 1])
        {
            arr_11 [i_3] [i_3] = ((/* implicit */short) arr_3 [i_3] [i_3]);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((int) arr_2 [i_3] [i_3]))), (min((((/* implicit */long long int) arr_4 [i_3] [i_3] [i_3 - 1] [i_3])), (arr_9 [i_3])))))))))));
        }
        else
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_3 + 2])), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25786))) / (arr_5 [i_3] [(_Bool)1])))) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_3 - 3] [i_3])))))))));
            arr_12 [i_3] [i_3] = var_0;
        }

        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8160))));
        var_24 = (((~(((/* implicit */int) var_5)))) ^ (((/* implicit */int) arr_1 [i_3])));
        /* LoopNest 2 */
        for (short i_4 = (short)1/*1*/; i_4 < ((((/* implicit */int) ((/* implicit */short) var_9))) - (226))/*15*/; i_4 += (short)1/*1*/) 
        {
            for (int i_5 = ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_4]))) | (arr_9 [i_4]))) | (((/* implicit */long long int) arr_0 [i_3]))))) + (1342852643))/*1*/; i_5 < ((((/* implicit */int) var_2)) - (131))/*12*/; i_5 += ((var_17) - (1337183585))/*4*/) 
            {
                {
                    arr_18 [(unsigned short)14] [(unsigned char)12] [(unsigned short)14] [(unsigned short)14] &= ((/* implicit */unsigned char) arr_3 [i_3] [i_3]);
                    var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_5 [i_4 - 1] [2]), (arr_5 [i_4 - 1] [22]))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) var_3);
}
