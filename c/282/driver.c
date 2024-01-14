#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1512004088;
signed char var_3 = (signed char)-89;
long long int var_6 = -1402997019122745015LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)40;
unsigned long long int var_12 = 17616752781760979769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(int var_2, signed char var_3, long long int var_6, _Bool var_9, int zero);

int main() {
    init();
    test(var_2, var_3, var_6, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
