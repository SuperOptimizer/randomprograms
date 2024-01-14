#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25643;
signed char var_3 = (signed char)-98;
unsigned int var_6 = 2129857383U;
short var_7 = (short)-11187;
long long int var_11 = 4274374622428202989LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)239;
long long int var_18 = 7160853471583903429LL;
unsigned char var_19 = (unsigned char)137;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_0, signed char var_3, unsigned int var_6, short var_7, long long int var_11, _Bool var_16, int zero);

int main() {
    init();
    test(var_0, var_3, var_6, var_7, var_11, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
