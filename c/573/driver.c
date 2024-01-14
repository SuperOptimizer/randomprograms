#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1851612644U;
unsigned int var_1 = 586589863U;
long long int var_2 = 2480123251155068166LL;
signed char var_3 = (signed char)29;
int var_4 = -807093186;
unsigned int var_7 = 1496564759U;
int var_8 = 351759858;
unsigned long long int var_9 = 7285201764607273509ULL;
unsigned long long int var_10 = 3130256613797089061ULL;
unsigned char var_11 = (unsigned char)147;
long long int var_12 = 6649098074685407397LL;
unsigned long long int var_13 = 1696290510002193714ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 568146841;
long long int var_16 = -4809240419612258870LL;
unsigned char var_17 = (unsigned char)47;
int var_18 = 1784573461;
long long int var_19 = 9118240900338671493LL;
unsigned int var_20 = 287220577U;
long long int var_21 = -5153989411472233944LL;
unsigned long long int var_22 = 13625793094283728506ULL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 344349418U;
short var_25 = (short)5447;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)201;
short arr_7 [10] ;
unsigned long long int arr_8 [10] ;
unsigned int arr_9 [10] ;
unsigned int arr_10 [10] [10] ;
long long int arr_13 [10] ;
long long int arr_17 [13] ;
int arr_18 [13] [13] ;
int arr_19 [13] [13] ;
_Bool arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)-191;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 5700050379233087152ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 3790718852U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 1921285545U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -5242169824874005017LL : -5524260394210983709LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = -2618615268365737734LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = -999037392;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = -1373755841;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test(unsigned int var_0, unsigned int var_1, long long int var_2, signed char var_3, int var_4, unsigned int var_7, int var_8, unsigned long long int var_9, unsigned long long int var_10, unsigned char var_11, long long int var_12, unsigned long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
