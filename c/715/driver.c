#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2574837582U;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)46;
short var_13 = (short)-7871;
int zero = 0;
unsigned int var_14 = 1350354477U;
unsigned long long int var_15 = 16421324558010014717ULL;
unsigned char var_16 = (unsigned char)137;
unsigned char var_17 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned int var_0, _Bool var_7, unsigned char var_9, short var_13, int zero);

int main() {
    init();
    test(var_0, var_7, var_9, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
