#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 163093314U;
int var_2 = -367669836;
signed char var_3 = (signed char)-108;
unsigned short var_5 = (unsigned short)8338;
int var_6 = 602764048;
signed char var_7 = (signed char)71;
int var_9 = -1159117134;
int zero = 0;
unsigned int var_10 = 537416324U;
signed char var_11 = (signed char)77;
signed char var_12 = (signed char)-3;
int var_13 = 676507585;
signed char var_14 = (signed char)-29;
unsigned short arr_2 [20] ;
int arr_3 [20] [20] ;
int arr_4 [20] [20] ;
int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)4044;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 309123147;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -365666334;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -4687382;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned int var_1, int var_2, signed char var_3, unsigned short var_5, int var_6, signed char var_7, int var_9, int zero, unsigned short arr_2 [20] , int arr_3 [20] [20] , int arr_4 [20] [20] , int arr_5 [20] [20] );

int main() {
    init();
    test(var_1, var_2, var_3, var_5, var_6, var_7, var_9, zero, arr_2 , arr_3 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
