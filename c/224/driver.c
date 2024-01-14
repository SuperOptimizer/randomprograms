#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 11694026077080028169ULL;
long long int var_3 = 4489934419827969663LL;
unsigned long long int var_4 = 9881212217764397012ULL;
unsigned long long int var_5 = 15657230310536979136ULL;
long long int var_6 = 5792975563913339944LL;
unsigned short var_7 = (unsigned short)10471;
unsigned long long int var_10 = 2118237057052581865ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1526324276U;
unsigned long long int var_13 = 9817551699047533058ULL;
unsigned char var_14 = (unsigned char)250;
int zero = 0;
unsigned long long int var_15 = 16711913527262998866ULL;
unsigned long long int var_16 = 7820886314126487431ULL;
unsigned char var_17 = (unsigned char)6;
signed char var_18 = (signed char)-13;
unsigned short var_19 = (unsigned short)25935;
_Bool var_20 = (_Bool)1;
long long int var_21 = 7200447505765739412LL;
signed char arr_2 [13] [13] ;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 694591975967342405LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(_Bool var_0, unsigned long long int var_2, long long int var_3, unsigned long long int var_4, unsigned long long int var_5, long long int var_6, unsigned short var_7, unsigned long long int var_10, _Bool var_11, unsigned int var_12, unsigned long long int var_13, unsigned char var_14, int zero, signed char arr_2 [13] [13] , long long int arr_6 [13] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_12, var_13, var_14, zero, arr_2 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
