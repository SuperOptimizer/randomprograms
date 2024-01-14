#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4345;
long long int var_6 = 2712260877021164585LL;
unsigned short var_7 = (unsigned short)15061;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)84;
int zero = 0;
int var_16 = -793146352;
unsigned char var_17 = (unsigned char)107;
short var_18 = (short)-26339;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned short var_4, long long int var_6, unsigned short var_7, _Bool var_13, unsigned char var_15, int zero);

int main() {
    init();
    test(var_4, var_6, var_7, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
