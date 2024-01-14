#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_17 = 2523773553U;
int zero = 0;
signed char var_18 = (signed char)113;
int var_19 = 1103681464;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(_Bool var_0, unsigned int var_17, int zero);

int main() {
    init();
    test(var_0, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
