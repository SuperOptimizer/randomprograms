#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)107;
unsigned short var_11 = (unsigned short)53882;
int zero = 0;
short var_18 = (short)-10752;
int var_19 = -830848964;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(signed char var_5, unsigned short var_11, int zero);

int main() {
    init();
    test(var_5, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
