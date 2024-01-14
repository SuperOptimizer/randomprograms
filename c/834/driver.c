#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3537803902U;
unsigned int var_11 = 2010004710U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 4153829784U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_4, unsigned int var_11, int zero);

int main() {
    init();
    test(var_4, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
