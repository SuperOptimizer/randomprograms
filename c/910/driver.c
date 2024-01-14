#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)38;
int zero = 0;
short var_10 = (short)-18408;
unsigned char var_11 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(_Bool var_1, unsigned char var_7, int zero);

int main() {
    init();
    test(var_1, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
