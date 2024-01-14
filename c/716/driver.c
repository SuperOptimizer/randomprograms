#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)63;
int zero = 0;
unsigned short var_19 = (unsigned short)4089;
signed char var_20 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_11, int zero);

int main() {
    init();
    test(var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
