#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)29474;
unsigned short var_7 = (unsigned short)23112;
unsigned short var_9 = (unsigned short)8311;
unsigned long long int var_10 = 13168146441091327189ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)75;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned short var_6, unsigned short var_7, unsigned short var_9, unsigned long long int var_10, int zero);

int main() {
    init();
    test(var_6, var_7, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
