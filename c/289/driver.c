#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 618245410;
unsigned char var_11 = (unsigned char)32;
int zero = 0;
short var_15 = (short)20635;
unsigned char var_16 = (unsigned char)64;
short var_17 = (short)15552;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int var_5, unsigned char var_11, int zero);

int main() {
    init();
    test(var_5, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
