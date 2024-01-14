#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2716000990300547923LL;
unsigned short var_6 = (unsigned short)9960;
unsigned long long int var_8 = 6900983061988436176ULL;
unsigned short var_10 = (unsigned short)16382;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)22287;
unsigned long long int var_14 = 3395719851578670963ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(long long int var_5, unsigned short var_6, unsigned long long int var_8, unsigned short var_10, _Bool var_12, int zero);

int main() {
    init();
    test(var_5, var_6, var_8, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
