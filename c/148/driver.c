#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = -2169491423885071667LL;
unsigned int var_9 = 1148744271U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 17519313880624573991ULL;
int zero = 0;
signed char var_14 = (signed char)32;
unsigned char var_15 = (unsigned char)170;
short var_16 = (short)-31599;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8029447243730497165LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(_Bool var_0, long long int var_5, unsigned int var_9, _Bool var_10, unsigned long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_5, var_9, var_10, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
