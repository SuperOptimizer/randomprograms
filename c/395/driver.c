#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4124133294U;
_Bool var_11 = (_Bool)1;
unsigned int var_17 = 3303536333U;
int zero = 0;
unsigned int var_18 = 3122798488U;
unsigned short var_19 = (unsigned short)45282;
unsigned short var_20 = (unsigned short)60888;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned int var_6, _Bool var_11, unsigned int var_17, int zero);

int main() {
    init();
    test(var_6, var_11, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
