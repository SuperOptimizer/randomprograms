#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10140209111858604704ULL;
long long int var_8 = 7571862230417765342LL;
int var_9 = 692770659;
signed char var_14 = (signed char)-115;
signed char var_16 = (signed char)49;
int zero = 0;
int var_19 = -660901409;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned long long int var_1, long long int var_8, int var_9, signed char var_14, signed char var_16, int zero);

int main() {
    init();
    test(var_1, var_8, var_9, var_14, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
