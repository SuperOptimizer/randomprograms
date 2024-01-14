#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9068696089244033772LL;
unsigned int var_5 = 1359850517U;
int zero = 0;
unsigned short var_11 = (unsigned short)65339;
int var_12 = 1007496034;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(long long int var_1, unsigned int var_5, int zero);

int main() {
    init();
    test(var_1, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
