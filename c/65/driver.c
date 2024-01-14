#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4216127267U;
long long int var_5 = 5647893589504710397LL;
short var_7 = (short)-14690;
unsigned char var_9 = (unsigned char)204;
unsigned char var_12 = (unsigned char)112;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 790874071U;
signed char var_18 = (signed char)76;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_0, long long int var_5, short var_7, unsigned char var_9, unsigned char var_12, _Bool var_13, int zero);

int main() {
    init();
    test(var_0, var_5, var_7, var_9, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
