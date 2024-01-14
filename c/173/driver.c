#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 710470688;
short var_2 = (short)-7814;
unsigned short var_4 = (unsigned short)35027;
int var_6 = 175749970;
short var_11 = (short)-20026;
int zero = 0;
short var_13 = (short)5816;
unsigned short var_14 = (unsigned short)42475;
long long int var_15 = -6962789430807069690LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(int var_0, short var_2, unsigned short var_4, int var_6, short var_11, int zero);

int main() {
    init();
    test(var_0, var_2, var_4, var_6, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
