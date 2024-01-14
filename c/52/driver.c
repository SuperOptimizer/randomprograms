#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8923104644186603633LL;
int var_5 = -1406851802;
unsigned short var_6 = (unsigned short)7895;
unsigned char var_8 = (unsigned char)248;
signed char var_10 = (signed char)76;
unsigned short var_12 = (unsigned short)27885;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 6546956213417846261ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_0, int var_5, unsigned short var_6, unsigned char var_8, signed char var_10, unsigned short var_12, _Bool var_16, int zero);

int main() {
    init();
    test(var_0, var_5, var_6, var_8, var_10, var_12, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
