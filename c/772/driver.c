#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16008;
long long int var_5 = 3680114075225564602LL;
int zero = 0;
unsigned char var_14 = (unsigned char)38;
short var_15 = (short)-4710;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_2, long long int var_5, int zero);

int main() {
    init();
    test(var_2, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
