#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_5 = 10701932083691195932ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)25585;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_0, unsigned long long int var_5, int zero);

int main() {
    init();
    test(var_0, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
