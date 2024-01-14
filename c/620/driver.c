#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1333496273U;
unsigned short var_4 = (unsigned short)4213;
int var_7 = -788692635;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-19066;
unsigned short var_12 = (unsigned short)19097;
unsigned long long int var_13 = 48005199270445523ULL;
int zero = 0;
signed char var_16 = (signed char)106;
short var_17 = (short)-32348;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned int var_0, unsigned short var_4, int var_7, _Bool var_8, short var_9, unsigned short var_12, unsigned long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_4, var_7, var_8, var_9, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
