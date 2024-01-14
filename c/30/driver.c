#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)18761;
long long int var_10 = -3489493227840712604LL;
unsigned short var_15 = (unsigned short)9652;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned short var_5, long long int var_10, unsigned short var_15, int zero);

int main() {
    init();
    test(var_5, var_10, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
