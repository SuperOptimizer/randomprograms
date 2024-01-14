#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5429;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 1101276943U;
int zero = 0;
unsigned char var_13 = (unsigned char)230;
unsigned int var_14 = 1232249550U;
long long int var_15 = -7417265027126444535LL;
short var_16 = (short)-5277;
signed char arr_0 [13] [13] ;
unsigned short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)54201;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test(short var_3, _Bool var_4, unsigned int var_10, int zero, signed char arr_0 [13] [13] );

int main() {
    init();
    test(var_3, var_4, var_10, zero, arr_0 );
    checksum();
    printf("%llu\n", seed);
}
