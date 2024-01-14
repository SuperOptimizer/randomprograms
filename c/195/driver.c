#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 6847926765722805038LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_7 = -3808140974557006286LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1495425794U;
unsigned int var_14 = 1013207094U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(_Bool var_1, long long int var_2, _Bool var_4, _Bool var_5, long long int var_7, _Bool var_10, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_7, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
