#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_20 = (unsigned short)42775;
unsigned short var_21 = (unsigned short)54135;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(int zero);

int main() {
    init();
    test(zero);
    checksum();
    printf("%llu\n", seed);
}
