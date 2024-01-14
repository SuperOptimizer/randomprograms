#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2703968743114743137ULL;
unsigned int var_2 = 4055634088U;
unsigned int var_12 = 1125768372U;
unsigned int var_13 = 1277236765U;
unsigned int var_14 = 2792868107U;
int zero = 0;
unsigned long long int var_16 = 10098093332977517076ULL;
unsigned long long int var_17 = 14897843214855234464ULL;
unsigned short var_18 = (unsigned short)52819;
int arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 336870370;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)62796;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned long long int var_1, unsigned int var_2, unsigned int var_12, unsigned int var_13, unsigned int var_14, int zero, int arr_0 [11] , unsigned short arr_1 [11] [11] );

int main() {
    init();
    test(var_1, var_2, var_12, var_13, var_14, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
