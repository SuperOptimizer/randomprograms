#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7492785689654772484LL;
short var_1 = (short)-26637;
unsigned long long int var_2 = 10799842579772830532ULL;
unsigned long long int var_6 = 12467019337000563674ULL;
long long int var_10 = 6142146158874499360LL;
int zero = 0;
signed char var_11 = (signed char)60;
short var_12 = (short)30361;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4226904984U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(long long int var_0, short var_1, unsigned long long int var_2, unsigned long long int var_6, long long int var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_6, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
