#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)124;
int var_3 = 1392225160;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 3545654957U;
int zero = 0;
long long int var_14 = -4178723273953975671LL;
unsigned char var_15 = (unsigned char)141;
unsigned char var_16 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(signed char var_2, int var_3, _Bool var_9, unsigned int var_12, int zero);

int main() {
    init();
    test(var_2, var_3, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
