#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1692495931;
unsigned short var_8 = (unsigned short)53973;
int zero = 0;
unsigned short var_11 = (unsigned short)6724;
int var_12 = 1576316436;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(int var_7, unsigned short var_8, int zero);

int main() {
    init();
    test(var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
