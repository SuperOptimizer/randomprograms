#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_13 = (unsigned char)198;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)47817;
unsigned short var_16 = (unsigned short)20070;
long long int var_17 = -8921953391526344858LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int zero);

int main() {
    init();
    test(zero);
    checksum();
    printf("%llu\n", seed);
}
