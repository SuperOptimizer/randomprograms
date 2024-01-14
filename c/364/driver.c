#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1020403838;
short var_3 = (short)-23432;
short var_4 = (short)17918;
unsigned char var_5 = (unsigned char)242;
int var_8 = -64713304;
short var_9 = (short)32401;
_Bool var_11 = (_Bool)0;
long long int var_12 = 9170939989962403167LL;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
short var_14 = (short)12689;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5347055734965364079LL;
int var_17 = 546973201;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int var_1, short var_3, short var_4, unsigned char var_5, int var_8, short var_9, _Bool var_11, long long int var_12, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_8, var_9, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
