#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)111;
short var_6 = (short)28310;
int zero = 0;
unsigned long long int var_11 = 11320207072827959333ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(unsigned char var_4, short var_6, int zero);

int main() {
    init();
    test(var_4, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
