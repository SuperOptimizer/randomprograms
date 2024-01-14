#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 347716679;
unsigned char var_13 = (unsigned char)175;
signed char var_19 = (signed char)88;
int zero = 0;
int var_20 = 157913022;
unsigned char var_21 = (unsigned char)136;
unsigned short var_22 = (unsigned short)14655;
unsigned short var_23 = (unsigned short)18269;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(int var_5, unsigned char var_13, signed char var_19, int zero);

int main() {
    init();
    test(var_5, var_13, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
