#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)99;
int zero = 0;
short var_20 = (short)-31249;
unsigned char var_21 = (unsigned char)83;
unsigned short var_22 = (unsigned short)52382;
signed char var_23 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(signed char var_11, int zero);

int main() {
    init();
    test(var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
