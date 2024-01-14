#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_12 = (unsigned char)251;
signed char var_18 = (signed char)-50;
int zero = 0;
int var_19 = -319050836;
long long int var_20 = 2477506653273309619LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(_Bool var_0, unsigned char var_12, signed char var_18, int zero);

int main() {
    init();
    test(var_0, var_12, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
