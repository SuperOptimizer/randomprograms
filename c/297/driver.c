#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -21053896;
signed char var_10 = (signed char)97;
int zero = 0;
long long int var_11 = 1756490116542168384LL;
unsigned long long int var_12 = 7348479452573535675ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(int var_6, signed char var_10, int zero);

int main() {
    init();
    test(var_6, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
