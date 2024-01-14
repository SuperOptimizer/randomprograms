#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = -1250589831229790474LL;
int var_11 = -836603554;
short var_13 = (short)-772;
int zero = 0;
short var_18 = (short)23850;
unsigned int var_19 = 2099476303U;
unsigned char var_20 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(_Bool var_3, long long int var_6, int var_11, short var_13, int zero);

int main() {
    init();
    test(var_3, var_6, var_11, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
