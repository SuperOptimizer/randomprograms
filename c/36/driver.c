#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-100;
int var_12 = 598938154;
int zero = 0;
unsigned short var_16 = (unsigned short)17481;
short var_17 = (short)27545;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(signed char var_9, int var_12, int zero);

int main() {
    init();
    test(var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
