#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)22861;
int zero = 0;
short var_16 = (short)14782;
unsigned int var_17 = 4100998182U;
int var_18 = 1434934563;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(short var_11, int zero);

int main() {
    init();
    test(var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
