#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63280;
int var_2 = -590338356;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)64;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
unsigned long long int var_17 = 7032875454014288009ULL;
short var_18 = (short)-13984;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned short var_0, int var_2, _Bool var_6, unsigned char var_7, int zero);

int main() {
    init();
    test(var_0, var_2, var_6, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
