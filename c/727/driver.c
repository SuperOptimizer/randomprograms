#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4264439814U;
unsigned int var_1 = 867909982U;
short var_2 = (short)-7116;
unsigned long long int var_3 = 561084733439570071ULL;
short var_4 = (short)4219;
signed char var_5 = (signed char)101;
short var_6 = (short)-626;
signed char var_7 = (signed char)11;
short var_8 = (short)12480;
unsigned short var_10 = (unsigned short)32369;
unsigned long long int var_11 = 15975463609647310804ULL;
short var_12 = (short)10949;
short var_13 = (short)18175;
short var_14 = (short)-26865;
long long int var_15 = -8926105797304941550LL;
int zero = 0;
unsigned char var_16 = (unsigned char)143;
long long int var_17 = -4651262412333386520LL;
long long int var_18 = 6148437655554702519LL;
unsigned char var_19 = (unsigned char)146;
long long int var_20 = -2831093971549535058LL;
long long int var_21 = -7367657847823553931LL;
unsigned int var_22 = 2803645488U;
long long int var_23 = -8201927153166318578LL;
unsigned int var_24 = 2556448956U;
unsigned int var_25 = 3919611486U;
long long int var_26 = -596151632097957767LL;
signed char var_27 = (signed char)-1;
short var_28 = (short)11939;
long long int var_29 = 5015987319075494380LL;
unsigned char var_30 = (unsigned char)236;
long long int var_31 = 8643167762321232530LL;
signed char var_32 = (signed char)-22;
unsigned long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_5 [23] [23] [23] ;
short arr_6 [23] ;
short arr_7 [23] [23] [23] [23] ;
short arr_8 [23] [23] [23] ;
unsigned char arr_9 [23] [23] [23] ;
signed char arr_10 [23] [23] [23] [23] ;
unsigned int arr_11 [23] [23] [23] [23] [23] ;
unsigned int arr_12 [23] [23] [23] [23] ;
unsigned short arr_13 [23] [23] [23] [23] ;
signed char arr_15 [23] [23] [23] [23] [23] [23] ;
signed char arr_19 [23] [23] [23] ;
long long int arr_20 [23] [23] [23] ;
short arr_21 [23] [23] ;
unsigned char arr_23 [23] [23] ;
unsigned long long int arr_25 [23] [23] [23] [23] ;
unsigned long long int arr_4 [23] ;
signed char arr_16 [23] ;
signed char arr_27 [23] [23] ;
short arr_33 [10] [10] ;
signed char arr_41 [10] [10] [10] [10] [10] ;
signed char arr_42 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 15894211516708612959ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 6450727353439874099LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1632664388U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7967463871095549251ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)12008;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-31977 : (short)-11654;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29971 : (short)3771;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)5 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1734770343U : 1739083136U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 726787950U : 2763113643U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)26925 : (unsigned short)30541;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 2719130475914944829LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (short)12610;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 11696082500441559228ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 10588341417546544602ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)13155 : (short)-13239;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)88 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)-42;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test(unsigned int var_0, unsigned int var_1, short var_2, unsigned long long int var_3, short var_4, signed char var_5, short var_6, signed char var_7, short var_8, unsigned short var_10, unsigned long long int var_11, short var_12, short var_13, short var_14, long long int var_15, int zero, unsigned long long int arr_0 [23] [23] , long long int arr_1 [23] , unsigned int arr_2 [23] , unsigned long long int arr_3 [23] , unsigned char arr_5 [23] [23] [23] , short arr_6 [23] , short arr_7 [23] [23] [23] [23] , short arr_8 [23] [23] [23] , unsigned char arr_9 [23] [23] [23] , signed char arr_10 [23] [23] [23] [23] , unsigned int arr_11 [23] [23] [23] [23] [23] , unsigned int arr_12 [23] [23] [23] [23] , unsigned short arr_13 [23] [23] [23] [23] , signed char arr_15 [23] [23] [23] [23] [23] [23] , signed char arr_19 [23] [23] [23] , long long int arr_20 [23] [23] [23] , short arr_21 [23] [23] , unsigned char arr_23 [23] [23] , unsigned long long int arr_25 [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_15 , arr_19 , arr_20 , arr_21 , arr_23 , arr_25 );
    checksum();
    printf("%llu\n", seed);
}
