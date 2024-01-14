#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2043369564;
short var_3 = (short)-23263;
signed char var_4 = (signed char)55;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 14248301204576537479ULL;
int zero = 0;
long long int var_13 = -5172048468873665429LL;
long long int var_14 = -3997244462761136963LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(int var_0, short var_3, signed char var_4, _Bool var_5, unsigned long long int var_8, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
