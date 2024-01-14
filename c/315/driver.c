#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5246867850656333252LL;
int zero = 0;
int var_11 = -1477953716;
short var_12 = (short)25475;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(long long int var_8, int zero);

int main() {
    init();
    test(var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
