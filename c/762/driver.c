#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 289251471;
signed char var_12 = (signed char)-119;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)19788;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int var_6, signed char var_12, int zero);

int main() {
    init();
    test(var_6, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
