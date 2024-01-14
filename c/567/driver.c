#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)25315;
unsigned short var_3 = (unsigned short)101;
_Bool var_4 = (_Bool)1;
short var_7 = (short)3236;
unsigned int var_8 = 1983101356U;
unsigned short var_12 = (unsigned short)38956;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2500077489943569868LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_0, unsigned short var_2, unsigned short var_3, _Bool var_4, short var_7, unsigned int var_8, unsigned short var_12, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_7, var_8, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
