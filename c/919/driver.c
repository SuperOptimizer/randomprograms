#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3912712994U;
unsigned int var_11 = 1359429058U;
signed char var_14 = (signed char)-61;
int zero = 0;
signed char var_15 = (signed char)-64;
int var_16 = 1102169549;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_6, unsigned int var_11, signed char var_14, int zero);

int main() {
    init();
    test(var_6, var_11, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
