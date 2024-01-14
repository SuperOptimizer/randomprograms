#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-39;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)14553;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(signed char var_7, int zero);

int main() {
    init();
    test(var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
