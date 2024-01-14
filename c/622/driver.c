#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27471;
unsigned short var_3 = (unsigned short)39449;
unsigned int var_5 = 3106517786U;
int var_7 = 487103661;
unsigned short var_16 = (unsigned short)14083;
int zero = 0;
signed char var_20 = (signed char)-6;
int var_21 = 967215787;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned short var_2, unsigned short var_3, unsigned int var_5, int var_7, unsigned short var_16, int zero);

int main() {
    init();
    test(var_2, var_3, var_5, var_7, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
