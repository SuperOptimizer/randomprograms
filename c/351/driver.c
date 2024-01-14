#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3066468982U;
unsigned long long int var_3 = 12186852000504160211ULL;
long long int var_6 = 3535947223167346442LL;
unsigned char var_7 = (unsigned char)240;
long long int var_9 = -7950155850502889888LL;
int var_10 = 168031242;
long long int var_12 = 1104224098160982324LL;
int zero = 0;
short var_13 = (short)-29209;
long long int var_14 = 1946244189463139671LL;
long long int var_15 = 6739960561704598318LL;
unsigned short var_16 = (unsigned short)837;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned int arr_2 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4641434439553991946ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 7396367064585939190ULL : 7500528627015877821ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3349103791U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 11971697976635592596ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34027 : (unsigned short)46852;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(unsigned int var_0, unsigned long long int var_3, long long int var_6, unsigned char var_7, long long int var_9, int var_10, long long int var_12, int zero, unsigned long long int arr_0 [16] , unsigned long long int arr_1 [16] , unsigned int arr_2 [16] [16] , unsigned long long int arr_5 [16] [16] );

int main() {
    init();
    test(var_0, var_3, var_6, var_7, var_9, var_10, var_12, zero, arr_0 , arr_1 , arr_2 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
