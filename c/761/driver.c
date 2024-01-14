#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)185;
unsigned short var_8 = (unsigned short)11400;
int zero = 0;
long long int var_15 = 8313479748380657427LL;
unsigned short var_16 = (unsigned short)8371;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned char var_6, unsigned short var_8, int zero);

int main() {
    init();
    test(var_6, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
