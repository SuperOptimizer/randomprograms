#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3244690412086314008ULL;
signed char var_5 = (signed char)-78;
int zero = 0;
unsigned char var_18 = (unsigned char)97;
unsigned int var_19 = 2832968863U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned long long int var_1, signed char var_5, int zero);

int main() {
    init();
    test(var_1, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
