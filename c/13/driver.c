#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12451;
short var_3 = (short)24045;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)56327;
unsigned char var_12 = (unsigned char)199;
int zero = 0;
int var_17 = 995651136;
unsigned short var_18 = (unsigned short)22629;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(short var_0, short var_3, _Bool var_10, unsigned short var_11, unsigned char var_12, int zero);

int main() {
    init();
    test(var_0, var_3, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
