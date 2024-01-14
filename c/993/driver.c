#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3711257568U;
unsigned int var_3 = 1063771030U;
unsigned int var_6 = 2480577241U;
unsigned int var_8 = 1089594872U;
unsigned int var_9 = 4076337690U;
unsigned int var_15 = 2225192846U;
int zero = 0;
unsigned int var_20 = 1509731027U;
unsigned int var_21 = 666598197U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned int var_2, unsigned int var_3, unsigned int var_6, unsigned int var_8, unsigned int var_9, unsigned int var_15, int zero);

int main() {
    init();
    test(var_2, var_3, var_6, var_8, var_9, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
