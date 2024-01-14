#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15101;
signed char var_6 = (signed char)-17;
int var_8 = -210646411;
unsigned long long int var_16 = 170448696386203293ULL;
int zero = 0;
unsigned int var_18 = 4146077534U;
unsigned long long int var_19 = 17199311848811196591ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(short var_3, signed char var_6, int var_8, unsigned long long int var_16, int zero);

int main() {
    init();
    test(var_3, var_6, var_8, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
