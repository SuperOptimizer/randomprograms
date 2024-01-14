#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
int var_10 = -698821783;
signed char var_11 = (signed char)70;
int zero = 0;
signed char var_14 = (signed char)-12;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(signed char var_1, int var_10, signed char var_11, int zero);

int main() {
    init();
    test(var_1, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
