#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7933489091886876152ULL;
unsigned long long int var_3 = 11644374871698787475ULL;
unsigned long long int var_4 = 378935296120400154ULL;
unsigned short var_6 = (unsigned short)5988;
unsigned long long int var_8 = 2640915790282143501ULL;
int var_9 = -272657687;
unsigned int var_11 = 2436652307U;
unsigned char var_12 = (unsigned char)54;
short var_17 = (short)12569;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8655288658961314570LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned long long int var_0, unsigned long long int var_3, unsigned long long int var_4, unsigned short var_6, unsigned long long int var_8, int var_9, unsigned int var_11, unsigned char var_12, short var_17, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, var_6, var_8, var_9, var_11, var_12, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
