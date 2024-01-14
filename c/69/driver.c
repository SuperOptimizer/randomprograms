#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3797201928534258213LL;
signed char var_2 = (signed char)96;
_Bool var_3 = (_Bool)0;
long long int var_4 = 1598287994386459378LL;
long long int var_5 = 8261528211539819174LL;
unsigned short var_6 = (unsigned short)5459;
short var_7 = (short)3913;
int var_8 = 149780184;
int zero = 0;
signed char var_11 = (signed char)43;
unsigned short var_12 = (unsigned short)55024;
short var_13 = (short)-13940;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -4035072720803077240LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(long long int var_1, signed char var_2, _Bool var_3, long long int var_4, long long int var_5, unsigned short var_6, short var_7, int var_8, int zero, long long int arr_2 [22] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, zero, arr_2 );
    checksum();
    printf("%llu\n", seed);
}
