#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2769881214U;
long long int var_4 = -7543606280752411816LL;
signed char var_10 = (signed char)-108;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1991180617U;
unsigned long long int var_15 = 15609680752970077602ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned int var_2, long long int var_4, signed char var_10, int zero);

int main() {
    init();
    test(var_2, var_4, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
