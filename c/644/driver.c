#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1769595892;
unsigned short var_1 = (unsigned short)13512;
short var_2 = (short)-2715;
unsigned short var_3 = (unsigned short)32943;
unsigned int var_4 = 4054565426U;
int var_5 = -1909412898;
unsigned long long int var_6 = 6400000859244977655ULL;
int var_8 = 20432371;
unsigned int var_10 = 3356854961U;
unsigned char var_11 = (unsigned char)243;
unsigned char var_13 = (unsigned char)69;
short var_15 = (short)2661;
unsigned int var_18 = 3298192096U;
unsigned char var_19 = (unsigned char)141;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
_Bool var_21 = (_Bool)1;
long long int arr_4 [16] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -9135727665859151171LL : 1023501212945069407LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-47 : (signed char)11;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test(int var_0, unsigned short var_1, short var_2, unsigned short var_3, unsigned int var_4, int var_5, unsigned long long int var_6, int var_8, unsigned int var_10, unsigned char var_11, unsigned char var_13, short var_15, unsigned int var_18, unsigned char var_19, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_10, var_11, var_13, var_15, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
