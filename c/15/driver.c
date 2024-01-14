#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53098;
signed char var_2 = (signed char)-99;
int var_15 = 285075892;
int zero = 0;
short var_19 = (short)6305;
int var_20 = -788084809;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned short var_0, signed char var_2, int var_15, int zero);

int main() {
    init();
    test(var_0, var_2, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
