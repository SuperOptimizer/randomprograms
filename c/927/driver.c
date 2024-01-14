#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53974;
short var_1 = (short)4028;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 2082703261U;
_Bool var_7 = (_Bool)0;
int var_8 = 376493192;
unsigned short var_10 = (unsigned short)17922;
long long int var_12 = 2267019734259865298LL;
int zero = 0;
unsigned short var_18 = (unsigned short)2648;
int var_19 = -1012618894;
unsigned long long int var_20 = 7671561429213027645ULL;
signed char var_21 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned short var_0, short var_1, _Bool var_2, unsigned int var_6, _Bool var_7, int var_8, unsigned short var_10, long long int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_6, var_7, var_8, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
