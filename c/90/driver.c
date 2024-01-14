#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_11 = 3691419727U;
int zero = 0;
unsigned int var_14 = 1479509271U;
unsigned char var_15 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_0, unsigned int var_11, int zero);

int main() {
    init();
    test(var_0, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
