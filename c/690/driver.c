#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
unsigned char var_1 = (unsigned char)252;
unsigned char var_3 = (unsigned char)153;
unsigned char var_4 = (unsigned char)218;
short var_5 = (short)-21893;
int var_6 = 1278542682;
short var_9 = (short)15552;
int var_11 = 1932845263;
int var_13 = -1806580654;
int zero = 0;
short var_15 = (short)22668;
short var_16 = (short)11634;
unsigned char var_17 = (unsigned char)90;
unsigned char arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)113 : (unsigned char)99;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test(signed char var_0, unsigned char var_1, unsigned char var_3, unsigned char var_4, short var_5, int var_6, short var_9, int var_11, int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_9, var_11, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
