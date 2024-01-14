#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -1443099663076143377LL;
int zero = 0;
unsigned char var_11 = (unsigned char)68;
unsigned long long int var_12 = 5402647774120794186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(long long int var_10, int zero);

int main() {
    init();
    test(var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
