#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1593505122;
short var_5 = (short)2894;
unsigned char var_11 = (unsigned char)40;
int zero = 0;
unsigned short var_20 = (unsigned short)13872;
unsigned short var_21 = (unsigned short)51853;
short var_22 = (short)4938;
unsigned int var_23 = 1819882506U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(int var_4, short var_5, unsigned char var_11, int zero);

int main() {
    init();
    test(var_4, var_5, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
