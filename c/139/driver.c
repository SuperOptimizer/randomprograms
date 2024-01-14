#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-4;
unsigned int var_5 = 119096284U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 1631162221U;
int zero = 0;
signed char var_14 = (signed char)-10;
signed char var_15 = (signed char)-46;
int var_16 = -1647564993;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(signed char var_2, unsigned int var_5, _Bool var_8, _Bool var_10, unsigned int var_13, int zero);

int main() {
    init();
    test(var_2, var_5, var_8, var_10, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
