#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3246004645U;
unsigned long long int var_1 = 936916355636465592ULL;
short var_2 = (short)-27646;
short var_3 = (short)23597;
signed char var_8 = (signed char)-26;
unsigned int var_9 = 1275067088U;
unsigned char var_10 = (unsigned char)172;
signed char var_13 = (signed char)-94;
signed char var_14 = (signed char)55;
unsigned int var_15 = 2950417012U;
int zero = 0;
short var_16 = (short)-7109;
unsigned short var_17 = (unsigned short)56087;
unsigned char var_18 = (unsigned char)139;
unsigned char var_19 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_0, unsigned long long int var_1, short var_2, short var_3, signed char var_8, unsigned int var_9, unsigned char var_10, signed char var_13, signed char var_14, unsigned int var_15, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_8, var_9, var_10, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
