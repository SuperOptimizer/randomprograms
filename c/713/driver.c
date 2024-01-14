#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
signed char var_5 = (signed char)-7;
short var_10 = (short)-13333;
int zero = 0;
int var_18 = 1747195693;
unsigned char var_19 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_0, signed char var_5, short var_10, int zero);

int main() {
    init();
    test(var_0, var_5, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
