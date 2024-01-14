#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -2714942261755737052LL;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)123;
unsigned char var_8 = (unsigned char)130;
int zero = 0;
long long int var_14 = -4665298293991732814LL;
unsigned int var_15 = 2598157102U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)18103;
unsigned long long int var_18 = 5674484664572864367ULL;
short arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)21389;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3369129916323069294ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 3745432494253909613ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test(_Bool var_1, long long int var_2, _Bool var_3, signed char var_7, unsigned char var_8, int zero, short arr_0 [20] , unsigned long long int arr_1 [20] );

int main() {
    init();
    test(var_1, var_2, var_3, var_7, var_8, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
