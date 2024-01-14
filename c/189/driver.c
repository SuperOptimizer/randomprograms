#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1607161684;
long long int var_1 = 4961609314143265493LL;
long long int var_3 = 6734610844656052944LL;
unsigned int var_6 = 3653119860U;
unsigned short var_9 = (unsigned short)55368;
unsigned short var_10 = (unsigned short)51241;
unsigned long long int var_12 = 3058612688459542412ULL;
unsigned int var_13 = 2359265025U;
long long int var_15 = -874770513735072853LL;
int zero = 0;
unsigned short var_16 = (unsigned short)53454;
unsigned int var_17 = 1817239573U;
unsigned short var_18 = (unsigned short)45898;
signed char var_19 = (signed char)63;
unsigned long long int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_3 [24] ;
unsigned int arr_4 [24] ;
int arr_5 [24] [24] ;
unsigned short arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 6073776437847173127ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)14471;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 11444255581539117786ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1407377817U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -529693088;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)21364 : (unsigned short)62800;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(int var_0, long long int var_1, long long int var_3, unsigned int var_6, unsigned short var_9, unsigned short var_10, unsigned long long int var_12, unsigned int var_13, long long int var_15, int zero, unsigned long long int arr_0 [24] , _Bool arr_1 [24] [24] , unsigned short arr_2 [24] );

int main() {
    init();
    test(var_0, var_1, var_3, var_6, var_9, var_10, var_12, var_13, var_15, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
