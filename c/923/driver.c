#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
short var_7 = (short)31541;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -5809292605977790596LL;
unsigned int var_11 = 3596460472U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned char var_3, short var_7, _Bool var_8, int zero);

int main() {
    init();
    test(var_3, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
