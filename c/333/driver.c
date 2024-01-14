#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)14275;
int zero = 0;
long long int var_12 = 2313960554970964700LL;
long long int var_13 = 3328839680720634106LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned short var_10, int zero);

int main() {
    init();
    test(var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
