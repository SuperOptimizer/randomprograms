#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = -1231186336;
int zero = 0;
int var_15 = -204643668;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(_Bool var_3, int var_6, int zero);

int main() {
    init();
    test(var_3, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
