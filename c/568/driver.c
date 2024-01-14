#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)94;
signed char var_5 = (signed char)96;
long long int var_8 = -7108296262601542634LL;
signed char var_10 = (signed char)-61;
int var_15 = -1224723127;
int zero = 0;
signed char var_18 = (signed char)-60;
long long int var_19 = 7335197011291136867LL;
short var_20 = (short)12865;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_3, signed char var_5, long long int var_8, signed char var_10, int var_15, int zero);

int main() {
    init();
    test(var_3, var_5, var_8, var_10, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
