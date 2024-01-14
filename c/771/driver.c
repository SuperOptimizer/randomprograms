#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)54;
signed char var_10 = (signed char)39;
int zero = 0;
unsigned short var_12 = (unsigned short)15792;
signed char var_13 = (signed char)6;
unsigned char var_14 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned char var_9, signed char var_10, int zero);

int main() {
    init();
    test(var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
