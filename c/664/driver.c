#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -724140278;
unsigned char var_5 = (unsigned char)35;
unsigned int var_6 = 2492804176U;
unsigned int var_8 = 2000440103U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)46;
unsigned long long int var_11 = 2247715518702938454ULL;
long long int var_12 = 4594201917703989608LL;
unsigned char var_13 = (unsigned char)50;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14240730846707867515ULL;
int var_16 = 207103888;
_Bool arr_0 [23] [23] ;
signed char arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
_Bool arr_8 [23] ;
signed char arr_5 [20] ;
int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)7 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1048623334U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -1716286766;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(_Bool var_0, int var_2, unsigned char var_5, unsigned int var_6, unsigned int var_8, _Bool var_9, int zero, _Bool arr_0 [23] [23] , signed char arr_1 [23] [23] , unsigned int arr_2 [23] , _Bool arr_8 [23] );

int main() {
    init();
    test(var_0, var_2, var_5, var_6, var_8, var_9, zero, arr_0 , arr_1 , arr_2 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
