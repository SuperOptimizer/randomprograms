#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14212688176721589593ULL;
unsigned char var_2 = (unsigned char)109;
_Bool var_3 = (_Bool)1;
int var_4 = -1607528407;
long long int var_5 = 8624456204998516051LL;
long long int var_6 = 5571137736342486542LL;
short var_7 = (short)5931;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 10490232528031178020ULL;
unsigned short var_11 = (unsigned short)39104;
int zero = 0;
unsigned long long int var_12 = 15116017314596708377ULL;
unsigned long long int var_13 = 13599777888601723194ULL;
int var_14 = -2022298913;
signed char var_15 = (signed char)-4;
unsigned int var_16 = 3968124767U;
unsigned short var_17 = (unsigned short)47143;
unsigned char var_18 = (unsigned char)201;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-7006;
unsigned short var_21 = (unsigned short)177;
int var_22 = 1693870684;
int var_23 = -1651687781;
signed char var_24 = (signed char)-29;
_Bool var_25 = (_Bool)1;
int var_26 = -865149516;
long long int var_27 = 8548673146015093704LL;
unsigned char arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
int arr_2 [23] ;
unsigned short arr_4 [23] ;
short arr_5 [23] ;
long long int arr_6 [23] ;
unsigned char arr_7 [23] [23] ;
unsigned char arr_8 [23] ;
long long int arr_13 [16] [16] ;
unsigned char arr_15 [16] ;
int arr_3 [23] [23] ;
unsigned long long int arr_11 [23] [23] ;
long long int arr_16 [16] [16] ;
unsigned char arr_17 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)44982;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -541448502;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)48424;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)582;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 7861216923123420889LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 4191013868035236758LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 84716202;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 10435557080460963614ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = -1442202490098199429LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)251;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test(unsigned long long int var_0, unsigned char var_2, _Bool var_3, int var_4, long long int var_5, long long int var_6, short var_7, _Bool var_9, unsigned long long int var_10, unsigned short var_11, int zero, unsigned char arr_0 [23] [23] , unsigned short arr_1 [23] , int arr_2 [23] , unsigned short arr_4 [23] , short arr_5 [23] , long long int arr_6 [23] , unsigned char arr_7 [23] [23] , unsigned char arr_8 [23] , long long int arr_13 [16] [16] , unsigned char arr_15 [16] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_13 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
