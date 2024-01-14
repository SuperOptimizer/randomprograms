#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36051;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 915690672;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned short var_0, int zero);

int main() {
    init();
    test(var_0, zero);
    checksum();
    printf("%llu\n", seed);
}
