#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned short var_1 = (unsigned short)43501;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(signed char var_0, unsigned short var_1, _Bool var_3, _Bool var_4, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
