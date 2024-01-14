#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14394659650242653527ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4914995697582798336ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8008629803701765886ULL;
_Bool arr_0 [18] ;
unsigned long long int arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3386864762112846793ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 8233739838285110047ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test(unsigned long long int var_5, _Bool var_15, int zero, _Bool arr_0 [18] , unsigned long long int arr_2 [18] [18] );

int main() {
    init();
    test(var_5, var_15, zero, arr_0 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
