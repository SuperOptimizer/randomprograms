#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-59;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1606952638;
long long int var_14 = 5953411001788121051LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(signed char var_2, _Bool var_12, int zero);

int main() {
    init();
    test(var_2, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
