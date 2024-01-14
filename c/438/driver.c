#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 16015150694158691669ULL;
int var_10 = 1003867006;
int var_11 = -975865647;
unsigned char var_13 = (unsigned char)83;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
int var_16 = 191742551;
long long int var_17 = -8996198588042155543LL;
short var_18 = (short)-7533;
unsigned int var_19 = 3315239524U;
int arr_0 [15] ;
short arr_1 [15] [15] ;
short arr_2 [15] [15] [15] ;
_Bool arr_3 [15] [15] [15] ;
signed char arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 955976305;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)444;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)2070;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-20;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test(signed char var_1, _Bool var_3, unsigned long long int var_6, int var_10, int var_11, unsigned char var_13, int zero, int arr_0 [15] , short arr_1 [15] [15] , short arr_2 [15] [15] [15] , _Bool arr_3 [15] [15] [15] );

int main() {
    init();
    test(var_1, var_3, var_6, var_10, var_11, var_13, zero, arr_0 , arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
