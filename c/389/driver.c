#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3756729890U;
int var_10 = -1879422241;
short var_13 = (short)14694;
unsigned char var_16 = (unsigned char)205;
int zero = 0;
unsigned char var_17 = (unsigned char)188;
signed char var_18 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_2, int var_10, short var_13, unsigned char var_16, int zero);

int main() {
    init();
    test(var_2, var_10, var_13, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
