#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)36;
unsigned long long int var_12 = 2632867229387636100ULL;
short var_15 = (short)8816;
unsigned char var_16 = (unsigned char)133;
int zero = 0;
long long int var_17 = 7021656688733853656LL;
int var_18 = -883939639;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(signed char var_3, unsigned long long int var_12, short var_15, unsigned char var_16, int zero);

int main() {
    init();
    test(var_3, var_12, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
