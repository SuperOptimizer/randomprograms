#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -250707083;
int var_3 = -1562122700;
int var_9 = 1983683505;
int zero = 0;
unsigned int var_12 = 1148229370U;
unsigned int var_13 = 3620039008U;
int var_14 = 748585121;
unsigned int arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3770455813U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 171291956U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2070654007;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test(int var_0, int var_3, int var_9, int zero, unsigned int arr_0 [22] [22] , unsigned int arr_1 [22] );

int main() {
    init();
    test(var_0, var_3, var_9, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
