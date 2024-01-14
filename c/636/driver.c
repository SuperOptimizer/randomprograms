#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-4;
long long int var_7 = 3343064199697753743LL;
short var_10 = (short)-23979;
int var_11 = -1622070707;
unsigned int var_12 = 1717003871U;
long long int var_15 = 731796712245970094LL;
signed char var_16 = (signed char)3;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2204949185U;
unsigned char var_21 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(signed char var_4, long long int var_7, short var_10, int var_11, unsigned int var_12, long long int var_15, signed char var_16, int zero);

int main() {
    init();
    test(var_4, var_7, var_10, var_11, var_12, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
