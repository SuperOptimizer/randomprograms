#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3739118728U;
unsigned long long int var_5 = 9477448046368035610ULL;
long long int var_6 = -3370697160715082108LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2649625624U;
unsigned long long int var_18 = 4459403187685114329ULL;
unsigned int var_19 = 3411304431U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_0, unsigned long long int var_5, long long int var_6, int zero);

int main() {
    init();
    test(var_0, var_5, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
