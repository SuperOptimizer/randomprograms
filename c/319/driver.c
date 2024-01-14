#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14868;
unsigned short var_1 = (unsigned short)13972;
signed char var_5 = (signed char)-39;
signed char var_7 = (signed char)-26;
long long int var_10 = -423631000378837226LL;
unsigned short var_12 = (unsigned short)54399;
signed char var_13 = (signed char)-84;
int var_14 = 643922601;
int zero = 0;
int var_15 = 2139151541;
signed char var_16 = (signed char)-15;
int var_17 = -1004941079;
unsigned int var_18 = 2422207325U;
unsigned long long int var_19 = 14050583632492539650ULL;
long long int var_20 = 1807630208916809962LL;
signed char arr_1 [11] [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
int arr_8 [11] ;
int arr_10 [11] ;
long long int arr_11 [11] [11] [11] ;
int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8057358639556756820ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -1685316748;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 559429595;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -879686251015202550LL : -1552465461914978978LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 1784513304;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test(unsigned short var_0, unsigned short var_1, signed char var_5, signed char var_7, long long int var_10, unsigned short var_12, signed char var_13, int var_14, int zero, signed char arr_1 [11] [11] , unsigned long long int arr_4 [11] [11] [11] , int arr_8 [11] , int arr_10 [11] );

int main() {
    init();
    test(var_0, var_1, var_5, var_7, var_10, var_12, var_13, var_14, zero, arr_1 , arr_4 , arr_8 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
