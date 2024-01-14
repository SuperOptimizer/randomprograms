#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)164;
int zero = 0;
unsigned int var_16 = 1059203771U;
unsigned short var_17 = (unsigned short)54460;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned char var_5, int zero);

int main() {
    init();
    test(var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
