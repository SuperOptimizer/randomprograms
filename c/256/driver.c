#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)61859;
unsigned long long int var_14 = 16577546051432040215ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11874511672812445478ULL;
unsigned long long int var_18 = 6945032040467569961ULL;
signed char var_19 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned short var_6, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_6, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
