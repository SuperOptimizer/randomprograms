#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 283069098U;
signed char var_6 = (signed char)-80;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 304468423U;
unsigned int var_17 = 2705364406U;
unsigned int var_18 = 1326258882U;
int var_19 = 639733138;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_5, signed char var_6, _Bool var_11, int zero);

int main() {
    init();
    test(var_5, var_6, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
