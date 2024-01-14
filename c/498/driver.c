#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_7 = (unsigned char)107;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)33344;
unsigned int var_11 = 1652818844U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(_Bool var_1, unsigned char var_7, _Bool var_9, int zero);

int main() {
    init();
    test(var_1, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
