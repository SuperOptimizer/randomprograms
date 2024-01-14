#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)193;
_Bool var_4 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)122;
unsigned long long int var_16 = 4156798303638188924ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned char var_3, _Bool var_4, int zero);

int main() {
    init();
    test(var_3, var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
