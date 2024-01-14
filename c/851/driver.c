#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 410062221U;
int var_5 = -1861578133;
unsigned char var_10 = (unsigned char)118;
int zero = 0;
unsigned int var_17 = 72954953U;
unsigned int var_18 = 3567555589U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_0, int var_5, unsigned char var_10, int zero);

int main() {
    init();
    test(var_0, var_5, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
