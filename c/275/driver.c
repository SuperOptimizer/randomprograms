#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_15 = -7768300301803730181LL;
int zero = 0;
long long int var_20 = -8527040789061298443LL;
unsigned short var_21 = (unsigned short)5672;
unsigned int arr_0 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2269417718U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -5109365013983212916LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test(_Bool var_3, long long int var_15, int zero, unsigned int arr_0 [24] );

int main() {
    init();
    test(var_3, var_15, zero, arr_0 );
    checksum();
    printf("%llu\n", seed);
}
