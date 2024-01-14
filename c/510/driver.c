#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)153;
unsigned int var_9 = 3088678355U;
unsigned int var_12 = 2490781002U;
unsigned int var_14 = 254883100U;
int zero = 0;
unsigned short var_16 = (unsigned short)40222;
short var_17 = (short)-193;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned char var_5, unsigned int var_9, unsigned int var_12, unsigned int var_14, int zero);

int main() {
    init();
    test(var_5, var_9, var_12, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
