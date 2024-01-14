#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-14;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)-76;
int zero = 0;
short var_18 = (short)-6330;
signed char var_19 = (signed char)11;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(signed char var_7, _Bool var_14, signed char var_16, int zero);

int main() {
    init();
    test(var_7, var_14, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
