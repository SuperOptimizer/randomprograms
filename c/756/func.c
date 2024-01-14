/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2277038768
Invocation: ./yarpgen --std=c -o out/756
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
void test(int var_3, signed char var_7, long long int var_10, unsigned int var_11, unsigned long long int var_18, int var_19, int zero, int arr_0 [14] [14] , unsigned int arr_6 [17] , unsigned int arr_7 [17] ) {
    /* LoopNest 2 */
    for (int i_0 = ((((/* implicit */int) var_18)) + (1839030540))/*0*/; i_0 < ((((/* implicit */int) min(((!(((/* implicit */_Bool) ((13ULL) / (((/* implicit */unsigned long long int) 1073741823U))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (_Bool)1))))) <= (18446744073709551607ULL)))))) + (13))/*14*/; i_0 += 4/*4*/) 
    {
        for (unsigned long long int i_1 = 1ULL/*1*/; i_1 < ((((/* implicit */unsigned long long int) var_10)) - (16716555684813180325ULL))/*13*/; i_1 += 1ULL/*1*/) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(arr_0 [i_1 - 1] [i_1 + 1])))) & (max((1131180660U), (2982005548U)))));
                var_20 = (+(min((min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL))), (0ULL))));
            }
        } 
    } 
    var_21 = max((((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)-109)))), (((3163786646U) < (((/* implicit */unsigned int) 1934765830))))))), ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-31)) == (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_3)) - (348610404ULL))/*1*/; i_2 < ((((/* implicit */unsigned long long int) var_11)) - (2280504426ULL))/*15*/; i_2 += 1ULL/*1*/) 
    {
        var_22 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((short) var_19))), (min((arr_7 [i_2]), (arr_6 [i_2]))))), (((/* implicit */unsigned int) ((4253555530893955895ULL) <= (((/* implicit */unsigned long long int) 1131180645U)))))));
        arr_8 [i_2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((2878011153277235756ULL) > (((/* implicit */unsigned long long int) 1131180645U)))))))));
    }
}
