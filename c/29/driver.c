#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1546137827935510320LL;
_Bool var_5 = (_Bool)0;
unsigned short var_10 = (unsigned short)14387;
int zero = 0;
long long int var_11 = -7897889529072517666LL;
long long int var_12 = 5803284937868963968LL;
long long int var_13 = 5356239738096134397LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(long long int var_4, _Bool var_5, unsigned short var_10, int zero);

int main() {
    init();
    test(var_4, var_5, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
