#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)113;
int zero = 0;
unsigned long long int var_16 = 11550345648175725489ULL;
unsigned long long int var_17 = 17128632679205172013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned char var_4, int zero);

int main() {
    init();
    test(var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
