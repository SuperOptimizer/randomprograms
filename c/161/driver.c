#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -914304864;
signed char var_1 = (signed char)-92;
signed char var_5 = (signed char)-32;
unsigned char var_6 = (unsigned char)79;
short var_7 = (short)29967;
unsigned int var_10 = 1217010532U;
int zero = 0;
short var_11 = (short)-6167;
signed char var_12 = (signed char)119;
unsigned int var_13 = 3582554239U;
unsigned short var_14 = (unsigned short)13805;
signed char var_15 = (signed char)57;
unsigned short var_16 = (unsigned short)18241;
short var_17 = (short)17643;
int var_18 = -1951647860;
int arr_0 [16] ;
int arr_1 [16] ;
int arr_5 [16] ;
unsigned short arr_6 [16] ;
unsigned short arr_8 [16] ;
int arr_10 [16] ;
int arr_2 [16] ;
int arr_3 [16] ;
int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1847111131;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1623700433;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -2098837616;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)53600;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)15715;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 235101581;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -2044389668;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 826126127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -1775694020;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test(int var_0, signed char var_1, signed char var_5, unsigned char var_6, short var_7, unsigned int var_10, int zero, int arr_0 [16] , int arr_1 [16] , int arr_5 [16] , unsigned short arr_6 [16] , unsigned short arr_8 [16] , int arr_10 [16] );

int main() {
    init();
    test(var_0, var_1, var_5, var_6, var_7, var_10, zero, arr_0 , arr_1 , arr_5 , arr_6 , arr_8 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
