#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2133364954541293893LL;
long long int var_5 = 4712302771954527751LL;
signed char var_13 = (signed char)-104;
int zero = 0;
unsigned long long int var_16 = 17915348651391324565ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_2, long long int var_5, signed char var_13, int zero);

int main() {
    init();
    test(var_2, var_5, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
