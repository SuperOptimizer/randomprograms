#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)58737;
signed char var_12 = (signed char)-60;
int zero = 0;
unsigned long long int var_18 = 8662385214134163671ULL;
unsigned char var_19 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned short var_11, signed char var_12, int zero);

int main() {
    init();
    test(var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
