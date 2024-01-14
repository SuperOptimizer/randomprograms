#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6727;
signed char var_6 = (signed char)60;
unsigned char var_7 = (unsigned char)130;
long long int var_8 = -4333457780726465894LL;
int var_9 = -683394355;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-12;
signed char var_12 = (signed char)-13;
int zero = 0;
unsigned long long int var_15 = 17973813383891089089ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)45484;
unsigned short var_18 = (unsigned short)56197;
unsigned int arr_0 [15] ;
long long int arr_3 [15] ;
int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1147202624U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2127664743655450516LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -1992588973;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(short var_5, signed char var_6, unsigned char var_7, long long int var_8, int var_9, _Bool var_10, signed char var_11, signed char var_12, int zero, unsigned int arr_0 [15] );

int main() {
    init();
    test(var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_0 );
    checksum();
    printf("%llu\n", seed);
}
