#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2843408920931574727LL;
unsigned char var_8 = (unsigned char)156;
long long int var_13 = 446863422581700128LL;
int zero = 0;
unsigned int var_14 = 333072336U;
long long int var_15 = 1179397364955742463LL;
unsigned short var_16 = (unsigned short)50432;
unsigned int var_17 = 29935101U;
short var_18 = (short)11003;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(long long int var_2, unsigned char var_8, long long int var_13, int zero);

int main() {
    init();
    test(var_2, var_8, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
