#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5638439379248346579LL;
unsigned int var_4 = 2304664531U;
long long int var_5 = -421839220413362313LL;
short var_6 = (short)20952;
signed char var_7 = (signed char)104;
unsigned char var_8 = (unsigned char)123;
signed char var_10 = (signed char)30;
int var_11 = -581507546;
unsigned short var_14 = (unsigned short)4603;
unsigned int var_15 = 2569701339U;
unsigned long long int var_16 = 1593061840446616321ULL;
short var_17 = (short)-20051;
int zero = 0;
unsigned char var_18 = (unsigned char)36;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)59648;
unsigned short var_21 = (unsigned short)56086;
signed char var_22 = (signed char)3;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-21;
short var_25 = (short)21063;
int arr_0 [13] [13] ;
unsigned long long int arr_4 [13] ;
short arr_5 [13] [13] [13] [13] ;
unsigned int arr_12 [13] [13] [13] ;
short arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 341591408;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 13214801979940496530ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-18237;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2985739689U : 3967213682U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)26957 : (short)24603;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test(long long int var_0, unsigned int var_4, long long int var_5, short var_6, signed char var_7, unsigned char var_8, signed char var_10, int var_11, unsigned short var_14, unsigned int var_15, unsigned long long int var_16, short var_17, int zero, int arr_0 [13] [13] , unsigned long long int arr_4 [13] , short arr_5 [13] [13] [13] [13] );

int main() {
    init();
    test(var_0, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_14, var_15, var_16, var_17, zero, arr_0 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
