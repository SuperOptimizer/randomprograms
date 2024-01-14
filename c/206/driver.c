#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1396919290932997787LL;
unsigned long long int var_3 = 14786366229581165610ULL;
int var_6 = 1615951668;
short var_8 = (short)14062;
long long int var_10 = 6762090154568861119LL;
long long int var_11 = 6651747187477309190LL;
short var_12 = (short)10771;
int zero = 0;
unsigned int var_16 = 508922736U;
unsigned int var_17 = 1282022332U;
short var_18 = (short)-14031;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(long long int var_1, unsigned long long int var_3, int var_6, short var_8, long long int var_10, long long int var_11, short var_12, int zero);

int main() {
    init();
    test(var_1, var_3, var_6, var_8, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
