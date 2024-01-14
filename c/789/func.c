/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1610104813
Invocation: ./yarpgen --std=c -o out/789
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
void test(int var_0, short var_1, unsigned char var_2, unsigned int var_3, unsigned short var_4, unsigned short var_5, int var_6, _Bool var_7, short var_8, unsigned int var_9, int zero, unsigned long long int arr_2 [17] , int arr_6 [17] [17] , unsigned short arr_7 [17] [17] [17] , _Bool arr_8 [17] [17] [17] , long long int arr_9 [17] [17] [17] [17] [17] [17] , long long int arr_10 [17] [17] [17] [17] , unsigned long long int arr_11 [18] , short arr_14 [18] , unsigned long long int arr_15 [18] , unsigned long long int arr_20 [18] , unsigned short arr_22 [18] [18] [18] , short arr_23 [18] [18] [18] [18] , long long int arr_27 [18] [18] [18] [18] [18] , int arr_28 [18] [18] [18] [18] [18] , unsigned int arr_31 [18] [18] ) {
    var_10 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32664)) >= (((/* implicit */int) (unsigned short)32664))));
    var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (15147637394393548642ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (536870912U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1292189842U)) ? (((/* implicit */int) (unsigned short)51585)) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) var_0)), (3299106679316002972ULL))) : (max((((/* implicit */unsigned long long int) (unsigned short)32872)), (0ULL))))) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2LL/*2*/; i_0 < 16LL/*16*/; i_0 += 1LL/*1*/) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_2 [4ULL]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = (unsigned char)0/*0*/; i_1 < (unsigned char)17/*17*/; i_1 += (unsigned char)3/*3*/) 
        {
            for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < 17ULL/*17*/; i_2 += ((((/* implicit */unsigned long long int) var_9)) - (3922062882ULL))/*1*/) 
            {
                for (_Bool i_3 = (_Bool)0/*0*/; i_3 < (_Bool)1/*1*/; i_3 += (_Bool)1/*1*/) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                        var_14 += ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [14LL] [i_3]);
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_7 [i_3] [(unsigned short)12] [i_0]))));
                    }
                } 
            } 
        } 
        if (((/* implicit */_Bool) (unsigned short)1021))
        {
            var_16 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [6])) ? (arr_10 [i_0] [i_0] [6U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [8] [i_0]))))));
            if ((!(((var_6) != (((/* implicit */int) (unsigned short)32847))))))
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned long long int) arr_9 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [(signed char)6])))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(1895875676U)))) ? (((((/* implicit */_Bool) (unsigned short)32701)) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [12U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32664))))) : (((/* implicit */long long int) (~((-2147483647 - 1))))))))));
            }

        }

    }
    for (signed char i_4 = ((((/* implicit */int) ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (3299106679316002972ULL))))))), (var_4))))) + (1))/*1*/; i_4 < (signed char)17/*17*/; i_4 += (signed char)3/*3*/) 
    {
        var_19 &= ((/* implicit */signed char) var_1);
        /* LoopNest 3 */
        for (unsigned int i_5 = ((((/* implicit */unsigned int) var_1)) - (5743U))/*0*/; i_5 < ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1509634724)))) ? ((+(((/* implicit */int) (unsigned short)32855)))) : ((~(((/* implicit */int) (unsigned char)121))))))) ? (min((arr_11 [i_4]), (((/* implicit */unsigned long long int) 4133190019U)))) : (15147637394393548642ULL)))) - (4133190001U))/*18*/; i_5 += (((~(var_3))) - (1296095565U))/*2*/) 
        {
            for (unsigned short i_6 = ((((/* implicit */int) ((/* implicit */unsigned short) 1665328520))) - (58760))/*0*/; i_6 < (unsigned short)18/*18*/; i_6 += ((((/* implicit */int) ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 202854986U)) ? (2429991314U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_5])) ^ (((/* implicit */int) var_7))))))))))) - (47504))/*2*/) 
            {
                for (unsigned short i_7 = (unsigned short)2/*2*/; i_7 < (unsigned short)14/*14*/; i_7 += (unsigned short)4/*4*/) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = (unsigned short)0/*0*/; i_8 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(7708951818134217215ULL)))) ? (350039283892501797ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)32688)) ? (((/* implicit */int) (unsigned short)21357)) : (((/* implicit */int) (unsigned short)18476))))))))))) - (15635))/*18*/; i_8 += ((((/* implicit */int) ((/* implicit */unsigned short) 15147637394393548644ULL))) - (18274))/*2*/) 
                        {
                            var_20 |= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)34540)), (((((((/* implicit */_Bool) arr_20 [i_7 - 2])) ? (((/* implicit */int) arr_23 [i_8] [i_7 + 4] [i_6] [i_4])) : (((/* implicit */int) arr_22 [i_8] [i_4] [i_4])))) % (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) (signed char)-121))))))));
                            var_21 = ((/* implicit */int) max((var_21), (max((min(((-(1665328515))), (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) ((short) (short)6748))) ? (((/* implicit */int) max(((short)-26063), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) max(((short)31452), (((/* implicit */short) (signed char)-125)))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = ((((/* implicit */int) ((/* implicit */_Bool) 4294967295U))) - (1))/*0*/; i_9 < (_Bool)1/*1*/; i_9 += (_Bool)1/*1*/) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (-(arr_28 [i_9] [i_7 + 4] [i_6] [i_5] [i_4])));
                            var_23 += (!(((/* implicit */_Bool) 815182191U)));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) 18446744072635809792ULL))))))));
                            var_25 *= ((/* implicit */_Bool) arr_14 [i_7]);
                        }
                        var_26 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) min(((signed char)-73), ((signed char)-73))))) >= (((((/* implicit */_Bool) -1475291883)) ? (((/* implicit */unsigned long long int) 1665328520)) : (arr_15 [i_7 + 4])))));
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */unsigned int) ((unsigned short) arr_31 [12ULL] [12ULL]));
    }
    if (((/* implicit */_Bool) (~(-265860940))))
    {
        var_28 &= min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15147637394393548626ULL)) ? (((/* implicit */int) var_7)) : (var_0)))), (var_9))));
        var_29 = ((/* implicit */unsigned int) min((var_29), ((-(((unsigned int) (-(((/* implicit */int) var_4)))))))));
    }
    else
    {
        var_30 = ((/* implicit */int) max((var_30), ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
        var_31 = ((/* implicit */int) max((var_31), ((-(((/* implicit */int) var_2))))));
    }

}
