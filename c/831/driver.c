#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_19 = 5753736709379485336ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1906160358;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned long long int var_19, int zero);

int main() {
    init();
    test(var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
