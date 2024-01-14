#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26974;
signed char var_8 = (signed char)-1;
unsigned int var_10 = 1660372304U;
unsigned short var_17 = (unsigned short)61047;
int zero = 0;
unsigned int var_19 = 2402192296U;
signed char var_20 = (signed char)93;
signed char var_21 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_1, signed char var_8, unsigned int var_10, unsigned short var_17, int zero);

int main() {
    init();
    test(var_1, var_8, var_10, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
