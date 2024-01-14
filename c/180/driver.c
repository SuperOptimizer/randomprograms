#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27796;
unsigned long long int var_1 = 6055475243757923463ULL;
int var_2 = -1408068303;
long long int var_3 = -3873574666009837414LL;
unsigned int var_4 = 3993877378U;
int var_5 = 1191512468;
signed char var_7 = (signed char)-26;
int var_9 = 1640552163;
unsigned char var_10 = (unsigned char)133;
unsigned long long int var_11 = 964432224145330635ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -14543359;
short var_14 = (short)-22726;
unsigned short var_15 = (unsigned short)18197;
_Bool var_16 = (_Bool)1;
signed char arr_1 [14] ;
signed char arr_2 [14] [14] ;
long long int arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3341674446987260008LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 133118827U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(short var_0, unsigned long long int var_1, int var_2, long long int var_3, unsigned int var_4, int var_5, signed char var_7, int var_9, unsigned char var_10, unsigned long long int var_11, int zero, signed char arr_1 [14] , signed char arr_2 [14] [14] , long long int arr_3 [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_9, var_10, var_11, zero, arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
