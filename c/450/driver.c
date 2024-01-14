#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3724335708U;
unsigned short var_10 = (unsigned short)18453;
int zero = 0;
int var_11 = 887358729;
int var_12 = -166700039;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(unsigned int var_5, unsigned short var_10, int zero);

int main() {
    init();
    test(var_5, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
