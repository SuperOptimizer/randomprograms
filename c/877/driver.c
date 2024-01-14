#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2132647808U;
int var_15 = 25474498;
int zero = 0;
short var_18 = (short)-7610;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_4, int var_15, int zero);

int main() {
    init();
    test(var_4, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
