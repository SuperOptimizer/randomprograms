#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-3703;
signed char var_12 = (signed char)111;
int zero = 0;
short var_19 = (short)-84;
unsigned short var_20 = (unsigned short)16254;
unsigned long long int var_21 = 10698316222438145084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_11, signed char var_12, int zero);

int main() {
    init();
    test(var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
