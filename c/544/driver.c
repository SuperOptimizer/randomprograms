#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)18;
signed char var_3 = (signed char)76;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)159;
unsigned int var_7 = 957660865U;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)73;
int zero = 0;
unsigned char var_14 = (unsigned char)231;
unsigned int var_15 = 409780054U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_0, unsigned char var_1, signed char var_3, _Bool var_4, _Bool var_5, unsigned char var_6, unsigned int var_7, _Bool var_9, signed char var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
