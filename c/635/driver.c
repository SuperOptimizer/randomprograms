#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)13015;
short var_12 = (short)25844;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(_Bool var_10, int zero);

int main() {
    init();
    test(var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
