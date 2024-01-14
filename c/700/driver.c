#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4212210336U;
unsigned int var_5 = 1877546369U;
unsigned int var_9 = 1449517877U;
unsigned int var_13 = 1096438947U;
unsigned int var_15 = 1443201743U;
int zero = 0;
unsigned int var_16 = 1954875792U;
unsigned int var_17 = 2811383384U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned int var_2, unsigned int var_5, unsigned int var_9, unsigned int var_13, unsigned int var_15, int zero);

int main() {
    init();
    test(var_2, var_5, var_9, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
