#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
signed char var_1 = (signed char)55;
signed char var_6 = (signed char)5;
int zero = 0;
unsigned char var_10 = (unsigned char)135;
long long int var_11 = 6420924597140649049LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(signed char var_0, signed char var_1, signed char var_6, int zero);

int main() {
    init();
    test(var_0, var_1, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
