#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 138967218;
_Bool var_2 = (_Bool)0;
int var_3 = 247137799;
long long int var_4 = -7597866635102760592LL;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 176613878U;
unsigned int var_12 = 1847283783U;
int var_13 = -1832141448;
int zero = 0;
unsigned long long int var_14 = 12853348239338544471ULL;
long long int var_15 = -207828554736165048LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int var_1, _Bool var_2, int var_3, long long int var_4, _Bool var_7, unsigned int var_11, unsigned int var_12, int var_13, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_7, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
