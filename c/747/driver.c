#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15898559434797645111ULL;
int var_6 = -1165470527;
int zero = 0;
short var_12 = (short)-20583;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned long long int var_0, int var_6, int zero);

int main() {
    init();
    test(var_0, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
