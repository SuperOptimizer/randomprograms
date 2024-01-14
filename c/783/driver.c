#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2210017701U;
long long int var_13 = 7034008507407516825LL;
int zero = 0;
unsigned long long int var_17 = 561480388708719347ULL;
short var_18 = (short)-22087;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_6, long long int var_13, int zero);

int main() {
    init();
    test(var_6, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
