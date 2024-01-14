#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15126969856466732765ULL;
int zero = 0;
long long int var_16 = -8146935177692179187LL;
unsigned short var_17 = (unsigned short)40207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned long long int var_7, int zero);

int main() {
    init();
    test(var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
