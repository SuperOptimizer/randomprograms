#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)58;
unsigned int var_3 = 3863374235U;
int var_4 = 806581873;
long long int var_5 = 3752073035060397656LL;
unsigned int var_6 = 717565609U;
long long int var_8 = -8448731869875036762LL;
unsigned long long int var_11 = 14642429959681641724ULL;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned char var_13 = (unsigned char)81;
signed char var_14 = (signed char)-123;
long long int var_15 = 217620875818145259LL;
signed char arr_1 [17] ;
int arr_2 [17] [17] ;
signed char arr_3 [17] ;
signed char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1343944396;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)109;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(_Bool var_0, signed char var_2, unsigned int var_3, int var_4, long long int var_5, unsigned int var_6, long long int var_8, unsigned long long int var_11, unsigned char var_12, int zero, signed char arr_1 [17] , int arr_2 [17] [17] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_11, var_12, zero, arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
