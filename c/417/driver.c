#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
short var_1 = (short)-24965;
signed char var_3 = (signed char)14;
unsigned long long int var_5 = 16769299309851946692ULL;
signed char var_7 = (signed char)-37;
unsigned int var_11 = 1986743668U;
unsigned short var_14 = (unsigned short)10107;
int zero = 0;
short var_16 = (short)-26377;
int var_17 = 793925918;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)58;
signed char var_20 = (signed char)-108;
signed char var_21 = (signed char)-24;
unsigned char arr_0 [24] ;
short arr_4 [24] [24] [24] ;
short arr_5 [24] ;
unsigned int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)17712;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)31545;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 854846650U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(signed char var_0, short var_1, signed char var_3, unsigned long long int var_5, signed char var_7, unsigned int var_11, unsigned short var_14, int zero, unsigned char arr_0 [24] , short arr_4 [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_7, var_11, var_14, zero, arr_0 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
