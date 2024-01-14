#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1522600404068242356ULL;
_Bool var_1 = (_Bool)1;
int var_2 = 58378863;
int var_3 = 76913837;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1103041083888880842LL;
_Bool var_7 = (_Bool)0;
int var_8 = 1064250744;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4170582324875735746LL;
int zero = 0;
long long int var_11 = -177111828927442904LL;
unsigned long long int var_12 = 8297242984162571437ULL;
unsigned int var_13 = 2362549773U;
unsigned short var_14 = (unsigned short)31891;
unsigned long long int var_15 = 6130443093581747713ULL;
long long int var_16 = -7378188013105282917LL;
int var_17 = -1972586607;
unsigned int var_18 = 1706115346U;
short var_19 = (short)14227;
unsigned short arr_0 [13] [13] ;
_Bool arr_1 [13] ;
_Bool arr_6 [23] ;
unsigned long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)58690;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4994251989475166697ULL;
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
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(unsigned long long int var_0, _Bool var_1, int var_2, int var_3, _Bool var_4, long long int var_5, _Bool var_7, int var_8, _Bool var_9, long long int var_10, int zero, unsigned short arr_0 [13] [13] , _Bool arr_1 [13] , _Bool arr_6 [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
