#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5707823846565287308LL;
unsigned int var_8 = 3590933591U;
signed char var_10 = (signed char)-35;
unsigned char var_11 = (unsigned char)172;
int var_15 = -381548862;
int zero = 0;
unsigned int var_16 = 2927040011U;
unsigned short var_17 = (unsigned short)38086;
_Bool var_18 = (_Bool)1;
long long int arr_0 [19] [19] ;
int arr_1 [19] [19] ;
int arr_2 [19] ;
unsigned short arr_4 [19] [19] [19] ;
signed char arr_5 [19] ;
int arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1062374998313097291LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1042407831;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -205024462;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)20006;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1693541617;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test(long long int var_1, unsigned int var_8, signed char var_10, unsigned char var_11, int var_15, int zero, long long int arr_0 [19] [19] , int arr_1 [19] [19] , int arr_2 [19] , unsigned short arr_4 [19] [19] [19] );

int main() {
    init();
    test(var_1, var_8, var_10, var_11, var_15, zero, arr_0 , arr_1 , arr_2 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
