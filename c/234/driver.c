#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_19 = (short)4716;
unsigned char var_20 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(int zero);

int main() {
    init();
    test(zero);
    checksum();
    printf("%llu\n", seed);
}
