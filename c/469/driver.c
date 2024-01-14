#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23346;
unsigned char var_1 = (unsigned char)245;
int zero = 0;
unsigned short var_14 = (unsigned short)29768;
unsigned short var_15 = (unsigned short)14118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_0, unsigned char var_1, int zero);

int main() {
    init();
    test(var_0, var_1, zero);
    checksum();
    printf("%llu\n", seed);
}
