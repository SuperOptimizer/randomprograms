#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_9 = (short)-21268;
int zero = 0;
short var_11 = (short)6893;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(_Bool var_5, short var_9, int zero);

int main() {
    init();
    test(var_5, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
