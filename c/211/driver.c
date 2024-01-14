#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
long long int var_2 = -5845008371017366937LL;
unsigned char var_4 = (unsigned char)22;
unsigned int var_7 = 3935572060U;
int var_13 = 1678858101;
int zero = 0;
unsigned int var_14 = 3075494585U;
unsigned short var_15 = (unsigned short)55558;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(signed char var_1, long long int var_2, unsigned char var_4, unsigned int var_7, int var_13, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_7, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
