#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned short var_2 = (unsigned short)1817;
short var_3 = (short)-25420;
unsigned char var_5 = (unsigned char)42;
unsigned char var_6 = (unsigned char)176;
short var_8 = (short)-16397;
unsigned char var_9 = (unsigned char)140;
short var_10 = (short)31975;
long long int var_11 = 2594758836239871200LL;
long long int var_12 = 1203811701035673761LL;
unsigned short var_13 = (unsigned short)36133;
unsigned int var_16 = 653480483U;
int zero = 0;
unsigned int var_19 = 1976545851U;
unsigned short var_20 = (unsigned short)6027;
unsigned short var_21 = (unsigned short)62793;
unsigned char var_22 = (unsigned char)59;
unsigned int var_23 = 3633787443U;
unsigned char var_24 = (unsigned char)77;
unsigned long long int var_25 = 9534724252308696188ULL;
unsigned int var_26 = 2066322615U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(unsigned char var_0, unsigned short var_2, short var_3, unsigned char var_5, unsigned char var_6, short var_8, unsigned char var_9, short var_10, long long int var_11, long long int var_12, unsigned short var_13, unsigned int var_16, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
