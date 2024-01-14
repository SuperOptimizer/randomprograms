#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 3200617490U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3107332454U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_11, _Bool var_14, int zero);

int main() {
    init();
    test(var_11, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
