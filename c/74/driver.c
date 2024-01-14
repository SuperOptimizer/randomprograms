#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12615;
_Bool var_1 = (_Bool)0;
int zero = 0;
short var_20 = (short)-5433;
unsigned char var_21 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_0, _Bool var_1, int zero);

int main() {
    init();
    test(var_0, var_1, zero);
    checksum();
    printf("%llu\n", seed);
}
