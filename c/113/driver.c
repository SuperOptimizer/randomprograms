#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
int zero = 0;
int var_12 = -1624575453;
unsigned long long int var_13 = 5631779570238141704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(signed char var_0, int zero);

int main() {
    init();
    test(var_0, zero);
    checksum();
    printf("%llu\n", seed);
}
