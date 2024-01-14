#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1668644351;
unsigned short var_6 = (unsigned short)20371;
unsigned long long int var_8 = 2592729635230737476ULL;
unsigned short var_11 = (unsigned short)40326;
int zero = 0;
long long int var_12 = -3364443294725458145LL;
unsigned char var_13 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(int var_0, unsigned short var_6, unsigned long long int var_8, unsigned short var_11, int zero);

int main() {
    init();
    test(var_0, var_6, var_8, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
