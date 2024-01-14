#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12916724071857419687ULL;
int var_11 = 679019417;
int zero = 0;
unsigned long long int var_19 = 15572540461165283514ULL;
unsigned long long int var_20 = 10054991648434452963ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned long long int var_3, int var_11, int zero);

int main() {
    init();
    test(var_3, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
