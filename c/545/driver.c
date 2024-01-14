#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5731274419524435518LL;
unsigned char var_1 = (unsigned char)92;
signed char var_3 = (signed char)-90;
unsigned char var_4 = (unsigned char)225;
unsigned short var_5 = (unsigned short)45036;
unsigned int var_7 = 3037178901U;
unsigned int var_10 = 3947862523U;
unsigned short var_12 = (unsigned short)43833;
int var_13 = -1026139763;
unsigned int var_15 = 548692274U;
long long int var_16 = 3807902754277259074LL;
int zero = 0;
signed char var_18 = (signed char)33;
short var_19 = (short)-31996;
unsigned char var_20 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_0, unsigned char var_1, signed char var_3, unsigned char var_4, unsigned short var_5, unsigned int var_7, unsigned int var_10, unsigned short var_12, int var_13, unsigned int var_15, long long int var_16, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_7, var_10, var_12, var_13, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
