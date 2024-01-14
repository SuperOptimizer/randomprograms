#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2029731055484813049ULL;
int var_7 = -1635073305;
unsigned long long int var_11 = 13029503172551885019ULL;
int zero = 0;
unsigned long long int var_14 = 12474730685136153077ULL;
unsigned long long int var_15 = 2733051536761091570ULL;
int var_16 = 912558315;
unsigned long long int var_17 = 12988157527722219536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned long long int var_5, int var_7, unsigned long long int var_11, int zero);

int main() {
    init();
    test(var_5, var_7, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
