#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
int var_7 = -788331620;
unsigned int var_8 = 1996336191U;
int var_10 = 1585521425;
signed char var_13 = (signed char)84;
int zero = 0;
int var_14 = 1745775786;
long long int var_15 = -2859813429920483732LL;
int var_16 = -1951328667;
unsigned long long int var_17 = 2616510336506790728ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(signed char var_1, int var_7, unsigned int var_8, int var_10, signed char var_13, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, var_10, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
