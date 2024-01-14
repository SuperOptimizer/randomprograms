#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1177610858;
unsigned long long int var_5 = 4517242281243352695ULL;
unsigned long long int var_6 = 5581024007585532697ULL;
int zero = 0;
short var_11 = (short)-6343;
unsigned char var_12 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(int var_4, unsigned long long int var_5, unsigned long long int var_6, int zero);

int main() {
    init();
    test(var_4, var_5, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
