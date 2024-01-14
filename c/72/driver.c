#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_15 = (unsigned short)22638;
long long int var_16 = -7869385900250645187LL;
int zero = 0;
unsigned short var_18 = (unsigned short)3099;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(_Bool var_6, unsigned short var_15, long long int var_16, int zero);

int main() {
    init();
    test(var_6, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
