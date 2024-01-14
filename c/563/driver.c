#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6727200060047056372LL;
short var_2 = (short)-28545;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)208;
short var_5 = (short)-7121;
_Bool var_8 = (_Bool)1;
long long int var_11 = 47578523098600284LL;
short var_12 = (short)15289;
int var_14 = 1815636548;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 711282102U;
unsigned long long int arr_0 [25] ;
_Bool arr_2 [25] [25] ;
short arr_4 [25] [25] ;
unsigned int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 14134669675453463514ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)4050;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2583253467U : 2210038685U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test(long long int var_0, short var_2, _Bool var_3, unsigned char var_4, short var_5, _Bool var_8, long long int var_11, short var_12, int var_14, int zero, unsigned long long int arr_0 [25] , _Bool arr_2 [25] [25] , short arr_4 [25] [25] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_8, var_11, var_12, var_14, zero, arr_0 , arr_2 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
