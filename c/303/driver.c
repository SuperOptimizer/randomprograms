#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_16 = (signed char)-10;
int zero = 0;
signed char var_19 = (signed char)66;
unsigned short var_20 = (unsigned short)53135;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_16, int zero);

int main() {
    init();
    test(var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
