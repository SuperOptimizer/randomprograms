#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11913;
short var_6 = (short)2867;
long long int var_14 = -718564752921407898LL;
short var_15 = (short)-32298;
int zero = 0;
int var_16 = -2021338403;
unsigned char var_17 = (unsigned char)126;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3473473642U;
unsigned short var_20 = (unsigned short)16046;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned short var_5, short var_6, long long int var_14, short var_15, int zero);

int main() {
    init();
    test(var_5, var_6, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
