#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-112;
int zero = 0;
int var_12 = 1842558366;
unsigned char var_13 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(signed char var_4, int zero);

int main() {
    init();
    test(var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
