#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1575609851U;
unsigned char var_7 = (unsigned char)119;
unsigned int var_8 = 837312570U;
unsigned char var_9 = (unsigned char)30;
int zero = 0;
unsigned int var_11 = 1513080707U;
unsigned short var_12 = (unsigned short)21406;
unsigned short var_13 = (unsigned short)41497;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned int var_6, unsigned char var_7, unsigned int var_8, unsigned char var_9, int zero);

int main() {
    init();
    test(var_6, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
