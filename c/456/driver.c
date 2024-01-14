#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 99692387526078045ULL;
unsigned short var_4 = (unsigned short)2628;
short var_8 = (short)-32490;
int var_16 = 1593888029;
int var_17 = 2141300495;
signed char var_18 = (signed char)99;
unsigned char var_19 = (unsigned char)249;
int zero = 0;
signed char var_20 = (signed char)76;
unsigned char var_21 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned long long int var_3, unsigned short var_4, short var_8, int var_16, int var_17, signed char var_18, unsigned char var_19, int zero);

int main() {
    init();
    test(var_3, var_4, var_8, var_16, var_17, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
