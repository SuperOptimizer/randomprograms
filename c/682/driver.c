#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 278815307U;
unsigned char var_14 = (unsigned char)69;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)26087;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_4, unsigned char var_14, int zero);

int main() {
    init();
    test(var_4, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
