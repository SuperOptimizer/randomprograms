#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)45536;
int var_12 = 1140891433;
int zero = 0;
unsigned char var_15 = (unsigned char)252;
signed char var_16 = (signed char)100;
int var_17 = -2057226854;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(_Bool var_1, _Bool var_5, unsigned short var_9, int var_12, int zero);

int main() {
    init();
    test(var_1, var_5, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
