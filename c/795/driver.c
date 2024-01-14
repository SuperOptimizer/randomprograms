#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)4624;
int var_13 = -933375417;
int zero = 0;
unsigned long long int var_16 = 12077552875579353301ULL;
unsigned long long int var_17 = 14808807589014597880ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(short var_11, int var_13, int zero);

int main() {
    init();
    test(var_11, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
