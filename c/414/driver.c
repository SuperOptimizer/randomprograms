#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned int var_1 = 1865136927U;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)167;
unsigned char var_4 = (unsigned char)26;
unsigned short var_5 = (unsigned short)49027;
int var_6 = 1322351267;
int var_7 = -2052557672;
unsigned char var_8 = (unsigned char)73;
unsigned char var_9 = (unsigned char)175;
unsigned long long int var_10 = 3652997675654511301ULL;
long long int var_11 = -2891624547532451434LL;
unsigned int var_12 = 3698197195U;
long long int var_13 = 746044374192065389LL;
unsigned short var_14 = (unsigned short)2744;
int zero = 0;
int var_15 = -1333141686;
signed char var_16 = (signed char)51;
int var_17 = 261851292;
int var_18 = 57255914;
unsigned char var_19 = (unsigned char)244;
unsigned int var_20 = 3773593438U;
unsigned short var_21 = (unsigned short)57282;
unsigned long long int var_22 = 14523545401928549785ULL;
long long int var_23 = -8025293223102913450LL;
long long int var_24 = -4514461065126489448LL;
int var_25 = -751891177;
unsigned long long int var_26 = 12793280788558072050ULL;
unsigned long long int var_27 = 9292214536170167453ULL;
signed char var_28 = (signed char)117;
unsigned long long int var_29 = 11927556592732417063ULL;
long long int var_30 = 6818153190904222720LL;
unsigned long long int var_31 = 6751365372961640063ULL;
unsigned long long int var_32 = 11803852715646156099ULL;
unsigned char var_33 = (unsigned char)183;
unsigned char var_34 = (unsigned char)150;
long long int var_35 = -6252091160405367014LL;
signed char var_36 = (signed char)-16;
long long int var_37 = 4454509696316446572LL;
_Bool var_38 = (_Bool)0;
_Bool var_39 = (_Bool)0;
unsigned long long int var_40 = 13508756292236245453ULL;
unsigned long long int var_41 = 9586114933862367861ULL;
long long int var_42 = -9033632875886635945LL;
_Bool var_43 = (_Bool)1;
unsigned int var_44 = 2446540048U;
int var_45 = 598911863;
int var_46 = -1296326781;
unsigned int var_47 = 2579639586U;
unsigned short var_48 = (unsigned short)26242;
signed char var_49 = (signed char)33;
_Bool var_50 = (_Bool)1;
unsigned char var_51 = (unsigned char)64;
unsigned int arr_0 [24] ;
unsigned short arr_1 [24] ;
_Bool arr_2 [24] [24] ;
int arr_3 [24] [24] ;
long long int arr_4 [24] ;
_Bool arr_5 [24] ;
signed char arr_6 [24] [24] [24] ;
long long int arr_7 [24] ;
long long int arr_8 [24] [24] ;
unsigned char arr_9 [24] ;
int arr_11 [18] ;
long long int arr_12 [18] ;
unsigned short arr_13 [18] ;
long long int arr_15 [18] [18] [18] ;
int arr_16 [18] [18] ;
_Bool arr_17 [18] [18] ;
unsigned char arr_19 [18] ;
_Bool arr_20 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_21 [18] [18] ;
int arr_23 [18] [18] [18] ;
_Bool arr_27 [19] [19] ;
int arr_33 [24] ;
int arr_40 [24] [24] [24] [24] [24] ;
int arr_41 [24] [24] [24] [24] [24] ;
signed char arr_44 [24] [24] [24] ;
long long int arr_47 [24] [24] [24] ;
short arr_51 [24] [24] [24] ;
unsigned char arr_53 [24] [24] ;
unsigned short arr_56 [24] [24] [24] ;
unsigned short arr_59 [24] [24] [24] [24] [24] ;
signed char arr_60 [24] [24] [24] ;
unsigned short arr_87 [12] [12] [12] [12] ;
unsigned short arr_89 [12] [12] [12] ;
unsigned short arr_94 [12] [12] ;
signed char arr_10 [24] [24] [24] [24] ;
unsigned short arr_18 [18] [18] [18] ;
long long int arr_24 [18] [18] ;
unsigned long long int arr_29 [19] ;
int arr_42 [24] [24] [24] [24] [24] [24] [24] ;
int arr_50 [24] [24] [24] [24] ;
unsigned char arr_62 [24] [24] ;
long long int arr_69 [24] ;
long long int arr_70 [24] ;
long long int arr_79 [12] ;
unsigned short arr_91 [12] ;
_Bool arr_98 [12] [12] [12] ;
int arr_99 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3475914410U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 63310594;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -7325300058625637744LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -4614374918222554562LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -5502192454969556016LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -1991839292;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -4866497720552567969LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned short)5723;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -8072955346476715056LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 957342883;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 1911206423U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -464663424 : 1664715073;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = 1069063430;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = -803246680;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = 993198210;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = -362078747259110218LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (short)-6862;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_53 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (unsigned short)8689;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)54232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_87 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37636;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_89 [i_0] [i_1] [i_2] = (unsigned short)15414;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_94 [i_0] [i_1] = (unsigned short)33863;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)6999;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? -2943590922330880418LL : -5052299505014408605LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 3484797261548179885ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -39460711;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = -44403261;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_62 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_69 [i_0] = 9040702275963730254LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_70 [i_0] = -8074294337315038243LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_79 [i_0] = 295586178567960752LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_91 [i_0] = (unsigned short)35421;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_98 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_99 [i_0] = 1038961144;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_79 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_98 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_99 [i_0] );
}
void test(unsigned char var_0, unsigned int var_1, _Bool var_2, unsigned char var_3, unsigned char var_4, unsigned short var_5, int var_6, int var_7, unsigned char var_8, unsigned char var_9, unsigned long long int var_10, long long int var_11, unsigned int var_12, long long int var_13, unsigned short var_14, int zero, unsigned int arr_0 [24] , unsigned short arr_1 [24] , _Bool arr_2 [24] [24] , int arr_3 [24] [24] , long long int arr_4 [24] , _Bool arr_5 [24] , signed char arr_6 [24] [24] [24] , long long int arr_7 [24] , long long int arr_8 [24] [24] , unsigned char arr_9 [24] , int arr_11 [18] , long long int arr_12 [18] , unsigned short arr_13 [18] , long long int arr_15 [18] [18] [18] , int arr_16 [18] [18] , _Bool arr_17 [18] [18] , unsigned char arr_19 [18] , _Bool arr_20 [18] [18] [18] [18] [18] [18] , unsigned int arr_21 [18] [18] , int arr_23 [18] [18] [18] , _Bool arr_27 [19] [19] , int arr_33 [24] , int arr_40 [24] [24] [24] [24] [24] , int arr_41 [24] [24] [24] [24] [24] , signed char arr_44 [24] [24] [24] , long long int arr_47 [24] [24] [24] , short arr_51 [24] [24] [24] , unsigned char arr_53 [24] [24] , unsigned short arr_56 [24] [24] [24] , unsigned short arr_59 [24] [24] [24] [24] [24] , signed char arr_60 [24] [24] [24] , unsigned short arr_87 [12] [12] [12] [12] , unsigned short arr_89 [12] [12] [12] , unsigned short arr_94 [12] [12] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_11 , arr_12 , arr_13 , arr_15 , arr_16 , arr_17 , arr_19 , arr_20 , arr_21 , arr_23 , arr_27 , arr_33 , arr_40 , arr_41 , arr_44 , arr_47 , arr_51 , arr_53 , arr_56 , arr_59 , arr_60 , arr_87 , arr_89 , arr_94 );
    checksum();
    printf("%llu\n", seed);
}
