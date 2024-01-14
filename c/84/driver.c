#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34592;
long long int var_1 = -6609395142340533012LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 370019697728221667LL;
int zero = 0;
unsigned long long int var_10 = 5703785615298809433ULL;
signed char var_11 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned short var_0, long long int var_1, _Bool var_2, long long int var_3, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, zero);
    checksum();
    printf("%llu\n", seed);
}
