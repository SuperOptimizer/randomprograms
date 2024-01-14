#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
unsigned char var_2 = (unsigned char)105;
unsigned char var_4 = (unsigned char)104;
int zero = 0;
signed char var_15 = (signed char)107;
int var_16 = -89656319;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned char var_1, unsigned char var_2, unsigned char var_4, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
