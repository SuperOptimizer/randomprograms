#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)26450;
int zero = 0;
unsigned int var_15 = 1748694739U;
int var_16 = -902945061;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(short var_13, int zero);

int main() {
    init();
    test(var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
