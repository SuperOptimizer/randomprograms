#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 239525281U;
unsigned long long int var_1 = 4053605474544319104ULL;
short var_3 = (short)-17602;
unsigned char var_5 = (unsigned char)12;
unsigned int var_8 = 2453177431U;
short var_9 = (short)4938;
int var_10 = -2045732600;
long long int var_11 = 8490012814400941407LL;
unsigned long long int var_12 = 7617252974777054782ULL;
int zero = 0;
unsigned long long int var_14 = 9183456330883024907ULL;
unsigned long long int var_15 = 5215383687734245268ULL;
int var_16 = -1431169141;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)56186;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned int var_0, unsigned long long int var_1, short var_3, unsigned char var_5, unsigned int var_8, short var_9, int var_10, long long int var_11, unsigned long long int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_8, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
