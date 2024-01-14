#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
int var_2 = -2014653277;
signed char var_11 = (signed char)-99;
unsigned int var_12 = 2363982652U;
int zero = 0;
unsigned char var_17 = (unsigned char)155;
unsigned long long int var_18 = 15103128838322487841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(signed char var_0, int var_2, signed char var_11, unsigned int var_12, int zero);

int main() {
    init();
    test(var_0, var_2, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
