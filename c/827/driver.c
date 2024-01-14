#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1165349081U;
unsigned char var_6 = (unsigned char)126;
unsigned int var_7 = 1528955138U;
long long int var_10 = -7455712565634891542LL;
unsigned int var_15 = 1300512047U;
unsigned char var_18 = (unsigned char)242;
unsigned char var_19 = (unsigned char)37;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -4566077789430461162LL;
unsigned char var_22 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned int var_3, unsigned char var_6, unsigned int var_7, long long int var_10, unsigned int var_15, unsigned char var_18, unsigned char var_19, int zero);

int main() {
    init();
    test(var_3, var_6, var_7, var_10, var_15, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
