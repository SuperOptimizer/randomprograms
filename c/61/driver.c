#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned long long int var_5 = 15269873154890389278ULL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)50906;
short var_11 = (short)14961;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(signed char var_0, unsigned long long int var_5, _Bool var_6, int zero);

int main() {
    init();
    test(var_0, var_5, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
