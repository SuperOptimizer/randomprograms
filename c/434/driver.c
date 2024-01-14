#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
signed char var_1 = (signed char)-16;
int var_3 = 1374954200;
int var_4 = 348369613;
int var_5 = -1231297761;
unsigned char var_6 = (unsigned char)162;
long long int var_7 = -5978229361926798758LL;
unsigned char var_9 = (unsigned char)24;
int var_10 = -612303458;
unsigned long long int var_11 = 2997219956455052477ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 455457144787727177LL;
long long int var_15 = -541198096562122943LL;
unsigned char var_16 = (unsigned char)121;
int zero = 0;
signed char var_17 = (signed char)58;
signed char var_18 = (signed char)-66;
int var_19 = -1480956397;
long long int var_20 = -6061617568017264407LL;
unsigned char var_21 = (unsigned char)188;
unsigned char var_22 = (unsigned char)63;
long long int var_23 = -4052387305357772515LL;
unsigned char var_24 = (unsigned char)186;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
_Bool arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
signed char arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
int arr_4 [10] [10] ;
_Bool arr_5 [10] ;
unsigned int arr_6 [10] [10] [10] [10] ;
long long int arr_10 [10] ;
long long int arr_11 [10] [10] [10] ;
unsigned long long int arr_12 [10] [10] [10] ;
long long int arr_8 [10] [10] [10] [10] ;
signed char arr_9 [10] [10] [10] [10] ;
_Bool arr_13 [10] [10] [10] ;
unsigned char arr_14 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18289;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -1717940426;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1769209069U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 5734168723331133409LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2794070139766930387LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2820191629878485214ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -7059501962270028318LL : -973652848976329240LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)131 : (unsigned char)251;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test(signed char var_0, signed char var_1, int var_3, int var_4, int var_5, unsigned char var_6, long long int var_7, unsigned char var_9, int var_10, unsigned long long int var_11, _Bool var_13, long long int var_14, long long int var_15, unsigned char var_16, int zero, _Bool arr_0 [10] , unsigned short arr_1 [10] [10] , signed char arr_2 [10] , unsigned char arr_3 [10] [10] , int arr_4 [10] [10] , _Bool arr_5 [10] , unsigned int arr_6 [10] [10] [10] [10] , long long int arr_10 [10] , long long int arr_11 [10] [10] [10] , unsigned long long int arr_12 [10] [10] [10] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_10 , arr_11 , arr_12 );
    checksum();
    printf("%llu\n", seed);
}
