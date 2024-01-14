#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11251073745925473844ULL;
unsigned int var_2 = 1386962020U;
signed char var_5 = (signed char)-115;
unsigned char var_12 = (unsigned char)236;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1206981642;
unsigned short var_16 = (unsigned short)65077;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned long long int var_0, unsigned int var_2, signed char var_5, unsigned char var_12, int zero);

int main() {
    init();
    test(var_0, var_2, var_5, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
