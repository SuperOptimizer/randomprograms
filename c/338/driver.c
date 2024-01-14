#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_15 = 1851723639;
int zero = 0;
signed char var_17 = (signed char)65;
int var_18 = 1433695313;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(_Bool var_6, int var_15, int zero);

int main() {
    init();
    test(var_6, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
