#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6307146460440624885ULL;
signed char var_2 = (signed char)-70;
unsigned char var_4 = (unsigned char)116;
unsigned int var_5 = 1060235698U;
unsigned long long int var_11 = 3756893286334450403ULL;
int var_12 = -1599820841;
int zero = 0;
short var_13 = (short)-24085;
signed char var_14 = (signed char)-58;
short var_15 = (short)-16496;
short var_16 = (short)-22514;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned long long int var_0, signed char var_2, unsigned char var_4, unsigned int var_5, unsigned long long int var_11, int var_12, int zero);

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
