#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned char var_3 = (unsigned char)192;
unsigned char var_6 = (unsigned char)155;
unsigned int var_7 = 2358786137U;
int var_8 = -1570889727;
short var_11 = (short)-32344;
int var_12 = 1840849250;
unsigned int var_15 = 293230103U;
unsigned char var_16 = (unsigned char)92;
int zero = 0;
unsigned long long int var_18 = 528298265897853ULL;
unsigned int var_19 = 1333685716U;
short var_20 = (short)21228;
short var_21 = (short)17553;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(signed char var_1, unsigned char var_3, unsigned char var_6, unsigned int var_7, int var_8, short var_11, int var_12, unsigned int var_15, unsigned char var_16, int zero);

int main() {
    init();
    test(var_1, var_3, var_6, var_7, var_8, var_11, var_12, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
