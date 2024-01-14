#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 999001371160747656LL;
short var_12 = (short)-13389;
int zero = 0;
long long int var_19 = 7278499485144115747LL;
long long int var_20 = 2900212484325571915LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_10, short var_12, int zero);

int main() {
    init();
    test(var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
