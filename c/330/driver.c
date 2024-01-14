#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)47;
long long int var_13 = 7382698066676120120LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(_Bool var_4, int zero);

int main() {
    init();
    test(var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
