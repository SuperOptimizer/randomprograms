#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9622417076931086879ULL;
long long int var_4 = -6430972254369152453LL;
unsigned int var_5 = 3804287490U;
short var_10 = (short)28293;
long long int var_12 = -1816675690949441285LL;
int zero = 0;
short var_13 = (short)-7796;
unsigned long long int var_14 = 4807411052148922388ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned long long int var_3, long long int var_4, unsigned int var_5, short var_10, long long int var_12, int zero);

int main() {
    init();
    test(var_3, var_4, var_5, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
