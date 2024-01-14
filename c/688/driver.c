#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 31909047;
signed char var_1 = (signed char)-59;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 4115955530U;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)33;
short var_14 = (short)-24055;
unsigned int var_17 = 2122339147U;
int var_18 = 1446574452;
int zero = 0;
short var_20 = (short)5068;
int var_21 = 1069609246;
unsigned short var_22 = (unsigned short)11646;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(int var_0, signed char var_1, _Bool var_2, unsigned int var_5, _Bool var_8, signed char var_11, short var_14, unsigned int var_17, int var_18, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_8, var_11, var_14, var_17, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
