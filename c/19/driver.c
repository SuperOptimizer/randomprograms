#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)91;
long long int var_7 = 5278422883112631305LL;
unsigned char var_8 = (unsigned char)191;
_Bool var_10 = (_Bool)0;
short var_11 = (short)28705;
int zero = 0;
short var_13 = (short)21951;
long long int var_14 = 3567207539956644604LL;
unsigned short var_15 = (unsigned short)8809;
signed char var_16 = (signed char)67;
int arr_1 [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -558027945 : 995363800;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2061665472 : 2050998536;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test(signed char var_4, long long int var_7, unsigned char var_8, _Bool var_10, short var_11, int zero, int arr_1 [21] );

int main() {
    init();
    test(var_4, var_7, var_8, var_10, var_11, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
