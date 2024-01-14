#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
signed char var_1 = (signed char)-117;
long long int var_3 = 6097584625327451331LL;
long long int var_4 = -7601655465650789815LL;
int var_8 = 2095438307;
long long int var_15 = -1877345346566140292LL;
int zero = 0;
long long int var_19 = -8686591739947591191LL;
unsigned long long int var_20 = 7319807586575673961ULL;
short var_21 = (short)-29242;
short var_22 = (short)23811;
long long int var_23 = 7627696295698909037LL;
long long int arr_3 [18] ;
long long int arr_4 [18] ;
unsigned char arr_5 [18] [18] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4013949452365897101LL : -2158332218811470120LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2567447513217361738LL : -6035210629918055351LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)26 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-14413 : (short)-22262;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(signed char var_0, signed char var_1, long long int var_3, long long int var_4, int var_8, long long int var_15, int zero, long long int arr_3 [18] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_8, var_15, zero, arr_3 );
    checksum();
    printf("%llu\n", seed);
}
