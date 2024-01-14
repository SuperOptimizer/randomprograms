#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)222;
unsigned char var_4 = (unsigned char)57;
unsigned char var_5 = (unsigned char)24;
unsigned char var_9 = (unsigned char)158;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
unsigned char var_11 = (unsigned char)186;
unsigned char var_12 = (unsigned char)164;
unsigned char var_13 = (unsigned char)17;
unsigned char var_14 = (unsigned char)75;
unsigned char var_15 = (unsigned char)65;
unsigned char var_16 = (unsigned char)200;
unsigned char var_17 = (unsigned char)2;
unsigned char var_18 = (unsigned char)192;
unsigned char arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)179;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned char var_3, unsigned char var_4, unsigned char var_5, unsigned char var_9, unsigned char var_10, int zero, unsigned char arr_0 [19] , unsigned char arr_1 [19] [19] );

int main() {
    init();
    test(var_3, var_4, var_5, var_9, var_10, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
