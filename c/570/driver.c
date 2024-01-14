#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1418082015U;
int var_6 = 563515787;
signed char var_7 = (signed char)29;
signed char var_9 = (signed char)39;
unsigned short var_12 = (unsigned short)2271;
unsigned int var_13 = 914644652U;
unsigned int var_15 = 2739652813U;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-18147;
signed char var_21 = (signed char)-127;
unsigned int var_22 = 2354491273U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned int var_5, int var_6, signed char var_7, signed char var_9, unsigned short var_12, unsigned int var_13, unsigned int var_15, _Bool var_18, int zero);

int main() {
    init();
    test(var_5, var_6, var_7, var_9, var_12, var_13, var_15, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
