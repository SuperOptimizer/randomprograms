#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -813291728639008062LL;
unsigned short var_1 = (unsigned short)15093;
long long int var_4 = 1440888926763021237LL;
long long int var_6 = -4395360727745913573LL;
int var_7 = 299938004;
long long int var_8 = 4241430169795645136LL;
short var_9 = (short)28021;
unsigned int var_11 = 1582762705U;
int zero = 0;
long long int var_20 = -7963054077864032888LL;
unsigned short var_21 = (unsigned short)29407;
unsigned short var_22 = (unsigned short)6466;
unsigned int var_23 = 1566385156U;
long long int var_24 = 2858580856637107100LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test(long long int var_0, unsigned short var_1, long long int var_4, long long int var_6, int var_7, long long int var_8, short var_9, unsigned int var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_4, var_6, var_7, var_8, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
