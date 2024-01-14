#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6658;
unsigned short var_1 = (unsigned short)34544;
short var_13 = (short)-2404;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)18317;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(short var_0, unsigned short var_1, short var_13, _Bool var_15, int zero);

int main() {
    init();
    test(var_0, var_1, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
