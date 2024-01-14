#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1324583478U;
unsigned char var_2 = (unsigned char)54;
unsigned short var_3 = (unsigned short)63858;
signed char var_5 = (signed char)-86;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)65143;
int zero = 0;
signed char var_18 = (signed char)9;
short var_19 = (short)28034;
unsigned int var_20 = 3409654533U;
int arr_1 [11] [11] ;
unsigned int arr_5 [11] [11] ;
unsigned long long int arr_9 [11] [11] [11] ;
unsigned short arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -654351761;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 2819536449U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 10972613513951188144ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)43841;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test(unsigned int var_0, unsigned char var_2, unsigned short var_3, signed char var_5, _Bool var_8, unsigned short var_12, int zero, int arr_1 [11] [11] );

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_8, var_12, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
