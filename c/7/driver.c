#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
unsigned int var_3 = 2081833380U;
signed char var_8 = (signed char)-5;
long long int var_11 = -5728914939649696021LL;
unsigned char var_13 = (unsigned char)88;
unsigned short var_15 = (unsigned short)24635;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)119;
signed char var_18 = (signed char)109;
short var_19 = (short)-4483;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned char var_2, unsigned int var_3, signed char var_8, long long int var_11, unsigned char var_13, unsigned short var_15, _Bool var_16, int zero);

int main() {
    init();
    test(var_2, var_3, var_8, var_11, var_13, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
