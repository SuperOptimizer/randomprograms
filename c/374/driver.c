#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 3512401029080182000LL;
long long int var_15 = -9201013727583653276LL;
int var_17 = -111904289;
int zero = 0;
short var_19 = (short)4880;
short var_20 = (short)-31971;
long long int var_21 = -3221084983234748388LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_11, long long int var_15, int var_17, int zero);

int main() {
    init();
    test(var_11, var_15, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
