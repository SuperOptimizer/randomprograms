#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6097881346805913638LL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)75;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_19 = (short)30265;
unsigned short var_20 = (unsigned short)62320;
short var_21 = (short)-11208;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_2, _Bool var_4, signed char var_6, _Bool var_9, int zero);

int main() {
    init();
    test(var_2, var_4, var_6, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
