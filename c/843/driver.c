#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_7 = 567306572U;
long long int var_8 = 5402801333045910297LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-3;
signed char var_11 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(_Bool var_1, unsigned int var_7, long long int var_8, _Bool var_9, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
