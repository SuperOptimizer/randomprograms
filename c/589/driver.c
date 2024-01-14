#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57806;
unsigned char var_5 = (unsigned char)215;
unsigned short var_6 = (unsigned short)34503;
unsigned long long int var_7 = 2652167874887243807ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)9986;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned short var_0, unsigned char var_5, unsigned short var_6, unsigned long long int var_7, int zero);

int main() {
    init();
    test(var_0, var_5, var_6, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
