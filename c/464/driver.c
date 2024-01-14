#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1260250857U;
int var_15 = -154328372;
int zero = 0;
unsigned char var_17 = (unsigned char)145;
signed char var_18 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_10, int var_15, int zero);

int main() {
    init();
    test(var_10, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
