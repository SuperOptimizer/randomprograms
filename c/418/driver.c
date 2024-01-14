#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
int var_2 = 1936452139;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
long long int var_18 = -301934387579827743LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned char var_1, int var_2, int zero);

int main() {
    init();
    test(var_1, var_2, zero);
    checksum();
    printf("%llu\n", seed);
}
