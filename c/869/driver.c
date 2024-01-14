#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)80;
unsigned int var_8 = 787646469U;
unsigned long long int var_11 = 16924984756804178537ULL;
int zero = 0;
signed char var_14 = (signed char)72;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned char var_3, unsigned int var_8, unsigned long long int var_11, int zero);

int main() {
    init();
    test(var_3, var_8, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
