#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64055;
unsigned char var_2 = (unsigned char)14;
int var_5 = -156599514;
unsigned int var_6 = 3326617748U;
short var_7 = (short)11444;
long long int var_10 = -4505612108670477516LL;
unsigned long long int var_14 = 17484325747454940554ULL;
int zero = 0;
short var_15 = (short)18300;
short var_16 = (short)10188;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_0, unsigned char var_2, int var_5, unsigned int var_6, short var_7, long long int var_10, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_0, var_2, var_5, var_6, var_7, var_10, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
