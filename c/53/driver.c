#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22729;
short var_4 = (short)32469;
unsigned long long int var_7 = 338227424464141737ULL;
unsigned long long int var_8 = 14729681142541878774ULL;
short var_10 = (short)-5170;
unsigned char var_14 = (unsigned char)51;
int zero = 0;
unsigned char var_19 = (unsigned char)140;
long long int var_20 = 573126955502920353LL;
signed char var_21 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_0, short var_4, unsigned long long int var_7, unsigned long long int var_8, short var_10, unsigned char var_14, int zero);

int main() {
    init();
    test(var_0, var_4, var_7, var_8, var_10, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
