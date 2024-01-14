#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1269931021;
int zero = 0;
short var_12 = (short)22970;
unsigned char var_13 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(int var_11, int zero);

int main() {
    init();
    test(var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
