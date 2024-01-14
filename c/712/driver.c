#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4111074210U;
unsigned long long int var_11 = 7175206498424759538ULL;
int zero = 0;
unsigned int var_19 = 3363361827U;
int var_20 = 2109272018;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned int var_5, unsigned long long int var_11, int zero);

int main() {
    init();
    test(var_5, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
