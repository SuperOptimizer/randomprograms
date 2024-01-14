#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-59;
int var_14 = -240123860;
int zero = 0;
unsigned long long int var_19 = 16833483861019165975ULL;
long long int var_20 = -4617140333370091721LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_11, int var_14, int zero);

int main() {
    init();
    test(var_11, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
