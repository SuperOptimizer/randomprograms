#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)32064;
int var_5 = 1158756628;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-8333;
short var_11 = (short)-8008;
unsigned long long int var_13 = 10202371556210955582ULL;
unsigned long long int var_14 = 12489934028912948400ULL;
int zero = 0;
int var_16 = -2080498756;
unsigned int var_17 = 2930296792U;
unsigned long long int var_18 = 12515251254362684692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(_Bool var_1, short var_4, int var_5, _Bool var_7, short var_9, short var_11, unsigned long long int var_13, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_1, var_4, var_5, var_7, var_9, var_11, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
