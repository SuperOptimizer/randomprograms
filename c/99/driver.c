#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
int var_1 = 1690076047;
int var_6 = -395323319;
unsigned long long int var_11 = 1727494707087779589ULL;
int zero = 0;
signed char var_12 = (signed char)35;
int var_13 = -1933391643;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned char var_0, int var_1, int var_6, unsigned long long int var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_6, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
