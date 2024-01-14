#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)81;
unsigned short var_5 = (unsigned short)3952;
unsigned int var_6 = 3364074546U;
int zero = 0;
long long int var_10 = -2534960889837712775LL;
int var_11 = -1674896181;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(unsigned char var_3, unsigned short var_5, unsigned int var_6, int zero);

int main() {
    init();
    test(var_3, var_5, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
