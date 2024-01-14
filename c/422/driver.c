#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2668;
short var_1 = (short)9905;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)16185;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-62;
_Bool var_9 = (_Bool)0;
long long int var_10 = 8280104764046859880LL;
int zero = 0;
unsigned char var_11 = (unsigned char)183;
short var_12 = (short)7342;
int var_13 = 2014334092;
signed char var_14 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned short var_0, short var_1, _Bool var_2, unsigned short var_6, _Bool var_7, signed char var_8, _Bool var_9, long long int var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_6, var_7, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
