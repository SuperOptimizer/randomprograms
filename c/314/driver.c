#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6758351972583242503LL;
signed char var_1 = (signed char)105;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)58440;
unsigned short var_8 = (unsigned short)44985;
unsigned char var_10 = (unsigned char)211;
int zero = 0;
unsigned int var_11 = 2141367843U;
unsigned short var_12 = (unsigned short)58812;
short var_13 = (short)10609;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(long long int var_0, signed char var_1, _Bool var_5, unsigned short var_6, unsigned short var_8, unsigned char var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_5, var_6, var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
