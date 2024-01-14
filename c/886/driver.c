#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4313962986680417295LL;
unsigned int var_10 = 1409961331U;
signed char var_18 = (signed char)40;
int zero = 0;
long long int var_19 = -2435460635091206381LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_1, unsigned int var_10, signed char var_18, int zero);

int main() {
    init();
    test(var_1, var_10, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
