#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 325297542;
int zero = 0;
unsigned char var_12 = (unsigned char)127;
short var_13 = (short)-31672;
long long int var_14 = -5316261342962658141LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(int var_10, int zero);

int main() {
    init();
    test(var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
