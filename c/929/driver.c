#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 525242174;
unsigned int var_16 = 1261313198U;
signed char var_17 = (signed char)9;
int zero = 0;
signed char var_19 = (signed char)93;
signed char var_20 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(int var_6, unsigned int var_16, signed char var_17, int zero);

int main() {
    init();
    test(var_6, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
