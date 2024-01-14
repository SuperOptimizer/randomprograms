#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)61781;
int zero = 0;
long long int var_14 = -5212775010086780195LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_3, unsigned short var_6, int zero);

int main() {
    init();
    test(var_3, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
