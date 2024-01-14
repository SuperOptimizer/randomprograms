#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1456767181;
long long int var_6 = 6572596821456983780LL;
unsigned char var_8 = (unsigned char)253;
long long int var_16 = -8206307372974926333LL;
short var_17 = (short)21350;
unsigned char var_19 = (unsigned char)20;
int zero = 0;
unsigned int var_20 = 1806696857U;
unsigned char var_21 = (unsigned char)0;
unsigned long long int var_22 = 8437016402880246365ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(int var_2, long long int var_6, unsigned char var_8, long long int var_16, short var_17, unsigned char var_19, int zero);

int main() {
    init();
    test(var_2, var_6, var_8, var_16, var_17, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
