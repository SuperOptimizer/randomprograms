#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned long long int var_9 = 3035907796091249503ULL;
unsigned char var_11 = (unsigned char)101;
signed char var_13 = (signed char)-126;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-103;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)31;
signed char var_19 = (signed char)-3;
unsigned int var_20 = 3289311720U;
unsigned char arr_0 [22] ;
unsigned int arr_1 [22] ;
_Bool arr_2 [22] [22] ;
unsigned int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 158320114U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 3832934874U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test(unsigned char var_1, unsigned long long int var_9, unsigned char var_11, signed char var_13, _Bool var_15, signed char var_16, int zero, unsigned char arr_0 [22] , unsigned int arr_1 [22] );

int main() {
    init();
    test(var_1, var_9, var_11, var_13, var_15, var_16, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
