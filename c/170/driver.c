#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
unsigned int var_4 = 4038242056U;
int zero = 0;
unsigned char var_18 = (unsigned char)76;
unsigned char var_19 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(signed char var_0, unsigned int var_4, int zero);

int main() {
    init();
    test(var_0, var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
