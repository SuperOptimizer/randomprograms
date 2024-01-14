#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 394291053;
int zero = 0;
short var_12 = (short)26656;
int var_13 = 1768094299;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(int var_1, int zero);

int main() {
    init();
    test(var_1, zero);
    checksum();
    printf("%llu\n", seed);
}
