#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-13235;
int var_19 = -231719943;
int zero = 0;
int var_20 = 1601797881;
unsigned int var_21 = 1076792094U;
int var_22 = 196151770;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(short var_5, int var_19, int zero);

int main() {
    init();
    test(var_5, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
