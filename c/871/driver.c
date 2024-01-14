#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -4958506165694885732LL;
_Bool var_4 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(_Bool var_0, long long int var_2, _Bool var_4, int zero);

int main() {
    init();
    test(var_0, var_2, var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
