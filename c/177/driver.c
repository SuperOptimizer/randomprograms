#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5705619632448557768ULL;
int var_2 = -1833292416;
long long int var_3 = 3105196739079012627LL;
signed char var_6 = (signed char)114;
long long int var_7 = 6381026770512239308LL;
short var_8 = (short)22500;
short var_10 = (short)12049;
short var_11 = (short)-17184;
int zero = 0;
short var_12 = (short)-17808;
short var_13 = (short)-31843;
short var_14 = (short)-16585;
long long int var_15 = -1795507424180937378LL;
unsigned long long int var_16 = 3406555234218364285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(_Bool var_0, unsigned long long int var_1, int var_2, long long int var_3, signed char var_6, long long int var_7, short var_8, short var_10, short var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_6, var_7, var_8, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
