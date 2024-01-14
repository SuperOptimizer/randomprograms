#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-19224;
unsigned short var_2 = (unsigned short)59999;
long long int var_3 = -5098163636631449088LL;
unsigned int var_5 = 3389111698U;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2622753600U;
unsigned long long int var_13 = 9043563237629766312ULL;
int zero = 0;
short var_14 = (short)27946;
short var_15 = (short)8917;
short var_16 = (short)-19126;
unsigned int var_17 = 3264959057U;
unsigned int var_18 = 140177536U;
long long int var_19 = 804560080057915293LL;
long long int var_20 = 2376276966315480502LL;
long long int var_21 = 1084257795840428101LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 2373808422082143221ULL;
unsigned long long int var_24 = 4020898688767646772ULL;
unsigned long long int var_25 = 2006927022734426712ULL;
unsigned int var_26 = 1502055669U;
short var_27 = (short)-24289;
short arr_1 [23] [23] ;
unsigned short arr_2 [23] [23] ;
short arr_3 [23] ;
short arr_4 [23] [23] ;
int arr_5 [23] ;
_Bool arr_9 [24] [24] ;
unsigned long long int arr_11 [24] [24] ;
unsigned short arr_12 [24] ;
unsigned int arr_8 [23] ;
unsigned char arr_13 [24] [24] ;
long long int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57233 : (unsigned short)63036;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-31859;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-17040;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 678568985;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 5036720723110113952ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned short)64064;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3138516245U : 495056698U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -7384794173103847542LL;
}

void checksum() {
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test(_Bool var_0, short var_1, unsigned short var_2, long long int var_3, unsigned int var_5, _Bool var_6, _Bool var_8, _Bool var_9, unsigned int var_10, unsigned long long int var_13, int zero, short arr_1 [23] [23] , unsigned short arr_2 [23] [23] , short arr_3 [23] , short arr_4 [23] [23] , int arr_5 [23] , _Bool arr_9 [24] [24] , unsigned long long int arr_11 [24] [24] , unsigned short arr_12 [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_13, zero, arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_9 , arr_11 , arr_12 );
    checksum();
    printf("%llu\n", seed);
}
