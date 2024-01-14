#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
long long int var_3 = 562714265155367069LL;
signed char var_4 = (signed char)-95;
signed char var_5 = (signed char)19;
unsigned long long int var_10 = 2777442337083815164ULL;
unsigned short var_12 = (unsigned short)5567;
int zero = 0;
unsigned long long int var_13 = 15968989436769972058ULL;
unsigned short arr_2 [21] [21] ;
long long int arr_4 [21] [21] ;
unsigned int arr_5 [21] ;
unsigned long long int arr_10 [25] [25] ;
int arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)19874;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -8335206549349573261LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 3659860331U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 12753551716010985900ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 1350690424;
}

void checksum() {
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test(signed char var_1, long long int var_3, signed char var_4, signed char var_5, unsigned long long int var_10, unsigned short var_12, int zero, unsigned short arr_2 [21] [21] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_10, var_12, zero, arr_2 );
    checksum();
    printf("%llu\n", seed);
}
