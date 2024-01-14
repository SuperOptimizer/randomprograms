#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
signed char var_9 = (signed char)47;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)42832;
unsigned char var_16 = (unsigned char)110;
int zero = 0;
unsigned int var_19 = 3154296582U;
unsigned long long int var_20 = 13666843647052069364ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(signed char var_0, signed char var_9, _Bool var_14, unsigned short var_15, unsigned char var_16, int zero);

int main() {
    init();
    test(var_0, var_9, var_14, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
