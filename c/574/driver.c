#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)29464;
int zero = 0;
int var_14 = -93834316;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_6, int zero);

int main() {
    init();
    test(var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
