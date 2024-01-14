#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -263434119;
unsigned int var_9 = 2174544184U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)5150;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(int var_3, unsigned int var_9, int zero);

int main() {
    init();
    test(var_3, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
