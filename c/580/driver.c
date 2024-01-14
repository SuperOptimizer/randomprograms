#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)46715;
unsigned int var_8 = 109466441U;
int zero = 0;
short var_10 = (short)9102;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(_Bool var_1, _Bool var_2, unsigned short var_7, unsigned int var_8, int zero);

int main() {
    init();
    test(var_1, var_2, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
