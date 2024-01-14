#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 233136404U;
short var_7 = (short)-8335;
unsigned short var_8 = (unsigned short)18377;
int zero = 0;
unsigned short var_12 = (unsigned short)39392;
unsigned int var_13 = 442272064U;
unsigned int var_14 = 1407498668U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned int var_2, short var_7, unsigned short var_8, int zero);

int main() {
    init();
    test(var_2, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
