#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -340689438;
unsigned long long int var_6 = 6995184089482618898ULL;
int var_13 = 1148307263;
int zero = 0;
unsigned int var_16 = 2641838249U;
short var_17 = (short)-7375;
unsigned int var_18 = 3050756748U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(_Bool var_1, int var_3, unsigned long long int var_6, int var_13, int zero);

int main() {
    init();
    test(var_1, var_3, var_6, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
