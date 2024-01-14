#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)120;
unsigned int var_18 = 281615662U;
unsigned long long int var_19 = 2441539490391169580ULL;
int zero = 0;
long long int var_20 = 4285254181903542482LL;
long long int var_21 = -985238792672837819LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(signed char var_6, unsigned int var_18, unsigned long long int var_19, int zero);

int main() {
    init();
    test(var_6, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
