#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 919748846U;
short var_6 = (short)14746;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-81;
int zero = 0;
int var_12 = 301263575;
signed char var_13 = (signed char)-68;
signed char var_14 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned int var_0, short var_6, _Bool var_10, signed char var_11, int zero);

int main() {
    init();
    test(var_0, var_6, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
