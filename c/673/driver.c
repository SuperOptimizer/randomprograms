#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23867;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 2615366405053986682ULL;
unsigned char var_4 = (unsigned char)184;
short var_5 = (short)10526;
short var_6 = (short)849;
unsigned char var_8 = (unsigned char)40;
unsigned char var_10 = (unsigned char)225;
unsigned short var_11 = (unsigned short)57271;
int zero = 0;
long long int var_12 = -8440290090488808653LL;
unsigned char var_13 = (unsigned char)236;
unsigned char var_14 = (unsigned char)72;
unsigned int var_15 = 642454600U;
unsigned char var_16 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(short var_0, _Bool var_1, unsigned long long int var_2, unsigned char var_4, short var_5, short var_6, unsigned char var_8, unsigned char var_10, unsigned short var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_8, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
