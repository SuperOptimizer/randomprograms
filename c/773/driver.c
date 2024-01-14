#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1080548370U;
short var_2 = (short)-20787;
short var_5 = (short)20258;
unsigned char var_8 = (unsigned char)182;
unsigned int var_10 = 1320996364U;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 2008432049;
long long int var_14 = -6656371472807763597LL;
short var_15 = (short)-8824;
int var_16 = -706605488;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2794561915U;
long long int var_19 = 5497441400712588829LL;
long long int arr_3 [15] ;
unsigned short arr_7 [15] [15] ;
long long int arr_10 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -8500298459010706326LL : 8234715959532397219LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)56909;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4100996125130899152LL : -1811141065368041997LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(unsigned int var_1, short var_2, short var_5, unsigned char var_8, unsigned int var_10, _Bool var_12, int zero, long long int arr_3 [15] , unsigned short arr_7 [15] [15] );

int main() {
    init();
    test(var_1, var_2, var_5, var_8, var_10, var_12, zero, arr_3 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
