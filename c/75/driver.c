#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2257853101607076403LL;
short var_12 = (short)20175;
int zero = 0;
short var_20 = (short)-28066;
unsigned char var_21 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_1, short var_12, int zero);

int main() {
    init();
    test(var_1, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
