#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4569976143763585473LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13765456808506136092ULL;
_Bool var_3 = (_Bool)1;
int var_4 = -2144870723;
long long int var_5 = 6569551645722686953LL;
long long int var_8 = -6227764544564774865LL;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)15436;
short var_13 = (short)-8300;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2582555473269277535ULL;
int var_17 = -1437622215;
int zero = 0;
int var_18 = -363173216;
signed char var_19 = (signed char)-33;
int var_20 = -1091449705;
unsigned long long int var_21 = 17861689714785246318ULL;
int var_22 = 1953115555;
int var_23 = 729150903;
int var_24 = -841982657;
short var_25 = (short)-32521;
int arr_0 [21] [21] ;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1405059397;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test(long long int var_0, _Bool var_1, unsigned long long int var_2, _Bool var_3, int var_4, long long int var_5, long long int var_8, _Bool var_9, _Bool var_11, unsigned short var_12, short var_13, _Bool var_14, _Bool var_15, unsigned long long int var_16, int var_17, int zero, int arr_0 [21] [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_0 );
    checksum();
    printf("%llu\n", seed);
}
