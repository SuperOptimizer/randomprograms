#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-20925;
int zero = 0;
short var_14 = (short)17719;
unsigned short var_15 = (unsigned short)23167;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_9, int zero);

int main() {
    init();
    test(var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
