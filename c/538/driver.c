#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7767126032668302721LL;
short var_8 = (short)-28884;
unsigned long long int var_12 = 12575378880299479698ULL;
unsigned long long int var_14 = 575119248295985019ULL;
short var_15 = (short)8390;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
long long int var_19 = -8577177108834490305LL;
long long int var_20 = 1517094497589773882LL;
short var_21 = (short)-32450;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_2, short var_8, unsigned long long int var_12, unsigned long long int var_14, short var_15, unsigned char var_17, int zero);

int main() {
    init();
    test(var_2, var_8, var_12, var_14, var_15, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
