#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 3432012862316664944ULL;
unsigned long long int var_14 = 11750474505354710043ULL;
int zero = 0;
unsigned int var_18 = 302325615U;
unsigned long long int var_19 = 12816810141508175657ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned long long int var_10, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_10, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
