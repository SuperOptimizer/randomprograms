#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)211;
int zero = 0;
long long int var_15 = 5785831339908566546LL;
long long int var_16 = 3806880955003095408LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned char var_5, int zero);

int main() {
    init();
    test(var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
