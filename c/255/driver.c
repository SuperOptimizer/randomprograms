#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned long long int var_1 = 17631071852947615911ULL;
unsigned long long int var_2 = 11699432539092875277ULL;
unsigned long long int var_7 = 2453514713540550299ULL;
signed char var_10 = (signed char)-104;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -859121803;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(signed char var_0, unsigned long long int var_1, unsigned long long int var_2, unsigned long long int var_7, signed char var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_7, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
