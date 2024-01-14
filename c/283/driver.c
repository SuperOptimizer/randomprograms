#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3000;
unsigned char var_7 = (unsigned char)62;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
unsigned char var_17 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(short var_1, unsigned char var_7, int zero);

int main() {
    init();
    test(var_1, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
