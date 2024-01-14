#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20789;
signed char var_1 = (signed char)79;
unsigned long long int var_6 = 9254358741585373356ULL;
unsigned short var_9 = (unsigned short)6214;
int zero = 0;
signed char var_13 = (signed char)89;
unsigned short var_14 = (unsigned short)3825;
unsigned short var_15 = (unsigned short)1722;
unsigned short var_16 = (unsigned short)17585;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_0, signed char var_1, unsigned long long int var_6, unsigned short var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_6, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
