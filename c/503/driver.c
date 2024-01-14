#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)192;
unsigned int var_16 = 1148285714U;
int zero = 0;
unsigned int var_18 = 3642043872U;
unsigned char var_19 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_10, unsigned int var_16, int zero);

int main() {
    init();
    test(var_10, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
