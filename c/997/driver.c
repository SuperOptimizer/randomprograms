#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)19;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-28292;
unsigned char var_9 = (unsigned char)196;
int var_12 = 323991268;
int zero = 0;
signed char var_16 = (signed char)125;
signed char var_17 = (signed char)50;
unsigned int var_18 = 2704428269U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(signed char var_3, _Bool var_4, short var_5, unsigned char var_9, int var_12, int zero);

int main() {
    init();
    test(var_3, var_4, var_5, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
