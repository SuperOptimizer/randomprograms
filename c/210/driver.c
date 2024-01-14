#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned char var_9 = (unsigned char)97;
signed char var_10 = (signed char)-47;
signed char var_11 = (signed char)16;
unsigned long long int var_12 = 4831132128224764697ULL;
unsigned long long int var_16 = 17713071612081442394ULL;
int zero = 0;
unsigned long long int var_20 = 15319888468362493599ULL;
long long int var_21 = -4824215646105278474LL;
signed char var_22 = (signed char)122;
unsigned char var_23 = (unsigned char)6;
signed char var_24 = (signed char)-13;
long long int var_25 = 7721157748151290295LL;
signed char var_26 = (signed char)120;
unsigned char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)210;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(signed char var_1, unsigned char var_9, signed char var_10, signed char var_11, unsigned long long int var_12, unsigned long long int var_16, int zero, unsigned char arr_1 [12] );

int main() {
    init();
    test(var_1, var_9, var_10, var_11, var_12, var_16, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
