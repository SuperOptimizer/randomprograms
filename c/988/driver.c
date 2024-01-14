#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
unsigned int var_2 = 2534808121U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)27894;
unsigned char var_6 = (unsigned char)234;
unsigned int var_7 = 4050587507U;
unsigned int var_11 = 2358129524U;
unsigned char var_12 = (unsigned char)13;
unsigned char var_13 = (unsigned char)28;
unsigned int var_14 = 1851285481U;
int zero = 0;
long long int var_16 = 1650204829624066128LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7312556683839228150LL;
int var_19 = 153933141;
long long int var_20 = 5094560124519269478LL;
unsigned char var_21 = (unsigned char)244;
int var_22 = -1213001597;
short arr_0 [15] ;
unsigned int arr_1 [15] ;
_Bool arr_4 [15] [15] [15] ;
short arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)5044;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1761103417U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)4900;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)29882;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(unsigned char var_1, unsigned int var_2, _Bool var_4, short var_5, unsigned char var_6, unsigned int var_7, unsigned int var_11, unsigned char var_12, unsigned char var_13, unsigned int var_14, int zero, short arr_0 [15] , unsigned int arr_1 [15] , _Bool arr_4 [15] [15] [15] );

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_6, var_7, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
