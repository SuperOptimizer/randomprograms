#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6443402968901064407LL;
long long int var_5 = -2034207969059804510LL;
int zero = 0;
int var_10 = 248536689;
unsigned int var_11 = 3323992168U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(long long int var_2, long long int var_5, int zero);

int main() {
    init();
    test(var_2, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
