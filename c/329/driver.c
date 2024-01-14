#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2245869679U;
unsigned int var_3 = 283309108U;
long long int var_4 = -8478223395883498936LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)28773;
unsigned int var_14 = 1773812012U;
int zero = 0;
short var_16 = (short)-30858;
unsigned long long int var_17 = 7229226361198959137ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_1, unsigned int var_3, long long int var_4, _Bool var_10, short var_11, unsigned int var_14, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_10, var_11, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
