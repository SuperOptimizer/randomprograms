#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_8 = (short)7602;
unsigned int var_10 = 3717490552U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16387693058747964569ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(_Bool var_4, _Bool var_6, short var_8, unsigned int var_10, int zero);

int main() {
    init();
    test(var_4, var_6, var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
